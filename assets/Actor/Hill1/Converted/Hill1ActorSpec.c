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

extern uint32 Hill1ActorHill_l_1Tiles[];
extern uint16 Hill1ActorHill_l_1Map[];

extern uint32 Hill1ActorHill_l_2Tiles[];
extern uint16 Hill1ActorHill_l_2Map[];

extern uint32 Hill1ActorHill_l_3Tiles[];
extern uint16 Hill1ActorHill_l_3Map[];

extern uint32 Hill1ActorFarFloorTiles[];
extern uint16 Hill1ActorFarFloorMap[];

extern uint32 Hill1ActorFarFloor2Tiles[];
extern uint16 Hill1ActorFarFloor2Map[];

extern uint32 Hill1Actorsky2_1Tiles[];
extern uint16 Hill1Actorsky2_1Map[];

extern uint32 Hill1Actorsky2_2Tiles[];
extern uint16 Hill1Actorsky2_2Map[];

extern uint32 Hill1ActorFarFloor3Tiles[];
extern uint16 Hill1ActorFarFloor3Map[];

extern uint32 Hill1Actorsky2_3Tiles[];
extern uint16 Hill1Actorsky2_3Map[];

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
// SPRITES
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

CharSetROMSpec Hill1Sprite1CharsetSpec =
{
	// Number of CHARs in function of the number of frames to load at the same time
	7,

	// Whether it is shared or not
	true,

	// Whether the tiles are optimized or not
	true,

	// Tiles array
	Hill1ActorHill_l_1Tiles,

	// Frame offsets array
	NULL
};

TextureROMSpec Hill1Sprite1TextureSpec =
{
	// Pointer to the char spec that the texture uses
	(CharSetSpec*)&Hill1Sprite1CharsetSpec,

	// Pointer to the map array that defines how to use the tiles from the char set
	Hill1ActorHill_l_1Map,

	// Horizontal size in tiles of the texture (max. 64)
	64,

	// Vertical size in tiles of the texture (max. 64)
	4,

	// padding for affine/hbias transformations
	{0, 0},

	// Number of frames that the texture supports
	1,

	// Palette index to use by the graphical data (0 - 3)
	3,

	// Flag to recycle the texture with a different map
	false,

	// Flag to vertically flip the image
	false,

	// Flag to horizontally flip the image
	false
};

BgmapSpriteROMSpec Hill1Sprite1SpriteSpec =
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
		(TextureSpec*)&Hill1Sprite1TextureSpec,

		// Transparency mode (__TRANSPARENCY_NONE, __TRANSPARENCY_EVEN or __TRANSPARENCY_ODD)
		__TRANSPARENCY_NONE,

		// Displacement added to the sprite's position
		{176, -17, 5, 10}
	},

	// Flag to indicate in which display to show the texture (__WORLD_ON, __WORLD_LON or __WORLD_RON)
	__WORLD_ON,

	// The display mode (__WORLD_BGMAP, __WORLD_AFFINE or __WORLD_HBIAS)
	__WORLD_BGMAP,
	
	// Pointer to affine/hbias manipulation function
	NULL
};


CharSetROMSpec Hill1Sprite2CharsetSpec =
{
	// Number of CHARs in function of the number of frames to load at the same time
	7,

	// Whether it is shared or not
	true,

	// Whether the tiles are optimized or not
	true,

	// Tiles array
	Hill1ActorHill_l_2Tiles,

	// Frame offsets array
	NULL
};

TextureROMSpec Hill1Sprite2TextureSpec =
{
	// Pointer to the char spec that the texture uses
	(CharSetSpec*)&Hill1Sprite2CharsetSpec,

	// Pointer to the map array that defines how to use the tiles from the char set
	Hill1ActorHill_l_2Map,

	// Horizontal size in tiles of the texture (max. 64)
	64,

	// Vertical size in tiles of the texture (max. 64)
	4,

	// padding for affine/hbias transformations
	{0, 0},

	// Number of frames that the texture supports
	1,

	// Palette index to use by the graphical data (0 - 3)
	3,

	// Flag to recycle the texture with a different map
	false,

	// Flag to vertically flip the image
	false,

	// Flag to horizontally flip the image
	false
};

