#pragma once
#include "../../unitysdk.h"

#define NPA_AUTH_NXPTOYMIGRATIONINFORESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CDC3C0)

namespace NPA::Auth
{
	inline static constexpr unsigned int NXPToyMigrationInfoResult_TypeDefinitionIndex = 27545;

	class NXPToyMigrationInfoResult : public Il2CppObject
	{
	public:
		ResultSet* result; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_AUTH_NXPTOYMIGRATIONINFORESULT_.CTOR_OFFSET))(nullptr);
		}

	};
}

