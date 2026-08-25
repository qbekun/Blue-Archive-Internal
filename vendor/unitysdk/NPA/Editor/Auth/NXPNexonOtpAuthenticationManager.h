#pragma once
#include "../../../unitysdk.h"

namespace NPA::Editor::Auth { class NXPNexonOtpAuthenticationManager; }
namespace NPA::Editor::Board { class NXPWebDialog; }

#define NPA_EDITOR_AUTH_NXPNEXONOTPAUTHENTICATIONMANAGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CA5B20)
#define NPA_EDITOR_AUTH_NXPNEXONOTPAUTHENTICATIONMANAGER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x9CA5B30)
#define NPA_EDITOR_AUTH_NXPNEXONOTPAUTHENTICATIONMANAGER_AUTHENTICATEWITHOTP_OFFSET UNITYSDK_OFFSET(0x9CA5D50)
#define NPA_EDITOR_AUTH_NXPNEXONOTPAUTHENTICATIONMANAGER_AUTHENTICATEOTPWITHTICKET_OFFSET UNITYSDK_OFFSET(0x9CA6100)
#define NPA_EDITOR_AUTH_NXPNEXONOTPAUTHENTICATIONMANAGER_AUTHENTICATEOTPWITHWEBTOKEN_OFFSET UNITYSDK_OFFSET(0x9CA62B0)
#define NPA_EDITOR_AUTH_NXPNEXONOTPAUTHENTICATIONMANAGER_CHECKSECURITYSTATE_OFFSET UNITYSDK_OFFSET(0x9CA6480)
#define NPA_EDITOR_AUTH_NXPNEXONOTPAUTHENTICATIONMANAGER_SHOWSECURITYWEB_OFFSET UNITYSDK_OFFSET(0x9CA6800)
#define NPA_EDITOR_AUTH_NXPNEXONOTPAUTHENTICATIONMANAGER_VALIDATESECURITYINFO_OFFSET UNITYSDK_OFFSET(0x9CA6E40)
#define NPA_EDITOR_AUTH_NXPNEXONOTPAUTHENTICATIONMANAGER_DISMISSSECURITYWEBDIALOG_OFFSET UNITYSDK_OFFSET(0x9CA7020)
#define NPA_EDITOR_AUTH_NXPNEXONOTPAUTHENTICATIONMANAGER_WRAPPINGTOYERRORCODEFROMOTPERROR_OFFSET UNITYSDK_OFFSET(0x9CA7070)
#define NPA_EDITOR_AUTH_NXPNEXONOTPAUTHENTICATIONMANAGER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9CA7170)

namespace NPA::Editor::Auth
{
	inline static constexpr unsigned int NXPNexonOtpAuthenticationManager_TypeDefinitionIndex = 27147;

	class NXPNexonOtpAuthenticationManager : public Il2CppObject
	{
	public:
		::NPA::Editor::Auth::NXPNexonOtpAuthenticationManager* instance; // 0x0
		::System::Object* syncRoot; // 0x8
		::NPA::Editor::Board::NXPWebDialog* webDialog; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPNEXONOTPAUTHENTICATIONMANAGER_.CTOR_OFFSET))(nullptr);
		}

		::NPA::Editor::Auth::NXPNexonOtpAuthenticationManager* get_Instance()
		{
			return (return (::NPA::Editor::Auth::NXPNexonOtpAuthenticationManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPNEXONOTPAUTHENTICATIONMANAGER_GET_INSTANCE_OFFSET))(nullptr);
		}

		::System::Void AuthenticateWithOtp(::System::String* str, ::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPNEXONOTPAUTHENTICATIONMANAGER_AUTHENTICATEWITHOTP_OFFSET))(str, str, arg, nullptr);
		}

		::System::Void AuthenticateOtpWithTicket(::System::String* str, ::System::String* str, ::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPNEXONOTPAUTHENTICATIONMANAGER_AUTHENTICATEOTPWITHTICKET_OFFSET))(str, str, str, arg, nullptr);
		}

		::System::Void AuthenticateOtpWithWebToken(::System::String* str, ::System::String* str, ::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPNEXONOTPAUTHENTICATIONMANAGER_AUTHENTICATEOTPWITHWEBTOKEN_OFFSET))(str, str, str, arg, nullptr);
		}

		::System::Void CheckSecurityState(::System::Int32 arg, ::System::String* str, ::System::String* str, ::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::String*, ::System::String*, ::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPNEXONOTPAUTHENTICATIONMANAGER_CHECKSECURITYSTATE_OFFSET))(arg, str, str, str, arg, nullptr);
		}

		::System::Void ShowSecurityWeb(::System::String* str, ::System::String* str, ::System::Int64 arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::Int64, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPNEXONOTPAUTHENTICATIONMANAGER_SHOWSECURITYWEB_OFFSET))(str, str, arg, arg, nullptr);
		}

		::System::Void ValidateSecurityInfo(::System::String* str, ::System::String* str, ::System::Int64 arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::Int64, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPNEXONOTPAUTHENTICATIONMANAGER_VALIDATESECURITYINFO_OFFSET))(str, str, arg, arg, nullptr);
		}

		::System::Void DismissSecurityWebDialog()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPNEXONOTPAUTHENTICATIONMANAGER_DISMISSSECURITYWEBDIALOG_OFFSET))(nullptr);
		}

		::System::Int32 WrappingToyErrorCodeFromOtpError(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPNEXONOTPAUTHENTICATIONMANAGER_WRAPPINGTOYERRORCODEFROMOTPERROR_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPNEXONOTPAUTHENTICATIONMANAGER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

