////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////  THIS FILE WAS AUTO-GENERATED - DO NOT EDIT  ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
// INCLUDES
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

#include <Actor.h>
#include <BgmapSprite.h>
#include <InGameTypes.h>
#include <Texture.h>

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
// DECLARATIONS
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

extern uint32 BigMario_1ActorBigMarioTiles[];
extern uint16 BigMario_1ActorBigMarioMap[];

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
// ANIMATIONS
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

AnimationFunctionROMSpec BigMario_1Animation1AnimationSpec =
{
	// Number of frames that the texture supports of this animation function
	3,

	// Frames to play in animation
	{
		0, 1, 2, 
	},

	// Number of cycles a frame of animation is displayed
	20,

	// Whether to play it in loop or not
	true,

	// Animation's name
	"idle",
};

AnimationFunctionROMSpec BigMario_1Animation2AnimationSpec =
{
	// Number of frames that the texture supports of this animation function
	5,

	// Frames to play in animation
	{
		3, 4, 5, 6, 7, 
	},

	// Number of cycles a frame of animation is displayed
	8,

	// Whether to play it in loop or not
	true,

	// Animation's name
	"run",
};

AnimationFunctionROMSpec BigMario_1Animation3AnimationSpec =
{
	// Number of frames that the texture supports of this animation function
	2,

	// Frames to play in animation
	{
		8, 9, 
	},

	// Number of cycles a frame of animation is displayed
	8,

	// Whether to play it in loop or not
	true,

	// Animation's name
	"jump",
};

AnimationFunctionROMSpec BigMario_1Animation4AnimationSpec =
{
	// Number of frames that the texture supports of this animation function
	1,

	// Frames to play in animation
	{
		10, 
	},

	// Number of cycles a frame of animation is displayed
	8,

	// Whether to play it in loop or not
	true,

	// Animation's name
	"stop",
};

AnimationFunctionROMSpec BigMario_1Animation5AnimationSpec =
{
	// Number of frames that the texture supports of this animation function
	1,

	// Frames to play in animation
	{
		13, 
	},

	// Number of cycles a frame of animation is displayed
	8,

	// Whether to play it in loop or not
	true,

	// Animation's name
	"die",
};

AnimationFunctionROMSpec BigMario_1Animation6AnimationSpec =
{
	// Number of frames that the texture supports of this animation function
	3,

	// Frames to play in animation
	{
		14, 15, 16, 
	},

	// Number of cycles a frame of animation is displayed
	8,

	// Whether to play it in loop or not
	true,

	// Animation's name
	"poledown",
};

AnimationFunctionROMSpec* BigMario_1AnimationSpecs[] =
{
	(AnimationFunction*)&BigMario_1Animation1AnimationSpec,
	(AnimationFunction*)&BigMario_1Animation2AnimationSpec,
	(AnimationFunction*)&BigMario_1Animation3AnimationSpec,
	(AnimationFunction*)&BigMario_1Animation4AnimationSpec,
	(AnimationFunction*)&BigMario_1Animation5AnimationSpec,
	(AnimationFunction*)&BigMario_1Animation6AnimationSpec,
	NULL,
};

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
// SPRITES
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

CharSetROMSpec BigMario_1Sprite1CharsetSpec =
{
	// Number of CHARs in function of the number of frames to load at the same time
	30,

	// Whether it is shared or not
	true,

	// Whether the tiles are optimized or not
	false,

	// Tiles array
	BigMario_1ActorBigMarioTiles,

	// Frame offsets array
	NULL
};

TextureROMSpec BigMario_1Sprite1TextureSpec =
{
	// Pointer to the char spec that the texture uses
	(CharSetSpec*)&BigMario_1Sprite1CharsetSpec,

	// Pointer to the map array that defines how to use the tiles from the char set
	BigMario_1ActorBigMarioMap,

	// Horizontal size in tiles of the texture (max. 64)
	5,

	// Vertical size in tiles of the texture (max. 64)
	6,

	// padding for affine/hbias transformations
	{0, 0},

	// Number of frames that the texture supports
	1,

	// Palette index to use by the graphical data (0 - 3)
	1,

	// Flag to recycle the texture with a different map
	false,

	// Flag to vertically flip the image
	false,

	// Flag to horizontally flip the image
	false
};

BgmapSpriteROMSpec BigMario_1Sprite1SpriteSpec =
{
	{
		// VisualComponent
		{
			// Component
			{
				// Allocator
				__TYPE(BgmapSprite),

				// Component type
				kSpriteComponent
			},

			// Array of animation functions
			(const AnimationFunction**)BigMario_1AnimationSpecs
		},

		// Spec for the texture to display
		(TextureSpec*)&BigMario_1Sprite1TextureSpec,

		// Transparency mode (__TRANSPARENCY_NONE, __TRANSPARENCY_EVEN or __TRANSPARENCY_ODD)
		__TRANSPARENCY_NONE,

		// Displacement added to the sprite's position
		{0, 0, 0, 0}
	},

	// Flag to indicate in which display to show the texture (__WORLD_ON, __WORLD_LON or __WORLD_RON)
	__WORLD_ON,

	// The display mode (__WORLD_BGMAP, __WORLD_AFFINE or __WORLD_HBIAS)
	__WORLD_BGMAP,
	
	// Pointer to affine/hbias manipulation function
	NULL
};

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
// ACTOR
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

ComponentSpec* const BigMario_1ComponentSpecs[] = 
{
	(ComponentSpec*)&BigMario_1Sprite1SpriteSpec,
	NULL
};

ActorROMSpec BigMario_1ActorSpec =
{
	// Class allocator
	__TYPE(Actor),

	// Component specs
	(ComponentSpec**)BigMario_1ComponentSpecs,

	// Children specs
	NULL,

	// Extra info
	NULL,

	// Size
	// If 0, it is computed from the visual components if any
	{0, 0, 0},

	// Actor's in-game type
	kTypeNone,

	// Animation to play automatically
	"idle"
	
};
