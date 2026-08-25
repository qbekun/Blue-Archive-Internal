#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::InputSystem::LowLevel { class InputDeviceCommand; }
namespace UnityEngine::InputSystem::LowLevel { class QuerySamplingFrequencyCommand; }
namespace UnityEngine::InputSystem::Utilities { class FourCC; }

#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_QUERYSAMPLINGFREQUENCYCOMMAND_CREATE_OFFSET UNITYSDK_OFFSET(0x9F55A10)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_QUERYSAMPLINGFREQUENCYCOMMAND_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x9F55A60)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_QUERYSAMPLINGFREQUENCYCOMMAND_GET_TYPESTATIC_OFFSET UNITYSDK_OFFSET(0x9F55AA0)

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int QuerySamplingFrequencyCommand_TypeDefinitionIndex = 28734;

	class QuerySamplingFrequencyCommand : public Il2CppObject
	{
	public:
		::System::Int32 kSize; // 0x0
		::UnityEngine::InputSystem::LowLevel::InputDeviceCommand* baseCommand; // 0x10
		::System::Single frequency; // 0x18

		::UnityEngine::InputSystem::LowLevel::QuerySamplingFrequencyCommand* Create()
		{
			return (return (::UnityEngine::InputSystem::LowLevel::QuerySamplingFrequencyCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_QUERYSAMPLINGFREQUENCYCOMMAND_CREATE_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Utilities::FourCC* get_Type()
		{
			return (return (::UnityEngine::InputSystem::Utilities::FourCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_QUERYSAMPLINGFREQUENCYCOMMAND_GET_TYPE_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Utilities::FourCC* get_typeStatic()
		{
			return (return (::UnityEngine::InputSystem::Utilities::FourCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_QUERYSAMPLINGFREQUENCYCOMMAND_GET_TYPESTATIC_OFFSET))(nullptr);
		}

	};
}

