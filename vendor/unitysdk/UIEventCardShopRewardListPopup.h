#pragma once
#include "unitysdk.h"

class MXButton;
class UIEventCardShopRewardListItem;
class UIScrollView;
class UIGrid;

#define UIEVENTCARDSHOPREWARDLISTPOPUP_ONCLOSED_OFFSET UNITYSDK_OFFSET(0x2490050)
#define UIEVENTCARDSHOPREWARDLISTPOPUP_INITIALIZED_OFFSET UNITYSDK_OFFSET(0x2488CF0)
#define UIEVENTCARDSHOPREWARDLISTPOPUP_ONOPENED_OFFSET UNITYSDK_OFFSET(0x2490090)
#define UIEVENTCARDSHOPREWARDLISTPOPUP_ONCLICKCLOSEBTN_OFFSET UNITYSDK_OFFSET(0x24900C0)
#define UIEVENTCARDSHOPREWARDLISTPOPUP_AWAKE_OFFSET UNITYSDK_OFFSET(0x2490150)
#define UIEVENTCARDSHOPREWARDLISTPOPUP_.CTOR_OFFSET UNITYSDK_OFFSET(0x2490280)

	inline static constexpr unsigned int UIEventCardShopRewardListPopup_TypeDefinitionIndex = 5722;

	class UIEventCardShopRewardListPopup : public Il2CppObject
	{
	public:
		MXButton* closeBtn; // 0xD8
		UIEventCardShopRewardListItem* rewardListItemPrefab; // 0xE0
		UIScrollView* scrollView; // 0xE8
		UIGrid* grid; // 0xF0
		::System::Action* closeCallback; // 0xF8

		::System::Void OnClosed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCARDSHOPREWARDLISTPOPUP_ONCLOSED_OFFSET))(nullptr);
		}

		::System::Void Initialized(::System::Int64 arg, ::System::Action* arg2)
		{
			((::System::Void(*)(::System::Int64, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCARDSHOPREWARDLISTPOPUP_INITIALIZED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCARDSHOPREWARDLISTPOPUP_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickCloseBtn()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCARDSHOPREWARDLISTPOPUP_ONCLICKCLOSEBTN_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCARDSHOPREWARDLISTPOPUP_AWAKE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCARDSHOPREWARDLISTPOPUP_.CTOR_OFFSET))(nullptr);
		}

	};

