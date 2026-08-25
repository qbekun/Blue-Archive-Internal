#pragma once
#include "../unitysdk.h"

#define ANIMANCER_THRESHOLDLABELATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x4AC0B0)

namespace Animancer
{
	inline static constexpr unsigned int ThresholdLabelAttribute_TypeDefinitionIndex = 35133;

	class ThresholdLabelAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_THRESHOLDLABELATTRIBUTE_.CTOR_OFFSET))(str, nullptr);
		}

	};
}

