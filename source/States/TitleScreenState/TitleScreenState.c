/*
 * Pong
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
#include <OverworldState.h>
#include <Singleton.h>
#include <VUEngine.h>

#include "TitleScreenState.h"

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
// CLASS' DECLARATIONS
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

extern StageROMSpec TitleScreenStageSpec;

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
// CLASS' PUBLIC METHODS
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

void TitleScreenState::enter(void* owner __attribute__((unused)))
{
	Base::enter(this, owner);

	// Load stage
	TitleScreenState::configureStage(this, (StageSpec*)&TitleScreenStageSpec, NULL);

	// Enable user input
	KeypadManager::enable();

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

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

void TitleScreenState::processUserInput(const UserInput* userInput)
{
	if(0 != (K_STA & userInput->pressedKey))
	{
		KeypadManager::disable();

		VUEngine::changeState(GameState::safeCast(OverworldState::getInstance()));
	}
}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
// CLASS' PRIVATE METHODS
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

void TitleScreenState::constructor()
{
	// Always explicitly call the base's constructor
	Base::constructor();
}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

void TitleScreenState::destructor()
{
	// Always explicitly call the base's destructor
	Base::destructor();
}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
