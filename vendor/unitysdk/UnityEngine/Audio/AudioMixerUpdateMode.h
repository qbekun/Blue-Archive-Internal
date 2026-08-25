#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Audio { class AudioMixerUpdateMode; }

namespace UnityEngine::Audio
{
	inline static constexpr unsigned int AudioMixerUpdateMode_TypeDefinitionIndex = 37476;

	class AudioMixerUpdateMode : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::Audio::AudioMixerUpdateMode* Normal; // 0x0
		::UnityEngine::Audio::AudioMixerUpdateMode* UnscaledTime; // 0x0

	};
}

