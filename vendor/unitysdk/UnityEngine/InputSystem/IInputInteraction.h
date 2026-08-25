#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::InputSystem { class InputInteractionContext&; }

#define UNITYENGINE_INPUTSYSTEM_IINPUTINTERACTION_PROCESS_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_IINPUTINTERACTION_RESET_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int IInputInteraction_TypeDefinitionIndex = 28375;

	class IInputInteraction : public Il2CppObject
	{
	public:
		::System::Void Process(::UnityEngine::InputSystem::InputInteractionContext&* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputInteractionContext&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_IINPUTINTERACTION_PROCESS_OFFSET))(arg, nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_IINPUTINTERACTION_RESET_OFFSET))(nullptr);
		}

	};
}

