#pragma once
#include "../../unitysdk.h"

#define NPA_AUTH_NXPTOYGETJOINSERVICELISTBYNPSNRESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CDE060)

namespace NPA::Auth
{
	inline static constexpr unsigned int NXPToyGetJoinServiceListByNpsnResult_TypeDefinitionIndex = 27586;

	class NXPToyGetJoinServiceListByNpsnResult : public Il2CppObject
	{
	public:
		ResultSet* result; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_AUTH_NXPTOYGETJOINSERVICELISTBYNPSNRESULT_.CTOR_OFFSET))(nullptr);
		}

	};
}

