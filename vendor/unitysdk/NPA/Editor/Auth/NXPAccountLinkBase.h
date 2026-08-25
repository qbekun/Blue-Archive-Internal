#pragma once
#include "../../../unitysdk.h"

namespace NPA::Editor { class IExternalPlatform; }
namespace NPA::Editor::Auth { class NXPAccountLinkWaitDialog; }
namespace NPA::Editor::Service { class LaunchMode; }
namespace NPA { class NPLoginType; }
namespace NPA::Editor { class NXPToyLocalSessionType; }
namespace NPA::InfaceSDK { class NXPToySignInWithTicketResponse; }

#define NPA_EDITOR_AUTH_NXPACCOUNTLINKBASE_GET_LOGINWAITDIALOG_OFFSET UNITYSDK_OFFSET(0x9C6D220)
#define NPA_EDITOR_AUTH_NXPACCOUNTLINKBASE_SET_LOGINWAITDIALOG_OFFSET UNITYSDK_OFFSET(0x9C6D230)
#define NPA_EDITOR_AUTH_NXPACCOUNTLINKBASE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C6D240)
#define NPA_EDITOR_AUTH_NXPACCOUNTLINKBASE_FINDLAUNCHMODEBYPLATFORMID_OFFSET UNITYSDK_OFFSET(0x9C6D2A0)
#define NPA_EDITOR_AUTH_NXPACCOUNTLINKBASE_GETLAUNCHINGPLATFORM_OFFSET UNITYSDK_OFFSET(0x9C6D390)
#define NPA_EDITOR_AUTH_NXPACCOUNTLINKBASE_GETEXTRACLAIMSINFO_OFFSET UNITYSDK_OFFSET(0x9C6D430)
#define NPA_EDITOR_AUTH_NXPACCOUNTLINKBASE_GETACCOUNTLINKTOKEN_OFFSET UNITYSDK_OFFSET(0x9C6D4D0)
#define NPA_EDITOR_AUTH_NXPACCOUNTLINKBASE_GETACCOUNTLINKTOKENFORNINTENDO_OFFSET UNITYSDK_OFFSET(0x9C6D5C0)
#define NPA_EDITOR_AUTH_NXPACCOUNTLINKBASE_GETACCOUNTLINKTOKENINTERNAL_OFFSET UNITYSDK_OFFSET(0x9C6D690)
#define NPA_EDITOR_AUTH_NXPACCOUNTLINKBASE_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x9C6D910)
#define NPA_EDITOR_AUTH_NXPACCOUNTLINKBASE_LOGIN_OFFSET UNITYSDK_OFFSET(0x9C6D960)
#define NPA_EDITOR_AUTH_NXPACCOUNTLINKBASE_LOGIN_OFFSET UNITYSDK_OFFSET(0x9C6DE90)
#define NPA_EDITOR_AUTH_NXPACCOUNTLINKBASE_LOGININTERNAL_OFFSET UNITYSDK_OFFSET(0x9C6D970)
#define NPA_EDITOR_AUTH_NXPACCOUNTLINKBASE_GETUSERINFO_OFFSET UNITYSDK_OFFSET(0x9C6DF30)
#define NPA_EDITOR_AUTH_NXPACCOUNTLINKBASE_SIGNOUT_OFFSET UNITYSDK_OFFSET(0x9C6DF80)
#define NPA_EDITOR_AUTH_NXPACCOUNTLINKBASE_ISAUTHCRASHERROR_OFFSET UNITYSDK_OFFSET(0x9C6E0A0)
#define NPA_EDITOR_AUTH_NXPACCOUNTLINKBASE_LOGOUT_OFFSET UNITYSDK_OFFSET(0x9C6E0F0)
#define NPA_EDITOR_AUTH_NXPACCOUNTLINKBASE_CLEARAUTHINFO_OFFSET UNITYSDK_OFFSET(0x9C6E1B0)
#define NPA_EDITOR_AUTH_NXPACCOUNTLINKBASE_UNREGISTERSERVICE_OFFSET UNITYSDK_OFFSET(0x9C6E260)
#define NPA_EDITOR_AUTH_NXPACCOUNTLINKBASE_UNREGISTERNEXONMEMBERSHIP_OFFSET UNITYSDK_OFFSET(0x9C6E3B0)
#define NPA_EDITOR_AUTH_NXPACCOUNTLINKBASE_CANDELETEACCOUNT_OFFSET UNITYSDK_OFFSET(0x9C6E400)
#define NPA_EDITOR_AUTH_NXPACCOUNTLINKBASE_SHUTDOWN_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_AUTH_NXPACCOUNTLINKBASE_VALIDATEACCOUNTLINK_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_AUTH_NXPACCOUNTLINKBASE_CREATEACCOUNTLINK_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_AUTH_NXPACCOUNTLINKBASE_CREATEACCOUNTLINKFORSWAP_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_AUTH_NXPACCOUNTLINKBASE_CREATEGUESTLINK_OFFSET UNITYSDK_OFFSET(0x9C6E450)
#define NPA_EDITOR_AUTH_NXPACCOUNTLINKBASE_DELINKACCOUNT_OFFSET UNITYSDK_OFFSET(0x9C6E620)
#define NPA_EDITOR_AUTH_NXPACCOUNTLINKBASE_SHOWACCOUNTSETTINGS_OFFSET UNITYSDK_OFFSET(0x9C6E9D0)
#define NPA_EDITOR_AUTH_NXPACCOUNTLINKBASE_SHOWACCOUNTSETTINGSFORGUEST_OFFSET UNITYSDK_OFFSET(0x9C6EC10)
#define NPA_EDITOR_AUTH_NXPACCOUNTLINKBASE_SHOWACCOUNTSETTINGSFORLINKEDUSER_OFFSET UNITYSDK_OFFSET(0x9C6ED80)
#define NPA_EDITOR_AUTH_NXPACCOUNTLINKBASE_GETACCOUNTLINKINFO_OFFSET UNITYSDK_OFFSET(0x9C6F0C0)
#define NPA_EDITOR_AUTH_NXPACCOUNTLINKBASE_LOGINWITHOTP_OFFSET UNITYSDK_OFFSET(0x9C6F3A0)
#define NPA_EDITOR_AUTH_NXPACCOUNTLINKBASE_LOGINWITHTICKET_OFFSET UNITYSDK_OFFSET(0x9C6F6B0)
#define NPA_EDITOR_AUTH_NXPACCOUNTLINKBASE_GETSIGNINURL_OFFSET UNITYSDK_OFFSET(0x9C6F840)
#define NPA_EDITOR_AUTH_NXPACCOUNTLINKBASE_GETMEMTYPE_OFFSET UNITYSDK_OFFSET(0x9C6FA80)
#define NPA_EDITOR_AUTH_NXPACCOUNTLINKBASE_RECOVERUSERWITHTICKET_OFFSET UNITYSDK_OFFSET(0x9C6FBB0)
#define NPA_EDITOR_AUTH_NXPACCOUNTLINKBASE_AGREETERMSWITHTICKET_OFFSET UNITYSDK_OFFSET(0x9C6FD30)
#define NPA_EDITOR_AUTH_NXPACCOUNTLINKBASE_GETGAMETOKEN_OFFSET UNITYSDK_OFFSET(0x9C70010)
#define NPA_EDITOR_AUTH_NXPACCOUNTLINKBASE_AUTOLOGIN_OFFSET UNITYSDK_OFFSET(0x9C701A0)
#define NPA_EDITOR_AUTH_NXPACCOUNTLINKBASE_CLOSELOGINWAITDIALOG_OFFSET UNITYSDK_OFFSET(0x9C70310)
#define NPA_EDITOR_AUTH_NXPACCOUNTLINKBASE_SENDLASTLOGINUSERMETA_OFFSET UNITYSDK_OFFSET(0x9C70410)
#define NPA_EDITOR_AUTH_NXPACCOUNTLINKBASE_SENDINFOUSERLOG_OFFSET UNITYSDK_OFFSET(0x9C705C0)
#define NPA_EDITOR_AUTH_NXPACCOUNTLINKBASE_SENDASSIGNINFOUSER_OFFSET UNITYSDK_OFFSET(0x9C70650)
#define NPA_EDITOR_AUTH_NXPACCOUNTLINKBASE_SHOWLOGINWAITDIALOG_OFFSET UNITYSDK_OFFSET(0x9C70750)
#define NPA_EDITOR_AUTH_NXPACCOUNTLINKBASE_GETLOGINTYPE_OFFSET UNITYSDK_OFFSET(0x9C6DEB0)
#define NPA_EDITOR_AUTH_NXPACCOUNTLINKBASE_SENDNXCOMMANDINFOFORGUID_OFFSET UNITYSDK_OFFSET(0x9C70850)
#define NPA_EDITOR_AUTH_NXPACCOUNTLINKBASE_DELINKACCOUNTINTERNAL_OFFSET UNITYSDK_OFFSET(0x9C6E7E0)
#define NPA_EDITOR_AUTH_NXPACCOUNTLINKBASE_GETPLATFORMFRIENDS_OFFSET UNITYSDK_OFFSET(0x9C70C00)
#define NPA_EDITOR_AUTH_NXPACCOUNTLINKBASE_GETPLATFORMBLOCKUSERINFOS_OFFSET UNITYSDK_OFFSET(0x9C70F70)
#define NPA_EDITOR_AUTH_NXPACCOUNTLINKBASE_GETPLATFORMLASTLOGININFO_OFFSET UNITYSDK_OFFSET(0x9C71270)
#define NPA_EDITOR_AUTH_NXPACCOUNTLINKBASE_GETREDIRECTURLTYPE_OFFSET UNITYSDK_OFFSET(0x9C713C0)
#define NPA_EDITOR_AUTH_NXPACCOUNTLINKBASE__CLOSELOGINWAITDIALOG_B__44_0_OFFSET UNITYSDK_OFFSET(0x9C71440)

