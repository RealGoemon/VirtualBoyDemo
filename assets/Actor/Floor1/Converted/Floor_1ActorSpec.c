////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////  THIS FILE WAS AUTO-GENERATED - DO NOT EDIT  ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
// INCLUDES
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

#include <Actor.h>
#include <BgmapSprite.h>
#include <Box.h>
#include <ColliderLayers.h>
#include <InGameTypes.h>
#include <Texture.h>

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
// DECLARATIONS
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

extern uint32 Floor_1ActorFloor1Tiles[];
extern uint16 Floor_1ActorFloor1Map[];

extern uint32 Floor_1ActorFloor2Tiles[];
extern uint16 Floor_1ActorFloor2Map[];

extern uint32 Floor_1ActorFloor3Tiles[];
extern uint16 Floor_1ActorFloor3Map[];

extern uint32 Floor_1ActorBigBlock_LaTiles[];
extern uint16 Floor_1ActorBigBlock_LaMap[];
extern uint16 Floor_1ActorBigBlock_RaMap[];

extern uint32 Floor_1ActorFloor4Tiles[];
extern uint16 Floor_1ActorFloor4Map[];

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
// SPRITES
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

CharSetROMSpec Floor_1Sprite1CharsetSpec =
{
	// Number of CHARs in function of the number of frames to load at the same time
	8,

	// Whether it is shared or not
	true,

	// Whether the tiles are optimized or not
	true,

	// Tiles array
	Floor_1ActorFloor1Tiles,

	// Frame offsets array
	NULL
};

TextureROMSpec Floor_1Sprite1TextureSpec =
{
	// Pointer to the char spec that the texture uses
	(CharSetSpec*)&Floor_1Sprite1CharsetSpec,

	// Pointer to the map array that defines how to use the tiles from the char set
	Floor_1ActorFloor1Map,

	// Horizontal size in tiles of the texture (max. 64)
	64,

	// Vertical size in tiles of the texture (max. 64)
	4,

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

BgmapSpriteROMSpec Floor_1Sprite1SpriteSpec =
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
			(const AnimationFunction**)NULL
		},

		// Spec for the texture to display
		(TextureSpec*)&Floor_1Sprite1TextureSpec,

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


CharSetROMSpec Floor_1Sprite2CharsetSpec =
{
	// Number of CHARs in function of the number of frames to load at the same time
	17,

	// Whether it is shared or not
	true,

	// Whether the tiles are optimized or not
	true,

	// Tiles array
	Floor_1ActorFloor2Tiles,

	// Frame offsets array
	NULL
};

TextureROMSpec Floor_1Sprite2TextureSpec =
{
	// Pointer to the char spec that the texture uses
	(CharSetSpec*)&Floor_1Sprite2CharsetSpec,

	// Pointer to the map array that defines how to use the tiles from the char set
	Floor_1ActorFloor2Map,

	// Horizontal size in tiles of the texture (max. 64)
	64,

	// Vertical size in tiles of the texture (max. 64)
	4,

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

BgmapSpriteROMSpec Floor_1Sprite2SpriteSpec =
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
			(const AnimationFunction**)NULL
		},

		// Spec for the texture to display
		(TextureSpec*)&Floor_1Sprite2TextureSpec,

		// Transparency mode (__TRANSPARENCY_NONE, __TRANSPARENCY_EVEN or __TRANSPARENCY_ODD)
		__TRANSPARENCY_NONE,

		// Displacement added to the sprite's position
		{512, 0, 0, 0}
	},

	// Flag to indicate in which display to show the texture (__WORLD_ON, __WORLD_LON or __WORLD_RON)
	__WORLD_ON,

	// The display mode (__WORLD_BGMAP, __WORLD_AFFINE or __WORLD_HBIAS)
	__WORLD_BGMAP,
	
	// Pointer to affine/hbias manipulation function
	NULL
};


