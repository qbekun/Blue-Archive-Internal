#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::InputSystem::LowLevel { class IInputRuntime; }

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int InputRuntime_TypeDefinitionIndex = 28801;

	class InputRuntime : public Il2CppObject
	{
	public:
		::UnityEngine::InputSystem::LowLevel::IInputRuntime* s_Instance; // 0x0
		::System::Double s_CurrentTimeOffsetToRealtimeSinceStartup; // 0x8

	};
}

