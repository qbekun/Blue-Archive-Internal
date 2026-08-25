#pragma once
#include "unitysdk.h"

class UIPopup_System;

#define <>C__DISPLAYCLASS75_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x1448B00)
#define <>C__DISPLAYCLASS75_0__SHOWFAILEDLOADMESSAGEPOPUP_B__0_OFFSET UNITYSDK_OFFSET(0x144A7E0)

	inline static constexpr unsigned int <>c__DisplayClass75_0_TypeDefinitionIndex = 14974;

	class <>c__DisplayClass75_0 : public Il2CppObject
	{
	public:
		::System::String* title; // 0x10
		::System::String* message; // 0x18
		::System::String* ok; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS75_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _ShowFailedLoadMessagePopup_b__0(UIPopup_System* arg)
		{
			((::System::Void(*)(UIPopup_System*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS75_0__SHOWFAILEDLOADMESSAGEPOPUP_B__0_OFFSET))(arg, nullptr);
		}

	};

