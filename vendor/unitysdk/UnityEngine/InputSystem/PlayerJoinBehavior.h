#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::InputSystem { class PlayerJoinBehavior; }

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int PlayerJoinBehavior_TypeDefinitionIndex = 28567;

	class PlayerJoinBehavior : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::InputSystem::PlayerJoinBehavior* JoinPlayersWhenButtonIsPressed; // 0x0
		::UnityEngine::InputSystem::PlayerJoinBehavior* JoinPlayersWhenJoinActionIsTriggered; // 0x0
		::UnityEngine::InputSystem::PlayerJoinBehavior* JoinPlayersManually; // 0x0

	};
}

