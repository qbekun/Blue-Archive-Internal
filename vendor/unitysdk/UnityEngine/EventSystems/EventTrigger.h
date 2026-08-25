#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::EventSystems { class PointerEventData; }
namespace UnityEngine::EventSystems { class AxisEventData; }
namespace UnityEngine::EventSystems { class BaseEventData; }
namespace UnityEngine::EventSystems { class EventTriggerType; }

#define UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_SET_DELEGATES_OFFSET UNITYSDK_OFFSET(0xA493510)
#define UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_ONPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0xA493520)
#define UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_ONPOINTERCLICK_OFFSET UNITYSDK_OFFSET(0xA493770)
#define UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_ONINITIALIZEPOTENTIALDRAG_OFFSET UNITYSDK_OFFSET(0xA493780)
#define UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_ONMOVE_OFFSET UNITYSDK_OFFSET(0xA493790)
#define UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_ONSUBMIT_OFFSET UNITYSDK_OFFSET(0xA4937A0)
#define UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_ONDESELECT_OFFSET UNITYSDK_OFFSET(0xA4937B0)
#define UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_ONENDDRAG_OFFSET UNITYSDK_OFFSET(0xA4937C0)
#define UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_GET_TRIGGERS_OFFSET UNITYSDK_OFFSET(0xA4937D0)
#define UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_ONPOINTEREXIT_OFFSET UNITYSDK_OFFSET(0xA493850)
#define UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA493860)
#define UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_ONPOINTERUP_OFFSET UNITYSDK_OFFSET(0xA493870)
#define UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_SET_TRIGGERS_OFFSET UNITYSDK_OFFSET(0xA493880)
#define UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_ONCANCEL_OFFSET UNITYSDK_OFFSET(0xA493890)
#define UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_ONPOINTERENTER_OFFSET UNITYSDK_OFFSET(0xA4938A0)
#define UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_EXECUTE_OFFSET UNITYSDK_OFFSET(0xA493530)
#define UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_ONDROP_OFFSET UNITYSDK_OFFSET(0xA4938B0)
#define UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_ONBEGINDRAG_OFFSET UNITYSDK_OFFSET(0xA4938C0)
#define UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_GET_DELEGATES_OFFSET UNITYSDK_OFFSET(0xA4938D0)
#define UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_ONSCROLL_OFFSET UNITYSDK_OFFSET(0xA493950)
#define UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_ONDRAG_OFFSET UNITYSDK_OFFSET(0xA493960)
#define UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_ONUPDATESELECTED_OFFSET UNITYSDK_OFFSET(0xA493970)
#define UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_ONSELECT_OFFSET UNITYSDK_OFFSET(0xA493980)

namespace UnityEngine::EventSystems
{
	inline static constexpr unsigned int EventTrigger_TypeDefinitionIndex = 34919;

	class EventTrigger : public Il2CppObject
	{
	public:
		Il2CppObject* m_Delegates; // 0x18

		::System::Void set_delegates(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_SET_DELEGATES_OFFSET))(arg, nullptr);
		}

		::System::Void OnPointerDown(::UnityEngine::EventSystems::PointerEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::PointerEventData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_ONPOINTERDOWN_OFFSET))(arg, nullptr);
		}

		::System::Void OnPointerClick(::UnityEngine::EventSystems::PointerEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::PointerEventData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_ONPOINTERCLICK_OFFSET))(arg, nullptr);
		}

		::System::Void OnInitializePotentialDrag(::UnityEngine::EventSystems::PointerEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::PointerEventData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_ONINITIALIZEPOTENTIALDRAG_OFFSET))(arg, nullptr);
		}

		::System::Void OnMove(::UnityEngine::EventSystems::AxisEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::AxisEventData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_ONMOVE_OFFSET))(arg, nullptr);
		}

		::System::Void OnSubmit(::UnityEngine::EventSystems::BaseEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::BaseEventData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_ONSUBMIT_OFFSET))(arg, nullptr);
		}

		::System::Void OnDeselect(::UnityEngine::EventSystems::BaseEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::BaseEventData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_ONDESELECT_OFFSET))(arg, nullptr);
		}

		::System::Void OnEndDrag(::UnityEngine::EventSystems::PointerEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::PointerEventData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_ONENDDRAG_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_triggers()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_GET_TRIGGERS_OFFSET))(nullptr);
		}

		::System::Void OnPointerExit(::UnityEngine::EventSystems::PointerEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::PointerEventData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_ONPOINTEREXIT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnPointerUp(::UnityEngine::EventSystems::PointerEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::PointerEventData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_ONPOINTERUP_OFFSET))(arg, nullptr);
		}

		::System::Void set_triggers(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_SET_TRIGGERS_OFFSET))(arg, nullptr);
		}

		::System::Void OnCancel(::UnityEngine::EventSystems::BaseEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::BaseEventData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_ONCANCEL_OFFSET))(arg, nullptr);
		}

		::System::Void OnPointerEnter(::UnityEngine::EventSystems::PointerEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::PointerEventData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_ONPOINTERENTER_OFFSET))(arg, nullptr);
		}

		::System::Void Execute(::UnityEngine::EventSystems::EventTriggerType* arg, ::UnityEngine::EventSystems::BaseEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::EventTriggerType*, ::UnityEngine::EventSystems::BaseEventData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_EXECUTE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void OnDrop(::UnityEngine::EventSystems::PointerEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::PointerEventData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_ONDROP_OFFSET))(arg, nullptr);
		}

		::System::Void OnBeginDrag(::UnityEngine::EventSystems::PointerEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::PointerEventData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_ONBEGINDRAG_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_delegates()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_GET_DELEGATES_OFFSET))(nullptr);
		}

		::System::Void OnScroll(::UnityEngine::EventSystems::PointerEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::PointerEventData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_ONSCROLL_OFFSET))(arg, nullptr);
		}

		::System::Void OnDrag(::UnityEngine::EventSystems::PointerEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::PointerEventData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_ONDRAG_OFFSET))(arg, nullptr);
		}

		::System::Void OnUpdateSelected(::UnityEngine::EventSystems::BaseEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::BaseEventData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_ONUPDATESELECTED_OFFSET))(arg, nullptr);
		}

		::System::Void OnSelect(::UnityEngine::EventSystems::BaseEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::BaseEventData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTTRIGGER_ONSELECT_OFFSET))(arg, nullptr);
		}

	};
}

