#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::InputSystem::LowLevel { class InputDeviceCommand; }
namespace UnityEngine::InputSystem::Utilities { class FourCC; }
namespace UnityEngine::InputSystem::LowLevel { class QueryEnabledStateCommand; }

#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_QUERYENABLEDSTATECOMMAND_GET_TYPESTATIC_OFFSET UNITYSDK_OFFSET(0x9F55300)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_QUERYENABLEDSTATECOMMAND_CREATE_OFFSET UNITYSDK_OFFSET(0x9F55380)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_QUERYENABLEDSTATECOMMAND_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x9F55340)

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int QueryEnabledStateCommand_TypeDefinitionIndex = 28725;

	class QueryEnabledStateCommand : public Il2CppObject
	{
	public:
		::System::Int32 kSize; // 0x0
		::UnityEngine::InputSystem::LowLevel::InputDeviceCommand* baseCommand; // 0x10
		::System::Boolean isEnabled; // 0x18

		::UnityEngine::InputSystem::Utilities::FourCC* get_typeStatic()
		{
			return (return (::UnityEngine::InputSystem::Utilities::FourCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_QUERYENABLEDSTATECOMMAND_GET_TYPESTATIC_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::LowLevel::QueryEnabledStateCommand* Create()
		{
			return (return (::UnityEngine::InputSystem::LowLevel::QueryEnabledStateCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_QUERYENABLEDSTATECOMMAND_CREATE_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Utilities::FourCC* get_Type()
		{
			return (return (::UnityEngine::InputSystem::Utilities::FourCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_QUERYENABLEDSTATECOMMAND_GET_TYPE_OFFSET))(nullptr);
		}

	};
}

