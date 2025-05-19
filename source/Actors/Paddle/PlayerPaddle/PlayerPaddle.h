/*
 * VUEngine Showcase
 *
 * © Jorge Eremiev <jorgech3@gmail.com> and Christian Radke <c.radke@posteo.de>
 *
 * For the full copyright and license information, please view the LICENSE file
 * that was distributed with this source code.
 */

#ifndef PLAYER_PADDLE_H_
#define PLAYER_PADDLE_H_

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
// INCLUDES
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

#include <Actor.h>

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
// CLASS' DECLARATION
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

/// Class PlayerPaddle
///
/// Extension of Actor
///
/// Implements a Pong paddle controlled by the player.
mutation class PlayerPaddle : Actor
{
	/// Default interger message handler for propagateMessage
	/// @param message: Propagated integer message
	/// @return True if the propagation must stop; false if the propagation must reach other containers
	override bool handlePropagatedMessage(int32 message);
}

#endif
