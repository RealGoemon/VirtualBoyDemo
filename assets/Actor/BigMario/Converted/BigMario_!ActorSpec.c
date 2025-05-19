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

extern uint32 BigMario_ActoridlejumpTiles[];
extern uint16 BigMario_ActoridlejumpMap[];

extern uint32 BigMario_ActorrunTiles[];
extern uint16 BigMario_ActorrunMap[];

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
// ANIMATIONS
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

AnimationFunctionROMSpec BigMario_Animation1AnimationSpec =
{
	// Number of frames that the texture supports of this animation function
	0,

	// Frames to play in animation
	{
		
	},

	// Number of cycles a frame of animation is displayed
	8,

	// Whether to play it in loop or not
	true,

	// Animation's name
	"idlejump",
};

AnimationFunctionROMSpec BigMario_Animation2AnimationSpec =
{
	// Number of frames that the texture supports of this animation function
	5,

	// Frames to play in animation
	{
		0, 1, 2, 3, 4, 
	},

	// Number of cycles a frame of animation is displayed
	8,

	// Whether to play it in loop or not
	true,

	// Animation's name
	"run",
};

AnimationFunctionROMSpec* BigMario_AnimationSpecs[] =
{
	(AnimationFunction*)&BigMario_Animation1AnimationSpec,
	(AnimationFunction*)&BigMario_Animation2AnimationSpec,
	NULL,
};

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
// SPRITES
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

CharSetROMSpec BigMario_Sprite1CharsetSpec =
{
	// Number of CHARs in function of the number of frames to load at the same time
	15,

	// Whether it is shared or not
	true,

	// Whether the tiles are optimized or not
	false,

	// Tiles array
	BigMario_ActoridlejumpTiles,

	// Frame offsets array
	NULL
};

TextureROMSpec BigMario_Sprite1TextureSpec =
{
	// Pointer to the char spec that the texture uses
	(CharSetSpec*)&BigMario_Sprite1CharsetSpec,

	// Pointer to the map array that defines how to use the tiles from the char set
	BigMario_ActoridlejumpMap,

	// Horizontal size in tiles of the texture (max. 64)
	5,

	// Vertical size in tiles of the texture (max. 64)
	3,

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

BgmapSpriteROMSpec BigMario_Sprite1SpriteSpec =
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
			(const AnimationFunction**)BigMario_AnimationSpecs
		},

		// Spec for the texture to display
		(TextureSpec*)&BigMario_Sprite1TextureSpec,

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


CharSetROMSpec BigMario_Sprite2CharsetSpec =
{
	// Number of CHARs in function of the number of frames to load at the same time
	30,

	// Whether it is shared or not
	true,

	// Whether the tiles are optimized or not
	false,

	// Tiles array
	BigMario_ActorrunTiles,

	// Frame offsets array
	NULL
};

TextureROMSpec BigMario_Sprite2TextureSpec =
{
	// Pointer to the char spec that the texture uses
	(CharSetSpec*)&BigMario_Sprite2CharsetSpec,

	// Pointer to the map array that defines how to use the tiles from the char set
	BigMario_ActorrunMap,

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

BgmapSpriteROMSpec BigMario_Sprite2SpriteSpec =
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
			(const AnimationFunction**)BigMario_AnimationSpecs
		},

		// Spec for the texture to display
		(TextureSpec*)&BigMario_Sprite2TextureSpec,

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

ComponentSpec* const BigMario_ComponentSpecs[] = 
{
	(ComponentSpec*)&BigMario_Sprite1SpriteSpec,
	(ComponentSpec*)&BigMario_Sprite2SpriteSpec,
	NULL
};

ActorROMSpec BigMario_ActorSpec =
{
	// Class allocator
	__TYPE(Actor),

	// Component specs
	(ComponentSpec**)BigMario_ComponentSpecs,

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
	"idlejump"
	
};
