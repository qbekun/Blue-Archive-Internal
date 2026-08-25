#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::InputSystem::LowLevel { class InputDeviceCommand; }
namespace UnityEngine::InputSystem::Utilities { class FourCC; }
namespace UnityEngine::InputSystem::LowLevel { class QueryUserIdCommand; }

#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_QUERYUSERIDCOMMAND_GET_TYPESTATIC_OFFSET UNITYSDK_OFFSET(0x9F55AE0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_QUERYUSERIDCOMMAND_READID_OFFSET UNITYSDK_OFFSET(0x9F55B60)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_QUERYUSERIDCOMMAND_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x9F55B20)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_QUERYUSERIDCOMMAND_CREATE_OFFSET UNITYSDK_OFFSET(0x9F55B80)

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int QueryUserIdCommand_TypeDefinitionIndex = 28736;

	class QueryUserIdCommand : public Il2CppObject
	{
	public:
		::System::Int32 kMaxIdLength; // 0x0
		::System::Int32 kSize; // 0x0
		::UnityEngine::InputSystem::LowLevel::InputDeviceCommand* baseCommand; // 0x10
		<idBuffer>e__FixedBuffer* idBuffer; // 0x18

		::UnityEngine::InputSystem::Utilities::FourCC* get_typeStatic()
		{
			return (return (::UnityEngine::InputSystem::Utilities::FourCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_QUERYUSERIDCOMMAND_GET_TYPESTATIC_OFFSET))(nullptr);
		}

		::System::String* ReadId()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_QUERYUSERIDCOMMAND_READID_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Utilities::FourCC* get_Type()
		{
			return (return (::UnityEngine::InputSystem::Utilities::FourCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_QUERYUSERIDCOMMAND_GET_TYPE_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::LowLevel::QueryUserIdCommand* Create()
		{
			return (return (::UnityEngine::InputSystem::LowLevel::QueryUserIdCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_QUERYUSERIDCOMMAND_CREATE_OFFSET))(nullptr);
		}

	};
}

