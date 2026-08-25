#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_TIMELINE_CUSTOMSTYLEATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1AB820)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int CustomStyleAttribute_TypeDefinitionIndex = 36327;

	class CustomStyleAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::String* ussStyle; // 0x10

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_CUSTOMSTYLEATTRIBUTE_.CTOR_OFFSET))(str, nullptr);
		}

	};
}