CharSetROMSpec Floor_1Sprite3CharsetSpec =
{
	// Number of CHARs in function of the number of frames to load at the same time
	17,

	// Whether it is shared or not
	true,

	// Whether the tiles are optimized or not
	true,

	// Tiles array
	Floor_1ActorFloor3Tiles,

	// Frame offsets array
	NULL
};

TextureROMSpec Floor_1Sprite3TextureSpec =
{
	// Pointer to the char spec that the texture uses
	(CharSetSpec*)&Floor_1Sprite3CharsetSpec,

	// Pointer to the map array that defines how to use the tiles from the char set
	Floor_1ActorFloor3Map,

	// Horizontal size in tiles of the texture (max. 64)
	64,

	// Vertical size in tiles of the texture (max. 64)
	4,

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

BgmapSpriteROMSpec Floor_1Sprite3SpriteSpec =
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
			(const AnimationFunction**)NULL
		},

		// Spec for the texture to display
		(TextureSpec*)&Floor_1Sprite3TextureSpec,

		// Transparency mode (__TRANSPARENCY_NONE, __TRANSPARENCY_EVEN or __TRANSPARENCY_ODD)
		__TRANSPARENCY_NONE,

		// Displacement added to the sprite's position
		{1024, 0, 0, 0}
	},

	// Flag to indicate in which display to show the texture (__WORLD_ON, __WORLD_LON or __WORLD_RON)
	__WORLD_ON,

	// The display mode (__WORLD_BGMAP, __WORLD_AFFINE or __WORLD_HBIAS)
	__WORLD_BGMAP,
	
	// Pointer to affine/hbias manipulation function
	NULL
};


CharSetROMSpec Floor_1Sprite4CharsetSpec =
{
	// Number of CHARs in function of the number of frames to load at the same time
	19,

	// Whether it is shared or not
	true,

	// Whether the tiles are optimized or not
	true,

	// Tiles array
	Floor_1ActorBigBlock_LaTiles,

	// Frame offsets array
	NULL
};

TextureROMSpec Floor_1Sprite4LTextureSpec =
{
	// Pointer to the char spec that the texture uses
	(CharSetSpec*)&Floor_1Sprite4CharsetSpec,

	// Pointer to the map array that defines how to use the tiles from the char set
	Floor_1ActorBigBlock_LaMap,

	// Horizontal size in tiles of the texture (max. 64)
	9,

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

BgmapSpriteROMSpec Floor_1Sprite4LSpriteSpec =
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
			(const AnimationFunction**)NULL
		},

		// Spec for the texture to display
		(TextureSpec*)&Floor_1Sprite4LTextureSpec,

		// Transparency mode (__TRANSPARENCY_NONE, __TRANSPARENCY_EVEN or __TRANSPARENCY_ODD)
		__TRANSPARENCY_NONE,

		// Displacement added to the sprite's position
		{100, -40, 0, 0}
	},

	// Flag to indicate in which display to show the texture (__WORLD_ON, __WORLD_LON or __WORLD_RON)
	__WORLD_LON,

	// The display mode (__WORLD_BGMAP, __WORLD_AFFINE or __WORLD_HBIAS)
	__WORLD_BGMAP,
	
	// Pointer to affine/hbias manipulation function
	NULL
};

TextureROMSpec Floor_1Sprite4RTextureSpec =
{
	// Pointer to the char spec that the texture uses
	(CharSetSpec*)&Floor_1Sprite4CharsetSpec,

	// Pointer to the map array that defines how to use the tiles from the char set
	Floor_1ActorBigBlock_RaMap,

	// Horizontal size in tiles of the texture (max. 64)
	9,

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

BgmapSpriteROMSpec Floor_1Sprite4RSpriteSpec =
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
			(const AnimationFunction**)NULL
		},

		// Spec for the texture to display
		(TextureSpec*)&Floor_1Sprite4RTextureSpec,

		// Transparency mode (__TRANSPARENCY_NONE, __TRANSPARENCY_EVEN or __TRANSPARENCY_ODD)
		__TRANSPARENCY_NONE,

		// Displacement added to the sprite's position
		{100, -40, 0, 0}
	},

	// Flag to indicate in which display to show the texture (__WORLD_ON, __WORLD_LON or __WORLD_RON)
	__WORLD_RON,

	// The display mode (__WORLD_BGMAP, __WORLD_AFFINE or __WORLD_HBIAS)
	__WORLD_BGMAP,
	
	// Pointer to affine/hbias manipulation function
	NULL
};


