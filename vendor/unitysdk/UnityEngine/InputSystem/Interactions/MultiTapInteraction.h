#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::InputSystem { class InputInteractionContext&; }

#define UNITYENGINE_INPUTSYSTEM_INTERACTIONS_MULTITAPINTERACTION_RESET_OFFSET UNITYSDK_OFFSET(0x9E7B250)
#define UNITYENGINE_INPUTSYSTEM_INTERACTIONS_MULTITAPINTERACTION_GET_PRESSPOINTORDEFAULT_OFFSET UNITYSDK_OFFSET(0x9E7B260)
#define UNITYENGINE_INPUTSYSTEM_INTERACTIONS_MULTITAPINTERACTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E7B2C0)
#define UNITYENGINE_INPUTSYSTEM_INTERACTIONS_MULTITAPINTERACTION_PROCESS_OFFSET UNITYSDK_OFFSET(0x9E7B2D0)
#define UNITYENGINE_INPUTSYSTEM_INTERACTIONS_MULTITAPINTERACTION_GET_RELEASEPOINTORDEFAULT_OFFSET UNITYSDK_OFFSET(0x9E7B840)
#define UNITYENGINE_INPUTSYSTEM_INTERACTIONS_MULTITAPINTERACTION_GET_TAPDELAYORDEFAULT_OFFSET UNITYSDK_OFFSET(0x9E7B7D0)
#define UNITYENGINE_INPUTSYSTEM_INTERACTIONS_MULTITAPINTERACTION_GET_TAPTIMEORDEFAULT_OFFSET UNITYSDK_OFFSET(0x9E7B760)

namespace UnityEngine::InputSystem::Interactions
{
	inline static constexpr unsigned int MultiTapInteraction_TypeDefinitionIndex = 28899;

	class MultiTapInteraction : public Il2CppObject
	{
	public:
		::System::Single tapTime; // 0x10
		::System::Single tapDelay; // 0x14
		::System::Int32 tapCount; // 0x18
		::System::Single pressPoint; // 0x1C
		TapPhase* m_CurrentTapPhase; // 0x20
		::System::Int32 m_CurrentTapCount; // 0x24
		::System::Double m_CurrentTapStartTime; // 0x28
		::System::Double m_LastTapReleaseTime; // 0x30

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INTERACTIONS_MULTITAPINTERACTION_RESET_OFFSET))(nullptr);
		}

		::System::Single get_pressPointOrDefault()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INTERACTIONS_MULTITAPINTERACTION_GET_PRESSPOINTORDEFAULT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INTERACTIONS_MULTITAPINTERACTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Process(::UnityEngine::InputSystem::InputInteractionContext&* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputInteractionContext&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INTERACTIONS_MULTITAPINTERACTION_PROCESS_OFFSET))(arg, nullptr);
		}

		::System::Single get_releasePointOrDefault()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INTERACTIONS_MULTITAPINTERACTION_GET_RELEASEPOINTORDEFAULT_OFFSET))(nullptr);
		}

		::System::Single get_tapDelayOrDefault()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INTERACTIONS_MULTITAPINTERACTION_GET_TAPDELAYORDEFAULT_OFFSET))(nullptr);
		}

		::System::Single get_tapTimeOrDefault()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INTERACTIONS_MULTITAPINTERACTION_GET_TAPTIMEORDEFAULT_OFFSET))(nullptr);
		}

	};
}

