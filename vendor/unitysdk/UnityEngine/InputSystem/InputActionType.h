#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::InputSystem { class InputActionType; }

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputActionType_TypeDefinitionIndex = 28428;

	class InputActionType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::InputSystem::InputActionType* Value; // 0x0
		::UnityEngine::InputSystem::InputActionType* Button; // 0x0
		::UnityEngine::InputSystem::InputActionType* PassThrough; // 0x0

	};
}