BgmapSpriteROMSpec Hill1Sprite2SpriteSpec =
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
		(TextureSpec*)&Hill1Sprite2TextureSpec,

		// Transparency mode (__TRANSPARENCY_NONE, __TRANSPARENCY_EVEN or __TRANSPARENCY_ODD)
		__TRANSPARENCY_NONE,

		// Displacement added to the sprite's position
		{688, -17, 5, 10}
	},

	// Flag to indicate in which display to show the texture (__WORLD_ON, __WORLD_LON or __WORLD_RON)
	__WORLD_ON,

	// The display mode (__WORLD_BGMAP, __WORLD_AFFINE or __WORLD_HBIAS)
	__WORLD_BGMAP,
	
	// Pointer to affine/hbias manipulation function
	NULL
};


CharSetROMSpec Hill1Sprite3CharsetSpec =
{
	// Number of CHARs in function of the number of frames to load at the same time
	7,

	// Whether it is shared or not
	true,

	// Whether the tiles are optimized or not
	true,

	// Tiles array
	Hill1ActorHill_l_3Tiles,

	// Frame offsets array
	NULL
};

TextureROMSpec Hill1Sprite3TextureSpec =
{
	// Pointer to the char spec that the texture uses
	(CharSetSpec*)&Hill1Sprite3CharsetSpec,

	// Pointer to the map array that defines how to use the tiles from the char set
	Hill1ActorHill_l_3Map,

	// Horizontal size in tiles of the texture (max. 64)
	57,

	// Vertical size in tiles of the texture (max. 64)
	4,

	// padding for affine/hbias transformations
	{0, 0},

	// Number of frames that the texture supports
	1,

	// Palette index to use by the graphical data (0 - 3)
	3,

	// Flag to recycle the texture with a different map
	false,

	// Flag to vertically flip the image
	false,

	// Flag to horizontally flip the image
	false
};

BgmapSpriteROMSpec Hill1Sprite3SpriteSpec =
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
		(TextureSpec*)&Hill1Sprite3TextureSpec,

		// Transparency mode (__TRANSPARENCY_NONE, __TRANSPARENCY_EVEN or __TRANSPARENCY_ODD)
		__TRANSPARENCY_NONE,

		// Displacement added to the sprite's position
		{1190, -17, 5, 10}
	},

	// Flag to indicate in which display to show the texture (__WORLD_ON, __WORLD_LON or __WORLD_RON)
	__WORLD_ON,

	// The display mode (__WORLD_BGMAP, __WORLD_AFFINE or __WORLD_HBIAS)
	__WORLD_BGMAP,
	
	// Pointer to affine/hbias manipulation function
	NULL
};


CharSetROMSpec Hill1Sprite4CharsetSpec =
{
	// Number of CHARs in function of the number of frames to load at the same time
	4,

	// Whether it is shared or not
	true,

	// Whether the tiles are optimized or not
	true,

	// Tiles array
	Hill1ActorFarFloorTiles,

	// Frame offsets array
	NULL
};

TextureROMSpec Hill1Sprite4TextureSpec =
{
	// Pointer to the char spec that the texture uses
	(CharSetSpec*)&Hill1Sprite4CharsetSpec,

	// Pointer to the map array that defines how to use the tiles from the char set
	Hill1ActorFarFloorMap,

	// Horizontal size in tiles of the texture (max. 64)
	64,

	// Vertical size in tiles of the texture (max. 64)
	1,

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

BgmapSpriteROMSpec Hill1Sprite4SpriteSpec =
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
		(TextureSpec*)&Hill1Sprite4TextureSpec,

		// Transparency mode (__TRANSPARENCY_NONE, __TRANSPARENCY_EVEN or __TRANSPARENCY_ODD)
		__TRANSPARENCY_NONE,

		// Displacement added to the sprite's position
		{178, 3, 5, 8}
	},

	// Flag to indicate in which display to show the texture (__WORLD_ON, __WORLD_LON or __WORLD_RON)
	__WORLD_ON,

	// The display mode (__WORLD_BGMAP, __WORLD_AFFINE or __WORLD_HBIAS)
	__WORLD_BGMAP,
	
	// Pointer to affine/hbias manipulation function
	NULL
};


