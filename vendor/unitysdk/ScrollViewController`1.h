#pragma once
#include "unitysdk.h"

class UIScrollView;
class UIScrollBar;
namespace UnityEngine { class Transform; }
class UIWrapContent;
namespace UnityEngine { class Vector3; }
class UIPanel;
namespace UnityEngine { class Coroutine; }
namespace UnityEngine { class GameObject; }
namespace TriInspector { class TriValidationResult; }

#define SCROLLVIEWCONTROLLER`1_ADD_ONFIRSTELEMENTREACHED_OFFSET UNITYSDK_OFFSET(0x000000)
#define SCROLLVIEWCONTROLLER`1_REMOVE_ONFIRSTELEMENTREACHED_OFFSET UNITYSDK_OFFSET(0x000000)
#define SCROLLVIEWCONTROLLER`1_ADD_ONLASTELEMENTREACHED_OFFSET UNITYSDK_OFFSET(0x000000)
#define SCROLLVIEWCONTROLLER`1_REMOVE_ONLASTELEMENTREACHED_OFFSET UNITYSDK_OFFSET(0x000000)
#define SCROLLVIEWCONTROLLER`1_GET_BLOCKFIRSTELEMENTREFRESHEDACTION_OFFSET UNITYSDK_OFFSET(0x000000)
#define SCROLLVIEWCONTROLLER`1_SET_BLOCKFIRSTELEMENTREFRESHEDACTION_OFFSET UNITYSDK_OFFSET(0x000000)
#define SCROLLVIEWCONTROLLER`1_GET_BLOCKLASTELEMENTREFRESHEDACTION_OFFSET UNITYSDK_OFFSET(0x000000)
#define SCROLLVIEWCONTROLLER`1_SET_BLOCKLASTELEMENTREFRESHEDACTION_OFFSET UNITYSDK_OFFSET(0x000000)
#define SCROLLVIEWCONTROLLER`1_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x000000)
#define SCROLLVIEWCONTROLLER`1_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SCROLLVIEWCONTROLLER`1_GET_ITEMSIZE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SCROLLVIEWCONTROLLER`1_GET_SCALEDITEMSIZE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SCROLLVIEWCONTROLLER`1_GET_PANEL_OFFSET UNITYSDK_OFFSET(0x000000)
#define SCROLLVIEWCONTROLLER`1_GET_ISINFINITE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SCROLLVIEWCONTROLLER`1_GET_SKIPREFRESH_OFFSET UNITYSDK_OFFSET(0x000000)
#define SCROLLVIEWCONTROLLER`1_SET_SKIPREFRESH_OFFSET UNITYSDK_OFFSET(0x000000)
#define SCROLLVIEWCONTROLLER`1_GET_SCROLLVIEW_OFFSET UNITYSDK_OFFSET(0x000000)
#define SCROLLVIEWCONTROLLER`1_GET_WRAPCONTENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SCROLLVIEWCONTROLLER`1_GET_ITEMS_OFFSET UNITYSDK_OFFSET(0x000000)
#define SCROLLVIEWCONTROLLER`1_GET_UIELEMENTS_OFFSET UNITYSDK_OFFSET(0x000000)
#define SCROLLVIEWCONTROLLER`1_AWAKE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SCROLLVIEWCONTROLLER`1_RESETSCROLLBAR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SCROLLVIEWCONTROLLER`1_SETSCROLLVIEWSTARTPOSITION_OFFSET UNITYSDK_OFFSET(0x000000)
#define SCROLLVIEWCONTROLLER`1_RESTARTUPDATESCROLLBAR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SCROLLVIEWCONTROLLER`1_REGISTERSCROLLBAREVENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SCROLLVIEWCONTROLLER`1_ONSCROLLBARPRESSED_OFFSET UNITYSDK_OFFSET(0x000000)
#define SCROLLVIEWCONTROLLER`1_UPDATESCROLLBAR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SCROLLVIEWCONTROLLER`1_ONENABLE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SCROLLVIEWCONTROLLER`1_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SCROLLVIEWCONTROLLER`1_CLEARITEMS_OFFSET UNITYSDK_OFFSET(0x000000)
#define SCROLLVIEWCONTROLLER`1_SETITEMSANDRESETSCROLL_OFFSET UNITYSDK_OFFSET(0x000000)
#define SCROLLVIEWCONTROLLER`1_ADDITEMSINFIRSTINDEX_OFFSET UNITYSDK_OFFSET(0x000000)
#define SCROLLVIEWCONTROLLER`1_ADDITEMS_OFFSET UNITYSDK_OFFSET(0x000000)
#define SCROLLVIEWCONTROLLER`1_REMOVEITEM_OFFSET UNITYSDK_OFFSET(0x000000)
#define SCROLLVIEWCONTROLLER`1_SETWRAPCONTENTITEMSIZE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SCROLLVIEWCONTROLLER`1_UPDATEWRAPCONTENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SCROLLVIEWCONTROLLER`1_SCROLLREPOSITION_OFFSET UNITYSDK_OFFSET(0x000000)
#define SCROLLVIEWCONTROLLER`1_RESETSCROLL_OFFSET UNITYSDK_OFFSET(0x000000)
#define SCROLLVIEWCONTROLLER`1_RESETINFINITESCROLL_OFFSET UNITYSDK_OFFSET(0x000000)
#define SCROLLVIEWCONTROLLER`1_REFRESH_OFFSET UNITYSDK_OFFSET(0x000000)
#define SCROLLVIEWCONTROLLER`1_MOVETO_OFFSET UNITYSDK_OFFSET(0x000000)
#define SCROLLVIEWCONTROLLER`1_CO_MOVETO_OFFSET UNITYSDK_OFFSET(0x000000)
#define SCROLLVIEWCONTROLLER`1_MOVERELATIVE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SCROLLVIEWCONTROLLER`1_MOVERELATIVE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SCROLLVIEWCONTROLLER`1_MOVETOINDEX_OFFSET UNITYSDK_OFFSET(0x000000)
#define SCROLLVIEWCONTROLLER`1_MOVE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SCROLLVIEWCONTROLLER`1_PAUSESCROLL_OFFSET UNITYSDK_OFFSET(0x000000)
#define SCROLLVIEWCONTROLLER`1_RESUMESCROLL_OFFSET UNITYSDK_OFFSET(0x000000)
#define SCROLLVIEWCONTROLLER`1_INITWRAPCONTENTPOSITION_OFFSET UNITYSDK_OFFSET(0x000000)
#define SCROLLVIEWCONTROLLER`1_REFRESHSCROLL_OFFSET UNITYSDK_OFFSET(0x000000)
#define SCROLLVIEWCONTROLLER`1_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SCROLLVIEWCONTROLLER`1_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SCROLLVIEWCONTROLLER`1_ADJUSTMENTDATA_OFFSET UNITYSDK_OFFSET(0x000000)
#define SCROLLVIEWCONTROLLER`1_SETWRAPCONTENTLASTELEMENTCHANGED_OFFSET UNITYSDK_OFFSET(0x000000)
#define SCROLLVIEWCONTROLLER`1_ENABLESCROLLBAR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SCROLLVIEWCONTROLLER`1_VALIDATESCROLLBAR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SCROLLVIEWCONTROLLER`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SCROLLVIEWCONTROLLER`1__UPDATEWRAPCONTENT_B__67_0_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int ScrollViewController`1_TypeDefinitionIndex = 3372;

	class ScrollViewController`1 : public Il2CppObject
	{
	public:
		UIScrollView* scrollView; // 0x0
		UIScrollBar* scrollBar; // 0x0
		::UnityEngine::Transform* scrollBarObjectTransform; // 0x0
		UIWrapContent* wrapContent; // 0x0
		::System::Boolean isInfinite; // 0x0
		::System::Boolean isEnableReset; // 0x0
		::System::Single bottomMargin; // 0x0
		::System::Action* OnFirstElementReached; // 0x0
		::System::Action* OnLastElementReached; // 0x0
		::System::Boolean _blockFirstElementRefreshedAction_k__BackingField; // 0x0
		::System::Boolean _blockLastElementRefreshedAction_k__BackingField; // 0x0
		::System::Boolean _SkipRefresh_k__BackingField; // 0x0
		Il2CppObject* items; // 0x0
		Il2CppObject* uiElements; // 0x0
		::System::Boolean isWrapContentInitialized; // 0x0
		::UnityEngine::Vector3* svStartLocalPos; // 0x0
		UIPanel* myUiPanel; // 0x0
		::UnityEngine::Coroutine* updateScrollBarCoroutine; // 0x0
		::System::Boolean isScrollBarPressed; // 0x0

		::System::Void add_OnFirstElementReached(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + SCROLLVIEWCONTROLLER`1_ADD_ONFIRSTELEMENTREACHED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_OnFirstElementReached(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + SCROLLVIEWCONTROLLER`1_REMOVE_ONFIRSTELEMENTREACHED_OFFSET))(arg, nullptr);
		}

		::System::Void add_OnLastElementReached(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + SCROLLVIEWCONTROLLER`1_ADD_ONLASTELEMENTREACHED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_OnLastElementReached(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + SCROLLVIEWCONTROLLER`1_REMOVE_ONLASTELEMENTREACHED_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_blockFirstElementRefreshedAction()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SCROLLVIEWCONTROLLER`1_GET_BLOCKFIRSTELEMENTREFRESHEDACTION_OFFSET))(nullptr);
		}

		::System::Void set_blockFirstElementRefreshedAction(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SCROLLVIEWCONTROLLER`1_SET_BLOCKFIRSTELEMENTREFRESHEDACTION_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_blockLastElementRefreshedAction()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SCROLLVIEWCONTROLLER`1_GET_BLOCKLASTELEMENTREFRESHEDACTION_OFFSET))(nullptr);
		}

		::System::Void set_blockLastElementRefreshedAction(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SCROLLVIEWCONTROLLER`1_SET_BLOCKLASTELEMENTREFRESHEDACTION_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Item(::System::Int32 arg)
		{
			return ((Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SCROLLVIEWCONTROLLER`1_GET_ITEM_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SCROLLVIEWCONTROLLER`1_GET_COUNT_OFFSET))(nullptr);
		}

		::System::Int32 get_ItemSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SCROLLVIEWCONTROLLER`1_GET_ITEMSIZE_OFFSET))(nullptr);
		}

		::System::Int32 get_ScaledItemSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SCROLLVIEWCONTROLLER`1_GET_SCALEDITEMSIZE_OFFSET))(nullptr);
		}

		UIPanel* get_Panel()
		{
			return ((UIPanel*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCROLLVIEWCONTROLLER`1_GET_PANEL_OFFSET))(nullptr);
		}

		::System::Boolean get_IsInfinite()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SCROLLVIEWCONTROLLER`1_GET_ISINFINITE_OFFSET))(nullptr);
		}

		::System::Boolean get_SkipRefresh()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SCROLLVIEWCONTROLLER`1_GET_SKIPREFRESH_OFFSET))(nullptr);
		}

		::System::Void set_SkipRefresh(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SCROLLVIEWCONTROLLER`1_SET_SKIPREFRESH_OFFSET))(arg, nullptr);
		}

		UIScrollView* get_ScrollView()
		{
			return ((UIScrollView*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCROLLVIEWCONTROLLER`1_GET_SCROLLVIEW_OFFSET))(nullptr);
		}

		UIWrapContent* get_WrapContent()
		{
			return ((UIWrapContent*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCROLLVIEWCONTROLLER`1_GET_WRAPCONTENT_OFFSET))(nullptr);
		}

		Il2CppObject* get_Items()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCROLLVIEWCONTROLLER`1_GET_ITEMS_OFFSET))(nullptr);
		}

		Il2CppObject* get_UIElements()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCROLLVIEWCONTROLLER`1_GET_UIELEMENTS_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCROLLVIEWCONTROLLER`1_AWAKE_OFFSET))(nullptr);
		}

		::System::Void ResetScrollBar()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCROLLVIEWCONTROLLER`1_RESETSCROLLBAR_OFFSET))(nullptr);
		}

		::System::Void SetScrollViewStartPosition()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCROLLVIEWCONTROLLER`1_SETSCROLLVIEWSTARTPOSITION_OFFSET))(nullptr);
		}

		::System::Void RestartUpdateScrollBar()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCROLLVIEWCONTROLLER`1_RESTARTUPDATESCROLLBAR_OFFSET))(nullptr);
		}

		::System::Void RegisterScrollBarEvent()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCROLLVIEWCONTROLLER`1_REGISTERSCROLLBAREVENT_OFFSET))(nullptr);
		}

		::System::Void OnScrollBarPressed(::UnityEngine::GameObject* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SCROLLVIEWCONTROLLER`1_ONSCROLLBARPRESSED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Collections::IEnumerator* UpdateScrollBar()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCROLLVIEWCONTROLLER`1_UPDATESCROLLBAR_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCROLLVIEWCONTROLLER`1_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCROLLVIEWCONTROLLER`1_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void ClearItems()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCROLLVIEWCONTROLLER`1_CLEARITEMS_OFFSET))(nullptr);
		}

		::System::Void SetItemsAndResetScroll(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SCROLLVIEWCONTROLLER`1_SETITEMSANDRESETSCROLL_OFFSET))(arg, nullptr);
		}

		::System::Void AddItemsInFirstIndex(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SCROLLVIEWCONTROLLER`1_ADDITEMSINFIRSTINDEX_OFFSET))(arg, nullptr);
		}

		::System::Void AddItems(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SCROLLVIEWCONTROLLER`1_ADDITEMS_OFFSET))(arg, nullptr);
		}

		::System::Void RemoveItem(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SCROLLVIEWCONTROLLER`1_REMOVEITEM_OFFSET))(arg, nullptr);
		}

		::System::Void SetWrapcontentItemSize(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SCROLLVIEWCONTROLLER`1_SETWRAPCONTENTITEMSIZE_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateWrapContent()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCROLLVIEWCONTROLLER`1_UPDATEWRAPCONTENT_OFFSET))(nullptr);
		}

		::System::Void ScrollReposition()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCROLLVIEWCONTROLLER`1_SCROLLREPOSITION_OFFSET))(nullptr);
		}

		::System::Void ResetScroll()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCROLLVIEWCONTROLLER`1_RESETSCROLL_OFFSET))(nullptr);
		}

		::System::Void ResetInfiniteScroll()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCROLLVIEWCONTROLLER`1_RESETINFINITESCROLL_OFFSET))(nullptr);
		}

		::System::Void Refresh()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCROLLVIEWCONTROLLER`1_REFRESH_OFFSET))(nullptr);
		}

		::System::Void MoveTo(::System::Int32 arg, ::System::Boolean arg2, ::System::Single arg3, ::System::Boolean arg4)
		{
			((::System::Void(*)(::System::Int32, ::System::Boolean, ::System::Single, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SCROLLVIEWCONTROLLER`1_MOVETO_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Collections::IEnumerator* Co_MoveTo(::System::Int32 arg, ::System::Boolean arg2, ::System::Single arg3, ::System::Boolean arg4)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Int32, ::System::Boolean, ::System::Single, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SCROLLVIEWCONTROLLER`1_CO_MOVETO_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void MoveRelative(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SCROLLVIEWCONTROLLER`1_MOVERELATIVE_OFFSET))(arg, nullptr);
		}

		::System::Void MoveRelative(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + SCROLLVIEWCONTROLLER`1_MOVERELATIVE_OFFSET))(arg, nullptr);
		}

		::System::Void MoveToIndex(::System::Int32 arg, ::System::Boolean arg2, ::System::Single arg3)
		{
			((::System::Void(*)(::System::Int32, ::System::Boolean, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SCROLLVIEWCONTROLLER`1_MOVETOINDEX_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void Move(::System::Single arg, ::System::Boolean arg2, ::System::Single arg3)
		{
			((::System::Void(*)(::System::Single, ::System::Boolean, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SCROLLVIEWCONTROLLER`1_MOVE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void PauseScroll()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCROLLVIEWCONTROLLER`1_PAUSESCROLL_OFFSET))(nullptr);
		}

		::System::Void ResumeScroll()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCROLLVIEWCONTROLLER`1_RESUMESCROLL_OFFSET))(nullptr);
		}

		::System::Void InitWrapContentPosition(UIPanel* arg)
		{
			((::System::Void(*)(UIPanel*, ::PVOID))((::PBYTE)hIl2Cpp + SCROLLVIEWCONTROLLER`1_INITWRAPCONTENTPOSITION_OFFSET))(arg, nullptr);
		}

		::System::Void RefreshScroll(::UnityEngine::GameObject* arg, ::System::Int32 arg2, ::System::Int32 arg3)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SCROLLVIEWCONTROLLER`1_REFRESHSCROLL_OFFSET))(arg, arg2, arg3, nullptr);
		}

		Il2CppObject* GetEnumerator()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCROLLVIEWCONTROLLER`1_GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCROLLVIEWCONTROLLER`1_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Void AdjustmentData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCROLLVIEWCONTROLLER`1_ADJUSTMENTDATA_OFFSET))(nullptr);
		}

		::System::Void SetWrapContentLastElementChanged(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SCROLLVIEWCONTROLLER`1_SETWRAPCONTENTLASTELEMENTCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void EnableScrollBar(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SCROLLVIEWCONTROLLER`1_ENABLESCROLLBAR_OFFSET))(arg, nullptr);
		}

		::TriInspector::TriValidationResult* ValidateScrollBar()
		{
			return ((::TriInspector::TriValidationResult*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCROLLVIEWCONTROLLER`1_VALIDATESCROLLBAR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCROLLVIEWCONTROLLER`1_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _UpdateWrapContent_b__67_0(UIPanel* arg)
		{
			((::System::Void(*)(UIPanel*, ::PVOID))((::PBYTE)hIl2Cpp + SCROLLVIEWCONTROLLER`1__UPDATEWRAPCONTENT_B__67_0_OFFSET))(arg, nullptr);
		}

	};

