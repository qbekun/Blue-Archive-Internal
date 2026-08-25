#pragma once
#include "unitysdk.h"

class UIScrollView;
class UIGrid;
class UIGachaBannerTab;

#define UIGACHABANNERTABSELECTOR_SETDATA_OFFSET UNITYSDK_OFFSET(0xA88BC0)
#define UIGACHABANNERTABSELECTOR_GET_SELECTEDTAB_OFFSET UNITYSDK_OFFSET(0xA94050)
#define UIGACHABANNERTABSELECTOR_ADD_TABSELECTED_OFFSET UNITYSDK_OFFSET(0xA8B6F0)
#define UIGACHABANNERTABSELECTOR_ONTABCLICKED_OFFSET UNITYSDK_OFFSET(0xA94060)
#define UIGACHABANNERTABSELECTOR_SET_SELECTEDTAB_OFFSET UNITYSDK_OFFSET(0xA942A0)
#define UIGACHABANNERTABSELECTOR_SETSELECTEDTAB_OFFSET UNITYSDK_OFFSET(0xA94100)
#define UIGACHABANNERTABSELECTOR_.CTOR_OFFSET UNITYSDK_OFFSET(0xA942B0)
#define UIGACHABANNERTABSELECTOR_REMOVE_TABSELECTED_OFFSET UNITYSDK_OFFSET(0xA94330)
#define UIGACHABANNERTABSELECTOR_SELECTTAB_OFFSET UNITYSDK_OFFSET(0xA88FA0)

	inline static constexpr unsigned int UIGachaBannerTabSelector_TypeDefinitionIndex = 7941;

	class UIGachaBannerTabSelector : public Il2CppObject
	{
	public:
		UIScrollView* tabListScrollView; // 0x18
		UIGrid* tabListGrid; // 0x20
		UIGachaBannerTab* gachaBannerTabPrefab; // 0x28
		Il2CppObject* TabSelected; // 0x30
		Il2CppObject* tabList; // 0x38
		::System::Int32 activatedTabCount; // 0x40
		UIGachaBannerTab* _SelectedTab_k__BackingField; // 0x48

		::System::Void SetData(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIGACHABANNERTABSELECTOR_SETDATA_OFFSET))(arg, nullptr);
		}

		UIGachaBannerTab* get_SelectedTab()
		{
			return ((UIGachaBannerTab*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGACHABANNERTABSELECTOR_GET_SELECTEDTAB_OFFSET))(nullptr);
		}

		::System::Void add_TabSelected(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIGACHABANNERTABSELECTOR_ADD_TABSELECTED_OFFSET))(arg, nullptr);
		}

		::System::Void OnTabClicked(UIGachaBannerTab* arg)
		{
			((::System::Void(*)(UIGachaBannerTab*, ::PVOID))((::PBYTE)hIl2Cpp + UIGACHABANNERTABSELECTOR_ONTABCLICKED_OFFSET))(arg, nullptr);
		}

		::System::Void set_SelectedTab(UIGachaBannerTab* arg)
		{
			((::System::Void(*)(UIGachaBannerTab*, ::PVOID))((::PBYTE)hIl2Cpp + UIGACHABANNERTABSELECTOR_SET_SELECTEDTAB_OFFSET))(arg, nullptr);
		}

		::System::Void SetSelectedTab(UIGachaBannerTab* arg)
		{
			((::System::Void(*)(UIGachaBannerTab*, ::PVOID))((::PBYTE)hIl2Cpp + UIGACHABANNERTABSELECTOR_SETSELECTEDTAB_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGACHABANNERTABSELECTOR_.CTOR_OFFSET))(nullptr);
		}

		::System::Void remove_TabSelected(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIGACHABANNERTABSELECTOR_REMOVE_TABSELECTED_OFFSET))(arg, nullptr);
		}

		::System::Void SelectTab(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIGACHABANNERTABSELECTOR_SELECTTAB_OFFSET))(arg, nullptr);
		}

	};