CharSetROMSpec Hill1Sprite5CharsetSpec =
{
	// Number of CHARs in function of the number of frames to load at the same time
	4,

	// Whether it is shared or not
	true,

	// Whether the tiles are optimized or not
	true,

	// Tiles array
	Hill1ActorFarFloor2Tiles,

	// Frame offsets array
	NULL
};

TextureROMSpec Hill1Sprite5TextureSpec =
{
	// Pointer to the char spec that the texture uses
	(CharSetSpec*)&Hill1Sprite5CharsetSpec,

	// Pointer to the map array that defines how to use the tiles from the char set
	Hill1ActorFarFloor2Map,

	// Horizontal size in tiles of the texture (max. 64)
	64,

	// Vertical size in tiles of the texture (max. 64)
	1,

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

BgmapSpriteROMSpec Hill1Sprite5SpriteSpec =
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
		(TextureSpec*)&Hill1Sprite5TextureSpec,

		// Transparency mode (__TRANSPARENCY_NONE, __TRANSPARENCY_EVEN or __TRANSPARENCY_ODD)
		__TRANSPARENCY_NONE,

		// Displacement added to the sprite's position
		{690, 3, 5, 8}
	},

	// Flag to indicate in which display to show the texture (__WORLD_ON, __WORLD_LON or __WORLD_RON)
	__WORLD_ON,

	// The display mode (__WORLD_BGMAP, __WORLD_AFFINE or __WORLD_HBIAS)
	__WORLD_BGMAP,
	
	// Pointer to affine/hbias manipulation function
	NULL
};


CharSetROMSpec Hill1Sprite6CharsetSpec =
{
	// Number of CHARs in function of the number of frames to load at the same time
	4,

	// Whether it is shared or not
	true,

	// Whether the tiles are optimized or not
	true,

	// Tiles array
	Hill1Actorsky2_1Tiles,

	// Frame offsets array
	NULL
};

TextureROMSpec Hill1Sprite6TextureSpec =
{
	// Pointer to the char spec that the texture uses
	(CharSetSpec*)&Hill1Sprite6CharsetSpec,

	// Pointer to the map array that defines how to use the tiles from the char set
	Hill1Actorsky2_1Map,

	// Horizontal size in tiles of the texture (max. 64)
	64,

	// Vertical size in tiles of the texture (max. 64)
	1,

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

BgmapSpriteROMSpec Hill1Sprite6SpriteSpec =
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
		(TextureSpec*)&Hill1Sprite6TextureSpec,

		// Transparency mode (__TRANSPARENCY_NONE, __TRANSPARENCY_EVEN or __TRANSPARENCY_ODD)
		__TRANSPARENCY_NONE,

		// Displacement added to the sprite's position
		{176, -117, 5, 8}
	},

	// Flag to indicate in which display to show the texture (__WORLD_ON, __WORLD_LON or __WORLD_RON)
	__WORLD_ON,

	// The display mode (__WORLD_BGMAP, __WORLD_AFFINE or __WORLD_HBIAS)
	__WORLD_BGMAP,
	
	// Pointer to affine/hbias manipulation function
	NULL
};


CharSetROMSpec Hill1Sprite7CharsetSpec =
{
	// Number of CHARs in function of the number of frames to load at the same time
	4,

	// Whether it is shared or not
	true,

	// Whether the tiles are optimized or not
	true,

	// Tiles array
	Hill1Actorsky2_2Tiles,

	// Frame offsets array
	NULL
};

TextureROMSpec Hill1Sprite7TextureSpec =
{
	// Pointer to the char spec that the texture uses
	(CharSetSpec*)&Hill1Sprite7CharsetSpec,

	// Pointer to the map array that defines how to use the tiles from the char set
	Hill1Actorsky2_2Map,

	// Horizontal size in tiles of the texture (max. 64)
	64,

	// Vertical size in tiles of the texture (max. 64)
	1,

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

BgmapSpriteROMSpec Hill1Sprite7SpriteSpec =
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
		(TextureSpec*)&Hill1Sprite7TextureSpec,

		// Transparency mode (__TRANSPARENCY_NONE, __TRANSPARENCY_EVEN or __TRANSPARENCY_ODD)
		__TRANSPARENCY_NONE,

		// Displacement added to the sprite's position
		{688, -117, 5, 8}
	},

	// Flag to indicate in which display to show the texture (__WORLD_ON, __WORLD_LON or __WORLD_RON)
	__WORLD_ON,

	// The display mode (__WORLD_BGMAP, __WORLD_AFFINE or __WORLD_HBIAS)
	__WORLD_BGMAP,
	
	// Pointer to affine/hbias manipulation function
	NULL
};


