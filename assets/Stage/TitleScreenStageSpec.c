/*
 * TitleScreen
 *
 * © VUEngine Studio User
 *
 * For the full copyright and license information, please view the LICENSE file
 * that was distributed with this source code.
 */

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
// INCLUDES
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

#include <CharSet.h>
#include <Fonts.h>
#include <Printer.h>
#include <Stage.h>
#include <Sound.h>

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
// DECLARATIONS
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

extern ActorSpec LowPowerIndicatorActorSpec;
extern ActorSpec LogoActorSpec;

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
// ACTOR LISTS
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

PositionedActorROMSpec TitleScreenStageActors[] =
{
	
	{&LogoActorSpec, 				{0, 0, 0}, {0, 0, 0}, {1, 1, 1}, 0, NULL, NULL, NULL, false},
	{&LowPowerIndicatorActorSpec, 	{-192 + 8, 112 - 4, 0}, {0, 0, 0}, {1, 1, 1}, 0, NULL, NULL, NULL, false},

	{NULL, {0, 0, 0}, {0, 0, 0}, {1, 1, 1}, 0, NULL, NULL, NULL, false},
};

PositionedActorROMSpec TitleScreenStageUiActors[] =
{
	{NULL, {0, 0, 0}, {0, 0, 0}, {1, 1, 1}, 0, NULL, NULL, NULL, false},
};

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
// ASSETS LISTS
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

FontROMSpec* const TitleScreenStageFonts[] =
{
	NULL
};

SoundROMSpec* TitleScreenStageSoundSpecs[] =
{
	NULL
};

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
// STAGE DEFINITION
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

StageROMSpec TitleScreenStageSpec =
{
	// Class allocator
	__TYPE(Stage),

	// Timer config
	{
		// Timer's resolution (__TIMER_100US or __TIMER_20US)
		__TIMER_100US,
		// Target elapsed time between timer interrupts
		10,
		// Timer interrupt's target time units
		kMS
	},

	// Sound config
	{
		6000
	},

	// General stage's attributes
	{
		// Stage's size in pixels
		{
			// x
			__SCREEN_WIDTH,
			// y
			__SCREEN_HEIGHT,
			// z
			__SCREEN_DEPTH,
		},

		// Camera's initial position inside the stage
		{
			// x
			0,
			// y
			0,
			// z
			0,
			// p
			0,
		},

		// Camera's frustum
		{
			// x0
			0,
			// y0
			0,
			// z0
			-10,
			// x1
			__SCREEN_WIDTH,
			// y1
			__SCREEN_HEIGHT,
			// z1
			__SCREEN_WIDTH * 5,
		}
	},

	// Streaming
	{
		// Padding to be added to camera's frustum when checking if a actor spec
		// describes an actor that is within the camera's range
		0,
		// Padding to be added to camera's frustum when checking if a actor is
		// out of the camera's range
		16,
		// Amount of actor descriptions to check for streaming in actors
		24,
		// If true, actor instantiation is done over time
		false,
	},

	// Rendering
	{
		// Maximum number of texture's rows to write each time the texture writing is active
		12,

		// Maximum number of rows to compute on each call to the affine functions
		16,

		// Color configuration
		{
			// Background color
			__COLOR_BLACK,

			// Brightness
			// These values times the repeat values specified in the column table (max. 16) make the final
			// brightness values on the respective regions of the screen. maximum brightness is 128.
			{
				// Dark red
				8,
				// Medium red
				__BRIGHTNESS_MEDIUM_RED,
				// Bright red
				__BRIGHTNESS_BRIGHT_RED,
			},

			// Brightness repeat
			(BrightnessRepeatSpec*)NULL,
		},

		// Palettes' configuration
		{
			{
				// Bgmap palette 0
				__BGMAP_PALETTE_0,
				// Bgmap palette 1
				__BGMAP_PALETTE_1,
				// Bgmap palette 2
				__BGMAP_PALETTE_2,
				// Bgmap palette 3
				__BGMAP_PALETTE_3,
			},
			{
				// Object palette 0
				__OBJECT_PALETTE_0,
				// Object palette 1
				__OBJECT_PALETTE_1,
				// Object palette 2
				__OBJECT_PALETTE_2,
				// Object palette 3
				__OBJECT_PALETTE_3,
			},
		},

		// Bgmap segments configuration
		// Number of BGMAP segments reserved for the param
		1,

		// Object segments' sizes (__spt0 to __spt3, up to 1024 in total)
		// Can impact performance, make sure to configure only as large as maximally needed
		{
			// __spt0
			0,
			// __spt1
			0,
			// __spt2
			0,
			// __spt3
			0,
		},

		// Object segments' z coordinates (__spt0 to __spt3)
		// Note that each spt's z coordinate much be larger than or equal to the previous one's,
		// since the vip renders obj worlds in reverse order (__spt3 to __spt0)
		{
			// __spt0
			0,
			// __spt1
			0,
			// __spt2
			0,
			// __spt3
			0,
		},

		// Struct defining the optical settings for the stage
		{
			// Maximum view distance's power into the horizon
			__MAXIMUM_X_VIEW_DISTANCE, __MAXIMUM_Y_VIEW_DISTANCE,
			// Distance of the eyes to the screen
			__CAMERA_NEAR_PLANE,
			// Distance from left to right eye (depth sensation)
			__BASE_FACTOR,
			// Horizontal view point center
			__HORIZONTAL_VIEW_POINT_CENTER,
			// Vertical view point center
			__VERTICAL_VIEW_POINT_CENTER,
			// Scaling factor
			__SCALING_MODIFIER_FACTOR,
		},
	},

	// Physical world's properties
	{
		// Gravity
		{
			__I_TO_FIX10_6(0),
			__F_TO_FIX10_6(0),
			__I_TO_FIX10_6(0),
		},

		// Friction coefficient
		__F_TO_FIX10_6(0.1f),
	},

	// Assets
	{
		// Fonts to preload
		(FontSpec**)TitleScreenStageFonts,

		// CharSets to preload
		(CharSetSpec**)NULL,

		// Textures to preload
		(TextureSpec**)NULL,

		// Sounds to load
		(SoundSpec**)TitleScreenStageSoundSpecs,
	},

	// Actors
	{
		// UI configuration
		{
			(PositionedActor*)TitleScreenStageUiActors,
			__TYPE(UIContainer),
		},

		// Stage's children actors
		(PositionedActor*)TitleScreenStageActors,
	},

	// Post processing effects
	(PostProcessingEffect*)NULL,
};
