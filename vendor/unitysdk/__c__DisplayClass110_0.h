#pragma once
#include "unitysdk.h"

class UIBattle;
class UIPopup_System;

#define <>C__DISPLAYCLASS110_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x2224180)
#define <>C__DISPLAYCLASS110_0__ONSTORYSTRATEGYBATTLESKIPACTIVECLICK_B__0_OFFSET UNITYSDK_OFFSET(0x222F3D0)

	inline static constexpr unsigned int <>c__DisplayClass110_0_TypeDefinitionIndex = 4431;

	class <>c__DisplayClass110_0 : public Il2CppObject
	{
	public:
		::System::String* message; // 0x10
		UIBattle* __4__this; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS110_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _OnStoryStrategyBattleSkipActiveClick_b__0(UIPopup_System* arg)
		{
			((::System::Void(*)(UIPopup_System*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS110_0__ONSTORYSTRATEGYBATTLESKIPACTIVECLICK_B__0_OFFSET))(arg, nullptr);
		}

	};

