#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::InputSystem::LowLevel { class MouseButton; }

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int MouseButton_TypeDefinitionIndex = 28756;

	class MouseButton : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::InputSystem::LowLevel::MouseButton* Left; // 0x0
		::UnityEngine::InputSystem::LowLevel::MouseButton* Right; // 0x0
		::UnityEngine::InputSystem::LowLevel::MouseButton* Middle; // 0x0
		::UnityEngine::InputSystem::LowLevel::MouseButton* Forward; // 0x0
		::UnityEngine::InputSystem::LowLevel::MouseButton* Back; // 0x0

	};
}

