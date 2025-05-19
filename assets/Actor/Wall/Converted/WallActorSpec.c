////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////  THIS FILE WAS AUTO-GENERATED - DO NOT EDIT  ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
// INCLUDES
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

#include <Actor.h>
#include <Box.h>
#include <ColliderLayers.h>
#include <InGameTypes.h>
#include <Texture.h>
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
// COLLIDERS
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

ColliderROMSpec WallCollider1ColliderSpec = 
{
	// Component
	{
		// Allocator
		__TYPE(Box),

		// Component type
		kColliderComponent
	},

	// Size (x, y, z)
	{384, 16, 32},

	// Displacement (x, y, z, p)
	{0, 0, 0, 0},

	// Rotation (x, y, z)
	{0, 0, 0},

	// Scale (x, y, z)
	{__F_TO_FIX7_9(1.000f), __F_TO_FIX7_9(1.000f), __F_TO_FIX7_9(1.000f)},

	// If true this collider checks for collisions against other colliders
	false,

	// Layers in which I live
	kLayerWall,

	// Layers to ignore when checking for collisions
	kLayerAll
};

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
// ACTOR
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

ComponentSpec* const WallComponentSpecs[] = 
{
	(ComponentSpec*)&WallCollider1ColliderSpec,
	NULL
};

ActorROMSpec WallActorSpec =
{
	// Class allocator
	__TYPE(Actor),

	// Component specs
	(ComponentSpec**)WallComponentSpecs,

	// Children specs
	NULL,

	// Extra info
	NULL,

	// Size
	// If 0, it is computed from the visual components if any
	{0, 0, 0},

	// Actor's in-game type
	kTypeWall,

	// Animation to play automatically
	NULL
	
};
