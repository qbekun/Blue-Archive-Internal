#pragma once
#include "unitysdk.h"

class UIPopup_System;

#define <>C__DISPLAYCLASS132_0_.CTOR_OFFSET UNITYSDK_OFFSET(0xC713D0)
#define <>C__DISPLAYCLASS132_0__CALLMAINTENANCEBANNER_B__1_OFFSET UNITYSDK_OFFSET(0xC713E0)

	inline static constexpr unsigned int <>c__DisplayClass132_0_TypeDefinitionIndex = 8991;

	class <>c__DisplayClass132_0 : public Il2CppObject
	{
	public:
		::System::Boolean isTitle; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS132_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _CallMaintenanceBanner_b__1(UIPopup_System* arg)
		{
			((::System::Void(*)(UIPopup_System*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS132_0__CALLMAINTENANCEBANNER_B__1_OFFSET))(arg, nullptr);
		}

	};

