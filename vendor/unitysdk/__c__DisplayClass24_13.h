#pragma once
#include "unitysdk.h"

class UIPopup_System;

#define <>C__DISPLAYCLASS24_13_.CTOR_OFFSET UNITYSDK_OFFSET(0xE29290)
#define <>C__DISPLAYCLASS24_13__HANDLEWEBAPIERROR_B__30_OFFSET UNITYSDK_OFFSET(0xE29F70)

	inline static constexpr unsigned int <>c__DisplayClass24_13_TypeDefinitionIndex = 10406;

	class <>c__DisplayClass24_13 : public Il2CppObject
	{
	public:
		::System::String* message; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS24_13_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _HandleWebAPIError_b__30(UIPopup_System* arg)
		{
			((::System::Void(*)(UIPopup_System*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS24_13__HANDLEWEBAPIERROR_B__30_OFFSET))(arg, nullptr);
		}

	};

