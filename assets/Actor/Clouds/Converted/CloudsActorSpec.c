////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////  THIS FILE WAS AUTO-GENERATED - DO NOT EDIT  ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
// INCLUDES
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

#include <Actor.h>
#include <InGameTypes.h>
#include <MBgmapSprite.h>
#include <Texture.h>

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
// DECLARATIONS
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

extern uint32 CloudsActorCloudsTiles[];
extern uint16 CloudsActorCloudsMap[];

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
// SPRITES
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

CharSetROMSpec CloudsSprite1CharsetSpec =
{
	// Number of CHARs in function of the number of frames to load at the same time
	7,

	// Whether it is shared or not
	true,

	// Whether the tiles are optimized or not
	true,

	// Tiles array
	CloudsActorCloudsTiles,

	// Frame offsets array
	NULL
};

TextureROMSpec CloudsSprite1TextureSpec =
{
	// Pointer to the char spec that the texture uses
	(CharSetSpec*)&CloudsSprite1CharsetSpec,

	// Pointer to the map array that defines how to use the tiles from the char set
	CloudsActorCloudsMap,

	// Horizontal size in tiles of the texture (max. 64)
	64,

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

TextureROMSpec* const CloudsSprite1TextureSpecs[] =
{
	(TextureSpec*)&CloudsSprite1TextureSpec,
	NULL
};

MBgmapSpriteROMSpec CloudsSprite1SpriteSpec =
{
	{
	{
		// VisualComponent
		{
			// Component
			{
				// Allocator
				__TYPE(MBgmapSprite),

				// Component type
				kSpriteComponent
			},

			// Array of animation functions
			(const AnimationFunction**)NULL
		},

		// Spec for the texture to display
		NULL,

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
	},

	// Texture to use with the sprite
	(TextureSpec**)CloudsSprite1TextureSpecs,

	// SCX/SCY value
	__WORLD_1x1,

	// Flag to loop the x axis
	true,

	// Flag to loop the y axis
	false,

	// Bounds the sprite's width to provide culling; if 0, the value is inferred from the texture
	0,

	// Bounds the sprite's height to provide culling; if 0, the value is inferred from the texture
	0
};

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
// ACTOR
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

ComponentSpec* const CloudsComponentSpecs[] = 
{
	(ComponentSpec*)&CloudsSprite1SpriteSpec,
	NULL
};

ActorROMSpec CloudsActorSpec =
{
	// Class allocator
	__TYPE(Actor),

	// Component specs
	(ComponentSpec**)CloudsComponentSpecs,

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
	NULL
	
};
