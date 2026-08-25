#pragma once
#include "../../../unitysdk.h"

#define NPA_EDITOR_AUTH_NXPNEXONOTPSECURITYAUTHENTICATIONRESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CA6090)

namespace NPA::Editor::Auth
{
	inline static constexpr unsigned int NXPNexonOtpSecurityAuthenticationResult_TypeDefinitionIndex = 27150;

	class NXPNexonOtpSecurityAuthenticationResult : public Il2CppObject
	{
	public:
		ResultSet* result; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPNEXONOTPSECURITYAUTHENTICATIONRESULT_.CTOR_OFFSET))(nullptr);
		}

	};
}

