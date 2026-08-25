#pragma once
#include "unitysdk.h"

class UICampaignVictory;
class UIRewardPopup;

#define <>C__DISPLAYCLASS23_2_.CTOR_OFFSET UNITYSDK_OFFSET(0x22B1230)
#define <>C__DISPLAYCLASS23_2__SHOWPOPUP_B__4_OFFSET UNITYSDK_OFFSET(0x22B1240)

	inline static constexpr unsigned int <>c__DisplayClass23_2_TypeDefinitionIndex = 4767;

	class <>c__DisplayClass23_2 : public Il2CppObject
	{
	public:
		::System::Boolean complete; // 0x10
		UICampaignVictory* __4__this; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS23_2_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _ShowPopup_b__4(UIRewardPopup* arg)
		{
			((::System::Void(*)(UIRewardPopup*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS23_2__SHOWPOPUP_B__4_OFFSET))(arg, nullptr);
		}

	};