namespace NPA::Editor::Auth
{
	inline static constexpr unsigned int NXPAccountLinkBase_TypeDefinitionIndex = 26983;

	class NXPAccountLinkBase : public Il2CppObject
	{
	public:
		::NPA::Editor::IExternalPlatform* externalPlatform; // 0x10
		::NPA::Editor::Auth::NXPAccountLinkWaitDialog* _loginWaitDialog_k__BackingField; // 0x18
		::System::String* cachedLinkTicket; // 0x20

		::NPA::Editor::Auth::NXPAccountLinkWaitDialog* get_loginWaitDialog()
		{
			return (return (::NPA::Editor::Auth::NXPAccountLinkWaitDialog*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPACCOUNTLINKBASE_GET_LOGINWAITDIALOG_OFFSET))(nullptr);
		}

		::System::Void set_loginWaitDialog(::NPA::Editor::Auth::NXPAccountLinkWaitDialog* arg)
		{
			((::System::Void(*)(::NPA::Editor::Auth::NXPAccountLinkWaitDialog*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPACCOUNTLINKBASE_SET_LOGINWAITDIALOG_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::NPA::Editor::IExternalPlatform* arg)
		{
			((::System::Void(*)(::NPA::Editor::IExternalPlatform*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPACCOUNTLINKBASE_.CTOR_OFFSET))(arg, nullptr);
		}

		::NPA::Editor::Service::LaunchMode* FindLaunchModeByPlatformId(::System::String* str)
		{
			return (return (::NPA::Editor::Service::LaunchMode*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPACCOUNTLINKBASE_FINDLAUNCHMODEBYPLATFORMID_OFFSET))(str, nullptr);
		}

		::NPA::Editor::Service::LaunchMode* GetLaunchingPlatform()
		{
			return (return (::NPA::Editor::Service::LaunchMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPACCOUNTLINKBASE_GETLAUNCHINGPLATFORM_OFFSET))(nullptr);
		}

		::System::String* GetExtraClaimsInfo(::System::String* str, ::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPACCOUNTLINKBASE_GETEXTRACLAIMSINFO_OFFSET))(str, str, nullptr);
		}

		::System::Void GetAccountLinkToken(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPACCOUNTLINKBASE_GETACCOUNTLINKTOKEN_OFFSET))(arg, nullptr);
		}

