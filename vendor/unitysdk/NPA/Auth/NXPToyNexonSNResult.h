#pragma once
#include "../../unitysdk.h"

#define NPA_AUTH_NXPTOYNEXONSNRESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CDC4C0)

namespace NPA::Auth
{
	inline static constexpr unsigned int NXPToyNexonSNResult_TypeDefinitionIndex = 27549;

	class NXPToyNexonSNResult : public Il2CppObject
	{
	public:
		ResultSet* result; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_AUTH_NXPTOYNEXONSNRESULT_.CTOR_OFFSET))(nullptr);
		}

	};
}

