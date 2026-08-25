#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::InputSystem::Users { class InputUserChange; }

namespace UnityEngine::InputSystem::Users
{
	inline static constexpr unsigned int InputUserChange_TypeDefinitionIndex = 28618;

	class InputUserChange : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::InputSystem::Users::InputUserChange* Added; // 0x0
		::UnityEngine::InputSystem::Users::InputUserChange* Removed; // 0x0
		::UnityEngine::InputSystem::Users::InputUserChange* DevicePaired; // 0x0
		::UnityEngine::InputSystem::Users::InputUserChange* DeviceUnpaired; // 0x0
		::UnityEngine::InputSystem::Users::InputUserChange* DeviceLost; // 0x0
		::UnityEngine::InputSystem::Users::InputUserChange* DeviceRegained; // 0x0
		::UnityEngine::InputSystem::Users::InputUserChange* AccountChanged; // 0x0
		::UnityEngine::InputSystem::Users::InputUserChange* AccountNameChanged; // 0x0
		::UnityEngine::InputSystem::Users::InputUserChange* AccountSelectionInProgress; // 0x0
		::UnityEngine::InputSystem::Users::InputUserChange* AccountSelectionCanceled; // 0x0
		::UnityEngine::InputSystem::Users::InputUserChange* AccountSelectionComplete; // 0x0
		::UnityEngine::InputSystem::Users::InputUserChange* ControlSchemeChanged; // 0x0
		::UnityEngine::InputSystem::Users::InputUserChange* ControlsChanged; // 0x0

	};
}

