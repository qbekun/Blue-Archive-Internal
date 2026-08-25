#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UI { class Selectable; }
namespace UnityEngine::UI { class Image; }
namespace NPA::Editor { class NXPSelectionGroup; }
namespace NPA::Editor { class NXPSelectionScrollViewElement; }
namespace UnityEngine::EventSystems { class BaseEventData; }
namespace UnityEngine::EventSystems { class PointerEventData; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine::EventSystems { class MoveDirection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Vector2; }
namespace UnityEngine::EventSystems { class AxisEventData; }

#define NPA_EDITOR_NXPSELECTIONGROUPELEMENT_GET_GROUP_OFFSET UNITYSDK_OFFSET(0x9D9B450)
#define NPA_EDITOR_NXPSELECTIONGROUPELEMENT_SET_GROUP_OFFSET UNITYSDK_OFFSET(0x9D9B460)
#define NPA_EDITOR_NXPSELECTIONGROUPELEMENT_GET_THISSELECTIONSCROLLVIEWELEMENT_OFFSET UNITYSDK_OFFSET(0x9D9B4E0)
#define NPA_EDITOR_NXPSELECTIONGROUPELEMENT_UNITYENGINE.EVENTSYSTEMS.ICANCELHANDLER.ONCANCEL_OFFSET UNITYSDK_OFFSET(0x9D9B570)
#define NPA_EDITOR_NXPSELECTIONGROUPELEMENT_UNITYENGINE.EVENTSYSTEMS.ISUBMITHANDLER.ONSUBMIT_OFFSET UNITYSDK_OFFSET(0x9D9B780)
#define NPA_EDITOR_NXPSELECTIONGROUPELEMENT_UNITYENGINE.EVENTSYSTEMS.ISELECTHANDLER.ONSELECT_OFFSET UNITYSDK_OFFSET(0x9D9BD40)
#define NPA_EDITOR_NXPSELECTIONGROUPELEMENT_UNITYENGINE.EVENTSYSTEMS.IPOINTERCLICKHANDLER.ONPOINTERCLICK_OFFSET UNITYSDK_OFFSET(0x9D9BE00)
#define NPA_EDITOR_NXPSELECTIONGROUPELEMENT_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x9D9BED0)
#define NPA_EDITOR_NXPSELECTIONGROUPELEMENT_CREATESELECTIONBORDER_OFFSET UNITYSDK_OFFSET(0x9D9BEF0)
#define NPA_EDITOR_NXPSELECTIONGROUPELEMENT_ATTACHCOMMONBORDERTOTEXTWAITFORSECONDS_OFFSET UNITYSDK_OFFSET(0x9D9C610)
#define NPA_EDITOR_NXPSELECTIONGROUPELEMENT_ATTACHCOMMONBORDERTOTEXT_OFFSET UNITYSDK_OFFSET(0x9D9C720)
#define NPA_EDITOR_NXPSELECTIONGROUPELEMENT_SETSELECTIONBORDERVISIBILITY_OFFSET UNITYSDK_OFFSET(0x9D9C8D0)
#define NPA_EDITOR_NXPSELECTIONGROUPELEMENT_HIDESELECTIONBORDER_OFFSET UNITYSDK_OFFSET(0x9D9C950)
#define NPA_EDITOR_NXPSELECTIONGROUPELEMENT_SHOWSELECTIONBORDER_OFFSET UNITYSDK_OFFSET(0x9D9C9D0)
#define NPA_EDITOR_NXPSELECTIONGROUPELEMENT_CANPRESS_OFFSET UNITYSDK_OFFSET(0x9D9B690)
#define NPA_EDITOR_NXPSELECTIONGROUPELEMENT_AWAKE_OFFSET UNITYSDK_OFFSET(0x9D9CA50)
#define NPA_EDITOR_NXPSELECTIONGROUPELEMENT_INIT_OFFSET UNITYSDK_OFFSET(0x9D99CF0)
#define NPA_EDITOR_NXPSELECTIONGROUPELEMENT_ENABLECUSTOMNAVIGATIONFORENDFRAME_OFFSET UNITYSDK_OFFSET(0x9D9CE90)
#define NPA_EDITOR_NXPSELECTIONGROUPELEMENT_SETCUSTOMNAVIGATION_OFFSET UNITYSDK_OFFSET(0x9D9CF20)
#define NPA_EDITOR_NXPSELECTIONGROUPELEMENT_FINDSELECTABLE_OFFSET UNITYSDK_OFFSET(0x9D9D730)
#define NPA_EDITOR_NXPSELECTIONGROUPELEMENT_FINDCUSTOMSELECTABLE_OFFSET UNITYSDK_OFFSET(0x9D9D4A0)
#define NPA_EDITOR_NXPSELECTIONGROUPELEMENT_GETPOINTONRECTEDGE_OFFSET UNITYSDK_OFFSET(0x9D9DE40)
#define NPA_EDITOR_NXPSELECTIONGROUPELEMENT_UPDATENAVIGATION_OFFSET UNITYSDK_OFFSET(0x9D9B850)
#define NPA_EDITOR_NXPSELECTIONGROUPELEMENT_ONMOVE_OFFSET UNITYSDK_OFFSET(0x9D9E020)
#define NPA_EDITOR_NXPSELECTIONGROUPELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D9E540)
#define NPA_EDITOR_NXPSELECTIONGROUPELEMENT__AWAKE_B__26_0_OFFSET UNITYSDK_OFFSET(0x9D9E550)
#define NPA_EDITOR_NXPSELECTIONGROUPELEMENT__AWAKE_B__26_1_OFFSET UNITYSDK_OFFSET(0x9D9E590)
#define NPA_EDITOR_NXPSELECTIONGROUPELEMENT__AWAKE_B__26_3_OFFSET UNITYSDK_OFFSET(0x9D9E5A0)
#define NPA_EDITOR_NXPSELECTIONGROUPELEMENT__AWAKE_B__26_2_OFFSET UNITYSDK_OFFSET(0x9D9E5B0)

namespace NPA::Editor
{
	inline static constexpr unsigned int NXPSelectionGroupElement_TypeDefinitionIndex = 26339;

