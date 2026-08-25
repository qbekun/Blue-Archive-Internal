#pragma once
#include "../../../../unitysdk.h"

namespace UnityEngine::InputSystem::LowLevel { class InputDeviceCommand; }
namespace UnityEngine::InputSystem::Utilities { class FourCC; }
namespace UnityEngine::InputSystem::XR::Haptics { class SendBufferedHapticCommand; }

#define UNITYENGINE_INPUTSYSTEM_XR_HAPTICS_SENDBUFFEREDHAPTICCOMMAND_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x9F28B90)
#define UNITYENGINE_INPUTSYSTEM_XR_HAPTICS_SENDBUFFEREDHAPTICCOMMAND_GET_TYPESTATIC_OFFSET UNITYSDK_OFFSET(0x9F28BD0)
#define UNITYENGINE_INPUTSYSTEM_XR_HAPTICS_SENDBUFFEREDHAPTICCOMMAND_CREATE_OFFSET UNITYSDK_OFFSET(0x9F28760)

namespace UnityEngine::InputSystem::XR::Haptics
{
	inline static constexpr unsigned int SendBufferedHapticCommand_TypeDefinitionIndex = 28597;

	class SendBufferedHapticCommand : public Il2CppObject
	{
	public:
		::System::Int32 kMaxHapticBufferSize; // 0x0
		::System::Int32 kSize; // 0x0
		::UnityEngine::InputSystem::LowLevel::InputDeviceCommand* baseCommand; // 0x10
		::System::Int32 channel; // 0x18
		::System::Int32 bufferSize; // 0x1C
		<buffer>e__FixedBuffer* buffer; // 0x20

		::UnityEngine::InputSystem::Utilities::FourCC* get_Type()
		{
			return (return (::UnityEngine::InputSystem::Utilities::FourCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_HAPTICS_SENDBUFFEREDHAPTICCOMMAND_GET_TYPE_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Utilities::FourCC* get_typeStatic()
		{
			return (return (::UnityEngine::InputSystem::Utilities::FourCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_HAPTICS_SENDBUFFEREDHAPTICCOMMAND_GET_TYPESTATIC_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::XR::Haptics::SendBufferedHapticCommand* Create(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::UnityEngine::InputSystem::XR::Haptics::SendBufferedHapticCommand*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_HAPTICS_SENDBUFFEREDHAPTICCOMMAND_CREATE_OFFSET))(arg, nullptr);
		}

	};
}

