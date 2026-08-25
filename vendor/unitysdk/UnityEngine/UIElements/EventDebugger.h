#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class EventBase; }
namespace UnityEngine::UIElements { class PropagationPaths; }

#define UNITYENGINE_UIELEMENTS_EVENTDEBUGGER_LOGPROPAGATIONPATHS_OFFSET UNITYSDK_OFFSET(0xA3FF040)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int EventDebugger_TypeDefinitionIndex = 30556;

	class EventDebugger : public Il2CppObject
	{
	public:
		::System::Void LogPropagationPaths(::UnityEngine::UIElements::EventBase* arg, ::UnityEngine::UIElements::PropagationPaths* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::EventBase*, ::UnityEngine::UIElements::PropagationPaths*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTDEBUGGER_LOGPROPAGATIONPATHS_OFFSET))(arg, arg, nullptr);
		}

	};
}

