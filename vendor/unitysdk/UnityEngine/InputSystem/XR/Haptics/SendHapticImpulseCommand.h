#pragma once
#include "../../../../unitysdk.h"

namespace UnityEngine::InputSystem::LowLevel { class InputDeviceCommand; }
namespace UnityEngine::InputSystem::XR::Haptics { class SendHapticImpulseCommand; }
namespace UnityEngine::InputSystem::Utilities { class FourCC; }

#define UNITYENGINE_INPUTSYSTEM_XR_HAPTICS_SENDHAPTICIMPULSECOMMAND_CREATE_OFFSET UNITYSDK_OFFSET(0x9F23580)
#define UNITYENGINE_INPUTSYSTEM_XR_HAPTICS_SENDHAPTICIMPULSECOMMAND_GET_TYPESTATIC_OFFSET UNITYSDK_OFFSET(0x9F28C50)
#define UNITYENGINE_INPUTSYSTEM_XR_HAPTICS_SENDHAPTICIMPULSECOMMAND_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x9F28C10)

namespace UnityEngine::InputSystem::XR::Haptics
{
	inline static constexpr unsigned int SendHapticImpulseCommand_TypeDefinitionIndex = 28598;

	class SendHapticImpulseCommand : public Il2CppObject
	{
	public:
		::System::Int32 kSize; // 0x0
		::UnityEngine::InputSystem::LowLevel::InputDeviceCommand* baseCommand; // 0x10
		::System::Int32 channel; // 0x18
		::System::Single amplitude; // 0x1C
		::System::Single duration; // 0x20

		::UnityEngine::InputSystem::XR::Haptics::SendHapticImpulseCommand* Create(::System::Int32 arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (::UnityEngine::InputSystem::XR::Haptics::SendHapticImpulseCommand*(*)(::System::Int32, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_HAPTICS_SENDHAPTICIMPULSECOMMAND_CREATE_OFFSET))(arg, arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Utilities::FourCC* get_typeStatic()
		{
			return (return (::UnityEngine::InputSystem::Utilities::FourCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_HAPTICS_SENDHAPTICIMPULSECOMMAND_GET_TYPESTATIC_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Utilities::FourCC* get_Type()
		{
			return (return (::UnityEngine::InputSystem::Utilities::FourCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_HAPTICS_SENDHAPTICIMPULSECOMMAND_GET_TYPE_OFFSET))(nullptr);
		}

	};
}

