#pragma once
#include "unitysdk.h"

class UIMultiFloorRaidRewardSectionListScrollViewController;
class UIMultiFloorRaidRewardFloorListScrollViewController;
class UILabel;

#define UIPOPUP_MULTIFLOORRAIDREWARD_ONOPENED_OFFSET UNITYSDK_OFFSET(0x26ADC60)
#define UIPOPUP_MULTIFLOORRAIDREWARD_ONCLICKELEMENT_OFFSET UNITYSDK_OFFSET(0x26AE400)
#define UIPOPUP_MULTIFLOORRAIDREWARD_.CTOR_OFFSET UNITYSDK_OFFSET(0x26AE510)

	inline static constexpr unsigned int UIPopup_MultiFloorRaidReward_TypeDefinitionIndex = 6879;

	class UIPopup_MultiFloorRaidReward : public Il2CppObject
	{
	public:
		UIMultiFloorRaidRewardSectionListScrollViewController* rewardSectionScrollView; // 0xD8
		UIMultiFloorRaidRewardFloorListScrollViewController* RewardListScrollView; // 0xE0
		UILabel* RecordLabel; // 0xE8
		UILabel* DateLabel; // 0xF0

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MULTIFLOORRAIDREWARD_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickElement(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MULTIFLOORRAIDREWARD_ONCLICKELEMENT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MULTIFLOORRAIDREWARD_.CTOR_OFFSET))(nullptr);
		}

	};

