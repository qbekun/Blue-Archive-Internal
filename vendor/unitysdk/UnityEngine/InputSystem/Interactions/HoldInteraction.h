#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::InputSystem { class InputInteractionContext&; }

#define UNITYENGINE_INPUTSYSTEM_INTERACTIONS_HOLDINTERACTION_GET_DURATIONORDEFAULT_OFFSET UNITYSDK_OFFSET(0x9E7AF00)
#define UNITYENGINE_INPUTSYSTEM_INTERACTIONS_HOLDINTERACTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E7AF70)
#define UNITYENGINE_INPUTSYSTEM_INTERACTIONS_HOLDINTERACTION_RESET_OFFSET UNITYSDK_OFFSET(0x9E7AF80)
#define UNITYENGINE_INPUTSYSTEM_INTERACTIONS_HOLDINTERACTION_PROCESS_OFFSET UNITYSDK_OFFSET(0x9E7AF90)
#define UNITYENGINE_INPUTSYSTEM_INTERACTIONS_HOLDINTERACTION_GET_PRESSPOINTORDEFAULT_OFFSET UNITYSDK_OFFSET(0x9E7B200)

namespace UnityEngine::InputSystem::Interactions
{
	inline static constexpr unsigned int HoldInteraction_TypeDefinitionIndex = 28897;

	class HoldInteraction : public Il2CppObject
	{
	public:
		::System::Single duration; // 0x10
		::System::Single pressPoint; // 0x14
		::System::Double m_TimePressed; // 0x18

		::System::Single get_durationOrDefault()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INTERACTIONS_HOLDINTERACTION_GET_DURATIONORDEFAULT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INTERACTIONS_HOLDINTERACTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INTERACTIONS_HOLDINTERACTION_RESET_OFFSET))(nullptr);
		}

		::System::Void Process(::UnityEngine::InputSystem::InputInteractionContext&* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputInteractionContext&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INTERACTIONS_HOLDINTERACTION_PROCESS_OFFSET))(arg, nullptr);
		}

		::System::Single get_pressPointOrDefault()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INTERACTIONS_HOLDINTERACTION_GET_PRESSPOINTORDEFAULT_OFFSET))(nullptr);
		}

	};
}

