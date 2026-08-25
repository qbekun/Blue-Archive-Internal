#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Transform; }
namespace UnityEngine { class Vector3; }
class MXButton;
namespace UnityEngine { class GameObject; }
class UIScrollView;
class SortingRuleTabController;
class UIGrid;
class EventSortingRuleTabController;
class UITable;
class SortingRule;
class UIFilter;
class IntTabController;
class UIFilterSortOptionListBase;
class SortType;
class SubSortingRuleAllTabController;
class SortingRuleWrapper;
namespace UnityEngine { class MonoBehaviour; }
namespace MX::Data { class CraftType; }

#define UIPOPUP_FILTERSORT_INITIALIZESORT_OFFSET UNITYSDK_OFFSET(0xB034A0)
#define UIPOPUP_FILTERSORT_RESETPREVIOUSSCROLLVIEWSTATE_OFFSET UNITYSDK_OFFSET(0xB03F10)
#define UIPOPUP_FILTERSORT_ONCLICKCANCELBUTTON_OFFSET UNITYSDK_OFFSET(0xB03F50)
#define UIPOPUP_FILTERSORT_RESETSORTINGSCROLLVIEW_OFFSET UNITYSDK_OFFSET(0xB04200)
#define UIPOPUP_FILTERSORT_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xAF7F40)
#define UIPOPUP_FILTERSORT_SETSORTNORMALHEADERANDOPTIONPARENT_OFFSET UNITYSDK_OFFSET(0xB04FD0)
#define UIPOPUP_FILTERSORT_INITIALIZESORTINGUNITS_OFFSET UNITYSDK_OFFSET(0xB039E0)
#define UIPOPUP_FILTERSORT_ONOPENED_OFFSET UNITYSDK_OFFSET(0xB05310)
#define UIPOPUP_FILTERSORT_GET_ISSUBSORT_OFFSET UNITYSDK_OFFSET(0xB05F70)
#define UIPOPUP_FILTERSORT_ONCLICKOKBUTTON_OFFSET UNITYSDK_OFFSET(0xB05FA0)
#define UIPOPUP_FILTERSORT_PREINITIALIZEFORSHOP_OFFSET UNITYSDK_OFFSET(0xB06240)
#define UIPOPUP_FILTERSORT_GETTOGGLELIST_OFFSET UNITYSDK_OFFSET(0xB03D50)
#define UIPOPUP_FILTERSORT_RESETFILTERSCROLLVIEW_OFFSET UNITYSDK_OFFSET(0xB063A0)
#define UIPOPUP_FILTERSORT_INITIALIZETAB_OFFSET UNITYSDK_OFFSET(0xB04350)
#define UIPOPUP_FILTERSORT_SETSUBSORTUNITS_OFFSET UNITYSDK_OFFSET(0xB058F0)
#define UIPOPUP_FILTERSORT_AWAKE_OFFSET UNITYSDK_OFFSET(0xB06870)
#define UIPOPUP_FILTERSORT_OKBUTTON_SUBSORT_OFFSET UNITYSDK_OFFSET(0xB06170)
#define UIPOPUP_FILTERSORT_ONANDROIDBACKBUTTON_OFFSET UNITYSDK_OFFSET(0xB06E90)
#define UIPOPUP_FILTERSORT__SETSORTNORMALHEADERANDOPTIONPARENT_G__SETPARENT|52_0_OFFSET UNITYSDK_OFFSET(0xB05260)
#define UIPOPUP_FILTERSORT_PREINITIALIZEFORCRAFT_OFFSET UNITYSDK_OFFSET(0xAF97B0)
#define UIPOPUP_FILTERSORT_ISEVENTITEMSORTINGRULE_OFFSET UNITYSDK_OFFSET(0xB039D0)
#define UIPOPUP_FILTERSORT_GET_FILTERTABS_OFFSET UNITYSDK_OFFSET(0xB06EA0)
#define UIPOPUP_FILTERSORT_INITIALIZEWITHSUBSORT_OFFSET UNITYSDK_OFFSET(0xAF81D0)
#define UIPOPUP_FILTERSORT_.CTOR_OFFSET UNITYSDK_OFFSET(0xB07500)
#define UIPOPUP_FILTERSORT_GET_SORTINGSCROLLVIEW_OFFSET UNITYSDK_OFFSET(0xB07630)
#define UIPOPUP_FILTERSORT__INITIALIZESORTINGUNITS_G__MOREKEYSTHENTABS|55_0_OFFSET UNITYSDK_OFFSET(0xB052B0)
#define UIPOPUP_FILTERSORT_SET_ISSORTINGREPOSITIONED_OFFSET UNITYSDK_OFFSET(0xB07640)
#define UIPOPUP_FILTERSORT_RESETALL_OFFSET UNITYSDK_OFFSET(0xB07650)
#define UIPOPUP_FILTERSORT_ONFILTERSORTTABCHANGED_OFFSET UNITYSDK_OFFSET(0xB07680)
#define UIPOPUP_FILTERSORT__ONOPENED_G__SETSORTUNITS|51_0_OFFSET UNITYSDK_OFFSET(0xB05540)
#define UIPOPUP_FILTERSORT_DISPOSEFILTERTABS_OFFSET UNITYSDK_OFFSET(0xB04020)
#define UIPOPUP_FILTERSORT_GET_ISSORTINGREPOSITIONED_OFFSET UNITYSDK_OFFSET(0xB076A0)
#define UIPOPUP_FILTERSORT_INITIALIZESUBSORT_OFFSET UNITYSDK_OFFSET(0xB06F50)

	inline static constexpr unsigned int UIPopup_FilterSort_TypeDefinitionIndex = 8188;

	class UIPopup_FilterSort : public Il2CppObject
	{
	public:
		::UnityEngine::Transform* normalTitleHeaderTransform; // 0xD8
		::UnityEngine::Transform* normalOptionTransform; // 0xE0
		::UnityEngine::Transform* normalSortTransform; // 0xE8
		::UnityEngine::Transform* eventSortTransform; // 0xF0
		::UnityEngine::Transform* additionalSortTransform; // 0xF8
		::UnityEngine::Vector3* normalSortDefaultPos; // 0x100
		MXButton* closeButton; // 0x110
		MXButton* okButton; // 0x118
		MXButton* cancelButton; // 0x120
		::UnityEngine::GameObject* normalSortingRuleRoot; // 0x128
		UIScrollView* sortingScrollView; // 0x130
		SortingRuleTabController* normalSortingRuleTabController; // 0x138
		UIGrid* normalSortingRuleGrid; // 0x140
		Il2CppObject* normalSortUnits; // 0x148
		::UnityEngine::GameObject* eventSortingRuleRoot; // 0x150
		EventSortingRuleTabController* eventSortingRuleTabController; // 0x158
		UITable* eventSortingRuleTable; // 0x160
		UIGrid* eventSortingRuleGrid; // 0x168
		Il2CppObject* eventSortUnits; // 0x170
		Il2CppObject* eventContentId; // 0x178
		SortingRule* initialSortingRule; // 0x188
		Il2CppObject* okAction; // 0x190
		::System::Boolean _IsSortingRepositioned_k__BackingField; // 0x198
		MXButton* resetButton; // 0x1A0
		UIScrollView* filterScrollView; // 0x1A8
		UIFilter* uiFilter; // 0x1B0
		::UnityEngine::Transform* filterWidgetTransform; // 0x1B8
		IntTabController* filterSortTab; // 0x1C0
		::System::Boolean isFilterRepositioned; // 0x1C8
		UIFilterSortOptionListBase* uIFilterSortOptionListBase; // 0x1D0
		UIFilterSortOptionListBase* prevUIFilterSortOptionListBase; // 0x1D8
		::System::Boolean needSetTabOnOpened; // 0x1E0
		::System::Type* lastOpenedByType; // 0x1E8
		SortType* currentSortType; // 0x1F0
		Il2CppObject* filterTabList; // 0x1F8
		::UnityEngine::GameObject* subSortingRuleRoot; // 0x200
		SubSortingRuleAllTabController* subSortingRuleAllTabController; // 0x208
		UITable* subSortingRuleTable; // 0x210
		UIGrid* subSortingRuleGrid; // 0x218
		Il2CppObject* subSortUnits; // 0x220
		SortingRuleWrapper* initialSortingRuleWrapper; // 0x228
		Il2CppObject* okAction_subSort; // 0x238

		::System::Void InitializeSort(Il2CppObject* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FILTERSORT_INITIALIZESORT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void ResetPreviousScrollViewState()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FILTERSORT_RESETPREVIOUSSCROLLVIEWSTATE_OFFSET))(nullptr);
		}

		::System::Void OnClickCancelButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FILTERSORT_ONCLICKCANCELBUTTON_OFFSET))(nullptr);
		}

		::System::Void ResetSortingScrollView()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FILTERSORT_RESETSORTINGSCROLLVIEW_OFFSET))(nullptr);
		}

		::System::Void Initialize(Il2CppObject* arg, SortingRule* arg2, Il2CppObject* arg3, Il2CppObject* arg4, ::UnityEngine::MonoBehaviour* arg5, Il2CppObject* arg6)
		{
			((::System::Void(*)(Il2CppObject*, SortingRule*, Il2CppObject*, Il2CppObject*, ::UnityEngine::MonoBehaviour*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FILTERSORT_INITIALIZE_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		::System::Void SetSortNormalHeaderAndOptionParent(SortType* arg)
		{
			((::System::Void(*)(SortType*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FILTERSORT_SETSORTNORMALHEADERANDOPTIONPARENT_OFFSET))(arg, nullptr);
		}

		::System::Void InitializeSortingUnits(Il2CppObject* arg, Il2CppObject* arg2, ::UnityEngine::Transform* arg3)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FILTERSORT_INITIALIZESORTINGUNITS_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FILTERSORT_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsSubSort()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FILTERSORT_GET_ISSUBSORT_OFFSET))(nullptr);
		}

		::System::Void OnClickOkButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FILTERSORT_ONCLICKOKBUTTON_OFFSET))(nullptr);
		}

		::System::Void PreInitializeForShop(Il2CppObject* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FILTERSORT_PREINITIALIZEFORSHOP_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* GetToggleList(Il2CppObject* arg, Il2CppObject* arg2)
		{
			return ((Il2CppObject*(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FILTERSORT_GETTOGGLELIST_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void ResetFilterScrollView()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FILTERSORT_RESETFILTERSCROLLVIEW_OFFSET))(nullptr);
		}

		::System::Void InitializeTab(Il2CppObject* arg, ::UnityEngine::MonoBehaviour* arg2, Il2CppObject* arg3)
		{
			((::System::Void(*)(Il2CppObject*, ::UnityEngine::MonoBehaviour*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FILTERSORT_INITIALIZETAB_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void SetSubSortUnits()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FILTERSORT_SETSUBSORTUNITS_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FILTERSORT_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OKButton_SubSort()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FILTERSORT_OKBUTTON_SUBSORT_OFFSET))(nullptr);
		}

		::System::Void OnAndroidBackButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FILTERSORT_ONANDROIDBACKBUTTON_OFFSET))(nullptr);
		}

		::System::Void _SetSortNormalHeaderAndOptionParent_g__SetParent|52_0(::UnityEngine::Transform* arg)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FILTERSORT__SETSORTNORMALHEADERANDOPTIONPARENT_G__SETPARENT|52_0_OFFSET))(arg, nullptr);
		}

		::System::Void PreInitializeForCraft(::MX::Data::CraftType* arg)
		{
			((::System::Void(*)(::MX::Data::CraftType*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FILTERSORT_PREINITIALIZEFORCRAFT_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsEventItemSortingRule(SortingRule* arg)
		{
			return ((::System::Boolean(*)(SortingRule*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FILTERSORT_ISEVENTITEMSORTINGRULE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_FilterTabs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FILTERSORT_GET_FILTERTABS_OFFSET))(nullptr);
		}

		::System::Void InitializeWithSubSort(Il2CppObject* arg, SortingRuleWrapper* arg2, Il2CppObject* arg3, ::UnityEngine::MonoBehaviour* arg4, Il2CppObject* arg5)
		{
			((::System::Void(*)(Il2CppObject*, SortingRuleWrapper*, Il2CppObject*, ::UnityEngine::MonoBehaviour*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FILTERSORT_INITIALIZEWITHSUBSORT_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FILTERSORT_.CTOR_OFFSET))(nullptr);
		}

		UIScrollView* get_SortingScrollView()
		{
			return ((UIScrollView*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FILTERSORT_GET_SORTINGSCROLLVIEW_OFFSET))(nullptr);
		}

		::System::Boolean _InitializeSortingUnits_g__MoreKeysThenTabs|55_0(<>c__DisplayClass55_0&* arg)
		{
			return ((::System::Boolean(*)(<>c__DisplayClass55_0&*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FILTERSORT__INITIALIZESORTINGUNITS_G__MOREKEYSTHENTABS|55_0_OFFSET))(arg, nullptr);
		}

		::System::Void set_IsSortingRepositioned(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FILTERSORT_SET_ISSORTINGREPOSITIONED_OFFSET))(arg, nullptr);
		}

		::System::Void ResetAll()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FILTERSORT_RESETALL_OFFSET))(nullptr);
		}

		::System::Void OnFilterSortTabChanged(::System::Boolean arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::Boolean, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FILTERSORT_ONFILTERSORTTABCHANGED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void _OnOpened_g__SetSortUnits|51_0(SortingRuleTabController* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(SortingRuleTabController*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FILTERSORT__ONOPENED_G__SETSORTUNITS|51_0_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void DisposeFilterTabs()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FILTERSORT_DISPOSEFILTERTABS_OFFSET))(nullptr);
		}

		::System::Boolean get_IsSortingRepositioned()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FILTERSORT_GET_ISSORTINGREPOSITIONED_OFFSET))(nullptr);
		}

		::System::Void InitializeSubSort(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FILTERSORT_INITIALIZESUBSORT_OFFSET))(arg, nullptr);
		}

	};

