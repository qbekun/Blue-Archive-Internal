#pragma once
#include "../../unitysdk.h"

#define NPA_AUTH_NXPAGREETERMSWITHOUTUPDATETOYTOKENRESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CDAC00)

namespace NPA::Auth
{
	inline static constexpr unsigned int NXPAgreeTermsWithoutUpdateToyTokenResult_TypeDefinitionIndex = 27505;

	class NXPAgreeTermsWithoutUpdateToyTokenResult : public Il2CppObject
	{
	public:
		ResultSet* result; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_AUTH_NXPAGREETERMSWITHOUTUPDATETOYTOKENRESULT_.CTOR_OFFSET))(nullptr);
		}

	};
}

