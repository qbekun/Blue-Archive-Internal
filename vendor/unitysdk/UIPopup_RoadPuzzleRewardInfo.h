#pragma once
#include "unitysdk.h"

class MXButton;
class RoadPuzzleRewardInfoTabController;
class UIScrollView;
class UIGrid;
class UIEventTreasureRewardListItem;
class RewardType;

#define UIPOPUP_ROADPUZZLEREWARDINFO_ONCLOSED_OFFSET UNITYSDK_OFFSET(0x27BCAC0)
#define UIPOPUP_ROADPUZZLEREWARDINFO_AWAKE_OFFSET UNITYSDK_OFFSET(0x27BCBB0)
#define UIPOPUP_ROADPUZZLEREWARDINFO_ONOPENED_OFFSET UNITYSDK_OFFSET(0x27BCCE0)
#define UIPOPUP_ROADPUZZLEREWARDINFO_SETROUNDREWARD_OFFSET UNITYSDK_OFFSET(0x27BCE10)
#define UIPOPUP_ROADPUZZLEREWARDINFO_ONTABCHANGED_OFFSET UNITYSDK_OFFSET(0x27BD2C0)
#define UIPOPUP_ROADPUZZLEREWARDINFO_SETADDITIONALTILEREWARD_OFFSET UNITYSDK_OFFSET(0x27BD3C0)
#define UIPOPUP_ROADPUZZLEREWARDINFO_SETPLACEMENTREWARD_OFFSET UNITYSDK_OFFSET(0x27BD880)
#define UIPOPUP_ROADPUZZLEREWARDINFO_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x27BDC40)
#define UIPOPUP_ROADPUZZLEREWARDINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x27BDC50)
#define UIPOPUP_ROADPUZZLEREWARDINFO_ONCLICKCLOSE_OFFSET UNITYSDK_OFFSET(0x27BDC60)

	inline static constexpr unsigned int UIPopup_RoadPuzzleRewardInfo_TypeDefinitionIndex = 7552;

	class UIPopup_RoadPuzzleRewardInfo : public Il2CppObject
	{
	public:
		MXButton* CloseButton; // 0xD8
		RoadPuzzleRewardInfoTabController* TabController; // 0xE0
		::System::Int64 _eventContentId; // 0xE8
		UIScrollView* RewardListScrollView; // 0xF0
		UIGrid* RewardGrid; // 0xF8
		UIEventTreasureRewardListItem* rewardListPrefab; // 0x100
		Il2CppObject* existingRewardListItems; // 0x108

		::System::Void OnClosed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ROADPUZZLEREWARDINFO_ONCLOSED_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ROADPUZZLEREWARDINFO_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ROADPUZZLEREWARDINFO_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void SetRoundReward()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ROADPUZZLEREWARDINFO_SETROUNDREWARD_OFFSET))(nullptr);
		}

		::System::Void OnTabChanged(::System::Boolean arg, RewardType* arg2)
		{
			((::System::Void(*)(::System::Boolean, RewardType*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ROADPUZZLEREWARDINFO_ONTABCHANGED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetAdditionalTileReward()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ROADPUZZLEREWARDINFO_SETADDITIONALTILEREWARD_OFFSET))(nullptr);
		}

		::System::Void SetPlacementReward()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ROADPUZZLEREWARDINFO_SETPLACEMENTREWARD_OFFSET))(nullptr);
		}

		::System::Void Initialize(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ROADPUZZLEREWARDINFO_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ROADPUZZLEREWARDINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnClickClose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ROADPUZZLEREWARDINFO_ONCLICKCLOSE_OFFSET))(nullptr);
		}

	};

