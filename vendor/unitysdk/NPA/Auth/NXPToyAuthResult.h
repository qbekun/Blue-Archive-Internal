#pragma once
#include "../../unitysdk.h"

#define NPA_AUTH_NXPTOYAUTHRESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CDB290)

namespace NPA::Auth
{
	inline static constexpr unsigned int NXPToyAuthResult_TypeDefinitionIndex = 27516;

	class NXPToyAuthResult : public Il2CppObject
	{
	public:
		ResultSet* result; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_AUTH_NXPTOYAUTHRESULT_.CTOR_OFFSET))(nullptr);
		}

	};
}

