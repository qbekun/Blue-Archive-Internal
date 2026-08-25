#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::InputSystem::LowLevel { class InputDeviceCommand; }
namespace UnityEngine::InputSystem::Utilities { class FourCC; }
namespace UnityEngine::InputSystem::LowLevel { class QueryKeyNameCommand; }
namespace UnityEngine::InputSystem { class Key; }

#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_QUERYKEYNAMECOMMAND_READKEYNAME_OFFSET UNITYSDK_OFFSET(0x9F55550)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_QUERYKEYNAMECOMMAND_GET_TYPESTATIC_OFFSET UNITYSDK_OFFSET(0x9F55570)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_QUERYKEYNAMECOMMAND_CREATE_OFFSET UNITYSDK_OFFSET(0x9F555F0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_QUERYKEYNAMECOMMAND_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x9F555B0)

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int QueryKeyNameCommand_TypeDefinitionIndex = 28729;

	class QueryKeyNameCommand : public Il2CppObject
	{
	public:
		::System::Int32 kMaxNameLength; // 0x0
		::System::Int32 kSize; // 0x0
		::UnityEngine::InputSystem::LowLevel::InputDeviceCommand* baseCommand; // 0x10
		::System::Int32 scanOrKeyCode; // 0x18
		<nameBuffer>e__FixedBuffer* nameBuffer; // 0x1C

		::System::String* ReadKeyName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_QUERYKEYNAMECOMMAND_READKEYNAME_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Utilities::FourCC* get_typeStatic()
		{
			return (return (::UnityEngine::InputSystem::Utilities::FourCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_QUERYKEYNAMECOMMAND_GET_TYPESTATIC_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::LowLevel::QueryKeyNameCommand* Create(::UnityEngine::InputSystem::Key* arg)
		{
			return (return (::UnityEngine::InputSystem::LowLevel::QueryKeyNameCommand*(*)(::UnityEngine::InputSystem::Key*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_QUERYKEYNAMECOMMAND_CREATE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::Utilities::FourCC* get_Type()
		{
			return (return (::UnityEngine::InputSystem::Utilities::FourCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_QUERYKEYNAMECOMMAND_GET_TYPE_OFFSET))(nullptr);
		}

	};
}

