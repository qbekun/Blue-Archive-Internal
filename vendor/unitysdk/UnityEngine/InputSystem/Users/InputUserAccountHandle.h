#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::InputSystem::Users { class InputUserAccountHandle; }

#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSERACCOUNTHANDLE_GET_APINAME_OFFSET UNITYSDK_OFFSET(0x9F2E900)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSERACCOUNTHANDLE_GET_HANDLE_OFFSET UNITYSDK_OFFSET(0x9F2E910)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSERACCOUNTHANDLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F2E920)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSERACCOUNTHANDLE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9F2E9B0)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSERACCOUNTHANDLE_EQUALS_OFFSET UNITYSDK_OFFSET(0x9F2EA60)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSERACCOUNTHANDLE_EQUALS_OFFSET UNITYSDK_OFFSET(0x9F2EAF0)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSERACCOUNTHANDLE_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x9F2E760)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSERACCOUNTHANDLE_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x9F2EBE0)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSERACCOUNTHANDLE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9F2EC80)

namespace UnityEngine::InputSystem::Users
{
	inline static constexpr unsigned int InputUserAccountHandle_TypeDefinitionIndex = 28617;

	class InputUserAccountHandle : public Il2CppObject
	{
	public:
		::System::String* m_ApiName; // 0x10
		::System::UInt64 m_Handle; // 0x18

		::System::String* get_apiName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSERACCOUNTHANDLE_GET_APINAME_OFFSET))(nullptr);
		}

		::System::UInt64 get_handle()
		{
			return (return (::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSERACCOUNTHANDLE_GET_HANDLE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::UInt64 arg)
		{
			((::System::Void(*)(::System::String*, ::System::UInt64, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSERACCOUNTHANDLE_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSERACCOUNTHANDLE_TOSTRING_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::UnityEngine::InputSystem::Users::InputUserAccountHandle* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::InputSystem::Users::InputUserAccountHandle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSERACCOUNTHANDLE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSERACCOUNTHANDLE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean op_Equality(::UnityEngine::InputSystem::Users::InputUserAccountHandle* arg, ::UnityEngine::InputSystem::Users::InputUserAccountHandle* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::InputSystem::Users::InputUserAccountHandle*, ::UnityEngine::InputSystem::Users::InputUserAccountHandle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSERACCOUNTHANDLE_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_Inequality(::UnityEngine::InputSystem::Users::InputUserAccountHandle* arg, ::UnityEngine::InputSystem::Users::InputUserAccountHandle* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::InputSystem::Users::InputUserAccountHandle*, ::UnityEngine::InputSystem::Users::InputUserAccountHandle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSERACCOUNTHANDLE_OP_INEQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSERACCOUNTHANDLE_GETHASHCODE_OFFSET))(nullptr);
		}

	};
}

