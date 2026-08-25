#pragma once
#include "../../../unitysdk.h"

namespace NPA::Editor::Common { class INXPApp; }
namespace NPA::Editor::Analytics { class INXPAnalytics; }
namespace NPA { class NPLoginType; }

#define NPA_EDITOR_AUTH_NXPAUTHBASE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C82550)
#define NPA_EDITOR_AUTH_NXPAUTHBASE_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_AUTH_NXPAUTHBASE_LOGIN_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_AUTH_NXPAUTHBASE_LOGIN_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_AUTH_NXPAUTHBASE_GETUSERINFO_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_AUTH_NXPAUTHBASE_LOGOUT_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_AUTH_NXPAUTHBASE_SIGNOUT_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_AUTH_NXPAUTHBASE_ISAUTHCRASHERROR_OFFSET UNITYSDK_OFFSET(0x9C826A0)
#define NPA_EDITOR_AUTH_NXPAUTHBASE_GETLOGINTYPE_OFFSET UNITYSDK_OFFSET(0x9C82A60)
#define NPA_EDITOR_AUTH_NXPAUTHBASE_UNREGISTERSERVICE_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_AUTH_NXPAUTHBASE_UNREGISTERNEXONMEMBERSHIP_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_AUTH_NXPAUTHBASE_CANDELETEACCOUNT_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_AUTH_NXPAUTHBASE_SHUTDOWN_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_AUTH_NXPAUTHBASE_LOADPLAYNOWSESSION_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_AUTH_NXPAUTHBASE_SAVEPLAYNOWSESSION_OFFSET UNITYSDK_OFFSET(0x000000)

namespace NPA::Editor::Auth
{
	inline static constexpr unsigned int NXPAuthBase_TypeDefinitionIndex = 27012;

	class NXPAuthBase : public Il2CppObject
	{
	public:
		::NPA::Editor::Common::INXPApp* App; // 0x10
		::NPA::Editor::Analytics::INXPAnalytics* Analytics; // 0x18

		::System::Void .ctor(::NPA::Editor::Common::INXPApp* arg, ::NPA::Editor::Analytics::INXPAnalytics* arg)
		{
			((::System::Void(*)(::NPA::Editor::Common::INXPApp*, ::NPA::Editor::Analytics::INXPAnalytics*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPAUTHBASE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Initialize(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPAUTHBASE_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void Login(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPAUTHBASE_LOGIN_OFFSET))(arg, nullptr);
		}

		::System::Void Login(::NPA::NPLoginType* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::NPA::NPLoginType*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPAUTHBASE_LOGIN_OFFSET))(arg, arg, nullptr);
		}

		::System::Void GetUserInfo(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPAUTHBASE_GETUSERINFO_OFFSET))(arg, nullptr);
		}

		::System::Void Logout(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPAUTHBASE_LOGOUT_OFFSET))(arg, nullptr);
		}

		::System::Void SignOut(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPAUTHBASE_SIGNOUT_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsAuthCrashError(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPAUTHBASE_ISAUTHCRASHERROR_OFFSET))(arg, nullptr);
		}

		::NPA::NPLoginType* GetLoginType()
		{
			return (return (::NPA::NPLoginType*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPAUTHBASE_GETLOGINTYPE_OFFSET))(nullptr);
		}

		::System::Void UnregisterService(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPAUTHBASE_UNREGISTERSERVICE_OFFSET))(arg, nullptr);
		}

		::System::Void UnregisterNexonMembership(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPAUTHBASE_UNREGISTERNEXONMEMBERSHIP_OFFSET))(arg, nullptr);
		}

		::System::Boolean CanDeleteAccount()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPAUTHBASE_CANDELETEACCOUNT_OFFSET))(nullptr);
		}

		::System::Void ShutDown()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPAUTHBASE_SHUTDOWN_OFFSET))(nullptr);
		}

		::System::String* LoadPlayNowSession()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPAUTHBASE_LOADPLAYNOWSESSION_OFFSET))(nullptr);
		}

		::System::Void SavePlayNowSession(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPAUTHBASE_SAVEPLAYNOWSESSION_OFFSET))(str, nullptr);
		}

	};
}

