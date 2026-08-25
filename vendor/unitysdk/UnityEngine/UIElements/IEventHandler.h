#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class EventBase; }

#define UNITYENGINE_UIELEMENTS_IEVENTHANDLER_SENDEVENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_IEVENTHANDLER_HANDLEEVENT_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int IEventHandler_TypeDefinitionIndex = 30471;

	class IEventHandler : public Il2CppObject
	{
	public:
		::System::Void SendEvent(::UnityEngine::UIElements::EventBase* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::EventBase*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IEVENTHANDLER_SENDEVENT_OFFSET))(arg, nullptr);
		}

		::System::Void HandleEvent(::UnityEngine::UIElements::EventBase* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::EventBase*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IEVENTHANDLER_HANDLEEVENT_OFFSET))(arg, nullptr);
		}

	};
}

