#pragma once
#include "../../unitysdk.h"

#define NPA_AUTH_NXPTOYADIDRESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CDB190)

namespace NPA::Auth
{
	inline static constexpr unsigned int NXPToyAdIdResult_TypeDefinitionIndex = 27512;

	class NXPToyAdIdResult : public Il2CppObject
	{
	public:
		ResultSet* result; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_AUTH_NXPTOYADIDRESULT_.CTOR_OFFSET))(nullptr);
		}

	};
}

