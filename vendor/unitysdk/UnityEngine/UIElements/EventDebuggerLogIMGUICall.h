#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class EventBase; }

#define UNITYENGINE_UIELEMENTS_EVENTDEBUGGERLOGIMGUICALL_.CTOR_OFFSET UNITYSDK_OFFSET(0xA3FF000)
#define UNITYENGINE_UIELEMENTS_EVENTDEBUGGERLOGIMGUICALL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA3FF010)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int EventDebuggerLogIMGUICall_TypeDefinitionIndex = 30554;

	class EventDebuggerLogIMGUICall : public Il2CppObject
	{
	public:
		::System::Void .ctor(::UnityEngine::UIElements::EventBase* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::EventBase*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTDEBUGGERLOGIMGUICALL_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTDEBUGGERLOGIMGUICALL_DISPOSE_OFFSET))(nullptr);
		}

	};
}

