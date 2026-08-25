#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::EventSystems { class EventTriggerType; }

namespace UnityEngine::EventSystems
{
	inline static constexpr unsigned int EventTriggerType_TypeDefinitionIndex = 34920;

	class EventTriggerType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::EventSystems::EventTriggerType* PointerEnter; // 0x0
		::UnityEngine::EventSystems::EventTriggerType* PointerExit; // 0x0
		::UnityEngine::EventSystems::EventTriggerType* PointerDown; // 0x0
		::UnityEngine::EventSystems::EventTriggerType* PointerUp; // 0x0
		::UnityEngine::EventSystems::EventTriggerType* PointerClick; // 0x0
		::UnityEngine::EventSystems::EventTriggerType* Drag; // 0x0
		::UnityEngine::EventSystems::EventTriggerType* Drop; // 0x0
		::UnityEngine::EventSystems::EventTriggerType* Scroll; // 0x0
		::UnityEngine::EventSystems::EventTriggerType* UpdateSelected; // 0x0
		::UnityEngine::EventSystems::EventTriggerType* Select; // 0x0
		::UnityEngine::EventSystems::EventTriggerType* Deselect; // 0x0
		::UnityEngine::EventSystems::EventTriggerType* Move; // 0x0
		::UnityEngine::EventSystems::EventTriggerType* InitializePotentialDrag; // 0x0
		::UnityEngine::EventSystems::EventTriggerType* BeginDrag; // 0x0
		::UnityEngine::EventSystems::EventTriggerType* EndDrag; // 0x0
		::UnityEngine::EventSystems::EventTriggerType* Submit; // 0x0
		::UnityEngine::EventSystems::EventTriggerType* Cancel; // 0x0

	};
}

