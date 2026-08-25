#pragma once
#include "unitysdk.h"

class UIPopup_System;

#define <>C__DISPLAYCLASS24_6_.CTOR_OFFSET UNITYSDK_OFFSET(0xE29220)
#define <>C__DISPLAYCLASS24_6__HANDLEWEBAPIERROR_B__13_OFFSET UNITYSDK_OFFSET(0xE29A60)

	inline static constexpr unsigned int <>c__DisplayClass24_6_TypeDefinitionIndex = 10399;

	class <>c__DisplayClass24_6 : public Il2CppObject
	{
	public:
		::System::String* message; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS24_6_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _HandleWebAPIError_b__13(UIPopup_System* arg)
		{
			((::System::Void(*)(UIPopup_System*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS24_6__HANDLEWEBAPIERROR_B__13_OFFSET))(arg, nullptr);
		}

	};

