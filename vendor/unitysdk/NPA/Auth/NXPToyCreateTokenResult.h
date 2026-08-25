#pragma once
#include "../../unitysdk.h"

#define NPA_AUTH_NXPTOYCREATETOKENRESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CDB490)

namespace NPA::Auth
{
	inline static constexpr unsigned int NXPToyCreateTokenResult_TypeDefinitionIndex = 27524;

	class NXPToyCreateTokenResult : public Il2CppObject
	{
	public:
		ResultSet* result; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_AUTH_NXPTOYCREATETOKENRESULT_.CTOR_OFFSET))(nullptr);
		}

	};
}

