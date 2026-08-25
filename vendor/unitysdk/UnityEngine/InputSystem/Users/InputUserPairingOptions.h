#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::InputSystem::Users { class InputUserPairingOptions; }

namespace UnityEngine::InputSystem::Users
{
	inline static constexpr unsigned int InputUserPairingOptions_TypeDefinitionIndex = 28619;

	class InputUserPairingOptions : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::InputSystem::Users::InputUserPairingOptions* None; // 0x0
		::UnityEngine::InputSystem::Users::InputUserPairingOptions* ForcePlatformUserAccountSelection; // 0x0
		::UnityEngine::InputSystem::Users::InputUserPairingOptions* ForceNoPlatformUserAccountSelection; // 0x0
		::UnityEngine::InputSystem::Users::InputUserPairingOptions* UnpairCurrentDevicesFromUser; // 0x0

	};
}

