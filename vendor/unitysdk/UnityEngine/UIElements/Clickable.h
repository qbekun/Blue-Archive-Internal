#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Vector2; }
namespace UnityEngine::UIElements { class IVisualElementScheduledItem; }
namespace UnityEngine::UIElements { class InvokePolicy; }
namespace UnityEngine::UIElements { class TimerState; }
namespace UnityEngine::UIElements { class MouseDownEvent; }
namespace UnityEngine::UIElements { class MouseMoveEvent; }
namespace UnityEngine::UIElements { class MouseUpEvent; }
namespace UnityEngine::UIElements { class MouseCaptureOutEvent; }
namespace UnityEngine::UIElements { class PointerDownEvent; }
namespace UnityEngine::UIElements { class PointerMoveEvent; }
namespace UnityEngine::UIElements { class PointerUpEvent; }
namespace UnityEngine::UIElements { class PointerCancelEvent; }
namespace UnityEngine::UIElements { class PointerCaptureOutEvent; }
namespace UnityEngine::UIElements { class EventBase; }

#define UNITYENGINE_UIELEMENTS_CLICKABLE_ADD_CLICKED_OFFSET UNITYSDK_OFFSET(0xA30DD60)
#define UNITYENGINE_UIELEMENTS_CLICKABLE_REMOVE_CLICKED_OFFSET UNITYSDK_OFFSET(0xA30DE00)
#define UNITYENGINE_UIELEMENTS_CLICKABLE_GET_ACTIVE_OFFSET UNITYSDK_OFFSET(0xA30DEA0)
#define UNITYENGINE_UIELEMENTS_CLICKABLE_SET_ACTIVE_OFFSET UNITYSDK_OFFSET(0xA30DEB0)
#define UNITYENGINE_UIELEMENTS_CLICKABLE_GET_LASTMOUSEPOSITION_OFFSET UNITYSDK_OFFSET(0xA30DEC0)
#define UNITYENGINE_UIELEMENTS_CLICKABLE_SET_LASTMOUSEPOSITION_OFFSET UNITYSDK_OFFSET(0xA30DED0)
#define UNITYENGINE_UIELEMENTS_CLICKABLE_GET_ACCEPTCLICKSIFDISABLED_OFFSET UNITYSDK_OFFSET(0xA30DEE0)
#define UNITYENGINE_UIELEMENTS_CLICKABLE_GET_INVOKEPOLICY_OFFSET UNITYSDK_OFFSET(0xA30DEF0)
#define UNITYENGINE_UIELEMENTS_CLICKABLE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA30DF00)
#define UNITYENGINE_UIELEMENTS_CLICKABLE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA30E010)
#define UNITYENGINE_UIELEMENTS_CLICKABLE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA30DF30)
#define UNITYENGINE_UIELEMENTS_CLICKABLE_ONTIMER_OFFSET UNITYSDK_OFFSET(0xA30E0F0)
#define UNITYENGINE_UIELEMENTS_CLICKABLE_ISREPEATABLE_OFFSET UNITYSDK_OFFSET(0xA30E1F0)
#define UNITYENGINE_UIELEMENTS_CLICKABLE_REGISTERCALLBACKSONTARGET_OFFSET UNITYSDK_OFFSET(0xA30E2E0)
#define UNITYENGINE_UIELEMENTS_CLICKABLE_UNREGISTERCALLBACKSFROMTARGET_OFFSET UNITYSDK_OFFSET(0xA30E770)
#define UNITYENGINE_UIELEMENTS_CLICKABLE_ONMOUSEDOWN_OFFSET UNITYSDK_OFFSET(0xA30EBA0)
#define UNITYENGINE_UIELEMENTS_CLICKABLE_ONMOUSEMOVE_OFFSET UNITYSDK_OFFSET(0xA30EE10)
#define UNITYENGINE_UIELEMENTS_CLICKABLE_ONMOUSEUP_OFFSET UNITYSDK_OFFSET(0xA30EE80)
#define UNITYENGINE_UIELEMENTS_CLICKABLE_ONMOUSECAPTUREOUT_OFFSET UNITYSDK_OFFSET(0xA30F050)
#define UNITYENGINE_UIELEMENTS_CLICKABLE_ONPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0xA30F0D0)
#define UNITYENGINE_UIELEMENTS_CLICKABLE_ONPOINTERMOVE_OFFSET UNITYSDK_OFFSET(0xA30F4D0)
#define UNITYENGINE_UIELEMENTS_CLICKABLE_ONPOINTERUP_OFFSET UNITYSDK_OFFSET(0xA30F5D0)
#define UNITYENGINE_UIELEMENTS_CLICKABLE_ONPOINTERCANCEL_OFFSET UNITYSDK_OFFSET(0xA30F800)
#define UNITYENGINE_UIELEMENTS_CLICKABLE_ONPOINTERCAPTUREOUT_OFFSET UNITYSDK_OFFSET(0xA30F9C0)
#define UNITYENGINE_UIELEMENTS_CLICKABLE_CONTAINSPOINTER_OFFSET UNITYSDK_OFFSET(0xA30E210)
#define UNITYENGINE_UIELEMENTS_CLICKABLE_ISNOTMOUSEEVENT_OFFSET UNITYSDK_OFFSET(0xA30F960)
#define UNITYENGINE_UIELEMENTS_CLICKABLE_INVOKE_OFFSET UNITYSDK_OFFSET(0xA30E280)
#define UNITYENGINE_UIELEMENTS_CLICKABLE_SIMULATESINGLECLICK_OFFSET UNITYSDK_OFFSET(0xA30FAC0)
#define UNITYENGINE_UIELEMENTS_CLICKABLE_PROCESSDOWNEVENT_OFFSET UNITYSDK_OFFSET(0xA30FCB0)
#define UNITYENGINE_UIELEMENTS_CLICKABLE_PROCESSMOVEEVENT_OFFSET UNITYSDK_OFFSET(0xA310160)
#define UNITYENGINE_UIELEMENTS_CLICKABLE_PROCESSUPEVENT_OFFSET UNITYSDK_OFFSET(0xA310210)
#define UNITYENGINE_UIELEMENTS_CLICKABLE_PROCESSCANCELEVENT_OFFSET UNITYSDK_OFFSET(0xA310490)
#define UNITYENGINE_UIELEMENTS_CLICKABLE__SIMULATESINGLECLICK_B__43_0_OFFSET UNITYSDK_OFFSET(0xA310610)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int Clickable_TypeDefinitionIndex = 30070;

	class Clickable : public Il2CppObject
	{
	public:
		Il2CppObject* clickedWithEventInfo; // 0x38
		::System::Action* clicked; // 0x40
		::System::Int64 m_Delay; // 0x48
		::System::Int64 m_Interval; // 0x50
		::System::Boolean _active_k__BackingField; // 0x58
		::UnityEngine::Vector2* _lastMousePosition_k__BackingField; // 0x5C
		::System::Int32 m_ActivePointerId; // 0x64
		::System::Boolean m_AcceptClicksIfDisabled; // 0x68
		::UnityEngine::UIElements::IVisualElementScheduledItem* m_Repeater; // 0x70

		::System::Void add_clicked(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_CLICKABLE_ADD_CLICKED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_clicked(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_CLICKABLE_REMOVE_CLICKED_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_active()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_CLICKABLE_GET_ACTIVE_OFFSET))(nullptr);
		}

		::System::Void set_active(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_CLICKABLE_SET_ACTIVE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* get_lastMousePosition()
		{
			return (return (::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_CLICKABLE_GET_LASTMOUSEPOSITION_OFFSET))(nullptr);
		}

		::System::Void set_lastMousePosition(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_CLICKABLE_SET_LASTMOUSEPOSITION_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_acceptClicksIfDisabled()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_CLICKABLE_GET_ACCEPTCLICKSIFDISABLED_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::InvokePolicy* get_invokePolicy()
		{
			return (return (::UnityEngine::UIElements::InvokePolicy*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_CLICKABLE_GET_INVOKEPOLICY_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Action* arg, ::System::Int64 arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::System::Action*, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_CLICKABLE_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_CLICKABLE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_CLICKABLE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void OnTimer(::UnityEngine::UIElements::TimerState* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::TimerState*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_CLICKABLE_ONTIMER_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsRepeatable()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_CLICKABLE_ISREPEATABLE_OFFSET))(nullptr);
		}

		::System::Void RegisterCallbacksOnTarget()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_CLICKABLE_REGISTERCALLBACKSONTARGET_OFFSET))(nullptr);
		}

		::System::Void UnregisterCallbacksFromTarget()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_CLICKABLE_UNREGISTERCALLBACKSFROMTARGET_OFFSET))(nullptr);
		}

		::System::Void OnMouseDown(::UnityEngine::UIElements::MouseDownEvent* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::MouseDownEvent*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_CLICKABLE_ONMOUSEDOWN_OFFSET))(arg, nullptr);
		}

		::System::Void OnMouseMove(::UnityEngine::UIElements::MouseMoveEvent* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::MouseMoveEvent*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_CLICKABLE_ONMOUSEMOVE_OFFSET))(arg, nullptr);
		}

		::System::Void OnMouseUp(::UnityEngine::UIElements::MouseUpEvent* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::MouseUpEvent*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_CLICKABLE_ONMOUSEUP_OFFSET))(arg, nullptr);
		}

		::System::Void OnMouseCaptureOut(::UnityEngine::UIElements::MouseCaptureOutEvent* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::MouseCaptureOutEvent*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_CLICKABLE_ONMOUSECAPTUREOUT_OFFSET))(arg, nullptr);
		}

		::System::Void OnPointerDown(::UnityEngine::UIElements::PointerDownEvent* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::PointerDownEvent*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_CLICKABLE_ONPOINTERDOWN_OFFSET))(arg, nullptr);
		}

		::System::Void OnPointerMove(::UnityEngine::UIElements::PointerMoveEvent* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::PointerMoveEvent*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_CLICKABLE_ONPOINTERMOVE_OFFSET))(arg, nullptr);
		}

		::System::Void OnPointerUp(::UnityEngine::UIElements::PointerUpEvent* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::PointerUpEvent*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_CLICKABLE_ONPOINTERUP_OFFSET))(arg, nullptr);
		}

		::System::Void OnPointerCancel(::UnityEngine::UIElements::PointerCancelEvent* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::PointerCancelEvent*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_CLICKABLE_ONPOINTERCANCEL_OFFSET))(arg, nullptr);
		}

		::System::Void OnPointerCaptureOut(::UnityEngine::UIElements::PointerCaptureOutEvent* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::PointerCaptureOutEvent*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_CLICKABLE_ONPOINTERCAPTUREOUT_OFFSET))(arg, nullptr);
		}

		::System::Boolean ContainsPointer(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_CLICKABLE_CONTAINSPOINTER_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsNotMouseEvent(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_CLICKABLE_ISNOTMOUSEEVENT_OFFSET))(arg, nullptr);
		}

		::System::Void Invoke(::UnityEngine::UIElements::EventBase* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::EventBase*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_CLICKABLE_INVOKE_OFFSET))(arg, nullptr);
		}

		::System::Void SimulateSingleClick(::UnityEngine::UIElements::EventBase* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::EventBase*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_CLICKABLE_SIMULATESINGLECLICK_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ProcessDownEvent(::UnityEngine::UIElements::EventBase* arg, ::UnityEngine::Vector2* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::EventBase*, ::UnityEngine::Vector2*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_CLICKABLE_PROCESSDOWNEVENT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void ProcessMoveEvent(::UnityEngine::UIElements::EventBase* arg, ::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::EventBase*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_CLICKABLE_PROCESSMOVEEVENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ProcessUpEvent(::UnityEngine::UIElements::EventBase* arg, ::UnityEngine::Vector2* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::EventBase*, ::UnityEngine::Vector2*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_CLICKABLE_PROCESSUPEVENT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void ProcessCancelEvent(::UnityEngine::UIElements::EventBase* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::EventBase*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_CLICKABLE_PROCESSCANCELEVENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void _SimulateSingleClick_b__43_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_CLICKABLE__SIMULATESINGLECLICK_B__43_0_OFFSET))(nullptr);
		}

	};
}