	class NXPSelectionGroupElement : public Il2CppObject
	{
	public:
		::UnityEngine::UI::Selectable* _selectable; // 0x18
		::UnityEngine::UI::Image* _selectionBorder; // 0x20
		::System::Int64 lastPressTime; // 0x28
		::System::Int64 delayTime; // 0x30
		::System::Boolean destroyed; // 0x38
		::System::Single prevScrollingValue; // 0x3C
		::NPA::Editor::NXPSelectionGroup* _group; // 0x40
		::NPA::Editor::NXPSelectionScrollViewElement* _thisSelectionScrollViewElement; // 0x48
		::System::Boolean useCustomNavigation; // 0x50

		::NPA::Editor::NXPSelectionGroup* get_Group()
		{
			return (return (::NPA::Editor::NXPSelectionGroup*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPSELECTIONGROUPELEMENT_GET_GROUP_OFFSET))(nullptr);
		}

		::System::Void set_Group(::NPA::Editor::NXPSelectionGroup* arg)
		{
			((::System::Void(*)(::NPA::Editor::NXPSelectionGroup*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPSELECTIONGROUPELEMENT_SET_GROUP_OFFSET))(arg, nullptr);
		}

		::NPA::Editor::NXPSelectionScrollViewElement* get_ThisSelectionScrollViewElement()
		{
			return (return (::NPA::Editor::NXPSelectionScrollViewElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPSELECTIONGROUPELEMENT_GET_THISSELECTIONSCROLLVIEWELEMENT_OFFSET))(nullptr);
		}

		::System::Void UnityEngine.EventSystems.ICancelHandler.OnCancel(::UnityEngine::EventSystems::BaseEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::BaseEventData*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPSELECTIONGROUPELEMENT_UNITYENGINE.EVENTSYSTEMS.ICANCELHANDLER.ONCANCEL_OFFSET))(arg, nullptr);
		}