CharSetROMSpec Hill1Sprite8CharsetSpec =
{
	// Number of CHARs in function of the number of frames to load at the same time
	4,

	// Whether it is shared or not
	true,

	// Whether the tiles are optimized or not
	true,

	// Tiles array
	Hill1ActorFarFloor3Tiles,

	// Frame offsets array
	NULL
};

TextureROMSpec Hill1Sprite8TextureSpec =
{
	// Pointer to the char spec that the texture uses
	(CharSetSpec*)&Hill1Sprite8CharsetSpec,

	// Pointer to the map array that defines how to use the tiles from the char set
	Hill1ActorFarFloor3Map,

	// Horizontal size in tiles of the texture (max. 64)
	64,

	// Vertical size in tiles of the texture (max. 64)
	1,

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

BgmapSpriteROMSpec Hill1Sprite8SpriteSpec =
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
		(TextureSpec*)&Hill1Sprite8TextureSpec,

		// Transparency mode (__TRANSPARENCY_NONE, __TRANSPARENCY_EVEN or __TRANSPARENCY_ODD)
		__TRANSPARENCY_NONE,

		// Displacement added to the sprite's position
		{1202, 3, 5, 0}
	},

	// Flag to indicate in which display to show the texture (__WORLD_ON, __WORLD_LON or __WORLD_RON)
	__WORLD_ON,

	// The display mode (__WORLD_BGMAP, __WORLD_AFFINE or __WORLD_HBIAS)
	__WORLD_BGMAP,
	
	// Pointer to affine/hbias manipulation function
	NULL
};


CharSetROMSpec Hill1Sprite9CharsetSpec =
{
	// Number of CHARs in function of the number of frames to load at the same time
	4,

	// Whether it is shared or not
	true,

	// Whether the tiles are optimized or not
	true,

	// Tiles array
	Hill1Actorsky2_3Tiles,

	// Frame offsets array
	NULL
};

TextureROMSpec Hill1Sprite9TextureSpec =
{
	// Pointer to the char spec that the texture uses
	(CharSetSpec*)&Hill1Sprite9CharsetSpec,

	// Pointer to the map array that defines how to use the tiles from the char set
	Hill1Actorsky2_3Map,

	// Horizontal size in tiles of the texture (max. 64)
	64,

	// Vertical size in tiles of the texture (max. 64)
	1,

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

BgmapSpriteROMSpec Hill1Sprite9SpriteSpec =
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
		(TextureSpec*)&Hill1Sprite9TextureSpec,

		// Transparency mode (__TRANSPARENCY_NONE, __TRANSPARENCY_EVEN or __TRANSPARENCY_ODD)
		__TRANSPARENCY_NONE,

		// Displacement added to the sprite's position
		{1200, -117, 5, 8}
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

ComponentSpec* const Hill1ComponentSpecs[] = 
{
	(ComponentSpec*)&Hill1Sprite1SpriteSpec,
	(ComponentSpec*)&Hill1Sprite2SpriteSpec,
	(ComponentSpec*)&Hill1Sprite3SpriteSpec,
	(ComponentSpec*)&Hill1Sprite4SpriteSpec,
	(ComponentSpec*)&Hill1Sprite5SpriteSpec,
	(ComponentSpec*)&Hill1Sprite6SpriteSpec,
	(ComponentSpec*)&Hill1Sprite7SpriteSpec,
	(ComponentSpec*)&Hill1Sprite8SpriteSpec,
	(ComponentSpec*)&Hill1Sprite9SpriteSpec,
	NULL
};

ActorROMSpec Hill1ActorSpec =
{
	// Class allocator
	__TYPE(Actor),

	// Component specs
	(ComponentSpec**)Hill1ComponentSpecs,

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
