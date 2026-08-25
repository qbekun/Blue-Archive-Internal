#pragma once
#include "../../unitysdk.h"

#define NPA_AUTH_NXPTOYCREATEMGTOKENRESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CDB410)

namespace NPA::Auth
{
	inline static constexpr unsigned int NXPToyCreateMGTokenResult_TypeDefinitionIndex = 27522;

	class NXPToyCreateMGTokenResult : public Il2CppObject
	{
	public:
		ResultSet* result; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_AUTH_NXPTOYCREATEMGTOKENRESULT_.CTOR_OFFSET))(nullptr);
		}

	};
}

