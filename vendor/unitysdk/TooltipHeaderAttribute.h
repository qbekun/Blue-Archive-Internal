#pragma once
#include "unitysdk.h"

#define TOOLTIPHEADERATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x2163450)
#define TOOLTIPHEADERATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x2163460)
#define TOOLTIPHEADERATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x2163470)

	inline static constexpr unsigned int TooltipHeaderAttribute_TypeDefinitionIndex = 4008;

	class TooltipHeaderAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Void .ctor(::System::String* str, ::System::String* str2)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + TOOLTIPHEADERATTRIBUTE_.CTOR_OFFSET))(str, str2, nullptr);
		}

		::System::Void .ctor(::System::Boolean arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Boolean, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + TOOLTIPHEADERATTRIBUTE_.CTOR_OFFSET))(arg, str, nullptr);
		}

		::System::Void .ctor(::System::Boolean arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + TOOLTIPHEADERATTRIBUTE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

	};

