#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::EventSystems { class PointerEventData; }

#define UNITYENGINE_EVENTSYSTEMS_IBEGINDRAGHANDLER_ONBEGINDRAG_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::EventSystems
{
	inline static constexpr unsigned int IBeginDragHandler_TypeDefinitionIndex = 34902;

	class IBeginDragHandler : public Il2CppObject
	{
	public:
		::System::Void OnBeginDrag(::UnityEngine::EventSystems::PointerEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::PointerEventData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_IBEGINDRAGHANDLER_ONBEGINDRAG_OFFSET))(arg, nullptr);
		}

	};
}