		::System::Void GetAccountLinkTokenForNintendo(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPACCOUNTLINKBASE_GETACCOUNTLINKTOKENFORNINTENDO_OFFSET))(arg, nullptr);
		}

		::System::Void GetAccountLinkTokenInternal(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPACCOUNTLINKBASE_GETACCOUNTLINKTOKENINTERNAL_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPACCOUNTLINKBASE_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void Login(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPACCOUNTLINKBASE_LOGIN_OFFSET))(arg, nullptr);
		}

		::System::Void Login(::NPA::NPLoginType* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::NPA::NPLoginType*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPACCOUNTLINKBASE_LOGIN_OFFSET))(arg, arg, nullptr);
		}

		::System::Void LoginInternal(::NPA::NPLoginType* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::NPA::NPLoginType*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPACCOUNTLINKBASE_LOGININTERNAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void GetUserInfo(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPACCOUNTLINKBASE_GETUSERINFO_OFFSET))(arg, nullptr);
		}

		::System::Void SignOut(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPACCOUNTLINKBASE_SIGNOUT_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsAuthCrashError(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPACCOUNTLINKBASE_ISAUTHCRASHERROR_OFFSET))(arg, nullptr);
		}

		::System::Void Logout(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPACCOUNTLINKBASE_LOGOUT_OFFSET))(arg, nullptr);
		}

		::System::Void ClearAuthInfo()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPACCOUNTLINKBASE_CLEARAUTHINFO_OFFSET))(nullptr);
		}

		::System::Void UnregisterService(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPACCOUNTLINKBASE_UNREGISTERSERVICE_OFFSET))(arg, nullptr);
		}

		::System::Void UnregisterNexonMembership(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPACCOUNTLINKBASE_UNREGISTERNEXONMEMBERSHIP_OFFSET))(arg, nullptr);
		}

		::System::Boolean CanDeleteAccount()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPACCOUNTLINKBASE_CANDELETEACCOUNT_OFFSET))(nullptr);
		}

		::System::Void ShutDown()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPACCOUNTLINKBASE_SHUTDOWN_OFFSET))(nullptr);
		}

		::System::Void ValidateAccountLink(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPACCOUNTLINKBASE_VALIDATEACCOUNTLINK_OFFSET))(arg, nullptr);
		}

		::System::Void CreateAccountLink(::System::String* str, ::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPACCOUNTLINKBASE_CREATEACCOUNTLINK_OFFSET))(str, str, arg, nullptr);
		}

		::System::Void CreateAccountLinkForSwap(::System::String* str, ::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPACCOUNTLINKBASE_CREATEACCOUNTLINKFORSWAP_OFFSET))(str, str, arg, nullptr);
		}

		::System::Void CreateGuestLink(::System::String* str, ::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPACCOUNTLINKBASE_CREATEGUESTLINK_OFFSET))(str, str, arg, nullptr);
		}

		::System::Void DelinkAccount(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPACCOUNTLINKBASE_DELINKACCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Void ShowAccountSettings(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPACCOUNTLINKBASE_SHOWACCOUNTSETTINGS_OFFSET))(arg, nullptr);
		}

		::System::Void ShowAccountSettingsForGuest(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPACCOUNTLINKBASE_SHOWACCOUNTSETTINGSFORGUEST_OFFSET))(arg, nullptr);
		}

		::System::Void ShowAccountSettingsForLinkedUser(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPACCOUNTLINKBASE_SHOWACCOUNTSETTINGSFORLINKEDUSER_OFFSET))(arg, nullptr);
		}

		::System::Void GetAccountLinkInfo(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPACCOUNTLINKBASE_GETACCOUNTLINKINFO_OFFSET))(arg, nullptr);
		}

		::System::Void LoginWithOTP(::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPACCOUNTLINKBASE_LOGINWITHOTP_OFFSET))(str, arg, nullptr);
		}

		::System::Void LoginWithTicket(::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPACCOUNTLINKBASE_LOGINWITHTICKET_OFFSET))(str, arg, nullptr);
		}

		::System::String* GetSignInUrl(::System::String* str, ::System::String* str, ::System::String* str, ::System::String* str, ::System::String* str, ::System::String* str, ::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPACCOUNTLINKBASE_GETSIGNINURL_OFFSET))(str, str, str, str, str, str, arg, nullptr);
		}

		::System::Int32 GetMemType(::NPA::Editor::NXPToyLocalSessionType* arg, ::NPA::InfaceSDK::NXPToySignInWithTicketResponse* arg)
		{
			return (return (::System::Int32(*)(::NPA::Editor::NXPToyLocalSessionType*, ::NPA::InfaceSDK::NXPToySignInWithTicketResponse*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPACCOUNTLINKBASE_GETMEMTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void RecoverUserWithTicket(::System::String* str, ::System::Int32 arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPACCOUNTLINKBASE_RECOVERUSERWITHTICKET_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Void AgreeTermsWithTicket(Builder* arg, ::System::String* str, ::System::String* str, Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(Builder*, ::System::String*, ::System::String*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPACCOUNTLINKBASE_AGREETERMSWITHTICKET_OFFSET))(arg, str, str, arg, arg, nullptr);
		}

		::System::Void GetGameToken(Builder* arg, ::System::String* str, Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(Builder*, ::System::String*, Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPACCOUNTLINKBASE_GETGAMETOKEN_OFFSET))(arg, str, arg, arg, arg, arg, nullptr);
		}

		::System::Void AutoLogin(::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPACCOUNTLINKBASE_AUTOLOGIN_OFFSET))(str, arg, nullptr);
		}

		::System::Void CloseLoginWaitDialog()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPACCOUNTLINKBASE_CLOSELOGINWAITDIALOG_OFFSET))(nullptr);
		}

		::System::Void SendLastLoginUserMeta(::System::String* str, ::System::String* str, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPACCOUNTLINKBASE_SENDLASTLOGINUSERMETA_OFFSET))(str, str, str, str, nullptr);
		}

		::System::Void SendInfoUserLog()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPACCOUNTLINKBASE_SENDINFOUSERLOG_OFFSET))(nullptr);
		}

		::System::Boolean SendAssignInfoUser(::System::String* str, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPACCOUNTLINKBASE_SENDASSIGNINFOUSER_OFFSET))(str, str, nullptr);
		}

		::System::Void ShowLoginWaitDialog(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPACCOUNTLINKBASE_SHOWLOGINWAITDIALOG_OFFSET))(arg, nullptr);
		}

		::NPA::NPLoginType* GetLoginType()
		{
			return (return (::NPA::NPLoginType*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPACCOUNTLINKBASE_GETLOGINTYPE_OFFSET))(nullptr);
		}

		::System::Boolean SendNXCommandInfoForGuid(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPACCOUNTLINKBASE_SENDNXCOMMANDINFOFORGUID_OFFSET))(str, nullptr);
		}

		::System::Void DelinkAccountInternal(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPACCOUNTLINKBASE_DELINKACCOUNTINTERNAL_OFFSET))(arg, nullptr);
		}

		::System::Void GetPlatformFriends(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPACCOUNTLINKBASE_GETPLATFORMFRIENDS_OFFSET))(arg, nullptr);
		}

		::System::Void GetPlatformBlockUserInfos(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPACCOUNTLINKBASE_GETPLATFORMBLOCKUSERINFOS_OFFSET))(arg, nullptr);
		}

		::System::Void GetPlatformLastLoginInfo(Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPACCOUNTLINKBASE_GETPLATFORMLASTLOGININFO_OFFSET))(arg, arg, nullptr);
		}

		::System::String* GetRedirectUrlType()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPACCOUNTLINKBASE_GETREDIRECTURLTYPE_OFFSET))(nullptr);
		}

		::System::Void _CloseLoginWaitDialog_b__44_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPACCOUNTLINKBASE__CLOSELOGINWAITDIALOG_B__44_0_OFFSET))(nullptr);
		}

	};
}

