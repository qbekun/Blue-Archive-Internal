#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::InputSystem::LowLevel { class InputDeviceCommand; }
namespace UnityEngine::InputSystem::LowLevel { class RequestSyncCommand; }
namespace UnityEngine::InputSystem::Utilities { class FourCC; }

#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_REQUESTSYNCCOMMAND_CREATE_OFFSET UNITYSDK_OFFSET(0x9F55CB0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_REQUESTSYNCCOMMAND_GET_TYPESTATIC_OFFSET UNITYSDK_OFFSET(0x9F55D40)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_REQUESTSYNCCOMMAND_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x9F55D00)

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int RequestSyncCommand_TypeDefinitionIndex = 28738;

	class RequestSyncCommand : public Il2CppObject
	{
	public:
		::System::Int32 kSize; // 0x0
		::UnityEngine::InputSystem::LowLevel::InputDeviceCommand* baseCommand; // 0x10

		::UnityEngine::InputSystem::LowLevel::RequestSyncCommand* Create()
		{
			return (return (::UnityEngine::InputSystem::LowLevel::RequestSyncCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_REQUESTSYNCCOMMAND_CREATE_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Utilities::FourCC* get_typeStatic()
		{
			return (return (::UnityEngine::InputSystem::Utilities::FourCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_REQUESTSYNCCOMMAND_GET_TYPESTATIC_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Utilities::FourCC* get_Type()
		{
			return (return (::UnityEngine::InputSystem::Utilities::FourCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_REQUESTSYNCCOMMAND_GET_TYPE_OFFSET))(nullptr);
		}

	};
}

