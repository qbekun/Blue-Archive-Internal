#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::InputSystem { class InputActionPhase; }

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputActionPhase_TypeDefinitionIndex = 28409;

	class InputActionPhase : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::InputSystem::InputActionPhase* Disabled; // 0x0
		::UnityEngine::InputSystem::InputActionPhase* Waiting; // 0x0
		::UnityEngine::InputSystem::InputActionPhase* Started; // 0x0
		::UnityEngine::InputSystem::InputActionPhase* Performed; // 0x0
		::UnityEngine::InputSystem::InputActionPhase* Canceled; // 0x0

	};
}

