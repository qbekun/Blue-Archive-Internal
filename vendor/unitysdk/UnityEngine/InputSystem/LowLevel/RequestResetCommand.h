#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::InputSystem::LowLevel { class InputDeviceCommand; }
namespace UnityEngine::InputSystem::LowLevel { class RequestResetCommand; }
namespace UnityEngine::InputSystem::Utilities { class FourCC; }

#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_REQUESTRESETCOMMAND_CREATE_OFFSET UNITYSDK_OFFSET(0x9F55BE0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_REQUESTRESETCOMMAND_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x9F55C30)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_REQUESTRESETCOMMAND_GET_TYPESTATIC_OFFSET UNITYSDK_OFFSET(0x9F55C70)

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int RequestResetCommand_TypeDefinitionIndex = 28737;

	class RequestResetCommand : public Il2CppObject
	{
	public:
		::System::Int32 kSize; // 0x0
		::UnityEngine::InputSystem::LowLevel::InputDeviceCommand* baseCommand; // 0x10

		::UnityEngine::InputSystem::LowLevel::RequestResetCommand* Create()
		{
			return (return (::UnityEngine::InputSystem::LowLevel::RequestResetCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_REQUESTRESETCOMMAND_CREATE_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Utilities::FourCC* get_Type()
		{
			return (return (::UnityEngine::InputSystem::Utilities::FourCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_REQUESTRESETCOMMAND_GET_TYPE_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Utilities::FourCC* get_typeStatic()
		{
			return (return (::UnityEngine::InputSystem::Utilities::FourCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_REQUESTRESETCOMMAND_GET_TYPESTATIC_OFFSET))(nullptr);
		}

	};
}

