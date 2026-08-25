#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Audio { class AudioMixerGroup; }
namespace UnityEngine { class AudioRolloffMode; }
namespace UnityEngine { class AudioSource; }

#define MX_AUDIO_AUDIOSOURCEDATA_VALIDATEAUDIOCLIPS_OFFSET UNITYSDK_OFFSET(0x1D45270)
#define MX_AUDIO_AUDIOSOURCEDATA_SETAUDIOSOURCES_OFFSET UNITYSDK_OFFSET(0x1D45350)
#define MX_AUDIO_AUDIOSOURCEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D457F0)

namespace MX::Audio
{
	inline static constexpr unsigned int AudioSourceData_TypeDefinitionIndex = 20145;

	class AudioSourceData : public Il2CppObject
	{
	public:
		::System::Int32 GroupId; // 0x10
		::System::Boolean IgnoreInterruptDelay; // 0x14
		::System::Boolean IgnoreInterruptPlay; // 0x15
		::System::Boolean IgnoreVelocity; // 0x16
		::UnityEngine::Audio::AudioMixerGroup* AudioMixerGroup; // 0x18
		AudioMixerSnapshotInfo* AudioMixerSnapshot; // 0x20
		Il2CppObject* AudioClips; // 0x28
		Il2CppObject* CustomCurves; // 0x30
		::System::Boolean BypassEffects; // 0x38
		::System::Boolean BypassListenerEffects; // 0x39
		::System::Boolean BypassReverbZones; // 0x3A
		::System::Boolean Loop; // 0x3B
		::System::Int32 Priority; // 0x3C
		::System::Single Volume; // 0x40
		::System::Single Pitch; // 0x44
		::System::Int32 RandomPitchMin; // 0x48
		::System::Int32 RandomPitchMax; // 0x4C
		::System::Single Delay; // 0x50
		::System::Single StereoPan; // 0x54
		::System::Single SpatialBlend; // 0x58
		::System::Single ReverbZoneMix; // 0x5C
		::System::Single DopplerLevel; // 0x60
		::System::Single Spread; // 0x64
		::UnityEngine::AudioRolloffMode* VolumeRolloff; // 0x68
		::System::Single MinDistance; // 0x6C
		::System::Single MaxDistance; // 0x70

		::System::Boolean ValidateAudioClips()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOSOURCEDATA_VALIDATEAUDIOCLIPS_OFFSET))(nullptr);
		}

		::System::Void SetAudioSources(::UnityEngine::AudioSource* arg)
		{
			((::System::Void(*)(::UnityEngine::AudioSource*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOSOURCEDATA_SETAUDIOSOURCES_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOSOURCEDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

