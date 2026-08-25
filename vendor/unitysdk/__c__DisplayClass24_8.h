#pragma once
#include "unitysdk.h"

class UIPopup_System;

#define <>C__DISPLAYCLASS24_8_.CTOR_OFFSET UNITYSDK_OFFSET(0xE29240)
#define <>C__DISPLAYCLASS24_8__HANDLEWEBAPIERROR_B__19_OFFSET UNITYSDK_OFFSET(0xE29BB0)

	inline static constexpr unsigned int <>c__DisplayClass24_8_TypeDefinitionIndex = 10401;

	class <>c__DisplayClass24_8 : public Il2CppObject
	{
	public:
		::System::String* message; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS24_8_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _HandleWebAPIError_b__19(UIPopup_System* arg)
		{
			((::System::Void(*)(UIPopup_System*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS24_8__HANDLEWEBAPIERROR_B__19_OFFSET))(arg, nullptr);
		}

	};

