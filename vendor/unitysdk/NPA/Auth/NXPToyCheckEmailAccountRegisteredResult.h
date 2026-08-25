#pragma once
#include "../../unitysdk.h"

#define NPA_AUTH_NXPTOYCHECKEMAILACCOUNTREGISTEREDRESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CDB310)

namespace NPA::Auth
{
	inline static constexpr unsigned int NXPToyCheckEmailAccountRegisteredResult_TypeDefinitionIndex = 27518;

	class NXPToyCheckEmailAccountRegisteredResult : public Il2CppObject
	{
	public:
		ResultSet* result; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_AUTH_NXPTOYCHECKEMAILACCOUNTREGISTEREDRESULT_.CTOR_OFFSET))(nullptr);
		}

	};
}

