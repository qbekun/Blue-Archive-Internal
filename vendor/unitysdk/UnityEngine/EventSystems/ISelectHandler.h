#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::EventSystems { class BaseEventData; }

#define UNITYENGINE_EVENTSYSTEMS_ISELECTHANDLER_ONSELECT_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::EventSystems
{
	inline static constexpr unsigned int ISelectHandler_TypeDefinitionIndex = 34909;

	class ISelectHandler : public Il2CppObject
	{
	public:
		::System::Void OnSelect(::UnityEngine::EventSystems::BaseEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::BaseEventData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_ISELECTHANDLER_ONSELECT_OFFSET))(arg, nullptr);
		}

	};
}

