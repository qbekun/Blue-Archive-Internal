#pragma once
#include "unitysdk.h"

class UIPopup_System;

#define <>C__DISPLAYCLASS24_9_.CTOR_OFFSET UNITYSDK_OFFSET(0xE29250)
#define <>C__DISPLAYCLASS24_9__HANDLEWEBAPIERROR_B__22_OFFSET UNITYSDK_OFFSET(0xE29CD0)

	inline static constexpr unsigned int <>c__DisplayClass24_9_TypeDefinitionIndex = 10402;

	class <>c__DisplayClass24_9 : public Il2CppObject
	{
	public:
		::System::String* message; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS24_9_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _HandleWebAPIError_b__22(UIPopup_System* arg)
		{
			((::System::Void(*)(UIPopup_System*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS24_9__HANDLEWEBAPIERROR_B__22_OFFSET))(arg, nullptr);
		}

	};

