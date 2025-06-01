/*
 * Nintendo Virtual Boy Demo
 *
 * For the full copyright and license information, please view the LICENSE file
 * that was distributed with this source code.
 */

#ifndef MARIO_STOPPING_H_
#define MARIO_STOPPING_H_

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
// INCLUDES
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

#include <Mario.h>

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
// CLASS' DECLARATION
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

/// Class MarioWalking
///
/// Inherits from Mario
///
/// Controls the logic for Mario when he walks.
mutation class MarioStopping : Mario
{
	/// Process a newly detected collision by one of the component colliders.
	/// @param collisionInformation: Information struct about the collision to resolve
	/// @return True if the collider must keep track of the collision to detect if it persists and when it
	/// ends; false otherwise
	override bool collisionStarts(const CollisionInformation* collisionInformation);

	/// Receive and process a Telegram.
	/// @param telegram: Received telegram to process
	/// @return True if the telegram was processed
	override bool handleMessage(Telegram telegram);

	/// Update this instance's logic.
	override void update();
}

#endif
