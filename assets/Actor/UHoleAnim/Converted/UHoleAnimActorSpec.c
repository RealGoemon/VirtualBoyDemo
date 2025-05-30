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

extern uint32 UHoleAnimActorUHoleAnim_LTiles[];
extern uint16 UHoleAnimActorUHoleAnim_LMap[];
extern uint16 UHoleAnimActorUHoleAnim_RMap[];

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
// ANIMATIONS
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

AnimationFunctionROMSpec UHoleAnimAnimation1AnimationSpec =
{
	// Number of frames that the texture supports of this animation function
	8,

	// Frames to play in animation
	{
		0, 1, 2, 3, 4, 5, 6, 7, 
	},

	// Number of cycles a frame of animation is displayed
	20,

	// Whether to play it in loop or not
	true,

	// Animation's name
	"Hole",
};

AnimationFunctionROMSpec UHoleAnimAnimation2AnimationSpec =
{
	// Number of frames that the texture supports of this animation function
	2,

	// Frames to play in animation
	{
		7, 8, 
	},

	// Number of cycles a frame of animation is displayed
	24,

	// Whether to play it in loop or not
	true,

	// Animation's name
	"Frame",
};

AnimationFunctionROMSpec* UHoleAnimAnimationSpecs[] =
{
	(AnimationFunction*)&UHoleAnimAnimation1AnimationSpec,
	(AnimationFunction*)&UHoleAnimAnimation2AnimationSpec,
	NULL,
};

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
// SPRITES
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

CharSetROMSpec UHoleAnimSprite1CharsetSpec =
{
	// Number of CHARs in function of the number of frames to load at the same time
	72,

	// Whether it is shared or not
	true,

	// Whether the tiles are optimized or not
	false,

	// Tiles array
	UHoleAnimActorUHoleAnim_LTiles,

	// Frame offsets array
	NULL
};

TextureROMSpec UHoleAnimSprite1LTextureSpec =
{
	// Pointer to the char spec that the texture uses
	(CharSetSpec*)&UHoleAnimSprite1CharsetSpec,

	// Pointer to the map array that defines how to use the tiles from the char set
	UHoleAnimActorUHoleAnim_LMap,

	// Horizontal size in tiles of the texture (max. 64)
	6,

	// Vertical size in tiles of the texture (max. 64)
	6,

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

BgmapSpriteROMSpec UHoleAnimSprite1LSpriteSpec =
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
			(const AnimationFunction**)UHoleAnimAnimationSpecs
		},

		// Spec for the texture to display
		(TextureSpec*)&UHoleAnimSprite1LTextureSpec,

		// Transparency mode (__TRANSPARENCY_NONE, __TRANSPARENCY_EVEN or __TRANSPARENCY_ODD)
		__TRANSPARENCY_NONE,

		// Displacement added to the sprite's position
		{0, 0, 0, 4}
	},

	// Flag to indicate in which display to show the texture (__WORLD_ON, __WORLD_LON or __WORLD_RON)
	__WORLD_LON,

	// The display mode (__WORLD_BGMAP, __WORLD_AFFINE or __WORLD_HBIAS)
	__WORLD_BGMAP,
	
	// Pointer to affine/hbias manipulation function
	NULL
};

TextureROMSpec UHoleAnimSprite1RTextureSpec =
{
	// Pointer to the char spec that the texture uses
	(CharSetSpec*)&UHoleAnimSprite1CharsetSpec,

	// Pointer to the map array that defines how to use the tiles from the char set
	UHoleAnimActorUHoleAnim_RMap,

	// Horizontal size in tiles of the texture (max. 64)
	6,

	// Vertical size in tiles of the texture (max. 64)
	6,

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

BgmapSpriteROMSpec UHoleAnimSprite1RSpriteSpec =
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
			(const AnimationFunction**)UHoleAnimAnimationSpecs
		},

		// Spec for the texture to display
		(TextureSpec*)&UHoleAnimSprite1RTextureSpec,

		// Transparency mode (__TRANSPARENCY_NONE, __TRANSPARENCY_EVEN or __TRANSPARENCY_ODD)
		__TRANSPARENCY_NONE,

		// Displacement added to the sprite's position
		{0, 0, 0, 4}
	},

	// Flag to indicate in which display to show the texture (__WORLD_ON, __WORLD_LON or __WORLD_RON)
	__WORLD_RON,

	// The display mode (__WORLD_BGMAP, __WORLD_AFFINE or __WORLD_HBIAS)
	__WORLD_BGMAP,
	
	// Pointer to affine/hbias manipulation function
	NULL
};

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
// ACTOR
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

ComponentSpec* const UHoleAnimComponentSpecs[] = 
{
	(ComponentSpec*)&UHoleAnimSprite1LSpriteSpec,
	(ComponentSpec*)&UHoleAnimSprite1RSpriteSpec,
	NULL
};

ActorROMSpec UHoleAnimActorSpec =
{
	// Class allocator
	__TYPE(Actor),

	// Component specs
	(ComponentSpec**)UHoleAnimComponentSpecs,

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
	"Frame"
	
};
