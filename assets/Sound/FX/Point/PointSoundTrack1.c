/*
 * VUEngine Plugins Library
 *
 * (c) Christian Radke and Jorge Eremiev
 *
 * For the full copyright and license information, please view the LICENSE file
 * that was distributed with this source code.
 */

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
// INCLUDES
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

#include <Sound.h>
#include <SoundTrack.h>
#include <WaveForms.h>

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
// DEFINITIONS
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

const uint8 PointSoundTrack1SxINT[] =
{
	0x9F,
};

const uint8 PointSoundTrack1SxLRV[] =
{
	0xFF, 0xBB, 0x77, 0x33,
};

const uint16 PointSoundTrack1SxFQ[] =
{
	B_4, C_4, A_5
};

const uint8 PointSoundTrack1SxEV0[] =
{
	0x80,
};

const uint8 PointSoundTrack1SxEV1[] =
{
	0x01,
};

const int8* const PointSoundTrack1SxRAM[] =
{
	SquareWaveForm,
};

const uint8 PointSoundTrack1SxSWP[] =
{
	0x00,
};

const SoundTrackKeyframe PointSoundTrack1Keyframes[] =
{
	{80, kSoundTrackEventStart},
	{80, kSoundTrackEventSxLRV | kSoundTrackEventSxFQ},
	{80, kSoundTrackEventSxLRV | kSoundTrackEventSxFQ},
	{80, kSoundTrackEventSxLRV},
	{0, kSoundTrackEventEnd},
};

SoundTrackROMSpec PointSoundTrack1 =
{
	/// kTrackNative, kTrackPCM
	kTrackNative,

	/// Skip if no sound source available?
	false,

	/// Total number of samples (0 if not PCM)
	0,

	/// Keyframes that define the track
	(SoundTrackKeyframe*)PointSoundTrack1Keyframes,

	/// SxINT values
	(uint8*)PointSoundTrack1SxINT,

	/// SxLRV values
	(uint8*)PointSoundTrack1SxLRV,

	/// SxFQH and SxFQL values
	(uint16*)PointSoundTrack1SxFQ,

	/// SxEV0 values
	(uint8*)PointSoundTrack1SxEV0,

	/// SxEV1 values
	(uint8*)PointSoundTrack1SxEV1,

	/// SxRAM pointers
	(int8**)PointSoundTrack1SxRAM,

	/// SxSWP values
	(uint8*)PointSoundTrack1SxSWP,

	/// SxMOD values
	(int8**)NULL
};
