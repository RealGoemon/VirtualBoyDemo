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
#include <Messages.h>
#include <Printer.h>
#include <Telegram.h>

#include "MarioStopping.h"

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
// CLASS' DECLARATIONS
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

mutation class MarioStopping;

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
// CLASS' PUBLIC METHODS
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

bool MarioStopping::collisionStarts(const CollisionInformation* collisionInformation)
{
	if(NULL == collisionInformation || isDeleted(collisionInformation->otherCollider))
	{
		return false;
	}

	Collider otherCollider = collisionInformation->otherCollider;
	Entity collidingEntity = Collider::getOwner(otherCollider);

	if(isDeleted(collidingEntity))
	{
		return false;
	}

	uint32 collidingEntityInGameType = Entity::getInGameType(collidingEntity);

	switch(collidingEntityInGameType)
	{
		case kTypeSolidObject:

			MarioStopping::idle(this);

			/*
			 * The Actor class can resolve collisions against solid objects by itself
			 */
			return Base::collisionStarts(this, collisionInformation);
			break;

/*
		case kTypeEnemy:

			// Disable collision checks so this doesn't fire multiple times.
			// They are enabled by the Actor when starting to move.
			MarioStopping::checkCollisions(this, false);

			MarioStopping::die(this);
			return true;
			break;
*/
	}

	return false;
}

bool MarioStopping::handleMessage(Telegram telegram)
{
	switch(Telegram::getMessage(telegram))
	{
		case kMessageOverworldHoldLeft:
		case kMessageOverworldHoldRight:

			MarioStopping::walk(this);
			return true;
			break;
	}

	return Base::handleMessage(this, telegram);
}

void MarioStopping::update()
{
	// if(!MarioStopping::isMoving(this))
	// {
		MarioStopping::idle(this);
	// }
}
