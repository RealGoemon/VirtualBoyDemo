/*
 * Overworld Level
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
extern ActorSpec Torii_1ActorSpec;
extern ActorSpec WarioActorSpec;
extern ActorSpec Floor_1ActorSpec;
extern ActorSpec Bridge_1ActorSpec;
extern ActorSpec MBlock_1ActorSpec;
extern ActorSpec GoombaActorSpec;
extern ActorSpec KoopaActorSpec;
extern ActorSpec PipeActorSpec;
extern ActorSpec MidFloor_1ActorSpec;
extern ActorSpec Pole_1ActorSpec;
extern ActorSpec Mountains1ActorSpec;
extern ActorSpec Hill1ActorSpec;
extern ActorSpec FlowerActorSpec;
extern ActorSpec SmallMarioActorSpec;
extern ActorSpec BigMario_1ActorSpec;
extern ActorSpec MarioBridgeDownActorSpec;
extern ActorSpec MarioBridgeUpActorSpec;
extern ActorSpec StangeActorSpec;
extern ActorSpec WimpelActorSpec;
extern ActorSpec CastleActorSpec;
extern ActorSpec StarFXActorSpec;
extern ActorSpec BlockhitActorSpec;

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
// ACTOR LISTS
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

PositionedActorROMSpec OverworldStageActors[] =
{
	
	{&Mountains1ActorSpec, 			{0, 0, 962}, {0, 0, 0}, {1, 1, 1}, 0, NULL, NULL, NULL, false},
	{&Hill1ActorSpec, 				{-572, 164, 950}, {0, 0, 0}, {1, 1, 1}, 0, NULL, NULL, NULL, false},
		
    {&Pole_1ActorSpec, 				{-173, 64, 0}, {0, 0, 0}, {1, 1, 1}, 0, NULL, NULL, NULL, false},
	{&FlowerActorSpec, 				{-108, 0, 0}, {0, 0, 0}, {1, 1, 1}, 0, NULL, NULL, NULL, false},
	{&MidFloor_1ActorSpec, 			{-172, 76, 0}, {0, 0, 0}, {1, 1, 1}, 0, NULL, NULL, NULL, false},
		
	
	{&MBlock_1ActorSpec, 			{16, 24, 0}, {0, 0, 0}, {1, 1, 1}, 0, NULL, NULL, NULL, false},
	{&BlockhitActorSpec, 			{28, 24, 0}, {0, 0, 0}, {1, 1, 1}, 0, NULL, NULL, NULL, false},
	{&StarFXActorSpec, 				{28, 12, 0}, {0, 0, 0}, {1, 1, 1}, 0, NULL, NULL, NULL, false},
	{&Bridge_1ActorSpec, 			{264, 80, 0}, {0, 0, 0}, {1, 1, 1}, 0, NULL, NULL, NULL, false},
	{&WarioActorSpec, 				{350, -32, 0}, {0, 0, 0}, {1, 1, 1}, 0, NULL, NULL, NULL, false},
	{&Torii_1ActorSpec, 			{496, 12, 0}, {0, 0, 0}, {1, 1, 1}, 0, NULL, NULL, NULL, false},
	{&PipeActorSpec, 				{628, 64, 0}, {0, 0, 0}, {1, 1, 1}, 0, NULL, NULL, NULL, false},
	{&GoombaActorSpec, 				{872, 57, 0}, {0, 0, 0}, {1, 1, 1}, 0, NULL, NULL, NULL, false},
	
	
	{&MarioBridgeDownActorSpec, 	{500, 54, 0}, {0, 0, 0}, {1, 1, 1}, 0, NULL, NULL, NULL, false},
	{&SmallMarioActorSpec, 			{808, 44, 0}, {0, 0, 0}, {1, 1, 1}, 0, NULL, NULL, NULL, false},
	{&KoopaActorSpec, 				{790, 80, 0}, {0, 0, 0}, {1, 1, 1}, 0, NULL, NULL, NULL, false},
	{&BigMario_1ActorSpec, 			{-168, 56, 0}, {0, 0, 0}, {1, 1, 1}, 0, NULL, NULL, NULL, false},
	{&Floor_1ActorSpec, 			{-192, 112, 0}, {0, 0, 0}, {1, 1, 1}, 0, NULL, NULL, NULL, false},
	{&StangeActorSpec, 				{1194, 80, 0}, {0, 0, 0}, {1, 1, 1}, 0, NULL, NULL, NULL, false},
	{&WimpelActorSpec, 				{1166, -51, 0}, {0, 0, 0}, {1, 1, 1}, 0, NULL, NULL, NULL, false},
	{&CastleActorSpec, 				{1223, 80, 0}, {0, 0, 0}, {1, 1, 1}, 0, NULL, NULL, NULL, false},
	{&LowPowerIndicatorActorSpec, 	{-384 + 8, 112 - 4, 0}, {0, 0, 0}, {1, 1, 1}, 0, NULL, NULL, NULL, false},

	{NULL, {0, 0, 0}, {0, 0, 0}, {1, 1, 1}, 0, NULL, NULL, NULL, false},
};

PositionedActorROMSpec OverworldStageUiActors[] =
{
	{NULL, {0, 0, 0}, {0, 0, 0}, {1, 1, 1}, 0, NULL, NULL, NULL, false},
};

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
// ASSETS LISTS
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

FontROMSpec* const OverworldStageFonts[] =
{
	NULL
};

SoundROMSpec* OverworldStageSoundSpecs[] =
{
	NULL
};

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
// STAGE DEFINITION
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

StageROMSpec OverworldStageSpec =
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
			1560,
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
		(FontSpec**)OverworldStageFonts,

		// CharSets to preload
		(CharSetSpec**)NULL,

		// Textures to preload
		(TextureSpec**)NULL,

		// Sounds to load
		(SoundSpec**)OverworldStageSoundSpecs,
	},

	// Actors
	{
		// UI configuration
		{
			(PositionedActor*)OverworldStageUiActors,
			__TYPE(UIContainer),
		},

		// Stage's children actors
		(PositionedActor*)OverworldStageActors,
	},

	// Post processing effects
	(PostProcessingEffect*)NULL,
};