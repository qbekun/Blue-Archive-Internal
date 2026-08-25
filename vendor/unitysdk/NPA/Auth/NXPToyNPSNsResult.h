#pragma once
#include "../../unitysdk.h"

#define NPA_AUTH_NXPTOYNPSNSRESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CDC5C0)

namespace NPA::Auth
{
	inline static constexpr unsigned int NXPToyNPSNsResult_TypeDefinitionIndex = 27553;

	class NXPToyNPSNsResult : public Il2CppObject
	{
	public:
		ResultSet* result; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_AUTH_NXPTOYNPSNSRESULT_.CTOR_OFFSET))(nullptr);
		}

	};
}

