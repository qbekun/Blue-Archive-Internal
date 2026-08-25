#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::InputSystem::LowLevel { class InputDeviceCommand; }
namespace UnityEngine::InputSystem::Utilities { class FourCC; }
namespace UnityEngine::InputSystem::LowLevel { class DualMotorRumbleCommand; }

#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_DUALMOTORRUMBLECOMMAND_GET_TYPESTATIC_OFFSET UNITYSDK_OFFSET(0x9F56280)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_DUALMOTORRUMBLECOMMAND_CREATE_OFFSET UNITYSDK_OFFSET(0x9F545C0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_DUALMOTORRUMBLECOMMAND_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x9F562C0)

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int DualMotorRumbleCommand_TypeDefinitionIndex = 28745;

	class DualMotorRumbleCommand : public Il2CppObject
	{
	public:
		::System::Int32 kSize; // 0x0
		::UnityEngine::InputSystem::LowLevel::InputDeviceCommand* baseCommand; // 0x10
		::System::Single lowFrequencyMotorSpeed; // 0x18
		::System::Single highFrequencyMotorSpeed; // 0x1C

		::UnityEngine::InputSystem::Utilities::FourCC* get_typeStatic()
		{
			return (return (::UnityEngine::InputSystem::Utilities::FourCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_DUALMOTORRUMBLECOMMAND_GET_TYPESTATIC_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::LowLevel::DualMotorRumbleCommand* Create(::System::Single arg, ::System::Single arg)
		{
			return (return (::UnityEngine::InputSystem::LowLevel::DualMotorRumbleCommand*(*)(::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_DUALMOTORRUMBLECOMMAND_CREATE_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Utilities::FourCC* get_Type()
		{
			return (return (::UnityEngine::InputSystem::Utilities::FourCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_DUALMOTORRUMBLECOMMAND_GET_TYPE_OFFSET))(nullptr);
		}

	};
}

