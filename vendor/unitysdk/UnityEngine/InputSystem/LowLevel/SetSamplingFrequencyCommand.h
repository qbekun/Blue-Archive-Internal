#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::InputSystem::LowLevel { class InputDeviceCommand; }
namespace UnityEngine::InputSystem::Utilities { class FourCC; }
namespace UnityEngine::InputSystem::LowLevel { class SetSamplingFrequencyCommand; }

#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_SETSAMPLINGFREQUENCYCOMMAND_GET_TYPESTATIC_OFFSET UNITYSDK_OFFSET(0x9F55E70)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_SETSAMPLINGFREQUENCYCOMMAND_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x9F55EB0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_SETSAMPLINGFREQUENCYCOMMAND_CREATE_OFFSET UNITYSDK_OFFSET(0x9F55EF0)

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int SetSamplingFrequencyCommand_TypeDefinitionIndex = 28740;

	class SetSamplingFrequencyCommand : public Il2CppObject
	{
	public:
		::System::Int32 kSize; // 0x0
		::UnityEngine::InputSystem::LowLevel::InputDeviceCommand* baseCommand; // 0x10
		::System::Single frequency; // 0x18

		::UnityEngine::InputSystem::Utilities::FourCC* get_typeStatic()
		{
			return (return (::UnityEngine::InputSystem::Utilities::FourCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_SETSAMPLINGFREQUENCYCOMMAND_GET_TYPESTATIC_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Utilities::FourCC* get_Type()
		{
			return (return (::UnityEngine::InputSystem::Utilities::FourCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_SETSAMPLINGFREQUENCYCOMMAND_GET_TYPE_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::LowLevel::SetSamplingFrequencyCommand* Create(::System::Single arg)
		{
			return (return (::UnityEngine::InputSystem::LowLevel::SetSamplingFrequencyCommand*(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_SETSAMPLINGFREQUENCYCOMMAND_CREATE_OFFSET))(arg, nullptr);
		}

	};
}

