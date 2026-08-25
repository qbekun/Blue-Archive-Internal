#pragma once
#include "unitysdk.h"

class UITimeAttackSeasonRewardList;

#define UIPOPUP_TIMEATTACKSEASONREWARD_ONOPENED_OFFSET UNITYSDK_OFFSET(0xB62030)
#define UIPOPUP_TIMEATTACKSEASONREWARD_.CTOR_OFFSET UNITYSDK_OFFSET(0xB62710)
#define UIPOPUP_TIMEATTACKSEASONREWARD_SETLIST_OFFSET UNITYSDK_OFFSET(0xB62050)

	inline static constexpr unsigned int UIPopup_TimeAttackSeasonReward_TypeDefinitionIndex = 8424;

	class UIPopup_TimeAttackSeasonReward : public Il2CppObject
	{
	public:
		UITimeAttackSeasonRewardList* RewardList; // 0xD8

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TIMEATTACKSEASONREWARD_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TIMEATTACKSEASONREWARD_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetList()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TIMEATTACKSEASONREWARD_SETLIST_OFFSET))(nullptr);
		}

	};

