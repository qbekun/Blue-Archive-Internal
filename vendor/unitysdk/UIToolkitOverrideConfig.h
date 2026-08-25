#pragma once
#include "unitysdk.h"

namespace UnityEngine::EventSystems { class EventSystem; }

	inline static constexpr unsigned int UIToolkitOverrideConfig_TypeDefinitionIndex = 34914;

	class UIToolkitOverrideConfig : public Il2CppObject
	{
	public:
		::UnityEngine::EventSystems::EventSystem* activeEventSystem; // 0x10
		::System::Boolean sendEvents; // 0x18
		::System::Boolean createPanelGameObjectsOnStart; // 0x19

	};

