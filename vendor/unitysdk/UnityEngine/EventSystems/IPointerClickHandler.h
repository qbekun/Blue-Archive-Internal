#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::EventSystems { class PointerEventData; }

#define UNITYENGINE_EVENTSYSTEMS_IPOINTERCLICKHANDLER_ONPOINTERCLICK_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::EventSystems
{
	inline static constexpr unsigned int IPointerClickHandler_TypeDefinitionIndex = 34901;

	class IPointerClickHandler : public Il2CppObject
	{
	public:
		::System::Void OnPointerClick(::UnityEngine::EventSystems::PointerEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::PointerEventData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_IPOINTERCLICKHANDLER_ONPOINTERCLICK_OFFSET))(arg, nullptr);
		}

	};
}

