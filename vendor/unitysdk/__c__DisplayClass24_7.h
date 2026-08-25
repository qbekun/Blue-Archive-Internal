#pragma once
#include "unitysdk.h"

class UIPopup_System;

#define <>C__DISPLAYCLASS24_7_.CTOR_OFFSET UNITYSDK_OFFSET(0xE29230)
#define <>C__DISPLAYCLASS24_7__HANDLEWEBAPIERROR_B__17_OFFSET UNITYSDK_OFFSET(0xE29B80)

	inline static constexpr unsigned int <>c__DisplayClass24_7_TypeDefinitionIndex = 10400;

	class <>c__DisplayClass24_7 : public Il2CppObject
	{
	public:
		::System::String* message; // 0x10
		::System::Action* action; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS24_7_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _HandleWebAPIError_b__17(UIPopup_System* arg)
		{
			((::System::Void(*)(UIPopup_System*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS24_7__HANDLEWEBAPIERROR_B__17_OFFSET))(arg, nullptr);
		}

	};

