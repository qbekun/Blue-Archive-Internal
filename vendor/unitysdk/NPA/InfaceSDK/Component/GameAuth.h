#pragma once
#include "../../../unitysdk.h"

namespace NPA::Editor::Auth { class Token; }

#define NPA_INFACESDK_COMPONENT_GAMEAUTH_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D01F50)
#define NPA_INFACESDK_COMPONENT_GAMEAUTH_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9D02090)
#define NPA_INFACESDK_COMPONENT_GAMEAUTH_EXTERNALAUTOLOGIN_OFFSET UNITYSDK_OFFSET(0x9D021F0)
#define NPA_INFACESDK_COMPONENT_GAMEAUTH_EXTERNALISSUETICKET_OFFSET UNITYSDK_OFFSET(0x9D02490)
#define NPA_INFACESDK_COMPONENT_GAMEAUTH_ACCOUNTLINKLOGIN_OFFSET UNITYSDK_OFFSET(0x9D026E0)
#define NPA_INFACESDK_COMPONENT_GAMEAUTH_ACCOUNTLINKGUESTLOGIN_OFFSET UNITYSDK_OFFSET(0x9D02A70)
#define NPA_INFACESDK_COMPONENT_GAMEAUTH_ACCOUNTLINKDELINKACCOUNT_OFFSET UNITYSDK_OFFSET(0x9D02E00)
#define NPA_INFACESDK_COMPONENT_GAMEAUTH_ACCOUNTLINKVERIFYLINK_OFFSET UNITYSDK_OFFSET(0x9D03150)
#define NPA_INFACESDK_COMPONENT_GAMEAUTH_ACCOUNTLINKEXPLOREPORT_OFFSET UNITYSDK_OFFSET(0x9D03410)
#define NPA_INFACESDK_COMPONENT_GAMEAUTH_ACCOUNTLINKOPENPORT_OFFSET UNITYSDK_OFFSET(0x9D035E0)
#define NPA_INFACESDK_COMPONENT_GAMEAUTH_ACCOUNTLINKCLOSEPORT_OFFSET UNITYSDK_OFFSET(0x9D038B0)
#define NPA_INFACESDK_COMPONENT_GAMEAUTH_ACCOUNTLINKISSUELINKTICKET_OFFSET UNITYSDK_OFFSET(0x9D039B0)
#define NPA_INFACESDK_COMPONENT_GAMEAUTH_ACCOUNTLINKEXPIRELINKSESSION_OFFSET UNITYSDK_OFFSET(0x9D03D90)
#define NPA_INFACESDK_COMPONENT_GAMEAUTH_SIGNINWITHTICKET_OFFSET UNITYSDK_OFFSET(0x9D04120)
#define NPA_INFACESDK_COMPONENT_GAMEAUTH_GETGAMETOKENBYSCHEDULER_OFFSET UNITYSDK_OFFSET(0x9D04580)
#define NPA_INFACESDK_COMPONENT_GAMEAUTH_RECOVERUSERWITHTICKET_OFFSET UNITYSDK_OFFSET(0x9D04820)
#define NPA_INFACESDK_COMPONENT_GAMEAUTH_ISAUTHCRASH_OFFSET UNITYSDK_OFFSET(0x9D04B40)
#define NPA_INFACESDK_COMPONENT_GAMEAUTH_CLEARAUTHINFO_OFFSET UNITYSDK_OFFSET(0x9D04C60)
#define NPA_INFACESDK_COMPONENT_GAMEAUTH_EXECUTENGMPATCHER_OFFSET UNITYSDK_OFFSET(0x9D04D60)
#define NPA_INFACESDK_COMPONENT_GAMEAUTH_NEXONOTPGETUSERSECURITYINFOWITHTICKET_OFFSET UNITYSDK_OFFSET(0x9D04E80)
#define NPA_INFACESDK_COMPONENT_GAMEAUTH_NEXONOTPGETUSERSECURITYINFOWITHTOKEN_OFFSET UNITYSDK_OFFSET(0x9D05260)
#define NPA_INFACESDK_COMPONENT_GAMEAUTH_NEXONOTPVALIDATESECURITYINFO_OFFSET UNITYSDK_OFFSET(0x9D05640)
#define NPA_INFACESDK_COMPONENT_GAMEAUTH_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x9D05A20)
#define NPA_INFACESDK_COMPONENT_GAMEAUTH_SETPRIMARYLINK_OFFSET UNITYSDK_OFFSET(0x9D05C00)
#define NPA_INFACESDK_COMPONENT_GAMEAUTH_GETLINKS_OFFSET UNITYSDK_OFFSET(0x9D06070)
#define NPA_INFACESDK_COMPONENT_GAMEAUTH_GETLINKS_OFFSET UNITYSDK_OFFSET(0x9D061A0)
#define NPA_INFACESDK_COMPONENT_GAMEAUTH_ISSUESTATENONCE_OFFSET UNITYSDK_OFFSET(0x9D06530)
#define NPA_INFACESDK_COMPONENT_GAMEAUTH_ISSUESTATENONCEASYNC_OFFSET UNITYSDK_OFFSET(0x9D06820)

namespace NPA::InfaceSDK::Component
{
	inline static constexpr unsigned int GameAuth_TypeDefinitionIndex = 25875;

