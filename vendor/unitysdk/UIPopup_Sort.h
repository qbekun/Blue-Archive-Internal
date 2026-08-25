#pragma once
#include "unitysdk.h"

class MXButton;
namespace UnityEngine { class GameObject; }
class UIScrollView;
class SortingRuleTabController;
class UIGrid;
class EventSortingRuleTabController;
class UITable;
class SortingRule;
namespace UnityEngine { class MonoBehaviour; }
namespace UnityEngine { class Transform; }

#define UIPOPUP_SORT_.CTOR_OFFSET UNITYSDK_OFFSET(0xB077C0)
#define UIPOPUP_SORT__INITIALIZE_G__GETTOGGLELIST|30_2_OFFSET UNITYSDK_OFFSET(0xB078C0)
#define UIPOPUP_SORT_RESETSORTINGSCROLLVIEW_OFFSET UNITYSDK_OFFSET(0xB07A80)
#define UIPOPUP_SORT_ONCLICKCANCELBUTTON_OFFSET UNITYSDK_OFFSET(0xB07B30)
#define UIPOPUP_SORT_ONBACK_OFFSET UNITYSDK_OFFSET(0xB07BC0)
#define UIPOPUP_SORT_GET_SORTINGSCROLLVIEW_OFFSET UNITYSDK_OFFSET(0xB07C10)
#define UIPOPUP_SORT_SET_ISSORTINGREPOSITIONED_OFFSET UNITYSDK_OFFSET(0xB07C20)
#define UIPOPUP_SORT_AWAKE_OFFSET UNITYSDK_OFFSET(0xB07C30)
#define UIPOPUP_SORT_ONCLICKCLOSEBUTTON_OFFSET UNITYSDK_OFFSET(0xB07BF0)
#define UIPOPUP_SORT_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xB08020)
#define UIPOPUP_SORT__INITIALIZE_G__INITIALIZESORTINGUNITS|30_1_OFFSET UNITYSDK_OFFSET(0xB08520)
#define UIPOPUP_SORT__INITIALIZE_G__MOREKEYSTHENTABS|30_3_OFFSET UNITYSDK_OFFSET(0xB08890)
#define UIPOPUP_SORT__ONOPENED_G__SETSORTUNITS|25_0_OFFSET UNITYSDK_OFFSET(0xB088F0)
#define UIPOPUP_SORT_ONOPENED_OFFSET UNITYSDK_OFFSET(0xB08BF0)
#define UIPOPUP_SORT_GET_ISSORTINGREPOSITIONED_OFFSET UNITYSDK_OFFSET(0xB08D80)
#define UIPOPUP_SORT__ONOPENED_G__RESETGRIDTABLEVIEW|25_1_OFFSET UNITYSDK_OFFSET(0xB08CF0)
#define UIPOPUP_SORT_ONCLICKOKBUTTON_OFFSET UNITYSDK_OFFSET(0xB08D90)
#define UIPOPUP_SORT__INITIALIZE_G__ISEVENTITEMSORTINGRULE|30_0_OFFSET UNITYSDK_OFFSET(0xB08510)

	inline static constexpr unsigned int UIPopup_Sort_TypeDefinitionIndex = 8190;

	class UIPopup_Sort : public Il2CppObject
	{
	public:
		MXButton* closeButton; // 0xD8
		MXButton* okButton; // 0xE0
		MXButton* cancelButton; // 0xE8
		::UnityEngine::GameObject* normalSortingRuleRoot; // 0xF0
		UIScrollView* sortingScrollView; // 0xF8
		SortingRuleTabController* normalSortingRuleTabController; // 0x100
		UIGrid* normalSortingRuleGrid; // 0x108
		Il2CppObject* normalSortUnits; // 0x110
		::UnityEngine::GameObject* eventSortingRuleRoot; // 0x118
		EventSortingRuleTabController* eventSortingRuleTabController; // 0x120
		UITable* eventSortingRuleTable; // 0x128
		UIGrid* eventSortingRuleGrid; // 0x130
		UIGrid* eventNormalSortingRuleGrid; // 0x138
		Il2CppObject* eventSortUnits; // 0x140
		Il2CppObject* eventNormalSortUnits; // 0x148
		Il2CppObject* eventContentId; // 0x150
		SortingRule* initialSortingRule; // 0x160
		Il2CppObject* okAction; // 0x168
		::System::Boolean _IsSortingRepositioned_k__BackingField; // 0x170

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SORT_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* _Initialize_g__GetToggleList|30_2(Il2CppObject* arg, Il2CppObject* arg2)
		{
			return ((Il2CppObject*(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SORT__INITIALIZE_G__GETTOGGLELIST|30_2_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void ResetSortingScrollView()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SORT_RESETSORTINGSCROLLVIEW_OFFSET))(nullptr);
		}

		::System::Void OnClickCancelButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SORT_ONCLICKCANCELBUTTON_OFFSET))(nullptr);
		}

		::System::Void OnBack()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SORT_ONBACK_OFFSET))(nullptr);
		}

		UIScrollView* get_SortingScrollView()
		{
			return ((UIScrollView*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SORT_GET_SORTINGSCROLLVIEW_OFFSET))(nullptr);
		}

		::System::Void set_IsSortingRepositioned(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SORT_SET_ISSORTINGREPOSITIONED_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SORT_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnClickCloseButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SORT_ONCLICKCLOSEBUTTON_OFFSET))(nullptr);
		}

		::System::Void Initialize(Il2CppObject* arg, SortingRule* arg2, Il2CppObject* arg3, Il2CppObject* arg4, ::UnityEngine::MonoBehaviour* arg5)
		{
			((::System::Void(*)(Il2CppObject*, SortingRule*, Il2CppObject*, Il2CppObject*, ::UnityEngine::MonoBehaviour*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SORT_INITIALIZE_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Void _Initialize_g__InitializeSortingUnits|30_1(Il2CppObject* arg, Il2CppObject* arg2, ::UnityEngine::Transform* arg3)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SORT__INITIALIZE_G__INITIALIZESORTINGUNITS|30_1_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean _Initialize_g__MoreKeysThenTabs|30_3(<>c__DisplayClass30_0&* arg)
		{
			return ((::System::Boolean(*)(<>c__DisplayClass30_0&*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SORT__INITIALIZE_G__MOREKEYSTHENTABS|30_3_OFFSET))(arg, nullptr);
		}

		::System::Void _OnOpened_g__SetSortUnits|25_0(SortingRuleTabController* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(SortingRuleTabController*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SORT__ONOPENED_G__SETSORTUNITS|25_0_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SORT_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsSortingRepositioned()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SORT_GET_ISSORTINGREPOSITIONED_OFFSET))(nullptr);
		}

		::System::Void _OnOpened_g__ResetGridTableView|25_1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SORT__ONOPENED_G__RESETGRIDTABLEVIEW|25_1_OFFSET))(nullptr);
		}

		::System::Void OnClickOkButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SORT_ONCLICKOKBUTTON_OFFSET))(nullptr);
		}

		::System::Boolean _Initialize_g__IsEventItemSortingRule|30_0(SortingRule* arg)
		{
			return ((::System::Boolean(*)(SortingRule*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SORT__INITIALIZE_G__ISEVENTITEMSORTINGRULE|30_0_OFFSET))(arg, nullptr);
		}

	};

