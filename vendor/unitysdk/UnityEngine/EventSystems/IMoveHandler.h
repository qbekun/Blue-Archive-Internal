#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::EventSystems { class AxisEventData; }

#define UNITYENGINE_EVENTSYSTEMS_IMOVEHANDLER_ONMOVE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::EventSystems
{
	inline static constexpr unsigned int IMoveHandler_TypeDefinitionIndex = 34911;

	class IMoveHandler : public Il2CppObject
	{
	public:
		::System::Void OnMove(::UnityEngine::EventSystems::AxisEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::AxisEventData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_IMOVEHANDLER_ONMOVE_OFFSET))(arg, nullptr);
		}

	};
}

