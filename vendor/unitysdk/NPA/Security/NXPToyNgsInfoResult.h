#pragma once
#include "../../unitysdk.h"

#define NPA_SECURITY_NXPTOYNGSINFORESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CC6520)

namespace NPA::Security
{
	inline static constexpr unsigned int NXPToyNgsInfoResult_TypeDefinitionIndex = 27332;

	class NXPToyNgsInfoResult : public Il2CppObject
	{
	public:
		ResultSet* result; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_SECURITY_NXPTOYNGSINFORESULT_.CTOR_OFFSET))(nullptr);
		}

	};
}

