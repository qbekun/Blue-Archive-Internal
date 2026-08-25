#pragma once
#include "unitysdk.h"

class UIPopup_System;

#define <>C__DISPLAYCLASS24_12_.CTOR_OFFSET UNITYSDK_OFFSET(0xE29280)
#define <>C__DISPLAYCLASS24_12__HANDLEWEBAPIERROR_B__29_OFFSET UNITYSDK_OFFSET(0xE29F40)

	inline static constexpr unsigned int <>c__DisplayClass24_12_TypeDefinitionIndex = 10405;

	class <>c__DisplayClass24_12 : public Il2CppObject
	{
	public:
		::System::String* message; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS24_12_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _HandleWebAPIError_b__29(UIPopup_System* arg)
		{
			((::System::Void(*)(UIPopup_System*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS24_12__HANDLEWEBAPIERROR_B__29_OFFSET))(arg, nullptr);
		}

	};

