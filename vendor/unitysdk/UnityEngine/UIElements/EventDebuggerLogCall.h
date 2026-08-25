#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class EventBase; }

#define UNITYENGINE_UIELEMENTS_EVENTDEBUGGERLOGCALL_.CTOR_OFFSET UNITYSDK_OFFSET(0xA3FEFE0)
#define UNITYENGINE_UIELEMENTS_EVENTDEBUGGERLOGCALL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA3FEFF0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int EventDebuggerLogCall_TypeDefinitionIndex = 30553;

	class EventDebuggerLogCall : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Delegate* arg, ::UnityEngine::UIElements::EventBase* arg)
		{
			((::System::Void(*)(::System::Delegate*, ::UnityEngine::UIElements::EventBase*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTDEBUGGERLOGCALL_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTDEBUGGERLOGCALL_DISPOSE_OFFSET))(nullptr);
		}

	};
}

