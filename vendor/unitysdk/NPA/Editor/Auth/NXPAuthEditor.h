#pragma once
#include "../../../unitysdk.h"

namespace NPA::Editor::Common { class INXPApp; }
namespace NPA::Editor::Analytics { class INXPAnalytics; }
namespace NPA { class NPLoginType; }

#define NPA_EDITOR_AUTH_NXPAUTHEDITOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C82AE0)
#define NPA_EDITOR_AUTH_NXPAUTHEDITOR_SHUTDOWN_OFFSET UNITYSDK_OFFSET(0x9C82AF0)
#define NPA_EDITOR_AUTH_NXPAUTHEDITOR_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x9C82B00)
#define NPA_EDITOR_AUTH_NXPAUTHEDITOR_LOGIN_OFFSET UNITYSDK_OFFSET(0x9C82C50)
#define NPA_EDITOR_AUTH_NXPAUTHEDITOR_LOGIN_OFFSET UNITYSDK_OFFSET(0x9C83000)
#define NPA_EDITOR_AUTH_NXPAUTHEDITOR_GETUSERINFO_OFFSET UNITYSDK_OFFSET(0x9C83140)
#define NPA_EDITOR_AUTH_NXPAUTHEDITOR_LOGOUT_OFFSET UNITYSDK_OFFSET(0x9C832A0)
#define NPA_EDITOR_AUTH_NXPAUTHEDITOR_SIGNOUT_OFFSET UNITYSDK_OFFSET(0x9C834A0)
#define NPA_EDITOR_AUTH_NXPAUTHEDITOR_UNREGISTERSERVICE_OFFSET UNITYSDK_OFFSET(0x9C836D0)
#define NPA_EDITOR_AUTH_NXPAUTHEDITOR_UNREGISTERNEXONMEMBERSHIP_OFFSET UNITYSDK_OFFSET(0x9C838B0)
#define NPA_EDITOR_AUTH_NXPAUTHEDITOR_CANDELETEACCOUNT_OFFSET UNITYSDK_OFFSET(0x9C83CA0)
#define NPA_EDITOR_AUTH_NXPAUTHEDITOR_LOADPLAYNOWSESSION_OFFSET UNITYSDK_OFFSET(0x9C83D20)
#define NPA_EDITOR_AUTH_NXPAUTHEDITOR_SAVEPLAYNOWSESSION_OFFSET UNITYSDK_OFFSET(0x9C83D30)

namespace NPA::Editor::Auth
{
	inline static constexpr unsigned int NXPAuthEditor_TypeDefinitionIndex = 27019;

	class NXPAuthEditor : public Il2CppObject
	{
	public:
		::System::Void .ctor(::NPA::Editor::Common::INXPApp* arg, ::NPA::Editor::Analytics::INXPAnalytics* arg)
		{
			((::System::Void(*)(::NPA::Editor::Common::INXPApp*, ::NPA::Editor::Analytics::INXPAnalytics*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPAUTHEDITOR_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ShutDown()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPAUTHEDITOR_SHUTDOWN_OFFSET))(nullptr);
		}

		::System::Void Initialize(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPAUTHEDITOR_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void Login(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPAUTHEDITOR_LOGIN_OFFSET))(arg, nullptr);
		}

		::System::Void Login(::NPA::NPLoginType* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::NPA::NPLoginType*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPAUTHEDITOR_LOGIN_OFFSET))(arg, arg, nullptr);
		}

		::System::Void GetUserInfo(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPAUTHEDITOR_GETUSERINFO_OFFSET))(arg, nullptr);
		}

		::System::Void Logout(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPAUTHEDITOR_LOGOUT_OFFSET))(arg, nullptr);
		}

		::System::Void SignOut(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPAUTHEDITOR_SIGNOUT_OFFSET))(arg, nullptr);
		}

		::System::Void UnregisterService(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPAUTHEDITOR_UNREGISTERSERVICE_OFFSET))(arg, nullptr);
		}

		::System::Void UnregisterNexonMembership(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPAUTHEDITOR_UNREGISTERNEXONMEMBERSHIP_OFFSET))(arg, nullptr);
		}

		::System::Boolean CanDeleteAccount()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPAUTHEDITOR_CANDELETEACCOUNT_OFFSET))(nullptr);
		}

		::System::String* LoadPlayNowSession()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPAUTHEDITOR_LOADPLAYNOWSESSION_OFFSET))(nullptr);
		}

		::System::Void SavePlayNowSession(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPAUTHEDITOR_SAVEPLAYNOWSESSION_OFFSET))(str, nullptr);
		}

	};
}

