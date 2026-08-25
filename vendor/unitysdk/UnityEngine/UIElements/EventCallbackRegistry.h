#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class EventCallbackListPool; }
namespace UnityEngine::UIElements { class EventCallbackList; }
namespace UnityEngine::UIElements { class TrickleDown; }
namespace UnityEngine::UIElements { class InvokePolicy; }
namespace UnityEngine::UIElements { class EventBase; }
namespace UnityEngine::UIElements { class PropagationPhase; }

#define UNITYENGINE_UIELEMENTS_EVENTCALLBACKREGISTRY_GETCALLBACKLIST_OFFSET UNITYSDK_OFFSET(0xA3E0250)
#define UNITYENGINE_UIELEMENTS_EVENTCALLBACKREGISTRY_RELEASECALLBACKLIST_OFFSET UNITYSDK_OFFSET(0xA3E02E0)
#define UNITYENGINE_UIELEMENTS_EVENTCALLBACKREGISTRY_.CTOR_OFFSET UNITYSDK_OFFSET(0xA3E0370)
#define UNITYENGINE_UIELEMENTS_EVENTCALLBACKREGISTRY_GETCALLBACKLISTFORWRITING_OFFSET UNITYSDK_OFFSET(0xA3E0390)
#define UNITYENGINE_UIELEMENTS_EVENTCALLBACKREGISTRY_GETCALLBACKLISTFORREADING_OFFSET UNITYSDK_OFFSET(0xA3E0600)
#define UNITYENGINE_UIELEMENTS_EVENTCALLBACKREGISTRY_UNREGISTERCALLBACK_OFFSET UNITYSDK_OFFSET(0xA3E0610)
#define UNITYENGINE_UIELEMENTS_EVENTCALLBACKREGISTRY_REGISTERCALLBACK_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_EVENTCALLBACKREGISTRY_UNREGISTERCALLBACK_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_EVENTCALLBACKREGISTRY_INVOKECALLBACKS_OFFSET UNITYSDK_OFFSET(0xA3E0660)
#define UNITYENGINE_UIELEMENTS_EVENTCALLBACKREGISTRY_HASTRICKLEDOWNHANDLERS_OFFSET UNITYSDK_OFFSET(0xA3E0A50)
#define UNITYENGINE_UIELEMENTS_EVENTCALLBACKREGISTRY_HASBUBBLEHANDLERS_OFFSET UNITYSDK_OFFSET(0xA3E0A70)
#define UNITYENGINE_UIELEMENTS_EVENTCALLBACKREGISTRY_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA3E0A90)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int EventCallbackRegistry_TypeDefinitionIndex = 30470;

	class EventCallbackRegistry : public Il2CppObject
	{
	public:
		::UnityEngine::UIElements::EventCallbackListPool* s_ListPool; // 0x0
		::UnityEngine::UIElements::EventCallbackList* m_Callbacks; // 0x10
		::UnityEngine::UIElements::EventCallbackList* m_TemporaryCallbacks; // 0x18
		::System::Int32 m_IsInvoking; // 0x20

		::UnityEngine::UIElements::EventCallbackList* GetCallbackList(::UnityEngine::UIElements::EventCallbackList* arg)
		{
			return (return (::UnityEngine::UIElements::EventCallbackList*(*)(::UnityEngine::UIElements::EventCallbackList*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTCALLBACKREGISTRY_GETCALLBACKLIST_OFFSET))(arg, nullptr);
		}

		::System::Void ReleaseCallbackList(::UnityEngine::UIElements::EventCallbackList* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::EventCallbackList*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTCALLBACKREGISTRY_RELEASECALLBACKLIST_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTCALLBACKREGISTRY_.CTOR_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::EventCallbackList* GetCallbackListForWriting()
		{
			return (return (::UnityEngine::UIElements::EventCallbackList*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTCALLBACKREGISTRY_GETCALLBACKLISTFORWRITING_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::EventCallbackList* GetCallbackListForReading()
		{
			return (return (::UnityEngine::UIElements::EventCallbackList*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTCALLBACKREGISTRY_GETCALLBACKLISTFORREADING_OFFSET))(nullptr);
		}

		::System::Boolean UnregisterCallback(::System::Int64 arg, ::System::Delegate* arg, ::UnityEngine::UIElements::TrickleDown* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::System::Delegate*, ::UnityEngine::UIElements::TrickleDown*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTCALLBACKREGISTRY_UNREGISTERCALLBACK_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void RegisterCallback(Il2CppObject* arg, ::UnityEngine::UIElements::TrickleDown* arg, ::UnityEngine::UIElements::InvokePolicy* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::UnityEngine::UIElements::TrickleDown*, ::UnityEngine::UIElements::InvokePolicy*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTCALLBACKREGISTRY_REGISTERCALLBACK_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean UnregisterCallback(Il2CppObject* arg, ::UnityEngine::UIElements::TrickleDown* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::UnityEngine::UIElements::TrickleDown*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTCALLBACKREGISTRY_UNREGISTERCALLBACK_OFFSET))(arg, arg, nullptr);
		}

		::System::Void InvokeCallbacks(::UnityEngine::UIElements::EventBase* arg, ::UnityEngine::UIElements::PropagationPhase* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::EventBase*, ::UnityEngine::UIElements::PropagationPhase*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTCALLBACKREGISTRY_INVOKECALLBACKS_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean HasTrickleDownHandlers()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTCALLBACKREGISTRY_HASTRICKLEDOWNHANDLERS_OFFSET))(nullptr);
		}

		::System::Boolean HasBubbleHandlers()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTCALLBACKREGISTRY_HASBUBBLEHANDLERS_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTCALLBACKREGISTRY_.CCTOR_OFFSET))(nullptr);
		}

	};
}

