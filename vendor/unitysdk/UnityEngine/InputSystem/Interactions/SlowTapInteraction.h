#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::InputSystem { class InputInteractionContext&; }

#define UNITYENGINE_INPUTSYSTEM_INTERACTIONS_SLOWTAPINTERACTION_GET_PRESSPOINTORDEFAULT_OFFSET UNITYSDK_OFFSET(0x9E7BEC0)
#define UNITYENGINE_INPUTSYSTEM_INTERACTIONS_SLOWTAPINTERACTION_PROCESS_OFFSET UNITYSDK_OFFSET(0x9E7BF20)
#define UNITYENGINE_INPUTSYSTEM_INTERACTIONS_SLOWTAPINTERACTION_RESET_OFFSET UNITYSDK_OFFSET(0x9E7C140)
#define UNITYENGINE_INPUTSYSTEM_INTERACTIONS_SLOWTAPINTERACTION_GET_DURATIONORDEFAULT_OFFSET UNITYSDK_OFFSET(0x9E7C0D0)
#define UNITYENGINE_INPUTSYSTEM_INTERACTIONS_SLOWTAPINTERACTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E7C150)

namespace UnityEngine::InputSystem::Interactions
{
	inline static constexpr unsigned int SlowTapInteraction_TypeDefinitionIndex = 28902;

	class SlowTapInteraction : public Il2CppObject
	{
	public:
		::System::Single duration; // 0x10
		::System::Single pressPoint; // 0x14
		::System::Double m_SlowTapStartTime; // 0x18

		::System::Single get_pressPointOrDefault()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INTERACTIONS_SLOWTAPINTERACTION_GET_PRESSPOINTORDEFAULT_OFFSET))(nullptr);
		}

		::System::Void Process(::UnityEngine::InputSystem::InputInteractionContext&* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputInteractionContext&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INTERACTIONS_SLOWTAPINTERACTION_PROCESS_OFFSET))(arg, nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INTERACTIONS_SLOWTAPINTERACTION_RESET_OFFSET))(nullptr);
		}

		::System::Single get_durationOrDefault()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INTERACTIONS_SLOWTAPINTERACTION_GET_DURATIONORDEFAULT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INTERACTIONS_SLOWTAPINTERACTION_.CTOR_OFFSET))(nullptr);
		}

	};
}

