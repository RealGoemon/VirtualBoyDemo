/*
 * Nintendo Virtual Boy Demo
 *
 * For the full copyright and license information, please view the LICENSE file
 * that was distributed with this source code.
 */

#ifndef MARIO_H_
#define MARIO_H_

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
// INCLUDES
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

#include <Actor.h>

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
// CLASS' DATA
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

/// A Mario Spec
/// @memberof Mario
typedef struct MarioSpec
{
	/// Actor spec
	ActorSpec actorSpec;

} MarioSpec;

/// A Mario spec that is stored in ROM
/// @memberof Mario
typedef const MarioSpec MarioROMSpec;

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
// CLASS' DECLARATION
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

/// Class Mario
///
/// Inherits from Actor
///
/// Implements a controllable actor.
class Mario : Actor
{
	/// @param marioSpec: Specification that determines how to configure the paddle
	/// @param internalId: ID to keep track internally of the new instance
	/// @param name: Name to assign to the new instance
	void constructor(const MarioSpec* marioSpec, int16 internalId, const char* const name);

	/// Process an event that the instance is listen for.
	/// @param eventFirer: ListenerObject that signals the event
	/// @param eventCode: Code of the firing event
	/// @return False if the listener has to be removed; true to keep it
	override bool onEvent(ListenerObject eventFirer, uint16 eventCode);

	/// Default interger message handler for propagateMessage
	/// @param message: Propagated integer message
	/// @return True if the propagation must stop; false if the propagation must reach other containers
	override bool handlePropagatedMessage(int32 message);

	/// Make the animated actor ready to starts operating once it has been completely intialized.
	/// @param recursive: If true, the ready call is propagated to its children, grand children, etc.
	override void ready(bool recursive);

	/// Make Mario idle.
	void idle();

	/// Make Mario walk.
	void walk();

	/// Make Mario stop.
	void stop();

	/// Make Mario to die.
	void die();

	/// Resucitate Mario.
	void revive();

	/// Callback for die animation when completed.
	/// @param eventFirer: Animation controller
	bool onDieAnimationComplete(ListenerObject eventFirer);
}

#endif
