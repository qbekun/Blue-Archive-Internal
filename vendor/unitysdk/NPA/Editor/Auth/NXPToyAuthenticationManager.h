#pragma once
#include "../../../unitysdk.h"

namespace NPA::Editor::Auth { class NXPToyAuthenticationManager; }
namespace NPA::Editor::Auth { class NexonLoginDialog; }
namespace UnityEngine { class GameObject; }
namespace NPA { class NPLoginType; }
namespace NPA::Auth { class NXPToyLoginResult; }
namespace NPA::Editor::Auth::Interface { class AccountDeletionAlertInfo; }
namespace NPA::Editor::Service { class LaunchMode; }
namespace NPA::Editor::Auth { class Token; }

#define NPA_EDITOR_AUTH_NXPTOYAUTHENTICATIONMANAGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C97E40)
#define NPA_EDITOR_AUTH_NXPTOYAUTHENTICATIONMANAGER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x9C827A0)
#define NPA_EDITOR_AUTH_NXPTOYAUTHENTICATIONMANAGER_CHECKAUTHCRASHERROR_OFFSET UNITYSDK_OFFSET(0x9C97E50)
#define NPA_EDITOR_AUTH_NXPTOYAUTHENTICATIONMANAGER_ISAUTHCRASHERROR_OFFSET UNITYSDK_OFFSET(0x9C829C0)
#define NPA_EDITOR_AUTH_NXPTOYAUTHENTICATIONMANAGER_BOLTLOGINFOREDITORONLY_OFFSET UNITYSDK_OFFSET(0x9C82D90)
#define NPA_EDITOR_AUTH_NXPTOYAUTHENTICATIONMANAGER_THIRDPARTYLOGINFOREDITORONLY_OFFSET UNITYSDK_OFFSET(0x9C97E80)
#define NPA_EDITOR_AUTH_NXPTOYAUTHENTICATIONMANAGER_TOYLOGINFOREDITORONLY_OFFSET UNITYSDK_OFFSET(0x9C98120)
#define NPA_EDITOR_AUTH_NXPTOYAUTHENTICATIONMANAGER_TOYLOGINPOSTPROCESSFOREDITORONLY_OFFSET UNITYSDK_OFFSET(0x9C98290)
#define NPA_EDITOR_AUTH_NXPTOYAUTHENTICATIONMANAGER_SHOWAGREETERMSIFNEEDEDFOREDITORONLY_OFFSET UNITYSDK_OFFSET(0x9C98600)
#define NPA_EDITOR_AUTH_NXPTOYAUTHENTICATIONMANAGER_LOGOUT_OFFSET UNITYSDK_OFFSET(0x9C83340)
#define NPA_EDITOR_AUTH_NXPTOYAUTHENTICATIONMANAGER_SIGNOUT_OFFSET UNITYSDK_OFFSET(0x9C866F0)
#define NPA_EDITOR_AUTH_NXPTOYAUTHENTICATIONMANAGER_SIGNOUT_OFFSET UNITYSDK_OFFSET(0x9C83550)
#define NPA_EDITOR_AUTH_NXPTOYAUTHENTICATIONMANAGER_UNREGISTER_OFFSET UNITYSDK_OFFSET(0x9C83770)
#define NPA_EDITOR_AUTH_NXPTOYAUTHENTICATIONMANAGER_UPDATETOYSESSION_OFFSET UNITYSDK_OFFSET(0x9C98810)
#define NPA_EDITOR_AUTH_NXPTOYAUTHENTICATIONMANAGER_CLEARAUTHINFO_OFFSET UNITYSDK_OFFSET(0x9C91D70)
#define NPA_EDITOR_AUTH_NXPTOYAUTHENTICATIONMANAGER_DELETEACCOUNT_OFFSET UNITYSDK_OFFSET(0x9C83950)
#define NPA_EDITOR_AUTH_NXPTOYAUTHENTICATIONMANAGER_SHOWACCOUNTDELETIONPAGE_OFFSET UNITYSDK_OFFSET(0x9C8C690)
#define NPA_EDITOR_AUTH_NXPTOYAUTHENTICATIONMANAGER_GETSERVICELISTBYUSER_OFFSET UNITYSDK_OFFSET(0x9C8B9F0)
#define NPA_EDITOR_AUTH_NXPTOYAUTHENTICATIONMANAGER_SHOWALERTFORACCOUNTDELETION_OFFSET UNITYSDK_OFFSET(0x9C81EE0)
#define NPA_EDITOR_AUTH_NXPTOYAUTHENTICATIONMANAGER_SHOWACCOUNTSETTINGSFORPRIMARY_OFFSET UNITYSDK_OFFSET(0x9C98A00)
#define NPA_EDITOR_AUTH_NXPTOYAUTHENTICATIONMANAGER_SHOWACCOUNTSETTINGS_OFFSET UNITYSDK_OFFSET(0x9C98D90)
#define NPA_EDITOR_AUTH_NXPTOYAUTHENTICATIONMANAGER_SHOWACCOUNTMENU_OFFSET UNITYSDK_OFFSET(0x9C98E40)
#define NPA_EDITOR_AUTH_NXPTOYAUTHENTICATIONMANAGER_FETCHPRIMARYPLATFORM_OFFSET UNITYSDK_OFFSET(0x9C990C0)
#define NPA_EDITOR_AUTH_NXPTOYAUTHENTICATIONMANAGER_RESOLVEPRIMARYPLATFORM_OFFSET UNITYSDK_OFFSET(0x9C990D0)
#define NPA_EDITOR_AUTH_NXPTOYAUTHENTICATIONMANAGER_RESOLVEPRIMARYPLATFORM_OFFSET UNITYSDK_OFFSET(0x9C99900)
#define NPA_EDITOR_AUTH_NXPTOYAUTHENTICATIONMANAGER_FETCHPRIMARYPLATFORMINTERNAL_OFFSET UNITYSDK_OFFSET(0x9C98CE0)
#define NPA_EDITOR_AUTH_NXPTOYAUTHENTICATIONMANAGER_RESOLVEPRIMARYPLATFORMINTERNAL_OFFSET UNITYSDK_OFFSET(0x9C99120)
#define NPA_EDITOR_AUTH_NXPTOYAUTHENTICATIONMANAGER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9C99AD0)

