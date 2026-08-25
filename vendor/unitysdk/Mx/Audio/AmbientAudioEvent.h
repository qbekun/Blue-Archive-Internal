#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class AudioClip; }
namespace UnityEngine { class AudioSource; }

#define MX_AUDIO_AMBIENTAUDIOEVENT_SETAUDIOSOURCEEXCEPTCLIP_OFFSET UNITYSDK_OFFSET(0x1D43A70)
#define MX_AUDIO_AMBIENTAUDIOEVENT_SETAUDIOSOURCE_OFFSET UNITYSDK_OFFSET(0x1D43AC0)
#define MX_AUDIO_AMBIENTAUDIOEVENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D43B20)

namespace MX::Audio
{
	inline static constexpr unsigned int AmbientAudioEvent_TypeDefinitionIndex = 20132;

	class AmbientAudioEvent : public Il2CppObject
	{
	public:
		CommandType* Command; // 0x18
		::System::Single CrossFadeDuration; // 0x1C
		::UnityEngine::AudioClip* Clip; // 0x20
		::System::Boolean Loop; // 0x28
		::System::Single Volume; // 0x2C
		::System::Single Pitch; // 0x30

		::System::Void SetAudioSourceExceptClip(::UnityEngine::AudioSource* arg)
		{
			((::System::Void(*)(::UnityEngine::AudioSource*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AMBIENTAUDIOEVENT_SETAUDIOSOURCEEXCEPTCLIP_OFFSET))(arg, nullptr);
		}

		::System::Void SetAudioSource(::UnityEngine::AudioSource* arg)
		{
			((::System::Void(*)(::UnityEngine::AudioSource*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AMBIENTAUDIOEVENT_SETAUDIOSOURCE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AMBIENTAUDIOEVENT_.CTOR_OFFSET))(nullptr);
		}

	};
}

