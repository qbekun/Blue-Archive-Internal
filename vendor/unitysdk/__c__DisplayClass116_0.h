#pragma once
#include "unitysdk.h"

class UICampaign;
class UIPopup_System;

#define <>C__DISPLAYCLASS116_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x22A8390)
#define <>C__DISPLAYCLASS116_0__ONCLICKCAMPAIGNSTART_B__1_OFFSET UNITYSDK_OFFSET(0x22A83A0)

	inline static constexpr unsigned int <>c__DisplayClass116_0_TypeDefinitionIndex = 4745;

	class <>c__DisplayClass116_0 : public Il2CppObject
	{
	public:
		::System::String* message; // 0x10
		UICampaign* __4__this; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS116_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _OnClickCampaignStart_b__1(UIPopup_System* arg)
		{
			((::System::Void(*)(UIPopup_System*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS116_0__ONCLICKCAMPAIGNSTART_B__1_OFFSET))(arg, nullptr);
		}

	};

