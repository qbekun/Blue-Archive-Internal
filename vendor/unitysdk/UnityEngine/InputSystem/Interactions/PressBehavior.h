#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::InputSystem::Interactions { class PressBehavior; }

namespace UnityEngine::InputSystem::Interactions
{
	inline static constexpr unsigned int PressBehavior_TypeDefinitionIndex = 28901;

	class PressBehavior : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::InputSystem::Interactions::PressBehavior* PressOnly; // 0x0
		::UnityEngine::InputSystem::Interactions::PressBehavior* ReleaseOnly; // 0x0
		::UnityEngine::InputSystem::Interactions::PressBehavior* PressAndRelease; // 0x0

	};
}

