#pragma once
#include "../../../../unitysdk.h"

namespace UnityEngine::InputSystem::LowLevel { class InputDeviceCommand; }
namespace UnityEngine::InputSystem::Utilities { class FourCC; }
namespace UnityEngine::InputSystem::XR::Haptics { class HapticCapabilities; }
namespace UnityEngine::InputSystem::XR::Haptics { class GetHapticCapabilitiesCommand; }

#define UNITYENGINE_INPUTSYSTEM_XR_HAPTICS_GETHAPTICCAPABILITIESCOMMAND_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x9F28B10)
#define UNITYENGINE_INPUTSYSTEM_XR_HAPTICS_GETHAPTICCAPABILITIESCOMMAND_GET_TYPESTATIC_OFFSET UNITYSDK_OFFSET(0x9F28B50)
#define UNITYENGINE_INPUTSYSTEM_XR_HAPTICS_GETHAPTICCAPABILITIESCOMMAND_GET_CAPABILITIES_OFFSET UNITYSDK_OFFSET(0x9F28680)
#define UNITYENGINE_INPUTSYSTEM_XR_HAPTICS_GETHAPTICCAPABILITIESCOMMAND_CREATE_OFFSET UNITYSDK_OFFSET(0x9F285E0)

namespace UnityEngine::InputSystem::XR::Haptics
{
	inline static constexpr unsigned int GetHapticCapabilitiesCommand_TypeDefinitionIndex = 28595;

	class GetHapticCapabilitiesCommand : public Il2CppObject
	{
	public:
		::System::Int32 kSize; // 0x0
		::UnityEngine::InputSystem::LowLevel::InputDeviceCommand* baseCommand; // 0x10
		::System::UInt32 numChannels; // 0x18
		::System::UInt32 frequencyHz; // 0x1C
		::System::UInt32 maxBufferSize; // 0x20

		::UnityEngine::InputSystem::Utilities::FourCC* get_Type()
		{
			return (return (::UnityEngine::InputSystem::Utilities::FourCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_HAPTICS_GETHAPTICCAPABILITIESCOMMAND_GET_TYPE_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Utilities::FourCC* get_typeStatic()
		{
			return (return (::UnityEngine::InputSystem::Utilities::FourCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_HAPTICS_GETHAPTICCAPABILITIESCOMMAND_GET_TYPESTATIC_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::XR::Haptics::HapticCapabilities* get_capabilities()
		{
			return (return (::UnityEngine::InputSystem::XR::Haptics::HapticCapabilities*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_HAPTICS_GETHAPTICCAPABILITIESCOMMAND_GET_CAPABILITIES_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::XR::Haptics::GetHapticCapabilitiesCommand* Create()
		{
			return (return (::UnityEngine::InputSystem::XR::Haptics::GetHapticCapabilitiesCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_HAPTICS_GETHAPTICCAPABILITIESCOMMAND_CREATE_OFFSET))(nullptr);
		}

	};
}

