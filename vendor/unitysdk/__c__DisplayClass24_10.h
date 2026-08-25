#pragma once
#include "unitysdk.h"

class UIPopup_System;

#define <>C__DISPLAYCLASS24_10_.CTOR_OFFSET UNITYSDK_OFFSET(0xE29260)
#define <>C__DISPLAYCLASS24_10__HANDLEWEBAPIERROR_B__23_OFFSET UNITYSDK_OFFSET(0xE29D00)

	inline static constexpr unsigned int <>c__DisplayClass24_10_TypeDefinitionIndex = 10403;

	class <>c__DisplayClass24_10 : public Il2CppObject
	{
	public:
		::System::String* message; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS24_10_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _HandleWebAPIError_b__23(UIPopup_System* arg)
		{
			((::System::Void(*)(UIPopup_System*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS24_10__HANDLEWEBAPIERROR_B__23_OFFSET))(arg, nullptr);
		}

	};

