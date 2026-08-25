#pragma once
#include "../../unitysdk.h"

namespace System::Net
{
	inline static constexpr unsigned int FtpLoginState_TypeDefinitionIndex = 29655;

	class FtpLoginState : public Il2CppObject
	{
	public:
		::System::Byte value__; // 0x10
		::System::Net::FtpLoginState* NotLoggedIn; // 0x0
		::System::Net::FtpLoginState* LoggedIn; // 0x0
		::System::Net::FtpLoginState* LoggedInButNeedsRelogin; // 0x0
		::System::Net::FtpLoginState* ReloginFailed; // 0x0

	};
}

