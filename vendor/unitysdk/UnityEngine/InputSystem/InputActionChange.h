#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::InputSystem { class InputActionChange; }

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputActionChange_TypeDefinitionIndex = 28386;

	class InputActionChange : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::InputSystem::InputActionChange* ActionEnabled; // 0x0
		::UnityEngine::InputSystem::InputActionChange* ActionDisabled; // 0x0
		::UnityEngine::InputSystem::InputActionChange* ActionMapEnabled; // 0x0
		::UnityEngine::InputSystem::InputActionChange* ActionMapDisabled; // 0x0
		::UnityEngine::InputSystem::InputActionChange* ActionStarted; // 0x0
		::UnityEngine::InputSystem::InputActionChange* ActionPerformed; // 0x0
		::UnityEngine::InputSystem::InputActionChange* ActionCanceled; // 0x0
		::UnityEngine::InputSystem::InputActionChange* BoundControlsAboutToChange; // 0x0
		::UnityEngine::InputSystem::InputActionChange* BoundControlsChanged; // 0x0

	};
}

