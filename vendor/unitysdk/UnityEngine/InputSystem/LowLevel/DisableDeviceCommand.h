#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::InputSystem::LowLevel { class InputDeviceCommand; }
namespace UnityEngine::InputSystem::Utilities { class FourCC; }
namespace UnityEngine::InputSystem::LowLevel { class DisableDeviceCommand; }

#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_DISABLEDEVICECOMMAND_GET_TYPESTATIC_OFFSET UNITYSDK_OFFSET(0x9F54990)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_DISABLEDEVICECOMMAND_CREATE_OFFSET UNITYSDK_OFFSET(0x9F54A10)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_DISABLEDEVICECOMMAND_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x9F549D0)

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int DisableDeviceCommand_TypeDefinitionIndex = 28714;

	class DisableDeviceCommand : public Il2CppObject
	{
	public:
		::System::Int32 kSize; // 0x0
		::UnityEngine::InputSystem::LowLevel::InputDeviceCommand* baseCommand; // 0x10

		::UnityEngine::InputSystem::Utilities::FourCC* get_typeStatic()
		{
			return (return (::UnityEngine::InputSystem::Utilities::FourCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_DISABLEDEVICECOMMAND_GET_TYPESTATIC_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::LowLevel::DisableDeviceCommand* Create()
		{
			return (return (::UnityEngine::InputSystem::LowLevel::DisableDeviceCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_DISABLEDEVICECOMMAND_CREATE_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Utilities::FourCC* get_Type()
		{
			return (return (::UnityEngine::InputSystem::Utilities::FourCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_DISABLEDEVICECOMMAND_GET_TYPE_OFFSET))(nullptr);
		}

	};
}

