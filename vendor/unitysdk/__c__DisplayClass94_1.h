#pragma once
#include "unitysdk.h"

class UIVictory;
class UILevelUpPopup;

#define <>C__DISPLAYCLASS94_1_.CTOR_OFFSET UNITYSDK_OFFSET(0xBB8790)
#define <>C__DISPLAYCLASS94_1__SHOWPOPUP_B__2_OFFSET UNITYSDK_OFFSET(0xBB87A0)

	inline static constexpr unsigned int <>c__DisplayClass94_1_TypeDefinitionIndex = 8584;

	class <>c__DisplayClass94_1 : public Il2CppObject
	{
	public:
		::System::Boolean complete; // 0x10
		UIVictory* __4__this; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS94_1_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _ShowPopup_b__2(UILevelUpPopup* arg)
		{
			((::System::Void(*)(UILevelUpPopup*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS94_1__SHOWPOPUP_B__2_OFFSET))(arg, nullptr);
		}

	};

