#pragma once
#include "../../../unitysdk.h"

#define NPA_EDITOR_AUTH_NXPNEXONOTPAUTHENTICATIONRESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CA57A0)

namespace NPA::Editor::Auth
{
	inline static constexpr unsigned int NXPNexonOtpAuthenticationResult_TypeDefinitionIndex = 27148;

	class NXPNexonOtpAuthenticationResult : public Il2CppObject
	{
	public:
		::System::String* token; // 0x10
		::System::String* requestType; // 0x18
		::System::String* callbackFunctionName; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPNEXONOTPAUTHENTICATIONRESULT_.CTOR_OFFSET))(nullptr);
		}

	};
}

