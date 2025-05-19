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

const uint8 BounceSoundTrack1SxINT[] =
{
	0x9F,
};

const uint8 BounceSoundTrack1SxLRV[] =
{
	0xFF, 0xBB, 0x77, 0x33,
};

const uint16 BounceSoundTrack1SxFQ[] =
{
	E_3, E_4, F_3
};

const uint8 BounceSoundTrack1SxEV0[] =
{
	0x80,
};

const uint8 BounceSoundTrack1SxEV1[] =
{
	0x01,
};

const int8* const BounceSoundTrack1SxRAM[] =
{
	SquareWaveForm,
};

const uint8 BounceSoundTrack1SxSWP[] =
{
	0x00,
};

const SoundTrackKeyframe BounceSoundTrack1Keyframes[] =
{
	{80, kSoundTrackEventStart},
	{80, kSoundTrackEventSxLRV | kSoundTrackEventSxFQ},
	{80, kSoundTrackEventSxLRV | kSoundTrackEventSxFQ},
	{80, kSoundTrackEventSxLRV},
	{0, kSoundTrackEventEnd},
};

SoundTrackROMSpec BounceSoundTrack1 =
{
	/// kTrackNative, kTrackPCM
	kTrackNative,

	/// Skip if no sound source available?
	false,

	/// Total number of samples (0 if not PCM)
	0,

	/// Keyframes that define the track
	(SoundTrackKeyframe*)BounceSoundTrack1Keyframes,

	/// SxINT values
	(uint8*)BounceSoundTrack1SxINT,

	/// SxLRV values
	(uint8*)BounceSoundTrack1SxLRV,

	/// SxFQH and SxFQL values
	(uint16*)BounceSoundTrack1SxFQ,

	/// SxEV0 values
	(uint8*)BounceSoundTrack1SxEV0,

	/// SxEV1 values
	(uint8*)BounceSoundTrack1SxEV1,

	/// SxRAM pointers
	(int8**)BounceSoundTrack1SxRAM,

	/// SxSWP values
	(uint8*)BounceSoundTrack1SxSWP,

	/// SxMOD values
	(int8**)NULL
};
