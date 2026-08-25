#pragma once
#include "../../../../unitysdk.h"

namespace UnityEngine::InputSystem::LowLevel { class InputDeviceCommand; }
namespace UnityEngine::InputSystem::Utilities { class FourCC; }
namespace UnityEngine::InputSystem::XR::Haptics { class HapticState; }
namespace UnityEngine::InputSystem::XR::Haptics { class GetCurrentHapticStateCommand; }

#define UNITYENGINE_INPUTSYSTEM_XR_HAPTICS_GETCURRENTHAPTICSTATECOMMAND_GET_TYPESTATIC_OFFSET UNITYSDK_OFFSET(0x9F28980)
#define UNITYENGINE_INPUTSYSTEM_XR_HAPTICS_GETCURRENTHAPTICSTATECOMMAND_GET_CURRENTSTATE_OFFSET UNITYSDK_OFFSET(0x9F28A00)
#define UNITYENGINE_INPUTSYSTEM_XR_HAPTICS_GETCURRENTHAPTICSTATECOMMAND_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x9F289C0)
#define UNITYENGINE_INPUTSYSTEM_XR_HAPTICS_GETCURRENTHAPTICSTATECOMMAND_CREATE_OFFSET UNITYSDK_OFFSET(0x9F28A10)

namespace UnityEngine::InputSystem::XR::Haptics
{
	inline static constexpr unsigned int GetCurrentHapticStateCommand_TypeDefinitionIndex = 28593;

	class GetCurrentHapticStateCommand : public Il2CppObject
	{
	public:
		::System::Int32 kSize; // 0x0
		::UnityEngine::InputSystem::LowLevel::InputDeviceCommand* baseCommand; // 0x10
		::System::UInt32 samplesQueued; // 0x18
		::System::UInt32 samplesAvailable; // 0x1C

		::UnityEngine::InputSystem::Utilities::FourCC* get_typeStatic()
		{
			return (return (::UnityEngine::InputSystem::Utilities::FourCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_HAPTICS_GETCURRENTHAPTICSTATECOMMAND_GET_TYPESTATIC_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::XR::Haptics::HapticState* get_currentState()
		{
			return (return (::UnityEngine::InputSystem::XR::Haptics::HapticState*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_HAPTICS_GETCURRENTHAPTICSTATECOMMAND_GET_CURRENTSTATE_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Utilities::FourCC* get_Type()
		{
			return (return (::UnityEngine::InputSystem::Utilities::FourCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_HAPTICS_GETCURRENTHAPTICSTATECOMMAND_GET_TYPE_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::XR::Haptics::GetCurrentHapticStateCommand* Create()
		{
			return (return (::UnityEngine::InputSystem::XR::Haptics::GetCurrentHapticStateCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_HAPTICS_GETCURRENTHAPTICSTATECOMMAND_CREATE_OFFSET))(nullptr);
		}

	};
}

