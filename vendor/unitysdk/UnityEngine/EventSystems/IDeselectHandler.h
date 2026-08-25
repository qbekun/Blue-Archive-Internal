#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::EventSystems { class BaseEventData; }

#define UNITYENGINE_EVENTSYSTEMS_IDESELECTHANDLER_ONDESELECT_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::EventSystems
{
	inline static constexpr unsigned int IDeselectHandler_TypeDefinitionIndex = 34910;

	class IDeselectHandler : public Il2CppObject
	{
	public:
		::System::Void OnDeselect(::UnityEngine::EventSystems::BaseEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::BaseEventData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_IDESELECTHANDLER_ONDESELECT_OFFSET))(arg, nullptr);
		}

	};
}

