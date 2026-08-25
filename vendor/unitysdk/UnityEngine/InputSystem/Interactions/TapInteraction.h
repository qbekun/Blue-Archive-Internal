#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::InputSystem { class InputInteractionContext&; }

#define UNITYENGINE_INPUTSYSTEM_INTERACTIONS_TAPINTERACTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E7C160)
#define UNITYENGINE_INPUTSYSTEM_INTERACTIONS_TAPINTERACTION_GET_RELEASEPOINTORDEFAULT_OFFSET UNITYSDK_OFFSET(0x9E7C170)
#define UNITYENGINE_INPUTSYSTEM_INTERACTIONS_TAPINTERACTION_PROCESS_OFFSET UNITYSDK_OFFSET(0x9E7C240)
#define UNITYENGINE_INPUTSYSTEM_INTERACTIONS_TAPINTERACTION_RESET_OFFSET UNITYSDK_OFFSET(0x9E7C510)
#define UNITYENGINE_INPUTSYSTEM_INTERACTIONS_TAPINTERACTION_GET_PRESSPOINTORDEFAULT_OFFSET UNITYSDK_OFFSET(0x9E7C1E0)
#define UNITYENGINE_INPUTSYSTEM_INTERACTIONS_TAPINTERACTION_GET_DURATIONORDEFAULT_OFFSET UNITYSDK_OFFSET(0x9E7C4A0)

namespace UnityEngine::InputSystem::Interactions
{
	inline static constexpr unsigned int TapInteraction_TypeDefinitionIndex = 28903;

	class TapInteraction : public Il2CppObject
	{
	public:
		::System::Single duration; // 0x10
		::System::Single pressPoint; // 0x14
		::System::Double m_TapStartTime; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INTERACTIONS_TAPINTERACTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Single get_releasePointOrDefault()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INTERACTIONS_TAPINTERACTION_GET_RELEASEPOINTORDEFAULT_OFFSET))(nullptr);
		}

		::System::Void Process(::UnityEngine::InputSystem::InputInteractionContext&* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputInteractionContext&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INTERACTIONS_TAPINTERACTION_PROCESS_OFFSET))(arg, nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INTERACTIONS_TAPINTERACTION_RESET_OFFSET))(nullptr);
		}

		::System::Single get_pressPointOrDefault()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INTERACTIONS_TAPINTERACTION_GET_PRESSPOINTORDEFAULT_OFFSET))(nullptr);
		}

		::System::Single get_durationOrDefault()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INTERACTIONS_TAPINTERACTION_GET_DURATIONORDEFAULT_OFFSET))(nullptr);
		}

	};
}

