#pragma once
#include "../unitysdk.h"

#define UNITYENGINE_AUDIOHIGHPASSFILTER_SET_CUTOFFFREQUENCY_OFFSET UNITYSDK_OFFSET(0xA1DDBC0)

namespace UnityEngine
{
	inline static constexpr unsigned int AudioHighPassFilter_TypeDefinitionIndex = 37474;

	class AudioHighPassFilter : public Il2CppObject
	{
	public:
		::System::Void set_cutoffFrequency(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOHIGHPASSFILTER_SET_CUTOFFFREQUENCY_OFFSET))(arg, nullptr);
		}

	};
}

