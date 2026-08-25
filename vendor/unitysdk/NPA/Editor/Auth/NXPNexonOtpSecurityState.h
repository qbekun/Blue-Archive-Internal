#pragma once
#include "../../../unitysdk.h"

namespace NPA::Editor::Auth { class NXPNexonOtpSecurityState; }

namespace NPA::Editor::Auth
{
	inline static constexpr unsigned int NXPNexonOtpSecurityState_TypeDefinitionIndex = 27151;

	class NXPNexonOtpSecurityState : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::NPA::Editor::Auth::NXPNexonOtpSecurityState* SECURITY_STATE_NOT_OTP_USER; // 0x0
		::NPA::Editor::Auth::NXPNexonOtpSecurityState* SECURITY_STATE_JPPC_OTP_USER; // 0x0
		::NPA::Editor::Auth::NXPNexonOtpSecurityState* SECURITY_STATE_NEXON_OTP_USER; // 0x0
		::NPA::Editor::Auth::NXPNexonOtpSecurityState* SECURITY_STATE_REGISTERED_DEVICE_USER; // 0x0
		::NPA::Editor::Auth::NXPNexonOtpSecurityState* SECURITY_STATE_SSO_OTP_USER; // 0x0
		::NPA::Editor::Auth::NXPNexonOtpSecurityState* SECURITY_STATE_ARENA_2FA_USER; // 0x0

	};
}

