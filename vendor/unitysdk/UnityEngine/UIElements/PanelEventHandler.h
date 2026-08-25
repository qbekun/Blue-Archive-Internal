#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class BaseRuntimePanel; }
namespace UnityEngine { class Event; }
namespace UnityEngine { class EventModifiers; }
namespace UnityEngine::UIElements { class IPanel; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::EventSystems { class EventSystem; }
namespace UnityEngine::UIElements { class FocusEvent; }
namespace UnityEngine::UIElements { class BlurEvent; }
namespace UnityEngine::EventSystems { class BaseEventData; }
namespace UnityEngine::EventSystems { class PointerEventData; }
namespace UnityEngine::EventSystems { class AxisEventData; }
namespace UnityEngine::UIElements { class EventBase; }

#define UNITYENGINE_UIELEMENTS_PANELEVENTHANDLER_GET_PANEL_OFFSET UNITYSDK_OFFSET(0xA48BBD0)
#define UNITYENGINE_UIELEMENTS_PANELEVENTHANDLER_SET_PANEL_OFFSET UNITYSDK_OFFSET(0xA48BBE0)
#define UNITYENGINE_UIELEMENTS_PANELEVENTHANDLER_GET_SELECTABLEGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0xA48BFF0)
#define UNITYENGINE_UIELEMENTS_PANELEVENTHANDLER_GET_EVENTSYSTEM_OFFSET UNITYSDK_OFFSET(0xA48C010)
#define UNITYENGINE_UIELEMENTS_PANELEVENTHANDLER_ONENABLE_OFFSET UNITYSDK_OFFSET(0xA48C120)
#define UNITYENGINE_UIELEMENTS_PANELEVENTHANDLER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xA48C140)
#define UNITYENGINE_UIELEMENTS_PANELEVENTHANDLER_REGISTERCALLBACKS_OFFSET UNITYSDK_OFFSET(0xA48BE40)
#define UNITYENGINE_UIELEMENTS_PANELEVENTHANDLER_UNREGISTERCALLBACKS_OFFSET UNITYSDK_OFFSET(0xA48BC90)
#define UNITYENGINE_UIELEMENTS_PANELEVENTHANDLER_ONPANELDESTROYED_OFFSET UNITYSDK_OFFSET(0xA48C160)
#define UNITYENGINE_UIELEMENTS_PANELEVENTHANDLER_ONELEMENTFOCUS_OFFSET UNITYSDK_OFFSET(0xA48C1C0)
#define UNITYENGINE_UIELEMENTS_PANELEVENTHANDLER_ONELEMENTBLUR_OFFSET UNITYSDK_OFFSET(0xA48C300)
#define UNITYENGINE_UIELEMENTS_PANELEVENTHANDLER_ONSELECT_OFFSET UNITYSDK_OFFSET(0xA48C310)
#define UNITYENGINE_UIELEMENTS_PANELEVENTHANDLER_ONDESELECT_OFFSET UNITYSDK_OFFSET(0xA48C3C0)
#define UNITYENGINE_UIELEMENTS_PANELEVENTHANDLER_ONPOINTERMOVE_OFFSET UNITYSDK_OFFSET(0xA48C3E0)
#define UNITYENGINE_UIELEMENTS_PANELEVENTHANDLER_ONPOINTERUP_OFFSET UNITYSDK_OFFSET(0xA48C7B0)
#define UNITYENGINE_UIELEMENTS_PANELEVENTHANDLER_ONPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0xA48CA10)
#define UNITYENGINE_UIELEMENTS_PANELEVENTHANDLER_ONPOINTEREXIT_OFFSET UNITYSDK_OFFSET(0xA48CCD0)
#define UNITYENGINE_UIELEMENTS_PANELEVENTHANDLER_ONPOINTERENTER_OFFSET UNITYSDK_OFFSET(0xA48D000)
#define UNITYENGINE_UIELEMENTS_PANELEVENTHANDLER_ONSUBMIT_OFFSET UNITYSDK_OFFSET(0xA48D060)
#define UNITYENGINE_UIELEMENTS_PANELEVENTHANDLER_ONCANCEL_OFFSET UNITYSDK_OFFSET(0xA48D3D0)
#define UNITYENGINE_UIELEMENTS_PANELEVENTHANDLER_ONMOVE_OFFSET UNITYSDK_OFFSET(0xA48D5C0)
#define UNITYENGINE_UIELEMENTS_PANELEVENTHANDLER_ONSCROLL_OFFSET UNITYSDK_OFFSET(0xA48D790)
#define UNITYENGINE_UIELEMENTS_PANELEVENTHANDLER_SENDEVENT_OFFSET UNITYSDK_OFFSET(0xA48C740)
#define UNITYENGINE_UIELEMENTS_PANELEVENTHANDLER_SENDEVENT_OFFSET UNITYSDK_OFFSET(0xA48D9A0)
#define UNITYENGINE_UIELEMENTS_PANELEVENTHANDLER_UPDATE_OFFSET UNITYSDK_OFFSET(0xA48DA00)
#define UNITYENGINE_UIELEMENTS_PANELEVENTHANDLER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xA48DAE0)
#define UNITYENGINE_UIELEMENTS_PANELEVENTHANDLER_PROCESSIMGUIEVENTS_OFFSET UNITYSDK_OFFSET(0xA48D250)
#define UNITYENGINE_UIELEMENTS_PANELEVENTHANDLER_PROCESSKEYBOARDEVENT_OFFSET UNITYSDK_OFFSET(0xA48DAF0)
#define UNITYENGINE_UIELEMENTS_PANELEVENTHANDLER_PROCESSTABEVENT_OFFSET UNITYSDK_OFFSET(0xA48DB50)
#define UNITYENGINE_UIELEMENTS_PANELEVENTHANDLER_SENDTABEVENT_OFFSET UNITYSDK_OFFSET(0xA48DF90)
#define UNITYENGINE_UIELEMENTS_PANELEVENTHANDLER_SENDKEYUPEVENT_OFFSET UNITYSDK_OFFSET(0xA48DBE0)
#define UNITYENGINE_UIELEMENTS_PANELEVENTHANDLER_SENDKEYDOWNEVENT_OFFSET UNITYSDK_OFFSET(0xA48DDB0)
#define UNITYENGINE_UIELEMENTS_PANELEVENTHANDLER_READPOINTERDATA_OFFSET UNITYSDK_OFFSET(0xA48C5D0)
#define UNITYENGINE_UIELEMENTS_PANELEVENTHANDLER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA48E790)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int PanelEventHandler_TypeDefinitionIndex = 34885;

