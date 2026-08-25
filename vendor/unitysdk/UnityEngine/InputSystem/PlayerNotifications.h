#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::InputSystem { class PlayerNotifications; }

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int PlayerNotifications_TypeDefinitionIndex = 28568;

	class PlayerNotifications : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::InputSystem::PlayerNotifications* SendMessages; // 0x0
		::UnityEngine::InputSystem::PlayerNotifications* BroadcastMessages; // 0x0
		::UnityEngine::InputSystem::PlayerNotifications* InvokeUnityEvents; // 0x0
		::UnityEngine::InputSystem::PlayerNotifications* InvokeCSharpEvents; // 0x0

	};
}

