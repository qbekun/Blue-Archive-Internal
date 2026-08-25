#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::InputSystem::LowLevel { class GamepadButton; }

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int GamepadButton_TypeDefinitionIndex = 28744;

	class GamepadButton : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::InputSystem::LowLevel::GamepadButton* DpadUp; // 0x0
		::UnityEngine::InputSystem::LowLevel::GamepadButton* DpadDown; // 0x0
		::UnityEngine::InputSystem::LowLevel::GamepadButton* DpadLeft; // 0x0
		::UnityEngine::InputSystem::LowLevel::GamepadButton* DpadRight; // 0x0
		::UnityEngine::InputSystem::LowLevel::GamepadButton* North; // 0x0
		::UnityEngine::InputSystem::LowLevel::GamepadButton* East; // 0x0
		::UnityEngine::InputSystem::LowLevel::GamepadButton* South; // 0x0
		::UnityEngine::InputSystem::LowLevel::GamepadButton* West; // 0x0
		::UnityEngine::InputSystem::LowLevel::GamepadButton* LeftStick; // 0x0
		::UnityEngine::InputSystem::LowLevel::GamepadButton* RightStick; // 0x0
		::UnityEngine::InputSystem::LowLevel::GamepadButton* LeftShoulder; // 0x0
		::UnityEngine::InputSystem::LowLevel::GamepadButton* RightShoulder; // 0x0
		::UnityEngine::InputSystem::LowLevel::GamepadButton* Start; // 0x0
		::UnityEngine::InputSystem::LowLevel::GamepadButton* Select; // 0x0
		::UnityEngine::InputSystem::LowLevel::GamepadButton* LeftTrigger; // 0x0
		::UnityEngine::InputSystem::LowLevel::GamepadButton* RightTrigger; // 0x0
		::UnityEngine::InputSystem::LowLevel::GamepadButton* X; // 0x0
		::UnityEngine::InputSystem::LowLevel::GamepadButton* Y; // 0x0
		::UnityEngine::InputSystem::LowLevel::GamepadButton* A; // 0x0
		::UnityEngine::InputSystem::LowLevel::GamepadButton* B; // 0x0
		::UnityEngine::InputSystem::LowLevel::GamepadButton* Cross; // 0x0
		::UnityEngine::InputSystem::LowLevel::GamepadButton* Square; // 0x0
		::UnityEngine::InputSystem::LowLevel::GamepadButton* Triangle; // 0x0
		::UnityEngine::InputSystem::LowLevel::GamepadButton* Circle; // 0x0

	};
}

