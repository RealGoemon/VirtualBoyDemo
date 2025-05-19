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

extern uint32 FlowerActorflower_rTiles[];
extern uint16 FlowerActorflower_rMap[];

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
// ANIMATIONS
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

AnimationFunctionROMSpec FlowerAnimation1AnimationSpec =
{
	// Number of frames that the texture supports of this animation function
	2,

	// Frames to play in animation
	{
		1, 2, 
	},

	// Number of cycles a frame of animation is displayed
	8,

	// Whether to play it in loop or not
	true,

	// Animation's name
	"Animation",
};

AnimationFunctionROMSpec* FlowerAnimationSpecs[] =
{
	(AnimationFunction*)&FlowerAnimation1AnimationSpec,
	NULL,
};

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
// SPRITES
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

CharSetROMSpec FlowerSprite1CharsetSpec =
{
	// Number of CHARs in function of the number of frames to load at the same time
	9,

	// Whether it is shared or not
	true,

	// Whether the tiles are optimized or not
	false,

	// Tiles array
	FlowerActorflower_rTiles,

	// Frame offsets array
	NULL
};

TextureROMSpec FlowerSprite1TextureSpec =
{
	// Pointer to the char spec that the texture uses
	(CharSetSpec*)&FlowerSprite1CharsetSpec,

	// Pointer to the map array that defines how to use the tiles from the char set
	FlowerActorflower_rMap,

	// Horizontal size in tiles of the texture (max. 64)
	3,

	// Vertical size in tiles of the texture (max. 64)
	3,

	// padding for affine/hbias transformations
	{0, 0},

	// Number of frames that the texture supports
	1,

	// Palette index to use by the graphical data (0 - 3)
	0,

	// Flag to recycle the texture with a different map
	false,

	// Flag to vertically flip the image
	false,

	// Flag to horizontally flip the image
	false
};

BgmapSpriteROMSpec FlowerSprite1SpriteSpec =
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
			(const AnimationFunction**)FlowerAnimationSpecs
		},

		// Spec for the texture to display
		(TextureSpec*)&FlowerSprite1TextureSpec,

		// Transparency mode (__TRANSPARENCY_NONE, __TRANSPARENCY_EVEN or __TRANSPARENCY_ODD)
		__TRANSPARENCY_NONE,

		// Displacement added to the sprite's position
		{0, 0, 1, 5}
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

ComponentSpec* const FlowerComponentSpecs[] = 
{
	(ComponentSpec*)&FlowerSprite1SpriteSpec,
	NULL
};

ActorROMSpec FlowerActorSpec =
{
	// Class allocator
	__TYPE(Actor),

	// Component specs
	(ComponentSpec**)FlowerComponentSpecs,

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
	"Animation"
	
};
