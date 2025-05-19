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

#include <Body.h>
#include <InGameTypes.h>
#include <RumbleEffects.h>
#include <RumbleManager.h>
#include <SoundManager.h>
#include <Sounds.h>

#include "Disk.h"

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
// CLASS' DECLARATIONS
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

mutation class Disk;

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
// CLASS' PUBLIC METHODS
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

bool Disk::collisionStarts(const CollisionInformation* collisionInformation)
{
	ASSERT(collisionInformation->otherCollider, "Actor::collisionStarts: otherColliders");

	bool returnValue = Base::collisionStarts(this, collisionInformation);

	if(NULL == collisionInformation->otherCollider)
	{
		return returnValue;
	}

	Entity collidingEntity = Collider::getOwner(collisionInformation->otherCollider);

	switch(Entity::getInGameType(collidingEntity))
	{
		case kTypePaddle:
		{
			Vector3D velocity = *Body::getVelocity(this->body);

			fixed_t yDisplacement = this->transformation.position.y - Entity::getPosition(collidingEntity)->y;

			velocity.y += yDisplacement;

			Body::setVelocity(this->body, &velocity);
		}
        // Intended fall through

		case kTypeWall:
		{
			SoundManager::playSound(&BounceSoundSpec,  NULL, kSoundPlaybackNormal, NULL);
			RumbleManager::startEffect(&BounceRumbleEffectSpec);
		}
		break;
	}

	return returnValue;
}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

void Disk::ready(bool recursive)
{
	Base::ready(this, recursive);

	int16 angle = Math::random(Math::randomSeed(), 64) - 32;

	Vector3D velocity = 
	{
		__FIXED_MULT(Body::getMaximumSpeed(this->body), __FIX7_9_TO_FIXED(__COS(angle))),
		__FIXED_MULT(Body::getMaximumSpeed(this->body), __FIX7_9_TO_FIXED(__SIN(angle))),
		0
	};

	if(50 > Math::random(Math::randomSeed(), 100))
	{
		velocity.x = -velocity.x;
	}

	Disk::setVelocity(this, &velocity, false);
}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
