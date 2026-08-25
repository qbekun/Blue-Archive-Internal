#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::EventSystems { class PointerEventData; }

#define UNITYENGINE_EVENTSYSTEMS_IENDDRAGHANDLER_ONENDDRAG_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::EventSystems
{
	inline static constexpr unsigned int IEndDragHandler_TypeDefinitionIndex = 34905;

	class IEndDragHandler : public Il2CppObject
	{
	public:
		::System::Void OnEndDrag(::UnityEngine::EventSystems::PointerEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::PointerEventData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_IENDDRAGHANDLER_ONENDDRAG_OFFSET))(arg, nullptr);
		}

	};
}

