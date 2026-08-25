#pragma once
#include "../../unitysdk.h"

#define NPA_AUTH_NXPTOYMIGRATIONRESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CDC440)

namespace NPA::Auth
{
	inline static constexpr unsigned int NXPToyMigrationResult_TypeDefinitionIndex = 27547;

	class NXPToyMigrationResult : public Il2CppObject
	{
	public:
		ResultSet* result; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_AUTH_NXPTOYMIGRATIONRESULT_.CTOR_OFFSET))(nullptr);
		}

	};
}

