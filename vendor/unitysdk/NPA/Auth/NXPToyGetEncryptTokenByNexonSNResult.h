#pragma once
#include "../../unitysdk.h"

#define NPA_AUTH_NXPTOYGETENCRYPTTOKENBYNEXONSNRESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CDDFE0)

namespace NPA::Auth
{
	inline static constexpr unsigned int NXPToyGetEncryptTokenByNexonSNResult_TypeDefinitionIndex = 27584;

	class NXPToyGetEncryptTokenByNexonSNResult : public Il2CppObject
	{
	public:
		ResultSet* result; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_AUTH_NXPTOYGETENCRYPTTOKENBYNEXONSNRESULT_.CTOR_OFFSET))(nullptr);
		}

	};
}

