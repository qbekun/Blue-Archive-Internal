#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::EventSystems { class PointerEventData; }

#define UNITYENGINE_EVENTSYSTEMS_ISCROLLHANDLER_ONSCROLL_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::EventSystems
{
	inline static constexpr unsigned int IScrollHandler_TypeDefinitionIndex = 34907;

	class IScrollHandler : public Il2CppObject
	{
	public:
		::System::Void OnScroll(::UnityEngine::EventSystems::PointerEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::PointerEventData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_ISCROLLHANDLER_ONSCROLL_OFFSET))(arg, nullptr);
		}

	};
}

