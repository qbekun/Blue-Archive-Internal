#pragma once
#include "../../../unitysdk.h"

namespace NPA::Editor::Auth { class NXPPlayNow; }
namespace NPA::SimpleJSON { class JSONNode; }
namespace NPA::Auth { class NXPToyLoginResult; }
namespace NPA::Editor { class NXPToyLocalSessionType; }
namespace NPA { class NPRequestTypeTag; }
namespace NPA::Auth { class NXPToySignOutResult; }

#define NPA_EDITOR_AUTH_NXPPLAYNOW_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C8CCE0)
#define NPA_EDITOR_AUTH_NXPPLAYNOW_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x9C873D0)
#define NPA_EDITOR_AUTH_NXPPLAYNOW_LOADLOCALCREDENTIAL_OFFSET UNITYSDK_OFFSET(0x9C8CCF0)
#define NPA_EDITOR_AUTH_NXPPLAYNOW_GENERATELOCALCREDENTIAL_OFFSET UNITYSDK_OFFSET(0x9C8CD70)
#define NPA_EDITOR_AUTH_NXPPLAYNOW_SETLOCALCREDENTIAL_OFFSET UNITYSDK_OFFSET(0x9C8CDF0)
#define NPA_EDITOR_AUTH_NXPPLAYNOW_SIGNOUTANDREMOVELOCALCREDENTIAL_OFFSET UNITYSDK_OFFSET(0x9C875F0)
#define NPA_EDITOR_AUTH_NXPPLAYNOW_CHECKCONFLICT_OFFSET UNITYSDK_OFFSET(0x9C8CEC0)
#define NPA_EDITOR_AUTH_NXPPLAYNOW_LOGINWITHLOCALCREDENTIAL_OFFSET UNITYSDK_OFFSET(0x9C8D410)
#define NPA_EDITOR_AUTH_NXPPLAYNOW_LOGIN_OFFSET UNITYSDK_OFFSET(0x9C8DBA0)
#define NPA_EDITOR_AUTH_NXPPLAYNOW_SHOWPLAYNOWCODE_OFFSET UNITYSDK_OFFSET(0x9C8E0D0)
#define NPA_EDITOR_AUTH_NXPPLAYNOW_SHOWSIGNOUT_OFFSET UNITYSDK_OFFSET(0x9C8E4B0)
#define NPA_EDITOR_AUTH_NXPPLAYNOW_SHOWACCOUNTSETTINGS_OFFSET UNITYSDK_OFFSET(0x9C8E790)
#define NPA_EDITOR_AUTH_NXPPLAYNOW_LOGINSELECTOR_OFFSET UNITYSDK_OFFSET(0x9C8E800)
#define NPA_EDITOR_AUTH_NXPPLAYNOW_POSTLOGINPROCESSFROMPLAYNOWPAGE_OFFSET UNITYSDK_OFFSET(0x9C8EB40)
#define NPA_EDITOR_AUTH_NXPPLAYNOW_LOGINWITHWEBTOKENOTPFROMACCOUNTSETTINGS_OFFSET UNITYSDK_OFFSET(0x9C8F3A0)
#define NPA_EDITOR_AUTH_NXPPLAYNOW_LOGINWITHWEBTOKENFROMACCOUNTSETTINGS_OFFSET UNITYSDK_OFFSET(0x9C8F620)
#define NPA_EDITOR_AUTH_NXPPLAYNOW_RECOVERUSER_OFFSET UNITYSDK_OFFSET(0x9C8F8B0)
#define NPA_EDITOR_AUTH_NXPPLAYNOW_GETPLAYNOWCODE_OFFSET UNITYSDK_OFFSET(0x9C8FB00)
#define NPA_EDITOR_AUTH_NXPPLAYNOW_SHOWALERT_OFFSET UNITYSDK_OFFSET(0x9C8FDF0)
#define NPA_EDITOR_AUTH_NXPPLAYNOW_SHOWPLAYNOWLOGIN_OFFSET UNITYSDK_OFFSET(0x9C8DD80)
#define NPA_EDITOR_AUTH_NXPPLAYNOW_SHOWPLAYNOWSIGNOUT_OFFSET UNITYSDK_OFFSET(0x9C8E580)
#define NPA_EDITOR_AUTH_NXPPLAYNOW_LOGINWITHLOCALCREDENTIAL_OFFSET UNITYSDK_OFFSET(0x9C8DF90)
#define NPA_EDITOR_AUTH_NXPPLAYNOW_LOGINWITHOTP_OFFSET UNITYSDK_OFFSET(0x9C8D760)
#define NPA_EDITOR_AUTH_NXPPLAYNOW_LOGINWITHTICKET_OFFSET UNITYSDK_OFFSET(0x9C90060)
#define NPA_EDITOR_AUTH_NXPPLAYNOW_LOGINWITHWEBTOKEN_OFFSET UNITYSDK_OFFSET(0x9C902F0)
#define NPA_EDITOR_AUTH_NXPPLAYNOW_GETTICKET_OFFSET UNITYSDK_OFFSET(0x9C8FF30)
#define NPA_EDITOR_AUTH_NXPPLAYNOW_GETTICKETWITHWEBTOKEN_OFFSET UNITYSDK_OFFSET(0x9C90440)
#define NPA_EDITOR_AUTH_NXPPLAYNOW_GETTICKETWITHLOCALCREDENTIAL_OFFSET UNITYSDK_OFFSET(0x9C90550)
#define NPA_EDITOR_AUTH_NXPPLAYNOW_SHOWTERMSAGREEIFNEED_OFFSET UNITYSDK_OFFSET(0x9C90790)
#define NPA_EDITOR_AUTH_NXPPLAYNOW_GETGAMETOKEN_OFFSET UNITYSDK_OFFSET(0x9C90970)
#define NPA_EDITOR_AUTH_NXPPLAYNOW_SHOWRECOVERUSER_OFFSET UNITYSDK_OFFSET(0x9C90C20)
#define NPA_EDITOR_AUTH_NXPPLAYNOW_SHOWRECOVERUSERATLINKING_OFFSET UNITYSDK_OFFSET(0x9C91070)
#define NPA_EDITOR_AUTH_NXPPLAYNOW_GAMEAUTHOPENPORTFORINSIGN_OFFSET UNITYSDK_OFFSET(0x9C8EA20)
#define NPA_EDITOR_AUTH_NXPPLAYNOW_GAMEAUTHLOGINWITHTICKET_OFFSET UNITYSDK_OFFSET(0x9C901E0)
#define NPA_EDITOR_AUTH_NXPPLAYNOW_GAMEAUTHSIGNINWITHWEBTOKEN_OFFSET UNITYSDK_OFFSET(0x9C8F780)
#define NPA_EDITOR_AUTH_NXPPLAYNOW_GAMEAUTHGETTOKEN_OFFSET UNITYSDK_OFFSET(0x9C90B10)
#define NPA_EDITOR_AUTH_NXPPLAYNOW_GAMEAUTHRECOVERUSER_OFFSET UNITYSDK_OFFSET(0x9C8F9F0)
#define NPA_EDITOR_AUTH_NXPPLAYNOW_GAMEAUTHPLAYNOWGETPLAYNOWCODE_OFFSET UNITYSDK_OFFSET(0x9C8FCC0)
#define NPA_EDITOR_AUTH_NXPPLAYNOW_MAKERECOVERYPOPUPMESSAGE_OFFSET UNITYSDK_OFFSET(0x9C90F20)
#define NPA_EDITOR_AUTH_NXPPLAYNOW_GAMEAUTHPLAYNOWCHECKCONFLICT_OFFSET UNITYSDK_OFFSET(0x9C8D190)
#define NPA_EDITOR_AUTH_NXPPLAYNOW_GAMEAUTHPLAYNOWADDLOCALCREDENTIAL_OFFSET UNITYSDK_OFFSET(0x9C8D990)
#define NPA_EDITOR_AUTH_NXPPLAYNOW_GETUPDATEDUSER_OFFSET UNITYSDK_OFFSET(0x9C91290)
#define NPA_EDITOR_AUTH_NXPPLAYNOW_GETPLAYNOWURL_OFFSET UNITYSDK_OFFSET(0x9C8E290)
#define NPA_EDITOR_AUTH_NXPPLAYNOW_GETSIGNINURL_OFFSET UNITYSDK_OFFSET(0x9C917E0)
#define NPA_EDITOR_AUTH_NXPPLAYNOW_MAKELOGINRESULT_OFFSET UNITYSDK_OFFSET(0x9C91AA0)
#define NPA_EDITOR_AUTH_NXPPLAYNOW_MAKESIGNOUTRESULT_OFFSET UNITYSDK_OFFSET(0x9C91B30)
#define NPA_EDITOR_AUTH_NXPPLAYNOW_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9C91BC0)

