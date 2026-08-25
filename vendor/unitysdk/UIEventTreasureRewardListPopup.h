#pragma once
#include "unitysdk.h"

class MXButton;
class IntTabController;
class UIEventTreasureRewardListItem;
class UIScrollView;
class UIGrid;
class UILabel;

#define UIEVENTTREASUREREWARDLISTPOPUP_ONCLICKBACK_OFFSET UNITYSDK_OFFSET(0x24CD580)
#define UIEVENTTREASUREREWARDLISTPOPUP_AWAKE_OFFSET UNITYSDK_OFFSET(0x24CD5A0)
#define UIEVENTTREASUREREWARDLISTPOPUP_ONCHANGEDREWARDINFOTAB_OFFSET UNITYSDK_OFFSET(0x24CD7A0)
#define UIEVENTTREASUREREWARDLISTPOPUP_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x24CDD20)
#define UIEVENTTREASUREREWARDLISTPOPUP_.CTOR_OFFSET UNITYSDK_OFFSET(0x24CE490)

	inline static constexpr unsigned int UIEventTreasureRewardListPopup_TypeDefinitionIndex = 5930;

	class UIEventTreasureRewardListPopup : public Il2CppObject
	{
	public:
		MXButton* backButton; // 0xD8
		IntTabController* treasureRewardTab; // 0xE0
		UIEventTreasureRewardListItem* treasureRewardListItemPrefab; // 0xE8
		UIScrollView* scrollView; // 0xF0
		UIGrid* grid; // 0xF8
		UILabel* subTitleLabel; // 0x100
		Il2CppObject* treasureRewardItems; // 0x108
		Il2CppObject* treasureRewardInfos; // 0x110
		Il2CppObject* treasureCellRewardInfos; // 0x118
		::System::Int32 loopRound; // 0x120

		::System::Void OnClickBack()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTTREASUREREWARDLISTPOPUP_ONCLICKBACK_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTTREASUREREWARDLISTPOPUP_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnChangedRewardInfoTab(::System::Boolean arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::Boolean, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTTREASUREREWARDLISTPOPUP_ONCHANGEDREWARDINFOTAB_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Initialize(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTTREASUREREWARDLISTPOPUP_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTTREASUREREWARDLISTPOPUP_.CTOR_OFFSET))(nullptr);
		}

	};

