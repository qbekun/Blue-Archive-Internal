#pragma once
#include "../../unitysdk.h"

#define NPA_AUTH_NXPTOYSIGNOUTRESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CDDB20)

namespace NPA::Auth
{
	inline static constexpr unsigned int NXPToySignOutResult_TypeDefinitionIndex = 27567;

	class NXPToySignOutResult : public Il2CppObject
	{
	public:
		ResultSet* result; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_AUTH_NXPTOYSIGNOUTRESULT_.CTOR_OFFSET))(nullptr);
		}

	};
}

