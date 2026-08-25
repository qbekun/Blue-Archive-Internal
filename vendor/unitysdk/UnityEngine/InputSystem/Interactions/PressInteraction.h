#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::InputSystem::Interactions { class PressBehavior; }
namespace UnityEngine::InputSystem { class InputInteractionContext&; }

#define UNITYENGINE_INPUTSYSTEM_INTERACTIONS_PRESSINTERACTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E7B8B0)
#define UNITYENGINE_INPUTSYSTEM_INTERACTIONS_PRESSINTERACTION_RESET_OFFSET UNITYSDK_OFFSET(0x9E7B8C0)
#define UNITYENGINE_INPUTSYSTEM_INTERACTIONS_PRESSINTERACTION_PROCESS_OFFSET UNITYSDK_OFFSET(0x9E7B8D0)
#define UNITYENGINE_INPUTSYSTEM_INTERACTIONS_PRESSINTERACTION_GET_RELEASEPOINTORDEFAULT_OFFSET UNITYSDK_OFFSET(0x9E7BDF0)
#define UNITYENGINE_INPUTSYSTEM_INTERACTIONS_PRESSINTERACTION_GET_PRESSPOINTORDEFAULT_OFFSET UNITYSDK_OFFSET(0x9E7BE60)

namespace UnityEngine::InputSystem::Interactions
{
	inline static constexpr unsigned int PressInteraction_TypeDefinitionIndex = 28900;

	class PressInteraction : public Il2CppObject
	{
	public:
		::System::Single pressPoint; // 0x10
		::UnityEngine::InputSystem::Interactions::PressBehavior* behavior; // 0x14
		::System::Boolean m_WaitingForRelease; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INTERACTIONS_PRESSINTERACTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INTERACTIONS_PRESSINTERACTION_RESET_OFFSET))(nullptr);
		}

		::System::Void Process(::UnityEngine::InputSystem::InputInteractionContext&* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputInteractionContext&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INTERACTIONS_PRESSINTERACTION_PROCESS_OFFSET))(arg, nullptr);
		}

		::System::Single get_releasePointOrDefault()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INTERACTIONS_PRESSINTERACTION_GET_RELEASEPOINTORDEFAULT_OFFSET))(nullptr);
		}

		::System::Single get_pressPointOrDefault()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INTERACTIONS_PRESSINTERACTION_GET_PRESSPOINTORDEFAULT_OFFSET))(nullptr);
		}

	};
}

