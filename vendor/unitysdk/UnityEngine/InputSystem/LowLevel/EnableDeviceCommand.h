#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::InputSystem::LowLevel { class InputDeviceCommand; }
namespace UnityEngine::InputSystem::Utilities { class FourCC; }
namespace UnityEngine::InputSystem::LowLevel { class EnableDeviceCommand; }

#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_ENABLEDEVICECOMMAND_GET_TYPESTATIC_OFFSET UNITYSDK_OFFSET(0x9F54A60)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_ENABLEDEVICECOMMAND_CREATE_OFFSET UNITYSDK_OFFSET(0x9F54AE0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_ENABLEDEVICECOMMAND_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x9F54AA0)

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int EnableDeviceCommand_TypeDefinitionIndex = 28715;

	class EnableDeviceCommand : public Il2CppObject
	{
	public:
		::System::Int32 kSize; // 0x0
		::UnityEngine::InputSystem::LowLevel::InputDeviceCommand* baseCommand; // 0x10

		::UnityEngine::InputSystem::Utilities::FourCC* get_typeStatic()
		{
			return (return (::UnityEngine::InputSystem::Utilities::FourCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_ENABLEDEVICECOMMAND_GET_TYPESTATIC_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::LowLevel::EnableDeviceCommand* Create()
		{
			return (return (::UnityEngine::InputSystem::LowLevel::EnableDeviceCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_ENABLEDEVICECOMMAND_CREATE_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Utilities::FourCC* get_Type()
		{
			return (return (::UnityEngine::InputSystem::Utilities::FourCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_ENABLEDEVICECOMMAND_GET_TYPE_OFFSET))(nullptr);
		}

	};
}

