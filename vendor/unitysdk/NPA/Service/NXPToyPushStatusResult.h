#pragma once
#include "../../unitysdk.h"

#define NPA_SERVICE_NXPTOYPUSHSTATUSRESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CC6170)

namespace NPA::Service
{
	inline static constexpr unsigned int NXPToyPushStatusResult_TypeDefinitionIndex = 27322;

	class NXPToyPushStatusResult : public Il2CppObject
	{
	public:
		ResultSet* result; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_SERVICE_NXPTOYPUSHSTATUSRESULT_.CTOR_OFFSET))(nullptr);
		}

	};
}

