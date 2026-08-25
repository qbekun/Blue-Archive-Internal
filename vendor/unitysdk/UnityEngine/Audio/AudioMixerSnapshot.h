#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Audio { class AudioMixer; }

#define UNITYENGINE_AUDIO_AUDIOMIXERSNAPSHOT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1DF0C0)
#define UNITYENGINE_AUDIO_AUDIOMIXERSNAPSHOT_GET_AUDIOMIXER_OFFSET UNITYSDK_OFFSET(0xA1DEAA0)
#define UNITYENGINE_AUDIO_AUDIOMIXERSNAPSHOT_TRANSITIONTO_OFFSET UNITYSDK_OFFSET(0xA1DF110)

namespace UnityEngine::Audio
{
	inline static constexpr unsigned int AudioMixerSnapshot_TypeDefinitionIndex = 37480;

	class AudioMixerSnapshot : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOMIXERSNAPSHOT_.CTOR_OFFSET))(nullptr);
		}

		::UnityEngine::Audio::AudioMixer* get_audioMixer()
		{
			return (return (::UnityEngine::Audio::AudioMixer*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOMIXERSNAPSHOT_GET_AUDIOMIXER_OFFSET))(nullptr);
		}

		::System::Void TransitionTo(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOMIXERSNAPSHOT_TRANSITIONTO_OFFSET))(arg, nullptr);
		}

	};
}

