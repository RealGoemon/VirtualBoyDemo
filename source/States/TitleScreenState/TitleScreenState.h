/*
 * Pong
 *
 * © VUEngine Studio User
 *
 * For the full copyright and license information, please view the LICENSE file
 * that was distributed with this source code.
 */

#ifndef TITLE_SCREEN_STATE_H_
#define TITLE_SCREEN_STATE_H_

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
// INCLUDES
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

#include <GameState.h>

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
// CLASS' DECLARATION
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

///
/// Class TitleScreenState
///
/// Inherits from GameState
///
/// Implements an empty game state intended to be the starting for a new, awesome game.
singleton class TitleScreenState : GameState
{
	/// @protectedsection

	/// @publicsection

	/// Method to GameSaveDataManager the singleton instance
	/// @return AnimationSchemesState singleton
	static TitleScreenState getInstance();

	/// Prepares the object to enter this state.
	/// @param owner: Object that is entering in this state
	override void enter(void* owner);

	/// Process the provided user input.
	/// @param userInput: Struct with the current user input information
	override void processUserInput(const UserInput* userInput);
}

#endif
