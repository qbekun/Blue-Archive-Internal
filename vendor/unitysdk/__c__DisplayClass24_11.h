#pragma once
#include "unitysdk.h"

class UIPopup_System;

#define <>C__DISPLAYCLASS24_11_.CTOR_OFFSET UNITYSDK_OFFSET(0xE29270)
#define <>C__DISPLAYCLASS24_11__HANDLEWEBAPIERROR_B__26_OFFSET UNITYSDK_OFFSET(0xE29E20)

	inline static constexpr unsigned int <>c__DisplayClass24_11_TypeDefinitionIndex = 10404;

	class <>c__DisplayClass24_11 : public Il2CppObject
	{
	public:
		::System::String* message; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS24_11_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _HandleWebAPIError_b__26(UIPopup_System* arg)
		{
			((::System::Void(*)(UIPopup_System*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS24_11__HANDLEWEBAPIERROR_B__26_OFFSET))(arg, nullptr);
		}

	};

