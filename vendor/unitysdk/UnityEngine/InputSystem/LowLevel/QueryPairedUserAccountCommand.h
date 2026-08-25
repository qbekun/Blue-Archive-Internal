#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::InputSystem::LowLevel { class InputDeviceCommand; }
namespace UnityEngine::InputSystem::Utilities { class FourCC; }
namespace UnityEngine::InputSystem::LowLevel { class QueryPairedUserAccountCommand; }

#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_QUERYPAIREDUSERACCOUNTCOMMAND_GET_TYPESTATIC_OFFSET UNITYSDK_OFFSET(0x9F556A0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_QUERYPAIREDUSERACCOUNTCOMMAND_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x9F556E0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_QUERYPAIREDUSERACCOUNTCOMMAND_GET_NAME_OFFSET UNITYSDK_OFFSET(0x9F55720)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_QUERYPAIREDUSERACCOUNTCOMMAND_GET_ID_OFFSET UNITYSDK_OFFSET(0x9F55740)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_QUERYPAIREDUSERACCOUNTCOMMAND_CREATE_OFFSET UNITYSDK_OFFSET(0x9F55760)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_QUERYPAIREDUSERACCOUNTCOMMAND_SET_ID_OFFSET UNITYSDK_OFFSET(0x9F557C0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_QUERYPAIREDUSERACCOUNTCOMMAND_SET_NAME_OFFSET UNITYSDK_OFFSET(0x9F558F0)

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int QueryPairedUserAccountCommand_TypeDefinitionIndex = 28733;

	class QueryPairedUserAccountCommand : public Il2CppObject
	{
	public:
		::System::Int32 kMaxNameLength; // 0x0
		::System::Int32 kMaxIdLength; // 0x0
		::System::Int32 kSize; // 0x0
		::UnityEngine::InputSystem::LowLevel::InputDeviceCommand* baseCommand; // 0x10
		::System::UInt64 handle; // 0x18
		<nameBuffer>e__FixedBuffer* nameBuffer; // 0x20
		<idBuffer>e__FixedBuffer* idBuffer; // 0x220

		::UnityEngine::InputSystem::Utilities::FourCC* get_typeStatic()
		{
			return (return (::UnityEngine::InputSystem::Utilities::FourCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_QUERYPAIREDUSERACCOUNTCOMMAND_GET_TYPESTATIC_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Utilities::FourCC* get_Type()
		{
			return (return (::UnityEngine::InputSystem::Utilities::FourCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_QUERYPAIREDUSERACCOUNTCOMMAND_GET_TYPE_OFFSET))(nullptr);
		}

		::System::String* get_name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_QUERYPAIREDUSERACCOUNTCOMMAND_GET_NAME_OFFSET))(nullptr);
		}

		::System::String* get_id()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_QUERYPAIREDUSERACCOUNTCOMMAND_GET_ID_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand* Create()
		{
			return (return (::UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_QUERYPAIREDUSERACCOUNTCOMMAND_CREATE_OFFSET))(nullptr);
		}

		::System::Void set_id(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_QUERYPAIREDUSERACCOUNTCOMMAND_SET_ID_OFFSET))(str, nullptr);
		}

		::System::Void set_name(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_QUERYPAIREDUSERACCOUNTCOMMAND_SET_NAME_OFFSET))(str, nullptr);
		}

	};
}

