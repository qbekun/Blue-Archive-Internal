#pragma once
#include "unitysdk.h"

class MXButton;
class UIScrollView;
class UIGrid;
class UIGachaBannerTab;

#define UIPOPUP_GACHASLOTALLLIST_SETDATA_OFFSET UNITYSDK_OFFSET(0x25C2620)
#define UIPOPUP_GACHASLOTALLLIST_ONTABCLICKED_OFFSET UNITYSDK_OFFSET(0x25C2A20)
#define UIPOPUP_GACHASLOTALLLIST_ONCLICKCLOSEBUTTON_OFFSET UNITYSDK_OFFSET(0x25C2A70)
#define UIPOPUP_GACHASLOTALLLIST_AWAKE_OFFSET UNITYSDK_OFFSET(0x25C2B00)
#define UIPOPUP_GACHASLOTALLLIST_ONCLICKCANCELBUTTON_OFFSET UNITYSDK_OFFSET(0x25C2DF0)
#define UIPOPUP_GACHASLOTALLLIST_SETSELECTEDTAB_OFFSET UNITYSDK_OFFSET(0x25C2940)
#define UIPOPUP_GACHASLOTALLLIST_.CTOR_OFFSET UNITYSDK_OFFSET(0x25C36F0)
#define UIPOPUP_GACHASLOTALLLIST_SETTABSCROLLPOSITION_OFFSET UNITYSDK_OFFSET(0x25C2E80)
#define UIPOPUP_GACHASLOTALLLIST_ONCLICKOKBUTTON_OFFSET UNITYSDK_OFFSET(0x25C3770)

	inline static constexpr unsigned int UIPopup_GachaSlotAllList_TypeDefinitionIndex = 6302;

	class UIPopup_GachaSlotAllList : public Il2CppObject
	{
	public:
		MXButton* closeButton; // 0xD8
		UIScrollView* tabListScrollView; // 0xE0
		UIGrid* tabListGrid; // 0xE8
		UIGachaBannerTab* gachaBannerTabPrefab; // 0xF0
		MXButton* cancelButton; // 0xF8
		MXButton* okButton; // 0x100
		Il2CppObject* tabList; // 0x108
		::System::Int32 activatedTabCount; // 0x110
		::System::Int64 selectedShopRecuitId; // 0x118
		Il2CppObject* tabSelectedCallback; // 0x120

		::System::Void SetData(Il2CppObject* arg, ::System::Int64 arg2, Il2CppObject* arg3)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Int64, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_GACHASLOTALLLIST_SETDATA_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void OnTabClicked(UIGachaBannerTab* arg)
		{
			((::System::Void(*)(UIGachaBannerTab*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_GACHASLOTALLLIST_ONTABCLICKED_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickCloseButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_GACHASLOTALLLIST_ONCLICKCLOSEBUTTON_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_GACHASLOTALLLIST_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnClickCancelButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_GACHASLOTALLLIST_ONCLICKCANCELBUTTON_OFFSET))(nullptr);
		}

		::System::Void SetSelectedTab(::System::Int64 arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_GACHASLOTALLLIST_SETSELECTEDTAB_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_GACHASLOTALLLIST_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetTabScrollPosition(::System::Int64 arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_GACHASLOTALLLIST_SETTABSCROLLPOSITION_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnClickOkButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_GACHASLOTALLLIST_ONCLICKOKBUTTON_OFFSET))(nullptr);
		}

	};

