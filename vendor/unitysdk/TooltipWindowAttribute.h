#pragma once
#include "unitysdk.h"

#define TOOLTIPWINDOWATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x2163480)
#define TOOLTIPWINDOWATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x2163490)

	inline static constexpr unsigned int TooltipWindowAttribute_TypeDefinitionIndex = 4009;

	class TooltipWindowAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + TOOLTIPWINDOWATTRIBUTE_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + TOOLTIPWINDOWATTRIBUTE_.CTOR_OFFSET))(str, arg, nullptr);
		}

	};