namespace NPA::Editor::Auth
{
	inline static constexpr unsigned int NXPPlayNow_TypeDefinitionIndex = 27092;

	class NXPPlayNow : public Il2CppObject
	{
	public:
		::NPA::Editor::Auth::NXPPlayNow* instance; // 0x0
		::System::Object* syncRoot; // 0x8

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPPLAYNOW_.CTOR_OFFSET))(nullptr);
		}

		::NPA::Editor::Auth::NXPPlayNow* get_Instance()
		{
			return (return (::NPA::Editor::Auth::NXPPlayNow*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPPLAYNOW_GET_INSTANCE_OFFSET))(nullptr);
		}

		::NPA::SimpleJSON::JSONNode* LoadLocalCredential()
		{
			return (return (::NPA::SimpleJSON::JSONNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPPLAYNOW_LOADLOCALCREDENTIAL_OFFSET))(nullptr);
		}

		::System::String* GenerateLocalCredential()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPPLAYNOW_GENERATELOCALCREDENTIAL_OFFSET))(nullptr);
		}

		::System::Void SetLocalCredential(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPPLAYNOW_SETLOCALCREDENTIAL_OFFSET))(str, str, nullptr);
		}

		::System::Void SignOutAndRemoveLocalCredential(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPPLAYNOW_SIGNOUTANDREMOVELOCALCREDENTIAL_OFFSET))(arg, nullptr);
		}

		::System::Void CheckConflict(Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPPLAYNOW_CHECKCONFLICT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void LoginWithLocalCredential(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPPLAYNOW_LOGINWITHLOCALCREDENTIAL_OFFSET))(arg, nullptr);
		}

		::System::Void Login(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPPLAYNOW_LOGIN_OFFSET))(arg, nullptr);
		}

		::System::Void ShowPlayNowCode(Il2CppObject* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPPLAYNOW_SHOWPLAYNOWCODE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ShowSignOut(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPPLAYNOW_SHOWSIGNOUT_OFFSET))(arg, nullptr);
		}

		::System::Void ShowAccountSettings(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPPLAYNOW_SHOWACCOUNTSETTINGS_OFFSET))(arg, nullptr);
		}

		::System::Void LoginSelector(::System::Boolean arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Boolean, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPPLAYNOW_LOGINSELECTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void PostLoginProcessFromPlayNowPage(::System::String* str, ::NPA::Auth::NXPToyLoginResult* arg, ::NPA::SimpleJSON::JSONNode* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, ::NPA::Auth::NXPToyLoginResult*, ::NPA::SimpleJSON::JSONNode*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPPLAYNOW_POSTLOGINPROCESSFROMPLAYNOWPAGE_OFFSET))(str, arg, arg, arg, nullptr);
		}

		::System::Void LoginWithWebTokenOTPFromAccountSettings(::System::Int32 arg, ::System::String* str, ::System::String* str, ::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::String*, ::System::String*, ::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPPLAYNOW_LOGINWITHWEBTOKENOTPFROMACCOUNTSETTINGS_OFFSET))(arg, str, str, str, arg, nullptr);
		}

		::System::Void LoginWithWebTokenFromAccountSettings(::System::Int32 arg, ::System::String* str, ::System::String* str, ::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::String*, ::System::String*, ::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPPLAYNOW_LOGINWITHWEBTOKENFROMACCOUNTSETTINGS_OFFSET))(arg, str, str, str, arg, nullptr);
		}

		::System::Void RecoverUser(::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPPLAYNOW_RECOVERUSER_OFFSET))(str, arg, nullptr);
		}

		::System::Void GetPlayNowCode(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPPLAYNOW_GETPLAYNOWCODE_OFFSET))(arg, nullptr);
		}

		::System::Void ShowAlert(::System::String* str, ::System::Action* arg, ::System::Action* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Action*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPPLAYNOW_SHOWALERT_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Void ShowPlayNowLogin(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPPLAYNOW_SHOWPLAYNOWLOGIN_OFFSET))(arg, nullptr);
		}

		::System::Void ShowPlayNowSignOut(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPPLAYNOW_SHOWPLAYNOWSIGNOUT_OFFSET))(arg, nullptr);
		}

		::System::Void LoginWithLocalCredential(::NPA::SimpleJSON::JSONNode* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::NPA::SimpleJSON::JSONNode*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPPLAYNOW_LOGINWITHLOCALCREDENTIAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void LoginWithOtp(::System::Boolean arg, ::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Boolean, ::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPPLAYNOW_LOGINWITHOTP_OFFSET))(arg, str, arg, nullptr);
		}

		::System::Void LoginWithTicket(::System::Boolean arg, ::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Boolean, ::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPPLAYNOW_LOGINWITHTICKET_OFFSET))(arg, str, arg, nullptr);
		}

		::System::Void LoginWithWebToken(::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPPLAYNOW_LOGINWITHWEBTOKEN_OFFSET))(str, arg, nullptr);
		}

		::System::Void GetTicket(::System::Boolean arg, ::System::String* str, ::NPA::SimpleJSON::JSONNode* arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Boolean, ::System::String*, ::NPA::SimpleJSON::JSONNode*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPPLAYNOW_GETTICKET_OFFSET))(arg, str, arg, arg, arg, nullptr);
		}

		::System::Void GetTicketWithWebToken(::System::String* str, Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPPLAYNOW_GETTICKETWITHWEBTOKEN_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Void GetTicketWithLocalCredential(::NPA::SimpleJSON::JSONNode* arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::NPA::SimpleJSON::JSONNode*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPPLAYNOW_GETTICKETWITHLOCALCREDENTIAL_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void ShowTermsAgreeIfNeed(::System::Boolean arg, ::System::String* str, ::System::String* str, Builder* arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Boolean, ::System::String*, ::System::String*, Builder*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPPLAYNOW_SHOWTERMSAGREEIFNEED_OFFSET))(arg, str, str, arg, arg, arg, nullptr);
		}

		::System::Void GetGameToken(::System::Boolean arg, ::System::String* str, Builder* arg, Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Boolean, ::System::String*, Builder*, Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPPLAYNOW_GETGAMETOKEN_OFFSET))(arg, str, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void ShowRecoverUser(::System::String* str, ::System::Int32 arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPPLAYNOW_SHOWRECOVERUSER_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Void ShowRecoverUserAtLinking(::System::String* str, ::System::Int32 arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPPLAYNOW_SHOWRECOVERUSERATLINKING_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Void GameAuthOpenPortForInsign(::System::String* str, Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPPLAYNOW_GAMEAUTHOPENPORTFORINSIGN_OFFSET))(str, arg, arg, arg, nullptr);
		}

		::System::Void GameAuthLoginWithTicket(::System::String* str, Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPPLAYNOW_GAMEAUTHLOGINWITHTICKET_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Void GameAuthSignInWithWebToken(::System::String* str, ::System::String* str, ::System::String* str, Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPPLAYNOW_GAMEAUTHSIGNINWITHWEBTOKEN_OFFSET))(str, str, str, arg, arg, nullptr);
		}

		::System::Void GameAuthGetToken(::System::String* str, Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPPLAYNOW_GAMEAUTHGETTOKEN_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Void GameAuthRecoverUser(::System::String* str, Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPPLAYNOW_GAMEAUTHRECOVERUSER_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Void GameAuthPlayNowGetPlayNowCode(::System::String* str, ::System::String* str, ::System::String* str, Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPPLAYNOW_GAMEAUTHPLAYNOWGETPLAYNOWCODE_OFFSET))(str, str, str, arg, arg, nullptr);
		}

		::System::String* MakeRecoveryPopupMessage(::System::Int32 arg, ::System::String* str)
		{
			return (return (::System::String*(*)(::System::Int32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPPLAYNOW_MAKERECOVERYPOPUPMESSAGE_OFFSET))(arg, str, nullptr);
		}

		::System::Void GameAuthPlayNowCheckConflict(::System::String* str, ::System::String* str, Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPPLAYNOW_GAMEAUTHPLAYNOWCHECKCONFLICT_OFFSET))(str, str, arg, arg, nullptr);
		}

		::System::Void GameAuthPlayNowAddLocalCredential(::System::String* str, Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPPLAYNOW_GAMEAUTHPLAYNOWADDLOCALCREDENTIAL_OFFSET))(str, arg, arg, nullptr);
		}

		Builder* GetUpdatedUser(::NPA::SimpleJSON::JSONNode* arg, ::NPA::Editor::NXPToyLocalSessionType* arg)
		{
			return (return (Builder*(*)(::NPA::SimpleJSON::JSONNode*, ::NPA::Editor::NXPToyLocalSessionType*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPPLAYNOW_GETUPDATEDUSER_OFFSET))(arg, arg, nullptr);
		}

		::System::String* GetPlayNowUrl(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPPLAYNOW_GETPLAYNOWURL_OFFSET))(str, nullptr);
		}

		::System::String* GetSignInUrl(::System::String* str, ::System::String* str, ::System::Boolean arg)
		{
			return (return (::System::String*(*)(::System::String*, ::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPPLAYNOW_GETSIGNINURL_OFFSET))(str, str, arg, nullptr);
		}

		::NPA::Auth::NXPToyLoginResult* MakeLoginResult(::System::Int32 arg, ::System::String* str, ::System::String* str, ::NPA::NPRequestTypeTag* arg)
		{
			return (return (::NPA::Auth::NXPToyLoginResult*(*)(::System::Int32, ::System::String*, ::System::String*, ::NPA::NPRequestTypeTag*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPPLAYNOW_MAKELOGINRESULT_OFFSET))(arg, str, str, arg, nullptr);
		}

		::NPA::Auth::NXPToySignOutResult* MakeSignOutResult(::System::Int32 arg, ::System::String* str, ::System::String* str)
		{
			return (return (::NPA::Auth::NXPToySignOutResult*(*)(::System::Int32, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPPLAYNOW_MAKESIGNOUTRESULT_OFFSET))(arg, str, str, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPPLAYNOW_.CCTOR_OFFSET))(nullptr);
		}

	};
}

