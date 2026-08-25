#pragma once
#include "unitysdk.h"

class UIVictory;
class UIRewardPopup;

#define <>C__DISPLAYCLASS94_3_.CTOR_OFFSET UNITYSDK_OFFSET(0xBB8B50)
#define <>C__DISPLAYCLASS94_3__SHOWPOPUP_B__6_OFFSET UNITYSDK_OFFSET(0xBB8B60)

	inline static constexpr unsigned int <>c__DisplayClass94_3_TypeDefinitionIndex = 8586;

	class <>c__DisplayClass94_3 : public Il2CppObject
	{
	public:
		::System::Boolean complete; // 0x10
		UIVictory* __4__this; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS94_3_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _ShowPopup_b__6(UIRewardPopup* arg)
		{
			((::System::Void(*)(UIRewardPopup*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS94_3__SHOWPOPUP_B__6_OFFSET))(arg, nullptr);
		}

	};

