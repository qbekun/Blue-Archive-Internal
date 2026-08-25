#pragma once
#include "unitysdk.h"

class BattleAdaptationInfo;
class MXButton;
class UIPopup_Tooltip;

#define <>C__DISPLAYCLASS109_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x2315690)
#define <>C__DISPLAYCLASS109_0__ONCLICKBATTLEADAPTATIONBUTTON_B__0_OFFSET UNITYSDK_OFFSET(0x231C600)
#define <>C__DISPLAYCLASS109_0__ONCLICKBATTLEADAPTATIONBUTTON_B__1_OFFSET UNITYSDK_OFFSET(0x231C770)

	inline static constexpr unsigned int <>c__DisplayClass109_0_TypeDefinitionIndex = 4903;

	class <>c__DisplayClass109_0 : public Il2CppObject
	{
	public:
		BattleAdaptationInfo* info; // 0x10
		MXButton* button; // 0x18
		Il2CppObject* __9__1; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS109_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _OnClickBattleAdaptationButton_b__0(UIPopup_Tooltip* arg)
		{
			((::System::Void(*)(UIPopup_Tooltip*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS109_0__ONCLICKBATTLEADAPTATIONBUTTON_B__0_OFFSET))(arg, nullptr);
		}

		::System::Void _OnClickBattleAdaptationButton_b__1(UIPopup_Tooltip* arg)
		{
			((::System::Void(*)(UIPopup_Tooltip*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS109_0__ONCLICKBATTLEADAPTATIONBUTTON_B__1_OFFSET))(arg, nullptr);
		}

	};