namespace NPA::Editor::Auth
{
	inline static constexpr unsigned int NXPToyAuthenticationManager_TypeDefinitionIndex = 27116;

	class NXPToyAuthenticationManager : public Il2CppObject
	{
	public:
		::NPA::Editor::Auth::NXPToyAuthenticationManager* instance; // 0x0
		::System::Object* syncRoot; // 0x8
		::NPA::Editor::Auth::NexonLoginDialog* nexonComLoginAlertDialog; // 0x10
		::UnityEngine::GameObject* nexonLoginPrefab; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPTOYAUTHENTICATIONMANAGER_.CTOR_OFFSET))(nullptr);
		}

		::NPA::Editor::Auth::NXPToyAuthenticationManager* get_Instance()
		{
			return (return (::NPA::Editor::Auth::NXPToyAuthenticationManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPTOYAUTHENTICATIONMANAGER_GET_INSTANCE_OFFSET))(nullptr);
		}

		::System::Boolean CheckAuthCrashError(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPTOYAUTHENTICATIONMANAGER_CHECKAUTHCRASHERROR_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsAuthCrashError(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPTOYAUTHENTICATIONMANAGER_ISAUTHCRASHERROR_OFFSET))(arg, nullptr);
		}

		::System::Void BoltLoginForEditorOnly(::NPA::NPLoginType* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::NPA::NPLoginType*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPTOYAUTHENTICATIONMANAGER_BOLTLOGINFOREDITORONLY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ThirdPartyLoginForEditorOnly(::NPA::NPLoginType* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::NPA::NPLoginType*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPTOYAUTHENTICATIONMANAGER_THIRDPARTYLOGINFOREDITORONLY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ToyLoginForEditorOnly(::NPA::NPLoginType* arg, ::System::String* str, ::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::NPA::NPLoginType*, ::System::String*, ::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPTOYAUTHENTICATIONMANAGER_TOYLOGINFOREDITORONLY_OFFSET))(arg, str, str, arg, nullptr);
		}

		::System::Void ToyLoginPostProcessForEditorOnly(::NPA::NPLoginType* arg, ::NPA::Auth::NXPToyLoginResult* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::NPA::NPLoginType*, ::NPA::Auth::NXPToyLoginResult*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPTOYAUTHENTICATIONMANAGER_TOYLOGINPOSTPROCESSFOREDITORONLY_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void ShowAgreeTermsIfNeededForEditorOnly(Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPTOYAUTHENTICATIONMANAGER_SHOWAGREETERMSIFNEEDEDFOREDITORONLY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Logout(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPTOYAUTHENTICATIONMANAGER_LOGOUT_OFFSET))(arg, nullptr);
		}

		::System::Void SignOut(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPTOYAUTHENTICATIONMANAGER_SIGNOUT_OFFSET))(arg, nullptr);
		}

		::System::Void SignOut(Il2CppObject* arg, ::System::String* str)
		{
			((::System::Void(*)(Il2CppObject*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPTOYAUTHENTICATIONMANAGER_SIGNOUT_OFFSET))(arg, str, nullptr);
		}

		::System::Void Unregister(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPTOYAUTHENTICATIONMANAGER_UNREGISTER_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateToySession(::NPA::NPLoginType* arg, Il2CppObject* arg, ResultSet* arg, ::System::String* str)
		{
			((::System::Void(*)(::NPA::NPLoginType*, Il2CppObject*, ResultSet*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPTOYAUTHENTICATIONMANAGER_UPDATETOYSESSION_OFFSET))(arg, arg, arg, str, nullptr);
		}

		::System::Void ClearAuthInfo()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPTOYAUTHENTICATIONMANAGER_CLEARAUTHINFO_OFFSET))(nullptr);
		}

		::System::Void DeleteAccount(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPTOYAUTHENTICATIONMANAGER_DELETEACCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Void ShowAccountDeletionPage(::System::String* str, ::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPTOYAUTHENTICATIONMANAGER_SHOWACCOUNTDELETIONPAGE_OFFSET))(str, str, arg, nullptr);
		}

		::System::Void GetServiceListByUser(::System::Int32 arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPTOYAUTHENTICATIONMANAGER_GETSERVICELISTBYUSER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ShowAlertForAccountDeletion(Il2CppObject* arg, Il2CppObject* arg, ::NPA::Editor::Auth::Interface::AccountDeletionAlertInfo* arg, ::System::Action* arg, ::System::Action* arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::NPA::Editor::Auth::Interface::AccountDeletionAlertInfo*, ::System::Action*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPTOYAUTHENTICATIONMANAGER_SHOWALERTFORACCOUNTDELETION_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void ShowAccountSettingsForPrimary(::NPA::Editor::Service::LaunchMode* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::NPA::Editor::Service::LaunchMode*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPTOYAUTHENTICATIONMANAGER_SHOWACCOUNTSETTINGSFORPRIMARY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ShowAccountSettings(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPTOYAUTHENTICATIONMANAGER_SHOWACCOUNTSETTINGS_OFFSET))(arg, nullptr);
		}

		::System::Void ShowAccountMenu(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPTOYAUTHENTICATIONMANAGER_SHOWACCOUNTMENU_OFFSET))(arg, nullptr);
		}

		::System::Void FetchPrimaryPlatform(::System::String* str, ::NPA::Editor::Auth::Token* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, ::NPA::Editor::Auth::Token*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPTOYAUTHENTICATIONMANAGER_FETCHPRIMARYPLATFORM_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Void ResolvePrimaryPlatform(::System::String* str, ::NPA::Editor::Auth::Token* arg, ::System::Boolean arg, ::NPA::Editor::Service::LaunchMode* arg, FetchPrimaryLinkResult* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, ::NPA::Editor::Auth::Token*, ::System::Boolean, ::NPA::Editor::Service::LaunchMode*, FetchPrimaryLinkResult*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPTOYAUTHENTICATIONMANAGER_RESOLVEPRIMARYPLATFORM_OFFSET))(str, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void ResolvePrimaryPlatform(::System::String* str, ::NPA::Editor::Auth::Token* arg, ::System::Boolean arg, ::NPA::Editor::Service::LaunchMode* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, ::NPA::Editor::Auth::Token*, ::System::Boolean, ::NPA::Editor::Service::LaunchMode*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPTOYAUTHENTICATIONMANAGER_RESOLVEPRIMARYPLATFORM_OFFSET))(str, arg, arg, arg, arg, nullptr);
		}

		::System::Void FetchPrimaryPlatformInternal(::System::String* str, ::NPA::Editor::Auth::Token* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, ::NPA::Editor::Auth::Token*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPTOYAUTHENTICATIONMANAGER_FETCHPRIMARYPLATFORMINTERNAL_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Void ResolvePrimaryPlatformInternal(::System::String* str, ::NPA::Editor::Auth::Token* arg, ::System::Boolean arg, ::NPA::Editor::Service::LaunchMode* arg, FetchPrimaryLinkResult* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, ::NPA::Editor::Auth::Token*, ::System::Boolean, ::NPA::Editor::Service::LaunchMode*, FetchPrimaryLinkResult*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPTOYAUTHENTICATIONMANAGER_RESOLVEPRIMARYPLATFORMINTERNAL_OFFSET))(str, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPTOYAUTHENTICATIONMANAGER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

