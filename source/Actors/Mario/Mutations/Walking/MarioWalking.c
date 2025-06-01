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

#include "MarioWalking.h"

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
// CLASS' DECLARATIONS
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

mutation class MarioWalking;

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
// CLASS' PUBLIC METHODS
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

bool MarioWalking::collisionStarts(const CollisionInformation* collisionInformation)
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

			MarioWalking::idle(this);

			/*
			 * The Actor class can resolve collisions against solid objects by itself
			 */
			return Base::collisionStarts(this, collisionInformation);
			break;

/*
		case kTypeEnemy:

			// Disable collision checks so this doesn't fire multiple times.
			// They are enabled by the Actor when starting to move.
			MarioWalking::checkCollisions(this, false);

			MarioWalking::die(this);
			return true;
			break;
*/
	}

	return false;
}

bool MarioWalking::handleMessage(Telegram telegram)
{
	Vector3D force = Vector3D::zero();

	switch(Telegram::getMessage(telegram))
	{
		case kMessageOverworldReleasedLeft:
		case kMessageOverworldReleasedRight:

			MarioWalking::stop(this);
			return true;
			break;

		case kMessageOverworldHoldLeft:

			force.x = __I_TO_FIXED(-48);
			break;

		case kMessageOverworldHoldRight:

			force.x = __I_TO_FIXED(48);
			break;
	}

	if(0 == force.x)
	{
		return false;
	}

	MarioWalking::applyForce(this, &force, true);

	return Base::handleMessage(this, telegram);
}

void MarioWalking::update()
{
	Camera camera = Camera::getInstance();
	Vector3D cameraPosition = Camera::getPosition(camera);
	const Vector3D* marioPosition = MarioWalking::getPosition(this);
	if (marioPosition->x > 0) {
		cameraPosition.x = marioPosition->x;
		Camera::setPosition(camera, cameraPosition, false);
	}
}
