#pragma once
#include "unitysdk.h"

class MXButton;
class IntTabController;
class UIEventCuleRewardListItem;
class UIScrollView;
class UIGrid;
class UILabel;

#define UIEVENTCULEREWARDLISTPOPUP_ONCLICKBACK_OFFSET UNITYSDK_OFFSET(0x249E710)
#define UIEVENTCULEREWARDLISTPOPUP_AWAKE_OFFSET UNITYSDK_OFFSET(0x249E730)
#define UIEVENTCULEREWARDLISTPOPUP_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x2499DD0)
#define UIEVENTCULEREWARDLISTPOPUP_.CTOR_OFFSET UNITYSDK_OFFSET(0x249E930)
#define UIEVENTCULEREWARDLISTPOPUP_ONCHANGEDREWARDINFOTAB_OFFSET UNITYSDK_OFFSET(0x249EAB0)

	inline static constexpr unsigned int UIEventCuleRewardListPopup_TypeDefinitionIndex = 5774;

	class UIEventCuleRewardListPopup : public Il2CppObject
	{
	public:
		MXButton* backButton; // 0xD8
		IntTabController* culeRewardTab; // 0xE0
		UIEventCuleRewardListItem* culeRewardListItemPrefab; // 0xE8
		UIScrollView* scrollView; // 0xF0
		UIGrid* grid; // 0xF8
		UILabel* subTitleLabel; // 0x100
		Il2CppObject* _culeRewardItems; // 0x108
		Il2CppObject* _culeRoundRewardInfos; // 0x110
		Il2CppObject* _culeInfos; // 0x118
		Il2CppObject* _roundInfos; // 0x120

		::System::Void OnClickBack()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCULEREWARDLISTPOPUP_ONCLICKBACK_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCULEREWARDLISTPOPUP_AWAKE_OFFSET))(nullptr);
		}

		::System::Void Initialize(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCULEREWARDLISTPOPUP_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCULEREWARDLISTPOPUP_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnChangedRewardInfoTab(::System::Boolean arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::Boolean, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCULEREWARDLISTPOPUP_ONCHANGEDREWARDINFOTAB_OFFSET))(arg, arg2, nullptr);
		}

	};

