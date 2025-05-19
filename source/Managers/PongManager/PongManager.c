/*
 * VUEngine Showcase
 *
 * © Jorge Eremiev <jorgech3@gmail.com> and Christian Radke <c.radke@posteo.de>
 *
 * For the full copyright and license information, please view the LICENSE file
 * that was distributed with this source code.
 */

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
// INCLUDES
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

#include <string.h>

#include <GameEvents.h>
#include <Printer.h>
#include <RumbleEffects.h>
#include <RumbleManager.h>
#include <SoundManager.h>
#include <Sounds.h>

#include "PongManager.h"

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
// CLASS' PUBLIC METHODS
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

void PongManager::constructor(Stage stage)
{
	// Always explicitly call the base's constructor
	Base::constructor();

	this->leftScore = 0;
	this->rightScore = 0;

	PongManager::printScore(this);

	if(!isDeleted(stage))
	{
		Actor disk = Actor::safeCast(Stage::getChildByName(stage, (char*)DISK_NAME, false));

		if(!isDeleted(disk))
		{
			Actor::addEventListener(disk, ListenerObject::safeCast(this), kEventActorDeleted);
		}

		Stage::addActorLoadingListener(stage, ListenerObject::safeCast(this));
	}

	Printer::addEventListener(Printer::getInstance(), ListenerObject::safeCast(this), kEventFontRewritten);
}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

void PongManager::destructor()
{
	// Always explicitly call the base's destructor
	Base::destructor();
}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

bool PongManager::onEvent(ListenerObject eventFirer, uint16 eventCode)
{
	switch(eventCode)
	{
		case kEventFontRewritten:
		{
			PongManager::printScore(this);

			return true;
		}

		case kEventActorDeleted:
		{
			if(0 == strcmp(DISK_NAME, Actor::getName(eventFirer)))
			{
				SoundManager::playSound(&PointSoundSpec,  NULL, kSoundPlaybackNormal, NULL);
				RumbleManager::startEffect(&PointRumbleEffectSpec);

				if(0 < Actor::getPosition(eventFirer)->x)
				{
					this->leftScore++;
				}
				else
				{
					this->rightScore++;
				}

				PongManager::printScore(this);
			}

			return false;
		}

		case kEventActorCreated:
		{
			if(0 == strcmp(DISK_NAME, Actor::getName(eventFirer)))
			{
				Actor::addEventListener(eventFirer, ListenerObject::safeCast(this), kEventActorDeleted);
			}

			return true;
		}
	}

	return Base::onEvent(this, eventFirer, eventCode);
}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
// CLASS' PRIVATE METHODS
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

void PongManager::printScore()
{
	Printer::int32(this->leftScore, 24 - 3, 0, NULL);
	Printer::int32(this->rightScore, 24 + 3, 0, NULL);
}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
