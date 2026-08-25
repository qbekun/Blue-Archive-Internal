#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::InputSystem { class InputDeviceChange; }

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputDeviceChange_TypeDefinitionIndex = 28488;

	class InputDeviceChange : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::InputSystem::InputDeviceChange* Added; // 0x0
		::UnityEngine::InputSystem::InputDeviceChange* Removed; // 0x0
		::UnityEngine::InputSystem::InputDeviceChange* Disconnected; // 0x0
		::UnityEngine::InputSystem::InputDeviceChange* Reconnected; // 0x0
		::UnityEngine::InputSystem::InputDeviceChange* Enabled; // 0x0
		::UnityEngine::InputSystem::InputDeviceChange* Disabled; // 0x0
		::UnityEngine::InputSystem::InputDeviceChange* UsageChanged; // 0x0
		::UnityEngine::InputSystem::InputDeviceChange* ConfigurationChanged; // 0x0
		::UnityEngine::InputSystem::InputDeviceChange* SoftReset; // 0x0
		::UnityEngine::InputSystem::InputDeviceChange* HardReset; // 0x0
		::UnityEngine::InputSystem::InputDeviceChange* Destroyed; // 0x0

	};
}

