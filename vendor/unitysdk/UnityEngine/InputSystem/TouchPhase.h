#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::InputSystem { class TouchPhase; }

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int TouchPhase_TypeDefinitionIndex = 28535;

	class TouchPhase : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::InputSystem::TouchPhase* None; // 0x0
		::UnityEngine::InputSystem::TouchPhase* Began; // 0x0
		::UnityEngine::InputSystem::TouchPhase* Moved; // 0x0
		::UnityEngine::InputSystem::TouchPhase* Ended; // 0x0
		::UnityEngine::InputSystem::TouchPhase* Canceled; // 0x0
		::UnityEngine::InputSystem::TouchPhase* Stationary; // 0x0

	};
}

