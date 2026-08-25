#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Audio { class AudioMixer; }

#define UNITYENGINE_AUDIO_AUDIOMIXERGROUP_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1DECF0)
#define UNITYENGINE_AUDIO_AUDIOMIXERGROUP_GET_AUDIOMIXER_OFFSET UNITYSDK_OFFSET(0xA1DED40)

namespace UnityEngine::Audio
{
	inline static constexpr unsigned int AudioMixerGroup_TypeDefinitionIndex = 37478;

	class AudioMixerGroup : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOMIXERGROUP_.CTOR_OFFSET))(nullptr);
		}

		::UnityEngine::Audio::AudioMixer* get_audioMixer()
		{
			return (return (::UnityEngine::Audio::AudioMixer*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOMIXERGROUP_GET_AUDIOMIXER_OFFSET))(nullptr);
		}

	};
}

