#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::InputSystem::Utilities { class FourCC; }

#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTDEVICECOMMAND_ALLOCATENATIVE_OFFSET UNITYSDK_OFFSET(0x9F55060)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTDEVICECOMMAND_GET_PAYLOADSIZEINBYTES_OFFSET UNITYSDK_OFFSET(0x9F55110)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTDEVICECOMMAND_GET_TYPESTATIC_OFFSET UNITYSDK_OFFSET(0x9F55120)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTDEVICECOMMAND_GET_PAYLOADPTR_OFFSET UNITYSDK_OFFSET(0x9F55130)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTDEVICECOMMAND_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F53EF0)

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int InputDeviceCommand_TypeDefinitionIndex = 28722;

	class InputDeviceCommand : public Il2CppObject
	{
	public:
		::System::Int32 kBaseCommandSize; // 0x0
		::System::Int32 BaseCommandSize; // 0x0
		::System::Int64 GenericFailure; // 0x0
		::System::Int64 GenericSuccess; // 0x0
		::UnityEngine::InputSystem::Utilities::FourCC* type; // 0x10
		::System::Int32 sizeInBytes; // 0x14

		Il2CppObject* AllocateNative(::UnityEngine::InputSystem::Utilities::FourCC* arg, ::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::InputSystem::Utilities::FourCC*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTDEVICECOMMAND_ALLOCATENATIVE_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 get_payloadSizeInBytes()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTDEVICECOMMAND_GET_PAYLOADSIZEINBYTES_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Utilities::FourCC* get_typeStatic()
		{
			return (return (::UnityEngine::InputSystem::Utilities::FourCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTDEVICECOMMAND_GET_TYPESTATIC_OFFSET))(nullptr);
		}

		::System::Object** get_payloadPtr()
		{
			return (return (::System::Object**(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTDEVICECOMMAND_GET_PAYLOADPTR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::UnityEngine::InputSystem::Utilities::FourCC* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Utilities::FourCC*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTDEVICECOMMAND_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

