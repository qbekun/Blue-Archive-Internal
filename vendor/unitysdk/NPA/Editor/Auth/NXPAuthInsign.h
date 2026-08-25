#pragma once
#include "../../../unitysdk.h"

namespace NPA::Editor::KPI { class NXPKpi; }
namespace NPA::Editor::Common { class INXPApp; }
namespace NPA::Editor::Analytics { class INXPAnalytics; }
namespace NPA { class NPLoginType; }
namespace NPA::SimpleJSON { class JSONNode; }

#define NPA_EDITOR_AUTH_NXPAUTHINSIGN_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C84690)
#define NPA_EDITOR_AUTH_NXPAUTHINSIGN_SHUTDOWN_OFFSET UNITYSDK_OFFSET(0x9C84710)
#define NPA_EDITOR_AUTH_NXPAUTHINSIGN_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x9C84730)
#define NPA_EDITOR_AUTH_NXPAUTHINSIGN_LOGIN_OFFSET UNITYSDK_OFFSET(0x9C848C0)
#define NPA_EDITOR_AUTH_NXPAUTHINSIGN_LOGIN_OFFSET UNITYSDK_OFFSET(0x9C84E00)
#define NPA_EDITOR_AUTH_NXPAUTHINSIGN_LOGININTERNAL_OFFSET UNITYSDK_OFFSET(0x9C848D0)
#define NPA_EDITOR_AUTH_NXPAUTHINSIGN_GAMEAUTHPROCESSWITHEXTERNALWEB_OFFSET UNITYSDK_OFFSET(0x9C852A0)
#define NPA_EDITOR_AUTH_NXPAUTHINSIGN_GAMEAUTHPROCESSWITHNGM_OFFSET UNITYSDK_OFFSET(0x9C85130)
#define NPA_EDITOR_AUTH_NXPAUTHINSIGN_GAMEAUTHPROCESSGETTICKET_OFFSET UNITYSDK_OFFSET(0x9C85450)
#define NPA_EDITOR_AUTH_NXPAUTHINSIGN_GAMEAUTHPROCESSLOGINWITHOTP_OFFSET UNITYSDK_OFFSET(0x9C84E20)
#define NPA_EDITOR_AUTH_NXPAUTHINSIGN_GAMEAUTHPROCESSLOGIN_OFFSET UNITYSDK_OFFSET(0x9C85640)
#define NPA_EDITOR_AUTH_NXPAUTHINSIGN_GETNSRRSRELEASETOKEN_OFFSET UNITYSDK_OFFSET(0x9C857C0)
#define NPA_EDITOR_AUTH_NXPAUTHINSIGN_GAMEAUTHPROCESSRECOVERUSER_OFFSET UNITYSDK_OFFSET(0x9C85910)
#define NPA_EDITOR_AUTH_NXPAUTHINSIGN_GAMEAUTHPROCESSAGREETERMSIFNEED_OFFSET UNITYSDK_OFFSET(0x9C85DF0)
#define NPA_EDITOR_AUTH_NXPAUTHINSIGN_GAMEAUTHPROCESSGETGAMETOKEN_OFFSET UNITYSDK_OFFSET(0x9C85FD0)
#define NPA_EDITOR_AUTH_NXPAUTHINSIGN_SENDINFOUSERLOG_OFFSET UNITYSDK_OFFSET(0x9C86140)
#define NPA_EDITOR_AUTH_NXPAUTHINSIGN_GETUSERINFO_OFFSET UNITYSDK_OFFSET(0x9C86260)
#define NPA_EDITOR_AUTH_NXPAUTHINSIGN_LOGOUT_OFFSET UNITYSDK_OFFSET(0x9C86400)
#define NPA_EDITOR_AUTH_NXPAUTHINSIGN_SIGNOUT_OFFSET UNITYSDK_OFFSET(0x9C86650)
#define NPA_EDITOR_AUTH_NXPAUTHINSIGN_UNREGISTERSERVICE_OFFSET UNITYSDK_OFFSET(0x9C86880)
#define NPA_EDITOR_AUTH_NXPAUTHINSIGN_UNREGISTERNEXONMEMBERSHIP_OFFSET UNITYSDK_OFFSET(0x9C86A60)
#define NPA_EDITOR_AUTH_NXPAUTHINSIGN_CANDELETEACCOUNT_OFFSET UNITYSDK_OFFSET(0x9C86B00)
#define NPA_EDITOR_AUTH_NXPAUTHINSIGN_LOADPLAYNOWSESSION_OFFSET UNITYSDK_OFFSET(0x9C86B80)
#define NPA_EDITOR_AUTH_NXPAUTHINSIGN_SAVEPLAYNOWSESSION_OFFSET UNITYSDK_OFFSET(0x9C86C10)

