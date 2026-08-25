#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::InputSystem::LowLevel { class InputUpdateType; }

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int InputUpdateType_TypeDefinitionIndex = 28804;

	class InputUpdateType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::InputSystem::LowLevel::InputUpdateType* None; // 0x0
		::UnityEngine::InputSystem::LowLevel::InputUpdateType* Dynamic; // 0x0
		::UnityEngine::InputSystem::LowLevel::InputUpdateType* Fixed; // 0x0
		::UnityEngine::InputSystem::LowLevel::InputUpdateType* BeforeRender; // 0x0
		::UnityEngine::InputSystem::LowLevel::InputUpdateType* Editor; // 0x0
		::UnityEngine::InputSystem::LowLevel::InputUpdateType* Manual; // 0x0
		::UnityEngine::InputSystem::LowLevel::InputUpdateType* Default; // 0x0

	};
}

