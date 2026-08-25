#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class EventBase; }

#define UNITYENGINE_UIELEMENTS_EVENTDEBUGGERLOGEXECUTEDEFAULTACTION_.CTOR_OFFSET UNITYSDK_OFFSET(0xA3FF020)
#define UNITYENGINE_UIELEMENTS_EVENTDEBUGGERLOGEXECUTEDEFAULTACTION_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA3FF030)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int EventDebuggerLogExecuteDefaultAction_TypeDefinitionIndex = 30555;

	class EventDebuggerLogExecuteDefaultAction : public Il2CppObject
	{
	public:
		::System::Void .ctor(::UnityEngine::UIElements::EventBase* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::EventBase*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTDEBUGGERLOGEXECUTEDEFAULTACTION_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTDEBUGGERLOGEXECUTEDEFAULTACTION_DISPOSE_OFFSET))(nullptr);
		}

	};
}

