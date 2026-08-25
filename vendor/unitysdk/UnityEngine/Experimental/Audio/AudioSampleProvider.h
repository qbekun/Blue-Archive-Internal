#pragma once
#include "../../../unitysdk.h"

#define UNITYENGINE_EXPERIMENTAL_AUDIO_AUDIOSAMPLEPROVIDER_INVOKESAMPLEFRAMESAVAILABLE_OFFSET UNITYSDK_OFFSET(0xA1DF790)
#define UNITYENGINE_EXPERIMENTAL_AUDIO_AUDIOSAMPLEPROVIDER_INVOKESAMPLEFRAMESOVERFLOW_OFFSET UNITYSDK_OFFSET(0xA1DF7B0)

namespace UnityEngine::Experimental::Audio
{
	inline static constexpr unsigned int AudioSampleProvider_TypeDefinitionIndex = 37485;

	class AudioSampleProvider : public Il2CppObject
	{
	public:
		SampleFramesHandler* sampleFramesAvailable; // 0x10
		SampleFramesHandler* sampleFramesOverflow; // 0x18

		::System::Void InvokeSampleFramesAvailable(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_AUDIO_AUDIOSAMPLEPROVIDER_INVOKESAMPLEFRAMESAVAILABLE_OFFSET))(arg, nullptr);
		}

		::System::Void InvokeSampleFramesOverflow(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_AUDIO_AUDIOSAMPLEPROVIDER_INVOKESAMPLEFRAMESOVERFLOW_OFFSET))(arg, nullptr);
		}

	};
}

