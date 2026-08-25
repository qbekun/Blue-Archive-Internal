#pragma once
#include "../../unitysdk.h"

#define NPA_SERVICE_NXPTOYUSERCONSENTRESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CC6270)

namespace NPA::Service
{
	inline static constexpr unsigned int NXPToyUserConsentResult_TypeDefinitionIndex = 27326;

	class NXPToyUserConsentResult : public Il2CppObject
	{
	public:
		ResultSet* result; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_SERVICE_NXPTOYUSERCONSENTRESULT_.CTOR_OFFSET))(nullptr);
		}

	};
}

