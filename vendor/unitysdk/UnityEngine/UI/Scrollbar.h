#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Vector2; }
namespace UnityEngine { class DrivenRectTransformTracker; }
namespace UnityEngine { class Coroutine; }
namespace UnityEngine::UI { class CanvasUpdate; }
namespace UnityEngine::EventSystems { class PointerEventData; }
namespace UnityEngine { class Camera; }
namespace UnityEngine::EventSystems { class AxisEventData; }
namespace UnityEngine::UI { class Selectable; }
namespace UnityEngine { class Transform; }

#define UNITYENGINE_UI_SCROLLBAR_GET_HANDLERECT_OFFSET UNITYSDK_OFFSET(0xA474050)
#define UNITYENGINE_UI_SCROLLBAR_SET_HANDLERECT_OFFSET UNITYSDK_OFFSET(0xA474060)
#define UNITYENGINE_UI_SCROLLBAR_GET_DIRECTION_OFFSET UNITYSDK_OFFSET(0xA474500)
#define UNITYENGINE_UI_SCROLLBAR_SET_DIRECTION_OFFSET UNITYSDK_OFFSET(0xA474510)
#define UNITYENGINE_UI_SCROLLBAR_.CTOR_OFFSET UNITYSDK_OFFSET(0xA474570)
#define UNITYENGINE_UI_SCROLLBAR_GET_VALUE_OFFSET UNITYSDK_OFFSET(0xA474820)
#define UNITYENGINE_UI_SCROLLBAR_SET_VALUE_OFFSET UNITYSDK_OFFSET(0xA474920)
#define UNITYENGINE_UI_SCROLLBAR_SETVALUEWITHOUTNOTIFY_OFFSET UNITYSDK_OFFSET(0xA474BE0)
#define UNITYENGINE_UI_SCROLLBAR_GET_SIZE_OFFSET UNITYSDK_OFFSET(0xA474BF0)
#define UNITYENGINE_UI_SCROLLBAR_SET_SIZE_OFFSET UNITYSDK_OFFSET(0xA474C00)
#define UNITYENGINE_UI_SCROLLBAR_GET_NUMBEROFSTEPS_OFFSET UNITYSDK_OFFSET(0xA474C90)
#define UNITYENGINE_UI_SCROLLBAR_SET_NUMBEROFSTEPS_OFFSET UNITYSDK_OFFSET(0xA474CA0)
#define UNITYENGINE_UI_SCROLLBAR_GET_ONVALUECHANGED_OFFSET UNITYSDK_OFFSET(0xA474D10)
#define UNITYENGINE_UI_SCROLLBAR_SET_ONVALUECHANGED_OFFSET UNITYSDK_OFFSET(0xA474D20)
#define UNITYENGINE_UI_SCROLLBAR_GET_STEPSIZE_OFFSET UNITYSDK_OFFSET(0xA474D40)
#define UNITYENGINE_UI_SCROLLBAR_REBUILD_OFFSET UNITYSDK_OFFSET(0xA474D70)
#define UNITYENGINE_UI_SCROLLBAR_LAYOUTCOMPLETE_OFFSET UNITYSDK_OFFSET(0xA474D80)
#define UNITYENGINE_UI_SCROLLBAR_GRAPHICUPDATECOMPLETE_OFFSET UNITYSDK_OFFSET(0xA474D90)
#define UNITYENGINE_UI_SCROLLBAR_ONENABLE_OFFSET UNITYSDK_OFFSET(0xA474DA0)
#define UNITYENGINE_UI_SCROLLBAR_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xA4750D0)
#define UNITYENGINE_UI_SCROLLBAR_UPDATE_OFFSET UNITYSDK_OFFSET(0xA475280)
#define UNITYENGINE_UI_SCROLLBAR_UPDATECACHEDREFERENCES_OFFSET UNITYSDK_OFFSET(0xA4740C0)
#define UNITYENGINE_UI_SCROLLBAR_SET_OFFSET UNITYSDK_OFFSET(0xA474930)
#define UNITYENGINE_UI_SCROLLBAR_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET UNITYSDK_OFFSET(0xA4752A0)
#define UNITYENGINE_UI_SCROLLBAR_GET_AXIS_OFFSET UNITYSDK_OFFSET(0xA4752E0)
#define UNITYENGINE_UI_SCROLLBAR_GET_REVERSEVALUE_OFFSET UNITYSDK_OFFSET(0xA4752F0)
#define UNITYENGINE_UI_SCROLLBAR_UPDATEVISUALS_OFFSET UNITYSDK_OFFSET(0xA4741B0)
#define UNITYENGINE_UI_SCROLLBAR_UPDATEDRAG_OFFSET UNITYSDK_OFFSET(0xA475310)
#define UNITYENGINE_UI_SCROLLBAR_DOUPDATEDRAG_OFFSET UNITYSDK_OFFSET(0xA4757A0)
#define UNITYENGINE_UI_SCROLLBAR_MAYDRAG_OFFSET UNITYSDK_OFFSET(0xA4758D0)
#define UNITYENGINE_UI_SCROLLBAR_ONBEGINDRAG_OFFSET UNITYSDK_OFFSET(0xA475930)
#define UNITYENGINE_UI_SCROLLBAR_ONDRAG_OFFSET UNITYSDK_OFFSET(0xA475B30)
#define UNITYENGINE_UI_SCROLLBAR_ONPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0xA475BF0)
#define UNITYENGINE_UI_SCROLLBAR_CLICKREPEAT_OFFSET UNITYSDK_OFFSET(0xA475F50)
#define UNITYENGINE_UI_SCROLLBAR_CLICKREPEAT_OFFSET UNITYSDK_OFFSET(0xA475EC0)
#define UNITYENGINE_UI_SCROLLBAR_ONPOINTERUP_OFFSET UNITYSDK_OFFSET(0xA476020)
#define UNITYENGINE_UI_SCROLLBAR_ONMOVE_OFFSET UNITYSDK_OFFSET(0xA4761A0)
#define UNITYENGINE_UI_SCROLLBAR_FINDSELECTABLEONLEFT_OFFSET UNITYSDK_OFFSET(0xA476600)
#define UNITYENGINE_UI_SCROLLBAR_FINDSELECTABLEONRIGHT_OFFSET UNITYSDK_OFFSET(0xA476700)
#define UNITYENGINE_UI_SCROLLBAR_FINDSELECTABLEONUP_OFFSET UNITYSDK_OFFSET(0xA476800)
#define UNITYENGINE_UI_SCROLLBAR_FINDSELECTABLEONDOWN_OFFSET UNITYSDK_OFFSET(0xA476910)
#define UNITYENGINE_UI_SCROLLBAR_ONINITIALIZEPOTENTIALDRAG_OFFSET UNITYSDK_OFFSET(0xA476A20)
#define UNITYENGINE_UI_SCROLLBAR_SETDIRECTION_OFFSET UNITYSDK_OFFSET(0xA476A40)
#define UNITYENGINE_UI_SCROLLBAR_UNITYENGINE.UI.ICANVASELEMENT.GET_TRANSFORM_OFFSET UNITYSDK_OFFSET(0xA476BE0)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int Scrollbar_TypeDefinitionIndex = 34837;

	class Scrollbar : public Il2CppObject
	{
	public:
		::UnityEngine::RectTransform* m_HandleRect; // 0xF8
		Direction* m_Direction; // 0x100
		::System::Single m_Value; // 0x104
		::System::Single m_Size; // 0x108
		::System::Int32 m_NumberOfSteps; // 0x10C
		ScrollEvent* m_OnValueChanged; // 0x110
		::UnityEngine::RectTransform* m_ContainerRect; // 0x118
		::UnityEngine::Vector2* m_Offset; // 0x120
		::UnityEngine::DrivenRectTransformTracker* m_Tracker; // 0x128
		::UnityEngine::Coroutine* m_PointerDownRepeat; // 0x130
		::System::Boolean isPointerDownAndNotDragging; // 0x138
		::System::Boolean m_DelayedUpdateVisuals; // 0x139

		::UnityEngine::RectTransform* get_handleRect()
		{
			return (return (::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLBAR_GET_HANDLERECT_OFFSET))(nullptr);
		}

		::System::Void set_handleRect(::UnityEngine::RectTransform* arg)
		{
			((::System::Void(*)(::UnityEngine::RectTransform*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLBAR_SET_HANDLERECT_OFFSET))(arg, nullptr);
		}

		Direction* get_direction()
		{
			return (return (Direction*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLBAR_GET_DIRECTION_OFFSET))(nullptr);
		}

		::System::Void set_direction(Direction* arg)
		{
			((::System::Void(*)(Direction*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLBAR_SET_DIRECTION_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLBAR_.CTOR_OFFSET))(nullptr);
		}

		::System::Single get_value()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLBAR_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Void set_value(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLBAR_SET_VALUE_OFFSET))(arg, nullptr);
		}

		::System::Void SetValueWithoutNotify(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLBAR_SETVALUEWITHOUTNOTIFY_OFFSET))(arg, nullptr);
		}

		::System::Single get_size()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLBAR_GET_SIZE_OFFSET))(nullptr);
		}

		::System::Void set_size(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLBAR_SET_SIZE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_numberOfSteps()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLBAR_GET_NUMBEROFSTEPS_OFFSET))(nullptr);
		}

		::System::Void set_numberOfSteps(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLBAR_SET_NUMBEROFSTEPS_OFFSET))(arg, nullptr);
		}

		ScrollEvent* get_onValueChanged()
		{
			return (return (ScrollEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLBAR_GET_ONVALUECHANGED_OFFSET))(nullptr);
		}

		::System::Void set_onValueChanged(ScrollEvent* arg)
		{
			((::System::Void(*)(ScrollEvent*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLBAR_SET_ONVALUECHANGED_OFFSET))(arg, nullptr);
		}

		::System::Single get_stepSize()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLBAR_GET_STEPSIZE_OFFSET))(nullptr);
		}

		::System::Void Rebuild(::UnityEngine::UI::CanvasUpdate* arg)
		{
			((::System::Void(*)(::UnityEngine::UI::CanvasUpdate*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLBAR_REBUILD_OFFSET))(arg, nullptr);
		}

		::System::Void LayoutComplete()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLBAR_LAYOUTCOMPLETE_OFFSET))(nullptr);
		}

		::System::Void GraphicUpdateComplete()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLBAR_GRAPHICUPDATECOMPLETE_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLBAR_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLBAR_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLBAR_UPDATE_OFFSET))(nullptr);
		}

		::System::Void UpdateCachedReferences()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLBAR_UPDATECACHEDREFERENCES_OFFSET))(nullptr);
		}

		::System::Void Set(::System::Single arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Single, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLBAR_SET_OFFSET))(arg, arg, nullptr);
		}

		::System::Void OnRectTransformDimensionsChange()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLBAR_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET))(nullptr);
		}

		Axis* get_axis()
		{
			return (return (Axis*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLBAR_GET_AXIS_OFFSET))(nullptr);
		}

		::System::Boolean get_reverseValue()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLBAR_GET_REVERSEVALUE_OFFSET))(nullptr);
		}

		::System::Void UpdateVisuals()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLBAR_UPDATEVISUALS_OFFSET))(nullptr);
		}

		::System::Void UpdateDrag(::UnityEngine::EventSystems::PointerEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::PointerEventData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLBAR_UPDATEDRAG_OFFSET))(arg, nullptr);
		}

		::System::Void DoUpdateDrag(::UnityEngine::Vector2* arg, ::System::Single arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLBAR_DOUPDATEDRAG_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean MayDrag(::UnityEngine::EventSystems::PointerEventData* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::EventSystems::PointerEventData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLBAR_MAYDRAG_OFFSET))(arg, nullptr);
		}

		::System::Void OnBeginDrag(::UnityEngine::EventSystems::PointerEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::PointerEventData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLBAR_ONBEGINDRAG_OFFSET))(arg, nullptr);
		}

		::System::Void OnDrag(::UnityEngine::EventSystems::PointerEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::PointerEventData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLBAR_ONDRAG_OFFSET))(arg, nullptr);
		}

		::System::Void OnPointerDown(::UnityEngine::EventSystems::PointerEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::PointerEventData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLBAR_ONPOINTERDOWN_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* ClickRepeat(::UnityEngine::EventSystems::PointerEventData* arg)
		{
			return (return (::System::Collections::IEnumerator*(*)(::UnityEngine::EventSystems::PointerEventData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLBAR_CLICKREPEAT_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* ClickRepeat(::UnityEngine::Vector2* arg, ::UnityEngine::Camera* arg)
		{
			return (return (::System::Collections::IEnumerator*(*)(::UnityEngine::Vector2*, ::UnityEngine::Camera*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLBAR_CLICKREPEAT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void OnPointerUp(::UnityEngine::EventSystems::PointerEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::PointerEventData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLBAR_ONPOINTERUP_OFFSET))(arg, nullptr);
		}

		::System::Void OnMove(::UnityEngine::EventSystems::AxisEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::AxisEventData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLBAR_ONMOVE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UI::Selectable* FindSelectableOnLeft()
		{
			return (return (::UnityEngine::UI::Selectable*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLBAR_FINDSELECTABLEONLEFT_OFFSET))(nullptr);
		}

		::UnityEngine::UI::Selectable* FindSelectableOnRight()
		{
			return (return (::UnityEngine::UI::Selectable*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLBAR_FINDSELECTABLEONRIGHT_OFFSET))(nullptr);
		}

		::UnityEngine::UI::Selectable* FindSelectableOnUp()
		{
			return (return (::UnityEngine::UI::Selectable*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLBAR_FINDSELECTABLEONUP_OFFSET))(nullptr);
		}

		::UnityEngine::UI::Selectable* FindSelectableOnDown()
		{
			return (return (::UnityEngine::UI::Selectable*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLBAR_FINDSELECTABLEONDOWN_OFFSET))(nullptr);
		}

		::System::Void OnInitializePotentialDrag(::UnityEngine::EventSystems::PointerEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::PointerEventData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLBAR_ONINITIALIZEPOTENTIALDRAG_OFFSET))(arg, nullptr);
		}

		::System::Void SetDirection(Direction* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(Direction*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLBAR_SETDIRECTION_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Transform* UnityEngine.UI.ICanvasElement.get_transform()
		{
			return (return (::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SCROLLBAR_UNITYENGINE.UI.ICANVASELEMENT.GET_TRANSFORM_OFFSET))(nullptr);
		}

	};
}

