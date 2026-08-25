#pragma once
#include "unitysdk.h"

namespace UnityEngine::InputSystem { class InputDevice; }

	inline static constexpr unsigned int OngoingAccountSelection_TypeDefinitionIndex = 28613;

	class OngoingAccountSelection : public Il2CppObject
	{
	public:
		::UnityEngine::InputSystem::InputDevice* device; // 0x10
		::System::UInt32 userId; // 0x18

	};