namespace NPA::Editor::Auth
{
	inline static constexpr unsigned int NXPAuthInsign_TypeDefinitionIndex = 27041;

	class NXPAuthInsign : public Il2CppObject
	{
	public:
		Il2CppObject* authClosedAction; // 0x20
		::NPA::Editor::KPI::NXPKpi* _kpi; // 0x28

		::System::Void .ctor(::NPA::Editor::Common::INXPApp* arg, ::NPA::Editor::Analytics::INXPAnalytics* arg)
		{
			((::System::Void(*)(::NPA::Editor::Common::INXPApp*, ::NPA::Editor::Analytics::INXPAnalytics*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPAUTHINSIGN_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ShutDown()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPAUTHINSIGN_SHUTDOWN_OFFSET))(nullptr);
		}

		::System::Void Initialize(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPAUTHINSIGN_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void Login(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPAUTHINSIGN_LOGIN_OFFSET))(arg, nullptr);
		}

		::System::Void Login(::NPA::NPLoginType* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::NPA::NPLoginType*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPAUTHINSIGN_LOGIN_OFFSET))(arg, arg, nullptr);
		}

		::System::Void LoginInternal(::NPA::NPLoginType* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::NPA::NPLoginType*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPAUTHINSIGN_LOGININTERNAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void GameAuthProcessWithExternalWeb(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPAUTHINSIGN_GAMEAUTHPROCESSWITHEXTERNALWEB_OFFSET))(arg, nullptr);
		}

		::System::Void GameAuthProcessWithNGM(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPAUTHINSIGN_GAMEAUTHPROCESSWITHNGM_OFFSET))(arg, nullptr);
		}

		::System::Void GameAuthProcessGetTicket(::System::String* str, ::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPAUTHINSIGN_GAMEAUTHPROCESSGETTICKET_OFFSET))(str, str, arg, nullptr);
		}

		::System::Void GameAuthProcessLoginWithOtp(::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPAUTHINSIGN_GAMEAUTHPROCESSLOGINWITHOTP_OFFSET))(str, arg, nullptr);
		}

		::System::Void GameAuthProcessLogin(::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPAUTHINSIGN_GAMEAUTHPROCESSLOGIN_OFFSET))(str, arg, nullptr);
		}

		::System::String* GetNsrrsReleaseToken(::NPA::SimpleJSON::JSONNode* arg)
		{
			return (return (::System::String*(*)(::NPA::SimpleJSON::JSONNode*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPAUTHINSIGN_GETNSRRSRELEASETOKEN_OFFSET))(arg, nullptr);
		}

		::System::Void GameAuthProcessRecoverUser(::System::String* str, ::NPA::SimpleJSON::JSONNode* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, ::NPA::SimpleJSON::JSONNode*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPAUTHINSIGN_GAMEAUTHPROCESSRECOVERUSER_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Void GameAuthProcessAgreeTermsIfNeed(::System::String* str, ::System::String* str, Builder* arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, Builder*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPAUTHINSIGN_GAMEAUTHPROCESSAGREETERMSIFNEED_OFFSET))(str, str, arg, arg, arg, nullptr);
		}

		::System::Void GameAuthProcessGetGameToken(::System::String* str, Builder* arg, Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, Builder*, Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPAUTHINSIGN_GAMEAUTHPROCESSGETGAMETOKEN_OFFSET))(str, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void SendInfoUserLog()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPAUTHINSIGN_SENDINFOUSERLOG_OFFSET))(nullptr);
		}

		::System::Void GetUserInfo(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPAUTHINSIGN_GETUSERINFO_OFFSET))(arg, nullptr);
		}

		::System::Void Logout(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPAUTHINSIGN_LOGOUT_OFFSET))(arg, nullptr);
		}

		::System::Void SignOut(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPAUTHINSIGN_SIGNOUT_OFFSET))(arg, nullptr);
		}

		::System::Void UnregisterService(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPAUTHINSIGN_UNREGISTERSERVICE_OFFSET))(arg, nullptr);
		}

		::System::Void UnregisterNexonMembership(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPAUTHINSIGN_UNREGISTERNEXONMEMBERSHIP_OFFSET))(arg, nullptr);
		}

		::System::Boolean CanDeleteAccount()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPAUTHINSIGN_CANDELETEACCOUNT_OFFSET))(nullptr);
		}

		::System::String* LoadPlayNowSession()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPAUTHINSIGN_LOADPLAYNOWSESSION_OFFSET))(nullptr);
		}

		::System::Void SavePlayNowSession(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPAUTHINSIGN_SAVEPLAYNOWSESSION_OFFSET))(str, nullptr);
		}

	};
}

