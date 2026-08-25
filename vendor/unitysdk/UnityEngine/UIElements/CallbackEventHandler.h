#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class EventCallbackRegistry; }
namespace UnityEngine::UIElements { class TrickleDown; }
namespace UnityEngine::UIElements { class InvokePolicy; }
namespace UnityEngine::UIElements { class EventBase; }
namespace UnityEngine::UIElements { class DispatchMode; }

#define UNITYENGINE_UIELEMENTS_CALLBACKEVENTHANDLER_REGISTERCALLBACK_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_CALLBACKEVENTHANDLER_REGISTERCALLBACK_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_CALLBACKEVENTHANDLER_UNREGISTERCALLBACK_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_CALLBACKEVENTHANDLER_SENDEVENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_CALLBACKEVENTHANDLER_SENDEVENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_CALLBACKEVENTHANDLER_HANDLEEVENTATTARGETPHASE_OFFSET UNITYSDK_OFFSET(0xA3E0B10)
#define UNITYENGINE_UIELEMENTS_CALLBACKEVENTHANDLER_HANDLEEVENT_OFFSET UNITYSDK_OFFSET(0xA3E0B90)
#define UNITYENGINE_UIELEMENTS_CALLBACKEVENTHANDLER_HASTRICKLEDOWNHANDLERS_OFFSET UNITYSDK_OFFSET(0xA3E0EE0)
#define UNITYENGINE_UIELEMENTS_CALLBACKEVENTHANDLER_HASBUBBLEUPHANDLERS_OFFSET UNITYSDK_OFFSET(0xA3E0F00)
#define UNITYENGINE_UIELEMENTS_CALLBACKEVENTHANDLER_EXECUTEDEFAULTACTIONATTARGET_OFFSET UNITYSDK_OFFSET(0xA3E0F20)
#define UNITYENGINE_UIELEMENTS_CALLBACKEVENTHANDLER_EXECUTEDEFAULTACTION_OFFSET UNITYSDK_OFFSET(0xA3E0F30)
#define UNITYENGINE_UIELEMENTS_CALLBACKEVENTHANDLER_EXECUTEDEFAULTACTIONDISABLEDATTARGET_OFFSET UNITYSDK_OFFSET(0xA3E0F40)
#define UNITYENGINE_UIELEMENTS_CALLBACKEVENTHANDLER_EXECUTEDEFAULTACTIONDISABLED_OFFSET UNITYSDK_OFFSET(0xA3E0F50)
#define UNITYENGINE_UIELEMENTS_CALLBACKEVENTHANDLER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA3E0F60)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int CallbackEventHandler_TypeDefinitionIndex = 30472;

	class CallbackEventHandler : public Il2CppObject
	{
	public:
		::UnityEngine::UIElements::EventCallbackRegistry* m_CallbackRegistry; // 0x10

		::System::Void RegisterCallback(Il2CppObject* arg, ::UnityEngine::UIElements::TrickleDown* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::UnityEngine::UIElements::TrickleDown*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_CALLBACKEVENTHANDLER_REGISTERCALLBACK_OFFSET))(arg, arg, nullptr);
		}

		::System::Void RegisterCallback(Il2CppObject* arg, ::UnityEngine::UIElements::InvokePolicy* arg, ::UnityEngine::UIElements::TrickleDown* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::UnityEngine::UIElements::InvokePolicy*, ::UnityEngine::UIElements::TrickleDown*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_CALLBACKEVENTHANDLER_REGISTERCALLBACK_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void UnregisterCallback(Il2CppObject* arg, ::UnityEngine::UIElements::TrickleDown* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::UnityEngine::UIElements::TrickleDown*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_CALLBACKEVENTHANDLER_UNREGISTERCALLBACK_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SendEvent(::UnityEngine::UIElements::EventBase* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::EventBase*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_CALLBACKEVENTHANDLER_SENDEVENT_OFFSET))(arg, nullptr);
		}

		::System::Void SendEvent(::UnityEngine::UIElements::EventBase* arg, ::UnityEngine::UIElements::DispatchMode* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::EventBase*, ::UnityEngine::UIElements::DispatchMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_CALLBACKEVENTHANDLER_SENDEVENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void HandleEventAtTargetPhase(::UnityEngine::UIElements::EventBase* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::EventBase*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_CALLBACKEVENTHANDLER_HANDLEEVENTATTARGETPHASE_OFFSET))(arg, nullptr);
		}

		::System::Void HandleEvent(::UnityEngine::UIElements::EventBase* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::EventBase*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_CALLBACKEVENTHANDLER_HANDLEEVENT_OFFSET))(arg, nullptr);
		}

		::System::Boolean HasTrickleDownHandlers()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_CALLBACKEVENTHANDLER_HASTRICKLEDOWNHANDLERS_OFFSET))(nullptr);
		}

		::System::Boolean HasBubbleUpHandlers()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_CALLBACKEVENTHANDLER_HASBUBBLEUPHANDLERS_OFFSET))(nullptr);
		}

		::System::Void ExecuteDefaultActionAtTarget(::UnityEngine::UIElements::EventBase* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::EventBase*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_CALLBACKEVENTHANDLER_EXECUTEDEFAULTACTIONATTARGET_OFFSET))(arg, nullptr);
		}

		::System::Void ExecuteDefaultAction(::UnityEngine::UIElements::EventBase* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::EventBase*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_CALLBACKEVENTHANDLER_EXECUTEDEFAULTACTION_OFFSET))(arg, nullptr);
		}

		::System::Void ExecuteDefaultActionDisabledAtTarget(::UnityEngine::UIElements::EventBase* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::EventBase*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_CALLBACKEVENTHANDLER_EXECUTEDEFAULTACTIONDISABLEDATTARGET_OFFSET))(arg, nullptr);
		}

		::System::Void ExecuteDefaultActionDisabled(::UnityEngine::UIElements::EventBase* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::EventBase*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_CALLBACKEVENTHANDLER_EXECUTEDEFAULTACTIONDISABLED_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_CALLBACKEVENTHANDLER_.CTOR_OFFSET))(nullptr);
		}

	};
}

