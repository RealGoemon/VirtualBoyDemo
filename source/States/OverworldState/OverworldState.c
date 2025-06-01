/*
 * Overworld
 *
 * © VUEngine Studio User
 *
 * For the full copyright and license information, please view the LICENSE file
 * that was distributed with this source code.
 */

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
// INCLUDES
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

#include <string.h>

#include <Camera.h>
#include <CameraEffectManager.h>
#include <KeypadManager.h>
#include <Messages.h>
#include <UnderworldState.h>
#include <Singleton.h>
#include <VUEngine.h>

#include "OverworldState.h"

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
// CLASS' DECLARATIONS
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

extern StageROMSpec OverworldStageSpec;

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
// CLASS' PUBLIC METHODS
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

void OverworldState::enter(void* owner __attribute__((unused)))
{
	Base::enter(this, owner);

	// Load stage
	OverworldState::configureStage(this, (StageSpec*)&OverworldStageSpec, NULL);

	// Enable user input
	KeypadManager::enable();

	// Start animations, physics and messaging clocks
	OverworldState::startClocks(this);

	// Start fade in effect
	Camera::startEffect(Camera::getInstance(), kHide);
	Camera::startEffect
	(
		Camera::getInstance(),
		kFadeTo,	   // effect type
		0,			   // initial delay (in ms)
		NULL,		   // target brightness
		__FADE_DELAY,  // delay between fading steps (in ms)
		NULL		   // callback scope
	);
}

void OverworldState::processUserInput(const UserInput* userInput)
{
	int32 message = kMessageOverworldNoMessage;

	if(K_STA & userInput->pressedKey)
	{
		KeypadManager::disable();

		VUEngine::changeState(GameState::safeCast(UnderworldState::getInstance()));
	} 
	else if(K_LL & userInput->holdKey)
	{
		message = kMessageOverworldHoldLeft;
	}
	else if(K_LL & userInput->releasedKey)
	{
		message = kMessageOverworldReleasedLeft;
	}
	else if(K_LR & userInput->holdKey)
	{
		message = kMessageOverworldHoldRight;
	}
	else if(K_LR & userInput->releasedKey)
	{
		message = kMessageOverworldReleasedRight;
	}

	if(kMessageOverworldNoMessage != message)
	{
		/*
		 * Passing input to actors in this way, while elegant, is not very performant. Most likely, a way to get a
		 * pointer to the actor that the user controls and calling an specific method that its class implements would be
		 * way faster.
		 */
		OverworldState::propagateMessage(this, message);
	}

	Base::processUserInput(this, userInput);
}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
// CLASS' PRIVATE METHODS
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

void OverworldState::constructor()
{
	// Always explicitly call the base's constructor
	Base::constructor();
}

void OverworldState::destructor()
{
	// Always explicitly call the base's destructor
	Base::destructor();
}
