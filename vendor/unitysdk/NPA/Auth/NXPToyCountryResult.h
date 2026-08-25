#pragma once
#include "../../unitysdk.h"

#define NPA_AUTH_NXPTOYCOUNTRYRESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CDB390)

namespace NPA::Auth
{
	inline static constexpr unsigned int NXPToyCountryResult_TypeDefinitionIndex = 27520;

	class NXPToyCountryResult : public Il2CppObject
	{
	public:
		ResultSet* result; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_AUTH_NXPTOYCOUNTRYRESULT_.CTOR_OFFSET))(nullptr);
		}

	};
}

