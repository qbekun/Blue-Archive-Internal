#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class CallbackPhase; }
namespace UnityEngine::UIElements { class InvokePolicy; }
namespace UnityEngine::UIElements { class EventBase; }
namespace UnityEngine::UIElements { class PropagationPhase; }

#define UNITYENGINE_UIELEMENTS_EVENTCALLBACKFUNCTOR`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_EVENTCALLBACKFUNCTOR`1_INVOKE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_EVENTCALLBACKFUNCTOR`1_ISEQUIVALENTTO_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int EventCallbackFunctor`1_TypeDefinitionIndex = 30464;

	class EventCallbackFunctor`1 : public Il2CppObject
	{
	public:
		Il2CppObject* m_Callback; // 0x0
		::System::Int64 m_EventTypeId; // 0x0

		::System::Void .ctor(Il2CppObject* arg, ::UnityEngine::UIElements::CallbackPhase* arg, ::UnityEngine::UIElements::InvokePolicy* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::UnityEngine::UIElements::CallbackPhase*, ::UnityEngine::UIElements::InvokePolicy*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTCALLBACKFUNCTOR`1_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Invoke(::UnityEngine::UIElements::EventBase* arg, ::UnityEngine::UIElements::PropagationPhase* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::EventBase*, ::UnityEngine::UIElements::PropagationPhase*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTCALLBACKFUNCTOR`1_INVOKE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsEquivalentTo(::System::Int64 arg, ::System::Delegate* arg, ::UnityEngine::UIElements::CallbackPhase* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::System::Delegate*, ::UnityEngine::UIElements::CallbackPhase*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTCALLBACKFUNCTOR`1_ISEQUIVALENTTO_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

