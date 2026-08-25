#pragma once
#include "../../unitysdk.h"

#define NPA_AUTH_NXPTOYGETPOLICYLISTRESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CDB540)

namespace NPA::Auth
{
	inline static constexpr unsigned int NXPToyGetPolicyListResult_TypeDefinitionIndex = 27529;

	class NXPToyGetPolicyListResult : public Il2CppObject
	{
	public:
		ResultSet* result; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_AUTH_NXPTOYGETPOLICYLISTRESULT_.CTOR_OFFSET))(nullptr);
		}

	};
}

