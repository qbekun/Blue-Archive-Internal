#pragma once
#include "../../unitysdk.h"

#define NPA_SOCIAL_NXPTOYAUTHCONNECTIONSTATUSLISTRESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CC44E0)

namespace NPA::Social
{
	inline static constexpr unsigned int NXPToyAuthConnectionStatusListResult_TypeDefinitionIndex = 27267;

	class NXPToyAuthConnectionStatusListResult : public Il2CppObject
	{
	public:
		ResultSet* result; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_SOCIAL_NXPTOYAUTHCONNECTIONSTATUSLISTRESULT_.CTOR_OFFSET))(nullptr);
		}

	};
}

