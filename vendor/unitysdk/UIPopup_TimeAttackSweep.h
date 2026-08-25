#pragma once
#include "unitysdk.h"

class UILabel;
class UIScrollView;
class UIGrid;
class UISmallParcelCard;
class StageSweep;

#define UIPOPUP_TIMEATTACKSWEEP_GET_REWARDPARCELS_OFFSET UNITYSDK_OFFSET(0xB62800)
#define UIPOPUP_TIMEATTACKSWEEP_SETREWARDS_OFFSET UNITYSDK_OFFSET(0xB628C0)
#define UIPOPUP_TIMEATTACKSWEEP_ONOPENED_OFFSET UNITYSDK_OFFSET(0xB62D50)
#define UIPOPUP_TIMEATTACKSWEEP_CREATEPARCELS_OFFSET UNITYSDK_OFFSET(0xB62BE0)
#define UIPOPUP_TIMEATTACKSWEEP_.CTOR_OFFSET UNITYSDK_OFFSET(0xB63020)

	inline static constexpr unsigned int UIPopup_TimeAttackSweep_TypeDefinitionIndex = 8425;

	class UIPopup_TimeAttackSweep : public Il2CppObject
	{
	public:
		UILabel* TodayBestRecord; // 0xD8
		UIScrollView* RewardsScroll; // 0xE0
		UIGrid* RewardsGrid; // 0xE8
		UISmallParcelCard* RewardPrefab; // 0xF0
		StageSweep* SweepObject; // 0xF8
		Il2CppObject* _RewardParcels; // 0x100

		Il2CppObject* get_RewardParcels()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TIMEATTACKSWEEP_GET_REWARDPARCELS_OFFSET))(nullptr);
		}

		::System::Void SetRewards(Il2CppObject* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TIMEATTACKSWEEP_SETREWARDS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TIMEATTACKSWEEP_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void CreateParcels(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TIMEATTACKSWEEP_CREATEPARCELS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TIMEATTACKSWEEP_.CTOR_OFFSET))(nullptr);
		}

	};

