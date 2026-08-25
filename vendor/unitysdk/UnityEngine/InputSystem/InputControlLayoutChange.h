#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::InputSystem { class InputControlLayoutChange; }

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputControlLayoutChange_TypeDefinitionIndex = 28470;

	class InputControlLayoutChange : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::InputSystem::InputControlLayoutChange* Added; // 0x0
		::UnityEngine::InputSystem::InputControlLayoutChange* Removed; // 0x0
		::UnityEngine::InputSystem::InputControlLayoutChange* Replaced; // 0x0

	};
}

