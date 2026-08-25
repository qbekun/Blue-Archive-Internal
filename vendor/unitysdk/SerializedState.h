#pragma once
#include "unitysdk.h"

namespace UnityEngine::InputSystem::LowLevel { class InputUpdateType; }

	inline static constexpr unsigned int SerializedState_TypeDefinitionIndex = 28806;

	class SerializedState : public Il2CppObject
	{
	public:
		::UnityEngine::InputSystem::LowLevel::InputUpdateType* lastUpdateType; // 0x10
		UpdateStepCount* playerUpdateStepCount; // 0x14

	};