	class PanelEventHandler : public Il2CppObject
	{
	public:
		::UnityEngine::UIElements::BaseRuntimePanel* m_Panel; // 0x18
		PointerEvent* m_PointerEvent; // 0x20
		::System::Boolean m_Selecting; // 0x28
		::UnityEngine::Event* m_Event; // 0x30
		::UnityEngine::EventModifiers* s_Modifiers; // 0x0

		::UnityEngine::UIElements::IPanel* get_panel()
		{
			return (return (::UnityEngine::UIElements::IPanel*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANELEVENTHANDLER_GET_PANEL_OFFSET))(nullptr);
		}

		::System::Void set_panel(::UnityEngine::UIElements::IPanel* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::IPanel*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANELEVENTHANDLER_SET_PANEL_OFFSET))(arg, nullptr);
		}

		::UnityEngine::GameObject* get_selectableGameObject()
		{
			return (return (::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANELEVENTHANDLER_GET_SELECTABLEGAMEOBJECT_OFFSET))(nullptr);
		}

		::UnityEngine::EventSystems::EventSystem* get_eventSystem()
		{
			return (return (::UnityEngine::EventSystems::EventSystem*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANELEVENTHANDLER_GET_EVENTSYSTEM_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANELEVENTHANDLER_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANELEVENTHANDLER_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void RegisterCallbacks()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANELEVENTHANDLER_REGISTERCALLBACKS_OFFSET))(nullptr);
		}

		::System::Void UnregisterCallbacks()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANELEVENTHANDLER_UNREGISTERCALLBACKS_OFFSET))(nullptr);
		}

		::System::Void OnPanelDestroyed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANELEVENTHANDLER_ONPANELDESTROYED_OFFSET))(nullptr);
		}

		::System::Void OnElementFocus(::UnityEngine::UIElements::FocusEvent* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::FocusEvent*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANELEVENTHANDLER_ONELEMENTFOCUS_OFFSET))(arg, nullptr);
		}

		::System::Void OnElementBlur(::UnityEngine::UIElements::BlurEvent* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::BlurEvent*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANELEVENTHANDLER_ONELEMENTBLUR_OFFSET))(arg, nullptr);
		}

		::System::Void OnSelect(::UnityEngine::EventSystems::BaseEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::BaseEventData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANELEVENTHANDLER_ONSELECT_OFFSET))(arg, nullptr);
		}

		::System::Void OnDeselect(::UnityEngine::EventSystems::BaseEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::BaseEventData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANELEVENTHANDLER_ONDESELECT_OFFSET))(arg, nullptr);
		}

		::System::Void OnPointerMove(::UnityEngine::EventSystems::PointerEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::PointerEventData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANELEVENTHANDLER_ONPOINTERMOVE_OFFSET))(arg, nullptr);
		}

		::System::Void OnPointerUp(::UnityEngine::EventSystems::PointerEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::PointerEventData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANELEVENTHANDLER_ONPOINTERUP_OFFSET))(arg, nullptr);
		}

		::System::Void OnPointerDown(::UnityEngine::EventSystems::PointerEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::PointerEventData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANELEVENTHANDLER_ONPOINTERDOWN_OFFSET))(arg, nullptr);
		}

		::System::Void OnPointerExit(::UnityEngine::EventSystems::PointerEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::PointerEventData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANELEVENTHANDLER_ONPOINTEREXIT_OFFSET))(arg, nullptr);
		}

		::System::Void OnPointerEnter(::UnityEngine::EventSystems::PointerEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::PointerEventData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANELEVENTHANDLER_ONPOINTERENTER_OFFSET))(arg, nullptr);
		}

		::System::Void OnSubmit(::UnityEngine::EventSystems::BaseEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::BaseEventData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANELEVENTHANDLER_ONSUBMIT_OFFSET))(arg, nullptr);
		}

		::System::Void OnCancel(::UnityEngine::EventSystems::BaseEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::BaseEventData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANELEVENTHANDLER_ONCANCEL_OFFSET))(arg, nullptr);
		}

		::System::Void OnMove(::UnityEngine::EventSystems::AxisEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::AxisEventData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANELEVENTHANDLER_ONMOVE_OFFSET))(arg, nullptr);
		}

		::System::Void OnScroll(::UnityEngine::EventSystems::PointerEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::PointerEventData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANELEVENTHANDLER_ONSCROLL_OFFSET))(arg, nullptr);
		}

		::System::Void SendEvent(::UnityEngine::UIElements::EventBase* arg, ::UnityEngine::EventSystems::BaseEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::EventBase*, ::UnityEngine::EventSystems::BaseEventData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANELEVENTHANDLER_SENDEVENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SendEvent(::UnityEngine::UIElements::EventBase* arg, ::UnityEngine::Event* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::EventBase*, ::UnityEngine::Event*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANELEVENTHANDLER_SENDEVENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANELEVENTHANDLER_UPDATE_OFFSET))(nullptr);
		}

		::System::Void LateUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANELEVENTHANDLER_LATEUPDATE_OFFSET))(nullptr);
		}

		::System::Void ProcessImguiEvents(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANELEVENTHANDLER_PROCESSIMGUIEVENTS_OFFSET))(arg, nullptr);
		}

		::System::Void ProcessKeyboardEvent(::UnityEngine::Event* arg)
		{
			((::System::Void(*)(::UnityEngine::Event*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANELEVENTHANDLER_PROCESSKEYBOARDEVENT_OFFSET))(arg, nullptr);
		}

		::System::Void ProcessTabEvent(::UnityEngine::Event* arg)
		{
			((::System::Void(*)(::UnityEngine::Event*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANELEVENTHANDLER_PROCESSTABEVENT_OFFSET))(arg, nullptr);
		}

		::System::Void SendTabEvent(::UnityEngine::Event* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Event*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANELEVENTHANDLER_SENDTABEVENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SendKeyUpEvent(::UnityEngine::Event* arg)
		{
			((::System::Void(*)(::UnityEngine::Event*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANELEVENTHANDLER_SENDKEYUPEVENT_OFFSET))(arg, nullptr);
		}

		::System::Void SendKeyDownEvent(::UnityEngine::Event* arg)
		{
			((::System::Void(*)(::UnityEngine::Event*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANELEVENTHANDLER_SENDKEYDOWNEVENT_OFFSET))(arg, nullptr);
		}

		::System::Boolean ReadPointerData(PointerEvent* arg, ::UnityEngine::EventSystems::PointerEventData* arg, PointerEventType* arg)
		{
			return (return (::System::Boolean(*)(PointerEvent*, ::UnityEngine::EventSystems::PointerEventData*, PointerEventType*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANELEVENTHANDLER_READPOINTERDATA_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANELEVENTHANDLER_.CTOR_OFFSET))(nullptr);
		}

	};
}

