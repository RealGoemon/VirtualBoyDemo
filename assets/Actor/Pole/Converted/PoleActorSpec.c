////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////  THIS FILE WAS AUTO-GENERATED - DO NOT EDIT  ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
// INCLUDES
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

#include <Actor.h>
#include <InGameTypes.h>
#include <ObjectSprite.h>
#include <Texture.h>

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
// DECLARATIONS
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

extern uint32 PoleActorpole_lTiles[];
extern uint16 PoleActorpole_lMap[];
extern uint16 PoleActorpole_rMap[];

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
// ANIMATIONS
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

AnimationFunctionROMSpec PoleAnimation1AnimationSpec =
{
	// Number of frames that the texture supports of this animation function
	1,

	// Frames to play in animation
	{
		2, 
	},

	// Number of cycles a frame of animation is displayed
	8,

	// Whether to play it in loop or not
	true,

	// Animation's name
	"small",
};

AnimationFunctionROMSpec PoleAnimation2AnimationSpec =
{
	// Number of frames that the texture supports of this animation function
	1,

	// Frames to play in animation
	{
		1, 
	},

	// Number of cycles a frame of animation is displayed
	8,

	// Whether to play it in loop or not
	true,

	// Animation's name
	"mid",
};

AnimationFunctionROMSpec PoleAnimation3AnimationSpec =
{
	// Number of frames that the texture supports of this animation function
	1,

	// Frames to play in animation
	{
		0, 
	},

	// Number of cycles a frame of animation is displayed
	8,

	// Whether to play it in loop or not
	true,

	// Animation's name
	"big",
};

AnimationFunctionROMSpec* PoleAnimationSpecs[] =
{
	(AnimationFunction*)&PoleAnimation1AnimationSpec,
	(AnimationFunction*)&PoleAnimation2AnimationSpec,
	(AnimationFunction*)&PoleAnimation3AnimationSpec,
	NULL,
};

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
// SPRITES
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

CharSetROMSpec PoleSprite1CharsetSpec =
{
	// Number of CHARs in function of the number of frames to load at the same time
	144,

	// Whether it is shared or not
	true,

	// Whether the tiles are optimized or not
	false,

	// Tiles array
	PoleActorpole_lTiles,

	// Frame offsets array
	NULL
};

TextureROMSpec PoleSprite1LTextureSpec =
{
	// Pointer to the char spec that the texture uses
	(CharSetSpec*)&PoleSprite1CharsetSpec,

	// Pointer to the map array that defines how to use the tiles from the char set
	PoleActorpole_lMap,

	// Horizontal size in tiles of the texture (max. 64)
	4,

	// Vertical size in tiles of the texture (max. 64)
	18,

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

ObjectSpriteROMSpec PoleSprite1LSpriteSpec =
{
	{
		// VisualComponent
		{
			// Component
			{
				// Allocator
				__TYPE(ObjectSprite),

				// Component type
				kSpriteComponent
			},

			// Array of animation functions
			(const AnimationFunction**)NULL
		},

		// Spec for the texture to display
		(TextureSpec*)&PoleSprite1LTextureSpec,

		// Transparency mode (__TRANSPARENCY_NONE, __TRANSPARENCY_EVEN or __TRANSPARENCY_ODD)
		__TRANSPARENCY_NONE,

		// Displacement added to the sprite's position
		{17, -25, 4, 6}
	},

	// Flag to indicate in which display to show the texture (__WORLD_ON, __WORLD_LON or __WORLD_RON)
	__WORLD_LON,
};

TextureROMSpec PoleSprite1RTextureSpec =
{
	// Pointer to the char spec that the texture uses
	(CharSetSpec*)&PoleSprite1CharsetSpec,

	// Pointer to the map array that defines how to use the tiles from the char set
	PoleActorpole_rMap,

	// Horizontal size in tiles of the texture (max. 64)
	4,

	// Vertical size in tiles of the texture (max. 64)
	18,

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

ObjectSpriteROMSpec PoleSprite1RSpriteSpec =
{
	{
		// VisualComponent
		{
			// Component
			{
				// Allocator
				__TYPE(ObjectSprite),

				// Component type
				kSpriteComponent
			},

			// Array of animation functions
			(const AnimationFunction**)NULL
		},

		// Spec for the texture to display
		(TextureSpec*)&PoleSprite1RTextureSpec,

		// Transparency mode (__TRANSPARENCY_NONE, __TRANSPARENCY_EVEN or __TRANSPARENCY_ODD)
		__TRANSPARENCY_NONE,

		// Displacement added to the sprite's position
		{17, -25, 4, 6}
	},

	// Flag to indicate in which display to show the texture (__WORLD_ON, __WORLD_LON or __WORLD_RON)
	__WORLD_RON,
};

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
// ACTOR
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

ComponentSpec* const PoleComponentSpecs[] = 
{
	(ComponentSpec*)&PoleSprite1LSpriteSpec,
	(ComponentSpec*)&PoleSprite1RSpriteSpec,
	NULL
};

ActorROMSpec PoleActorSpec =
{
	// Class allocator
	__TYPE(Actor),

	// Component specs
	(ComponentSpec**)PoleComponentSpecs,

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
	"small"
	
};
