#pragma once
#include "../../unitysdk.h"

#define NPA_AUTH_NXPTOYLOGINRESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CDC2C0)

namespace NPA::Auth
{
	inline static constexpr unsigned int NXPToyLoginResult_TypeDefinitionIndex = 27541;

	class NXPToyLoginResult : public Il2CppObject
	{
	public:
		ResultSet* result; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_AUTH_NXPTOYLOGINRESULT_.CTOR_OFFSET))(nullptr);
		}

	};
}