CharSetROMSpec Floor_1Sprite5CharsetSpec =
{
	// Number of CHARs in function of the number of frames to load at the same time
	7,

	// Whether it is shared or not
	true,

	// Whether the tiles are optimized or not
	true,

	// Tiles array
	Floor_1ActorFloor4Tiles,

	// Frame offsets array
	NULL
};

TextureROMSpec Floor_1Sprite5TextureSpec =
{
	// Pointer to the char spec that the texture uses
	(CharSetSpec*)&Floor_1Sprite5CharsetSpec,

	// Pointer to the map array that defines how to use the tiles from the char set
	Floor_1ActorFloor4Map,

	// Horizontal size in tiles of the texture (max. 64)
	3,

	// Vertical size in tiles of the texture (max. 64)
	4,

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

BgmapSpriteROMSpec Floor_1Sprite5SpriteSpec =
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
			(const AnimationFunction**)NULL
		},

		// Spec for the texture to display
		(TextureSpec*)&Floor_1Sprite5TextureSpec,

		// Transparency mode (__TRANSPARENCY_NONE, __TRANSPARENCY_EVEN or __TRANSPARENCY_ODD)
		__TRANSPARENCY_NONE,

		// Displacement added to the sprite's position
		{1292, 0, 0, 0}
	},

	// Flag to indicate in which display to show the texture (__WORLD_ON, __WORLD_LON or __WORLD_RON)
	__WORLD_ON,

	// The display mode (__WORLD_BGMAP, __WORLD_AFFINE or __WORLD_HBIAS)
	__WORLD_BGMAP,
	
	// Pointer to affine/hbias manipulation function
	NULL
};

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
// COLLIDERS
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

ColliderROMSpec Floor_1Collider1ColliderSpec = 
{
	// Component
	{
		// Allocator
		__TYPE(Box),

		// Component type
		kColliderComponent
	},

	// Size (x, y, z)
	{511, 32, 32},

	// Displacement (x, y, z, p)
	{0, 0, 0, 0},

	// Rotation (x, y, z)
	{0, 0, 0},

	// Scale (x, y, z)
	{__F_TO_FIX7_9(1.000f), __F_TO_FIX7_9(1.000f), __F_TO_FIX7_9(1.000f)},

	// If true this collider checks for collisions against other colliders
	false,

	// Layers in which I live
	kLayerGround,

	// Layers to ignore when checking for collisions
	kLayerAll
};

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
// ACTOR
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

ComponentSpec* const Floor_1ComponentSpecs[] = 
{
	(ComponentSpec*)&Floor_1Sprite1SpriteSpec,
	(ComponentSpec*)&Floor_1Sprite2SpriteSpec,
	(ComponentSpec*)&Floor_1Sprite3SpriteSpec,
	(ComponentSpec*)&Floor_1Sprite4LSpriteSpec,
	(ComponentSpec*)&Floor_1Sprite4RSpriteSpec,
	(ComponentSpec*)&Floor_1Sprite5SpriteSpec,
	(ComponentSpec*)&Floor_1Collider1ColliderSpec,
	NULL
};

ActorROMSpec Floor_1ActorSpec =
{
	// Class allocator
	__TYPE(Actor),

	// Component specs
	(ComponentSpec**)Floor_1ComponentSpecs,

	// Children specs
	NULL,

	// Extra info
	NULL,

	// Size
	// If 0, it is computed from the visual components if any
	{0, 0, 0},

	// Actor's in-game type
	kTypeSolidObject,

	// Animation to play automatically
	NULL
	
};
