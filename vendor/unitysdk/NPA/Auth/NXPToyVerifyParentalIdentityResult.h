#pragma once
#include "../../unitysdk.h"

#define NPA_AUTH_NXPTOYVERIFYPARENTALIDENTITYRESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CDDDF0)

namespace NPA::Auth
{
	inline static constexpr unsigned int NXPToyVerifyParentalIdentityResult_TypeDefinitionIndex = 27578;

	class NXPToyVerifyParentalIdentityResult : public Il2CppObject
	{
	public:
		ResultSet* result; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_AUTH_NXPTOYVERIFYPARENTALIDENTITYRESULT_.CTOR_OFFSET))(nullptr);
		}

	};
}

