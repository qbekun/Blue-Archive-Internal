#pragma once
#include "../unitysdk.h"

#define UNITYENGINE_AUDIOLOWPASSFILTER_SET_CUTOFFFREQUENCY_OFFSET UNITYSDK_OFFSET(0xA1DDB70)

namespace UnityEngine
{
	inline static constexpr unsigned int AudioLowPassFilter_TypeDefinitionIndex = 37473;

	class AudioLowPassFilter : public Il2CppObject
	{
	public:
		::System::Void set_cutoffFrequency(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOLOWPASSFILTER_SET_CUTOFFFREQUENCY_OFFSET))(arg, nullptr);
		}

	};
}