	class GameAuth : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_GAMEAUTH_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_GAMEAUTH_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void ExternalAutoLogin(::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_GAMEAUTH_EXTERNALAUTOLOGIN_OFFSET))(str, arg, nullptr);
		}

		::System::Void ExternalIssueTicket(::System::String* str, ::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_GAMEAUTH_EXTERNALISSUETICKET_OFFSET))(str, str, arg, nullptr);
		}

		::System::Void AccountLinkLogin(::System::String* str, ::System::String* str, ::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_GAMEAUTH_ACCOUNTLINKLOGIN_OFFSET))(str, str, str, arg, nullptr);
		}

		::System::Void AccountLinkGuestLogin(::System::String* str, ::System::String* str, ::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_GAMEAUTH_ACCOUNTLINKGUESTLOGIN_OFFSET))(str, str, str, arg, nullptr);
		}

		::System::Void AccountLinkDelinkAccount(::System::String* str, ::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_GAMEAUTH_ACCOUNTLINKDELINKACCOUNT_OFFSET))(str, str, arg, nullptr);
		}

		::System::Void AccountLinkVerifyLink(::System::String* str, ::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_GAMEAUTH_ACCOUNTLINKVERIFYLINK_OFFSET))(str, str, arg, nullptr);
		}

		::System::Void AccountLinkExplorePort(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_GAMEAUTH_ACCOUNTLINKEXPLOREPORT_OFFSET))(arg, nullptr);
		}

		::System::Void AccountLinkOpenPort(::System::Int32 arg, ::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_GAMEAUTH_ACCOUNTLINKOPENPORT_OFFSET))(arg, str, arg, nullptr);
		}

		::System::Void AccountLinkClosePort()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_GAMEAUTH_ACCOUNTLINKCLOSEPORT_OFFSET))(nullptr);
		}

		::System::Void AccountLinkIssueLinkTicket(::System::String* str, ::System::String* str, ::System::String* str, ::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_GAMEAUTH_ACCOUNTLINKISSUELINKTICKET_OFFSET))(str, str, str, str, arg, nullptr);
		}

		::System::Void AccountLinkExpireLinkSession(::System::String* str, ::System::String* str, ::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_GAMEAUTH_ACCOUNTLINKEXPIRELINKSESSION_OFFSET))(str, str, str, arg, nullptr);
		}

		::System::Void SignInWithTicket(::System::String* str, ::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_GAMEAUTH_SIGNINWITHTICKET_OFFSET))(str, str, arg, nullptr);
		}

		::System::Void GetGameTokenByScheduler(::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_GAMEAUTH_GETGAMETOKENBYSCHEDULER_OFFSET))(str, arg, nullptr);
		}

		::System::Void RecoverUserWithTicket(::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_GAMEAUTH_RECOVERUSERWITHTICKET_OFFSET))(str, arg, nullptr);
		}

		::System::Boolean IsAuthCrash(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_GAMEAUTH_ISAUTHCRASH_OFFSET))(arg, nullptr);
		}

		::System::Void ClearAuthInfo()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_GAMEAUTH_CLEARAUTHINFO_OFFSET))(nullptr);
		}

		::System::Void ExecuteNGMPatcher(::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_GAMEAUTH_EXECUTENGMPATCHER_OFFSET))(str, arg, nullptr);
		}

		::System::Void NexonOTPGetUserSecurityInfoWithTicket(::System::String* str, ::System::String* str, ::System::String* str, ::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_GAMEAUTH_NEXONOTPGETUSERSECURITYINFOWITHTICKET_OFFSET))(str, str, str, str, arg, nullptr);
		}

		::System::Void NexonOTPGetUserSecurityInfoWithToken(::System::String* str, ::System::String* str, ::System::String* str, ::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_GAMEAUTH_NEXONOTPGETUSERSECURITYINFOWITHTOKEN_OFFSET))(str, str, str, str, arg, nullptr);
		}

		::System::Void NexonOTPValidateSecurityInfo(::System::String* str, ::System::String* str, ::System::String* str, ::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_GAMEAUTH_NEXONOTPVALIDATESECURITYINFO_OFFSET))(str, str, str, str, arg, nullptr);
		}

		::System::Void Initialize(::System::Int32 arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_GAMEAUTH_INITIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetPrimaryLink(::System::String* str, SetPrimaryLinkArgs* arg, ::NPA::Editor::Auth::Token* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, SetPrimaryLinkArgs*, ::NPA::Editor::Auth::Token*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_GAMEAUTH_SETPRIMARYLINK_OFFSET))(str, arg, arg, arg, nullptr);
		}

		Il2CppObject* GetLinks(::System::String* str, ::NPA::Editor::Auth::Token* arg)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::NPA::Editor::Auth::Token*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_GAMEAUTH_GETLINKS_OFFSET))(str, arg, nullptr);
		}

		::System::Void GetLinks(::System::String* str, ::NPA::Editor::Auth::Token* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, ::NPA::Editor::Auth::Token*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_GAMEAUTH_GETLINKS_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Void IssueStateNonce(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_GAMEAUTH_ISSUESTATENONCE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* IssueStateNonceAsync()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_GAMEAUTH_ISSUESTATENONCEASYNC_OFFSET))(nullptr);
		}

	};
}

