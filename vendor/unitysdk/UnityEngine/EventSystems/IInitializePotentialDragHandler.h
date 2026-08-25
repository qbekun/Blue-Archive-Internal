#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::EventSystems { class PointerEventData; }

#define UNITYENGINE_EVENTSYSTEMS_IINITIALIZEPOTENTIALDRAGHANDLER_ONINITIALIZEPOTENTIALDRAG_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::EventSystems
{
	inline static constexpr unsigned int IInitializePotentialDragHandler_TypeDefinitionIndex = 34903;

	class IInitializePotentialDragHandler : public Il2CppObject
	{
	public:
		::System::Void OnInitializePotentialDrag(::UnityEngine::EventSystems::PointerEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::PointerEventData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_IINITIALIZEPOTENTIALDRAGHANDLER_ONINITIALIZEPOTENTIALDRAG_OFFSET))(arg, nullptr);
		}

	};
}

