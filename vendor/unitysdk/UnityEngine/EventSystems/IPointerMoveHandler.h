#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::EventSystems { class PointerEventData; }

#define UNITYENGINE_EVENTSYSTEMS_IPOINTERMOVEHANDLER_ONPOINTERMOVE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::EventSystems
{
	inline static constexpr unsigned int IPointerMoveHandler_TypeDefinitionIndex = 34896;

	class IPointerMoveHandler : public Il2CppObject
	{
	public:
		::System::Void OnPointerMove(::UnityEngine::EventSystems::PointerEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::PointerEventData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_IPOINTERMOVEHANDLER_ONPOINTERMOVE_OFFSET))(arg, nullptr);
		}

	};
}

