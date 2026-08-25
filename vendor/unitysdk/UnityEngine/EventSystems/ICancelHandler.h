#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::EventSystems { class BaseEventData; }

#define UNITYENGINE_EVENTSYSTEMS_ICANCELHANDLER_ONCANCEL_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::EventSystems
{
	inline static constexpr unsigned int ICancelHandler_TypeDefinitionIndex = 34913;

	class ICancelHandler : public Il2CppObject
	{
	public:
		::System::Void OnCancel(::UnityEngine::EventSystems::BaseEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::BaseEventData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_ICANCELHANDLER_ONCANCEL_OFFSET))(arg, nullptr);
		}

	};
}

