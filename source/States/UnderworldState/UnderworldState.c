/*
 * Underworld
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
#include <TitleScreenState.h>
#include <Singleton.h>
#include <VUEngine.h>

#include "UnderworldState.h"

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
// CLASS' DECLARATIONS
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

extern StageROMSpec UnderworldStageSpec;

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
// CLASS' PUBLIC METHODS
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

void UnderworldState::enter(void* owner __attribute__((unused)))
{
	Base::enter(this, owner);

	// Load stage
	UnderworldState::configureStage(this, (StageSpec*)&UnderworldStageSpec, NULL);

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

void UnderworldState::processUserInput(const UserInput* userInput)
{
	if(0 != (K_STA & userInput->pressedKey))
	{
		KeypadManager::disable();

		VUEngine::changeState(GameState::safeCast(TitleScreenState::getInstance()));
	}
}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
// CLASS' PRIVATE METHODS
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

void UnderworldState::constructor()
{
	// Always explicitly call the base's constructor
	Base::constructor();
}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

void UnderworldState::destructor()
{
	// Always explicitly call the base's destructor
	Base::destructor();
}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
