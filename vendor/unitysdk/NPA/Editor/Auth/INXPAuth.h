#pragma once
#include "../../../unitysdk.h"

namespace NPA { class NPLoginType; }

#define NPA_EDITOR_AUTH_INXPAUTH_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_AUTH_INXPAUTH_LOGIN_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_AUTH_INXPAUTH_LOGIN_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_AUTH_INXPAUTH_GETUSERINFO_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_AUTH_INXPAUTH_LOGOUT_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_AUTH_INXPAUTH_SIGNOUT_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_AUTH_INXPAUTH_ISAUTHCRASHERROR_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_AUTH_INXPAUTH_GETLOGINTYPE_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_AUTH_INXPAUTH_UNREGISTERSERVICE_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_AUTH_INXPAUTH_UNREGISTERNEXONMEMBERSHIP_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_AUTH_INXPAUTH_CANDELETEACCOUNT_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_AUTH_INXPAUTH_SHUTDOWN_OFFSET UNITYSDK_OFFSET(0x000000)

namespace NPA::Editor::Auth
{
	inline static constexpr unsigned int INXPAuth_TypeDefinitionIndex = 27005;

	class INXPAuth : public Il2CppObject
	{
	public:
		::System::Void Initialize(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_INXPAUTH_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void Login(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_INXPAUTH_LOGIN_OFFSET))(arg, nullptr);
		}

		::System::Void Login(::NPA::NPLoginType* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::NPA::NPLoginType*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_INXPAUTH_LOGIN_OFFSET))(arg, arg, nullptr);
		}

		::System::Void GetUserInfo(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_INXPAUTH_GETUSERINFO_OFFSET))(arg, nullptr);
		}

		::System::Void Logout(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_INXPAUTH_LOGOUT_OFFSET))(arg, nullptr);
		}

		::System::Void SignOut(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_INXPAUTH_SIGNOUT_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsAuthCrashError(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_INXPAUTH_ISAUTHCRASHERROR_OFFSET))(arg, nullptr);
		}

		::NPA::NPLoginType* GetLoginType()
		{
			return (return (::NPA::NPLoginType*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_INXPAUTH_GETLOGINTYPE_OFFSET))(nullptr);
		}

		::System::Void UnregisterService(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_INXPAUTH_UNREGISTERSERVICE_OFFSET))(arg, nullptr);
		}

		::System::Void UnregisterNexonMembership(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_INXPAUTH_UNREGISTERNEXONMEMBERSHIP_OFFSET))(arg, nullptr);
		}

		::System::Boolean CanDeleteAccount()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_INXPAUTH_CANDELETEACCOUNT_OFFSET))(nullptr);
		}

		::System::Void ShutDown()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_INXPAUTH_SHUTDOWN_OFFSET))(nullptr);
		}

	};
}

