#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::InputSystem::LowLevel { class TouchFlags; }

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int TouchFlags_TypeDefinitionIndex = 28764;

	class TouchFlags : public Il2CppObject
	{
	public:
		::System::Byte value__; // 0x10
		::UnityEngine::InputSystem::LowLevel::TouchFlags* IndirectTouch; // 0x0
		::UnityEngine::InputSystem::LowLevel::TouchFlags* PrimaryTouch; // 0x0
		::UnityEngine::InputSystem::LowLevel::TouchFlags* TapPress; // 0x0
		::UnityEngine::InputSystem::LowLevel::TouchFlags* TapRelease; // 0x0
		::UnityEngine::InputSystem::LowLevel::TouchFlags* OrphanedPrimaryTouch; // 0x0
		::UnityEngine::InputSystem::LowLevel::TouchFlags* BeganInSameFrame; // 0x0

	};
}

