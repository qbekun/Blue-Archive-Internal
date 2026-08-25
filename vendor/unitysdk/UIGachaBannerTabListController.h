#pragma once
#include "unitysdk.h"

class UIScrollView;
class UIGrid;
class UIGachaBannerTab;
class UIProgressBar;
namespace UnityEngine { class GameObject; }
class MXButton;
class UIWidget;

#define UIGACHABANNERTABLISTCONTROLLER_ADD_TABSELECTED_OFFSET UNITYSDK_OFFSET(0xA92370)
#define UIGACHABANNERTABLISTCONTROLLER_AWAKE_OFFSET UNITYSDK_OFFSET(0xA92410)
#define UIGACHABANNERTABLISTCONTROLLER_ONCLICKSHOWALLTABBUTTON_OFFSET UNITYSDK_OFFSET(0xA925E0)
#define UIGACHABANNERTABLISTCONTROLLER_SETTABSCROLLPOSITION_OFFSET UNITYSDK_OFFSET(0xA92880)
#define UIGACHABANNERTABLISTCONTROLLER_SELECTTAB_OFFSET UNITYSDK_OFFSET(0xA92FC0)
#define UIGACHABANNERTABLISTCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA931C0)
#define UIGACHABANNERTABLISTCONTROLLER_GETSELECTEDTABINDEX_OFFSET UNITYSDK_OFFSET(0xA93240)
#define UIGACHABANNERTABLISTCONTROLLER_SET_SELECTEDTAB_OFFSET UNITYSDK_OFFSET(0xA93290)
#define UIGACHABANNERTABLISTCONTROLLER_GET_SELECTEDTAB_OFFSET UNITYSDK_OFFSET(0xA932A0)
#define UIGACHABANNERTABLISTCONTROLLER_REMOVE_TABSELECTED_OFFSET UNITYSDK_OFFSET(0xA932B0)
#define UIGACHABANNERTABLISTCONTROLLER_SETDATA_OFFSET UNITYSDK_OFFSET(0xA93350)
#define UIGACHABANNERTABLISTCONTROLLER_SETSELECTEDTAB_OFFSET UNITYSDK_OFFSET(0xA93030)
#define UIGACHABANNERTABLISTCONTROLLER_ONTABCLICKED_OFFSET UNITYSDK_OFFSET(0xA93D50)

	inline static constexpr unsigned int UIGachaBannerTabListController_TypeDefinitionIndex = 7940;

	class UIGachaBannerTabListController : public Il2CppObject
	{
	public:
		UIScrollView* tabListScrollView; // 0x18
		UIGrid* tabListGrid; // 0x20
		UIGachaBannerTab* gachaBannerTabPrefab; // 0x28
		UIProgressBar* tabListScrollBar; // 0x30
		::UnityEngine::GameObject* decoLineRoot; // 0x38
		MXButton* showAllTabButton; // 0x40
		Il2CppObject* TabSelected; // 0x48
		Il2CppObject* tabList; // 0x50
		::System::Int32 activatedTabCount; // 0x58
		UIWidget* scrollBarThumbWidget; // 0x60
		::System::Int32 scrollBarThumbInitialWidth; // 0x68
		UIGachaBannerTab* _SelectedTab_k__BackingField; // 0x70

		::System::Void add_TabSelected(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIGACHABANNERTABLISTCONTROLLER_ADD_TABSELECTED_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGACHABANNERTABLISTCONTROLLER_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnClickShowAllTabButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGACHABANNERTABLISTCONTROLLER_ONCLICKSHOWALLTABBUTTON_OFFSET))(nullptr);
		}

		::System::Void SetTabScrollPosition(UIGachaBannerTab* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(UIGachaBannerTab*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIGACHABANNERTABLISTCONTROLLER_SETTABSCROLLPOSITION_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SelectTab(::System::Int32 arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIGACHABANNERTABLISTCONTROLLER_SELECTTAB_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGACHABANNERTABLISTCONTROLLER_.CTOR_OFFSET))(nullptr);
		}

		::System::Int32 GetSelectedTabIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGACHABANNERTABLISTCONTROLLER_GETSELECTEDTABINDEX_OFFSET))(nullptr);
		}

		::System::Void set_SelectedTab(UIGachaBannerTab* arg)
		{
			((::System::Void(*)(UIGachaBannerTab*, ::PVOID))((::PBYTE)hIl2Cpp + UIGACHABANNERTABLISTCONTROLLER_SET_SELECTEDTAB_OFFSET))(arg, nullptr);
		}

		UIGachaBannerTab* get_SelectedTab()
		{
			return ((UIGachaBannerTab*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGACHABANNERTABLISTCONTROLLER_GET_SELECTEDTAB_OFFSET))(nullptr);
		}

		::System::Void remove_TabSelected(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIGACHABANNERTABLISTCONTROLLER_REMOVE_TABSELECTED_OFFSET))(arg, nullptr);
		}

		::System::Void SetData(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIGACHABANNERTABLISTCONTROLLER_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void SetSelectedTab(UIGachaBannerTab* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(UIGachaBannerTab*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIGACHABANNERTABLISTCONTROLLER_SETSELECTEDTAB_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnTabClicked(UIGachaBannerTab* arg)
		{
			((::System::Void(*)(UIGachaBannerTab*, ::PVOID))((::PBYTE)hIl2Cpp + UIGACHABANNERTABLISTCONTROLLER_ONTABCLICKED_OFFSET))(arg, nullptr);
		}

	};

