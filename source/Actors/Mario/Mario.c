/*
 * Nintendo Virtual Boy Demo
 *
 * For the full copyright and license information, please view the LICENSE file
 * that was distributed with this source code.
 */

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
// INCLUDES
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

#include <Body.h>
#include <InGameTypes.h>
#include <MessageDispatcher.h>
#include <Messages.h>
#include <MarioDead.h>
#include <MarioIdle.h>
#include <MarioStopping.h>
#include <MarioWalking.h>
#include <RumbleEffects.h>
#include <RumbleManager.h>
#include <Sounds.h>
#include <StateMachine.h>
#include <Telegram.h>

#include "Mario.h"

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
// CLASS' PUBLIC METHODS
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

void Mario::constructor(const MarioSpec* marioSpec, int16 internalId, const char* const name)
{
	Base::constructor((ActorSpec*)&marioSpec->actorSpec, internalId, name);
}

void Mario::destructor()
{
	Base::destructor();
}

bool Mario::onEvent(ListenerObject eventFirer, uint16 eventCode)
{
	switch(eventCode)
	{
		case kEventAnimationCompleted:
		{
			if(Mario::isPlayingAnimation(this, "Die"))
			{
				Mario::sendMessageToSelf(this, kMessageMarioRevive, 1000, 0);

				return false;
			}

			break;
		}
	}

	return Base::onEvent(this, eventFirer, eventCode);
}

/*
 * Returning true stops the propagation
 */
bool Mario::handlePropagatedMessage(int32 message)
{
	switch(message)
	{
		case kMessageOverworldHoldLeft:
		case kMessageOverworldHoldRight:
		case kMessageOverworldReleasedLeft:
		case kMessageOverworldReleasedRight:

			Mario::sendMessageToSelf(this, message, 0, 0);
			return true;
			break;
	}

	return false;
}

void Mario::ready(bool recursive)
{
	Base::ready(this, recursive);

	Mario::idle(this);
}

void Mario::idle()
{
	Mario::playAnimation(this, "Idle");

	Mario::mutateTo(this, MarioIdle::getClass());
}

void Mario::walk()
{
	Mario::playAnimation(this, "Move");

	/*
	 * Disable collision checks so this doesn't fire multiple times.
	 * They are enabled by the Actor when starting to move.
	 */
	MarioWalking::checkCollisions(this, true);

	Mario::mutateTo(this, MarioWalking::getClass());
}

void Mario::stop()
{
	Mario::playAnimation(this, "Slide");

	Mario::mutateTo(this, MarioStopping::getClass());
}

void Mario::die()
{
	Mario::stopAllMovement(this);

	Mario::playAnimation(this, "Die");

	Mario::mutateTo(this, MarioDead::getClass());
}

void Mario::revive()
{
	Vector3D position = Vector3D::getFromPixelVector((PixelVector){0, 64, 0, 0});
	Mario::setLocalPosition(this, &position);

	Rotation rotation = Rotation::zero();
	Mario::setLocalRotation(this, &rotation);

	Mario::idle(this);
}
