#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class CallbackPhase; }
namespace UnityEngine::UIElements { class InvokePolicy; }
namespace UnityEngine::UIElements { class EventBase; }
namespace UnityEngine::UIElements { class PropagationPhase; }

#define UNITYENGINE_UIELEMENTS_EVENTCALLBACKFUNCTORBASE_GET_PHASE_OFFSET UNITYSDK_OFFSET(0xA3DF910)
#define UNITYENGINE_UIELEMENTS_EVENTCALLBACKFUNCTORBASE_GET_INVOKEPOLICY_OFFSET UNITYSDK_OFFSET(0xA3DF920)
#define UNITYENGINE_UIELEMENTS_EVENTCALLBACKFUNCTORBASE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA3DF930)
#define UNITYENGINE_UIELEMENTS_EVENTCALLBACKFUNCTORBASE_INVOKE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_EVENTCALLBACKFUNCTORBASE_ISEQUIVALENTTO_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_EVENTCALLBACKFUNCTORBASE_PHASEMATCHES_OFFSET UNITYSDK_OFFSET(0xA3DF960)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int EventCallbackFunctorBase_TypeDefinitionIndex = 30463;

	class EventCallbackFunctorBase : public Il2CppObject
	{
	public:
		::UnityEngine::UIElements::CallbackPhase* _phase_k__BackingField; // 0x10
		::UnityEngine::UIElements::InvokePolicy* _invokePolicy_k__BackingField; // 0x14

		::UnityEngine::UIElements::CallbackPhase* get_phase()
		{
			return (return (::UnityEngine::UIElements::CallbackPhase*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTCALLBACKFUNCTORBASE_GET_PHASE_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::InvokePolicy* get_invokePolicy()
		{
			return (return (::UnityEngine::UIElements::InvokePolicy*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTCALLBACKFUNCTORBASE_GET_INVOKEPOLICY_OFFSET))(nullptr);
		}

		::System::Void .ctor(::UnityEngine::UIElements::CallbackPhase* arg, ::UnityEngine::UIElements::InvokePolicy* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::CallbackPhase*, ::UnityEngine::UIElements::InvokePolicy*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTCALLBACKFUNCTORBASE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::UnityEngine::UIElements::EventBase* arg, ::UnityEngine::UIElements::PropagationPhase* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::EventBase*, ::UnityEngine::UIElements::PropagationPhase*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTCALLBACKFUNCTORBASE_INVOKE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsEquivalentTo(::System::Int64 arg, ::System::Delegate* arg, ::UnityEngine::UIElements::CallbackPhase* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::System::Delegate*, ::UnityEngine::UIElements::CallbackPhase*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTCALLBACKFUNCTORBASE_ISEQUIVALENTTO_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean PhaseMatches(::UnityEngine::UIElements::PropagationPhase* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::PropagationPhase*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTCALLBACKFUNCTORBASE_PHASEMATCHES_OFFSET))(arg, nullptr);
		}

	};
}

