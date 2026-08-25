#pragma once
#include "../../../unitysdk.h"

namespace NPA::Editor::Board { class NXPWebDialog; }
namespace NPA::Service { class NXPWebInfo; }
namespace NPA::Editor::Auth { class NXPNexonOtpAuthenticationResult; }

#define NPA_EDITOR_AUTH_NXNEXONOTP_AUTHENTICATEWITHOTP_OFFSET UNITYSDK_OFFSET(0x9C9B2C0)
#define NPA_EDITOR_AUTH_NXNEXONOTP_CREATEWEBINFO_OFFSET UNITYSDK_OFFSET(0x9CA5130)
#define NPA_EDITOR_AUTH_NXNEXONOTP_DISPATCHCOMPLETIONRESULT_OFFSET UNITYSDK_OFFSET(0x9CA52B0)
#define NPA_EDITOR_AUTH_NXNEXONOTP_DISPATCHFAILURERESULT_OFFSET UNITYSDK_OFFSET(0x9CA5490)
#define NPA_EDITOR_AUTH_NXNEXONOTP_DISMISSDIALOG_OFFSET UNITYSDK_OFFSET(0x9CA53F0)
#define NPA_EDITOR_AUTH_NXNEXONOTP_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C9B2B0)
#define NPA_EDITOR_AUTH_NXNEXONOTP__CREATEWEBINFO_B__4_0_OFFSET UNITYSDK_OFFSET(0x9CA55D0)
#define NPA_EDITOR_AUTH_NXNEXONOTP__CREATEWEBINFO_B__4_1_OFFSET UNITYSDK_OFFSET(0x9CA57B0)
#define NPA_EDITOR_AUTH_NXNEXONOTP__CREATEWEBINFO_B__4_2_OFFSET UNITYSDK_OFFSET(0x9CA59C0)

namespace NPA::Editor::Auth
{
	inline static constexpr unsigned int NXNexonOtp_TypeDefinitionIndex = 27142;

	class NXNexonOtp : public Il2CppObject
	{
	public:
		::NPA::Editor::Board::NXPWebDialog* otpWebDialog; // 0x10
		Il2CppObject* actionComplete; // 0x18
		Il2CppObject* actionFail; // 0x20

		::System::Void AuthenticateWithOtp(::System::String* str, Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXNEXONOTP_AUTHENTICATEWITHOTP_OFFSET))(str, arg, arg, nullptr);
		}

		::NPA::Service::NXPWebInfo* CreateWebInfo(::System::String* str)
		{
			return (return (::NPA::Service::NXPWebInfo*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXNEXONOTP_CREATEWEBINFO_OFFSET))(str, nullptr);
		}

		::System::Void DispatchCompletionResult(::NPA::Editor::Auth::NXPNexonOtpAuthenticationResult* arg)
		{
			((::System::Void(*)(::NPA::Editor::Auth::NXPNexonOtpAuthenticationResult*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXNEXONOTP_DISPATCHCOMPLETIONRESULT_OFFSET))(arg, nullptr);
		}

		::System::Void DispatchFailureResult(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXNEXONOTP_DISPATCHFAILURERESULT_OFFSET))(arg, nullptr);
		}

		::System::Void dismissDialog()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXNEXONOTP_DISMISSDIALOG_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXNEXONOTP_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _CreateWebInfo_b__4_0(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXNEXONOTP__CREATEWEBINFO_B__4_0_OFFSET))(str, str, nullptr);
		}

		::System::Void _CreateWebInfo_b__4_1(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXNEXONOTP__CREATEWEBINFO_B__4_1_OFFSET))(str, str, nullptr);
		}

		::System::Void _CreateWebInfo_b__4_2(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXNEXONOTP__CREATEWEBINFO_B__4_2_OFFSET))(str, str, nullptr);
		}

	};
}

