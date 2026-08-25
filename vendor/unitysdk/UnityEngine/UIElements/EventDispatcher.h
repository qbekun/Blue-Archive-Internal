#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class ClickDetector; }
namespace UnityEngine::UIElements { class PointerDispatchState; }
namespace UnityEngine::UIElements { class EventDispatcher; }
namespace UnityEngine::UIElements { class EventBase; }
namespace UnityEngine::UIElements { class IPanel; }
namespace UnityEngine::UIElements { class DispatchMode; }

#define UNITYENGINE_UIELEMENTS_EVENTDISPATCHER_GET_POINTERSTATE_OFFSET UNITYSDK_OFFSET(0xA3153B0)
#define UNITYENGINE_UIELEMENTS_EVENTDISPATCHER_CREATEFORRUNTIME_OFFSET UNITYSDK_OFFSET(0xA3153C0)
#define UNITYENGINE_UIELEMENTS_EVENTDISPATCHER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA315600)
#define UNITYENGINE_UIELEMENTS_EVENTDISPATCHER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA315420)
#define UNITYENGINE_UIELEMENTS_EVENTDISPATCHER_GET_DISPATCHIMMEDIATELY_OFFSET UNITYSDK_OFFSET(0xA315750)
#define UNITYENGINE_UIELEMENTS_EVENTDISPATCHER_SET_PROCESSINGEVENTS_OFFSET UNITYSDK_OFFSET(0xA315770)
#define UNITYENGINE_UIELEMENTS_EVENTDISPATCHER_DISPATCH_OFFSET UNITYSDK_OFFSET(0xA315780)
#define UNITYENGINE_UIELEMENTS_EVENTDISPATCHER_CLOSEGATE_OFFSET UNITYSDK_OFFSET(0xA315200)
#define UNITYENGINE_UIELEMENTS_EVENTDISPATCHER_OPENGATE_OFFSET UNITYSDK_OFFSET(0xA315290)
#define UNITYENGINE_UIELEMENTS_EVENTDISPATCHER_PROCESSEVENTQUEUE_OFFSET UNITYSDK_OFFSET(0xA315D60)
#define UNITYENGINE_UIELEMENTS_EVENTDISPATCHER_PROCESSEVENT_OFFSET UNITYSDK_OFFSET(0xA315910)
#define UNITYENGINE_UIELEMENTS_EVENTDISPATCHER_APPLYDISPATCHINGSTRATEGIES_OFFSET UNITYSDK_OFFSET(0xA316160)
#define UNITYENGINE_UIELEMENTS_EVENTDISPATCHER_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA3164B0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int EventDispatcher_TypeDefinitionIndex = 30095;

	class EventDispatcher : public Il2CppObject
	{
	public:
		::UnityEngine::UIElements::ClickDetector* m_ClickDetector; // 0x10
		Il2CppObject* m_DispatchingStrategies; // 0x18
		Il2CppObject* k_EventQueuePool; // 0x0
		Il2CppObject* m_Queue; // 0x20
		::UnityEngine::UIElements::PointerDispatchState* _pointerState_k__BackingField; // 0x28
		::System::UInt32 m_GateCount; // 0x30
		Il2CppObject* m_DispatchContexts; // 0x38
		::Il2CppArray<::System::Object*>* s_EditorStrategies; // 0x8
		::System::Boolean m_Immediate; // 0x40
		::System::Boolean _processingEvents_k__BackingField; // 0x41

		::UnityEngine::UIElements::PointerDispatchState* get_pointerState()
		{
			return (return (::UnityEngine::UIElements::PointerDispatchState*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTDISPATCHER_GET_POINTERSTATE_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::EventDispatcher* CreateForRuntime(Il2CppObject* arg)
		{
			return (return (::UnityEngine::UIElements::EventDispatcher*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTDISPATCHER_CREATEFORRUNTIME_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTDISPATCHER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTDISPATCHER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_dispatchImmediately()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTDISPATCHER_GET_DISPATCHIMMEDIATELY_OFFSET))(nullptr);
		}

		::System::Void set_processingEvents(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTDISPATCHER_SET_PROCESSINGEVENTS_OFFSET))(arg, nullptr);
		}

		::System::Void Dispatch(::UnityEngine::UIElements::EventBase* arg, ::UnityEngine::UIElements::IPanel* arg, ::UnityEngine::UIElements::DispatchMode* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::EventBase*, ::UnityEngine::UIElements::IPanel*, ::UnityEngine::UIElements::DispatchMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTDISPATCHER_DISPATCH_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void CloseGate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTDISPATCHER_CLOSEGATE_OFFSET))(nullptr);
		}

		::System::Void OpenGate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTDISPATCHER_OPENGATE_OFFSET))(nullptr);
		}

		::System::Void ProcessEventQueue()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTDISPATCHER_PROCESSEVENTQUEUE_OFFSET))(nullptr);
		}

		::System::Void ProcessEvent(::UnityEngine::UIElements::EventBase* arg, ::UnityEngine::UIElements::IPanel* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::EventBase*, ::UnityEngine::UIElements::IPanel*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTDISPATCHER_PROCESSEVENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ApplyDispatchingStrategies(::UnityEngine::UIElements::EventBase* arg, ::UnityEngine::UIElements::IPanel* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::EventBase*, ::UnityEngine::UIElements::IPanel*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTDISPATCHER_APPLYDISPATCHINGSTRATEGIES_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTDISPATCHER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

