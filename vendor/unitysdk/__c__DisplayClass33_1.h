#pragma once
#include "unitysdk.h"

class UIPopup_System;

#define <>C__DISPLAYCLASS33_1_.CTOR_OFFSET UNITYSDK_OFFSET(0xBE84C0)
#define <>C__DISPLAYCLASS33_1__WORLDRAIDENTER_B__6_OFFSET UNITYSDK_OFFSET(0xBE96B0)

	inline static constexpr unsigned int <>c__DisplayClass33_1_TypeDefinitionIndex = 8719;

	class <>c__DisplayClass33_1 : public Il2CppObject
	{
	public:
		::System::String* message; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS33_1_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _WorldRaidEnter_b__6(UIPopup_System* arg)
		{
			((::System::Void(*)(UIPopup_System*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS33_1__WORLDRAIDENTER_B__6_OFFSET))(arg, nullptr);
		}

	};

