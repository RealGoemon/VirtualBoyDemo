////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////  THIS FILE WAS AUTO-GENERATED - DO NOT EDIT  ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
// INCLUDES
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

#include <BgmapSprite.h>
#include <Body.h>
#include <Box.h>
#include <ColliderLayers.h>
#include <InGameTypes.h>
#include <Mario.h>
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
	16,

	// Frames to play in animation
	{
		0, 1, 2, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 
	},

	// Number of cycles a frame of animation is displayed
	8,

	// Whether to play it in loop or not
	true,

	// Animation's name
	"Idle",
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
	"Move",
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
	"Jump",
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
	"Slide",
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
	"Die",
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
	"Pole Down",
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
// COLLIDERS
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

ColliderROMSpec BigMario_1Collider1ColliderSpec = 
{
	// Component
	{
		// Allocator
		__TYPE(Box),

		// Component type
		kColliderComponent
	},

	// Size (x, y, z)
	{14, 40, 32},

	// Displacement (x, y, z, p)
	{0, 2, 0, 0},

	// Rotation (x, y, z)
	{0, 0, 0},

	// Scale (x, y, z)
	{__F_TO_FIX7_9(1.000f), __F_TO_FIX7_9(1.000f), __F_TO_FIX7_9(1.000f)},

	// If true this collider checks for collisions against other colliders
	true,

	// Layers in which I live
	kLayerNone,

	// Layers to ignore when checking for collisions
	kLayerAll & ~(kLayerGround)
};


//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
// BODIES
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

BodyROMSpec BigMario_1Body1BodySpec =
{
	// Component
	{
		// Allocator
		__TYPE(Body),

		// Component type
		kPhysicsComponent
	},

	// Create body
	true,

	// Mass
	__F_TO_FIX10_6(1.000f),

	// Friction
	__F_TO_FIX10_6(0.300f),

	// Bounciness
	__F_TO_FIX10_6(0.100f),

	// Maximum velocity
	{ __I_TO_FIXED(0), __I_TO_FIXED(0), __I_TO_FIXED(0) },

	// Maximum speed
	__I_TO_FIX10_6(3),

	// Axises on which the body is subject to gravity
	__Y_AXIS,

	// Axises around which to rotate the owner when syncronizing with body
	__Y_AXIS
};

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
// ACTOR
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

ComponentSpec* const BigMario_1ComponentSpecs[] = 
{
	(ComponentSpec*)&BigMario_1Sprite1SpriteSpec,
	(ComponentSpec*)&BigMario_1Collider1ColliderSpec,
	(ComponentSpec*)&BigMario_1Body1BodySpec,
	NULL
};

MarioROMSpec BigMario_1ActorSpec =
{
	{
	// Class allocator
	__TYPE(Mario),

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
	"Idle"
	},
};