		::System::Void UnityEngine.EventSystems.ISubmitHandler.OnSubmit(::UnityEngine::EventSystems::BaseEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::BaseEventData*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPSELECTIONGROUPELEMENT_UNITYENGINE.EVENTSYSTEMS.ISUBMITHANDLER.ONSUBMIT_OFFSET))(arg, nullptr);
		}

		::System::Void UnityEngine.EventSystems.ISelectHandler.OnSelect(::UnityEngine::EventSystems::BaseEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::BaseEventData*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPSELECTIONGROUPELEMENT_UNITYENGINE.EVENTSYSTEMS.ISELECTHANDLER.ONSELECT_OFFSET))(arg, nullptr);
		}

		::System::Void UnityEngine.EventSystems.IPointerClickHandler.OnPointerClick(::UnityEngine::EventSystems::PointerEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::PointerEventData*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPSELECTIONGROUPELEMENT_UNITYENGINE.EVENTSYSTEMS.IPOINTERCLICKHANDLER.ONPOINTERCLICK_OFFSET))(arg, nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPSELECTIONGROUPELEMENT_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Void CreateSelectionBorder(::UnityEngine::GameObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPSELECTIONGROUPELEMENT_CREATESELECTIONBORDER_OFFSET))(arg, arg, nullptr);
		}

		::System::Collections::IEnumerator* AttachCommonBorderToTextWaitForSeconds(::System::Single arg, ::UnityEngine::UI::Image* arg, ::UnityEngine::GameObject* arg, ::UnityEngine::GameObject* arg, Il2CppObject* arg)
		{
			return (return (::System::Collections::IEnumerator*(*)(::System::Single, ::UnityEngine::UI::Image*, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPSELECTIONGROUPELEMENT_ATTACHCOMMONBORDERTOTEXTWAITFORSECONDS_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void AttachCommonBorderToText(::UnityEngine::UI::Image* arg, ::UnityEngine::GameObject* arg, ::UnityEngine::GameObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::UnityEngine::UI::Image*, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPSELECTIONGROUPELEMENT_ATTACHCOMMONBORDERTOTEXT_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void SetSelectionBorderVisibility(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPSELECTIONGROUPELEMENT_SETSELECTIONBORDERVISIBILITY_OFFSET))(arg, nullptr);
		}

		::System::Void HideSelectionBorder()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPSELECTIONGROUPELEMENT_HIDESELECTIONBORDER_OFFSET))(nullptr);
		}

		::System::Void ShowSelectionBorder()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPSELECTIONGROUPELEMENT_SHOWSELECTIONBORDER_OFFSET))(nullptr);
		}

		::System::Boolean CanPress()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPSELECTIONGROUPELEMENT_CANPRESS_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPSELECTIONGROUPELEMENT_AWAKE_OFFSET))(nullptr);
		}

		::System::Void Init(::NPA::Editor::NXPSelectionGroup* arg)
		{
			((::System::Void(*)(::NPA::Editor::NXPSelectionGroup*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPSELECTIONGROUPELEMENT_INIT_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* EnableCustomNavigationForEndFrame()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPSELECTIONGROUPELEMENT_ENABLECUSTOMNAVIGATIONFORENDFRAME_OFFSET))(nullptr);
		}

		::System::Void SetCustomNavigation()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPSELECTIONGROUPELEMENT_SETCUSTOMNAVIGATION_OFFSET))(nullptr);
		}

		::UnityEngine::UI::Selectable* FindSelectable(::UnityEngine::Vector3* arg)
		{
			return (return (::UnityEngine::UI::Selectable*(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPSELECTIONGROUPELEMENT_FINDSELECTABLE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UI::Selectable* FindCustomSelectable(::UnityEngine::EventSystems::MoveDirection* arg, Il2CppObject* arg)
		{
			return (return (::UnityEngine::UI::Selectable*(*)(::UnityEngine::EventSystems::MoveDirection*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPSELECTIONGROUPELEMENT_FINDCUSTOMSELECTABLE_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Vector3* GetPointOnRectEdge(::UnityEngine::RectTransform* arg, ::UnityEngine::Vector2* arg)
		{
			return (return (::UnityEngine::Vector3*(*)(::UnityEngine::RectTransform*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPSELECTIONGROUPELEMENT_GETPOINTONRECTEDGE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean UpdateNavigation()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPSELECTIONGROUPELEMENT_UPDATENAVIGATION_OFFSET))(nullptr);
		}

		::System::Void OnMove(::UnityEngine::EventSystems::AxisEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::AxisEventData*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPSELECTIONGROUPELEMENT_ONMOVE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPSELECTIONGROUPELEMENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _Awake_b__26_0(::UnityEngine::UI::Image* arg)
		{
			((::System::Void(*)(::UnityEngine::UI::Image*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPSELECTIONGROUPELEMENT__AWAKE_B__26_0_OFFSET))(arg, nullptr);
		}

		::System::Void _Awake_b__26_1(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPSELECTIONGROUPELEMENT__AWAKE_B__26_1_OFFSET))(arg, nullptr);
		}

		::System::Void _Awake_b__26_3(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPSELECTIONGROUPELEMENT__AWAKE_B__26_3_OFFSET))(str, nullptr);
		}

		::System::Void _Awake_b__26_2(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPSELECTIONGROUPELEMENT__AWAKE_B__26_2_OFFSET))(arg, nullptr);
		}

	};
}

