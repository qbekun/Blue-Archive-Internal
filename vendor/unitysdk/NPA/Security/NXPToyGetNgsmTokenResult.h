#pragma once
#include "../../unitysdk.h"

#define NPA_SECURITY_NXPTOYGETNGSMTOKENRESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CC64A0)

namespace NPA::Security
{
	inline static constexpr unsigned int NXPToyGetNgsmTokenResult_TypeDefinitionIndex = 27330;

	class NXPToyGetNgsmTokenResult : public Il2CppObject
	{
	public:
		ResultSet* result; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_SECURITY_NXPTOYGETNGSMTOKENRESULT_.CTOR_OFFSET))(nullptr);
		}

	};
}

