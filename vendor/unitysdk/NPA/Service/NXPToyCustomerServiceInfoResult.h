#pragma once
#include "../../unitysdk.h"

#define NPA_SERVICE_NXPTOYCUSTOMERSERVICEINFORESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CC5E30)

namespace NPA::Service
{
	inline static constexpr unsigned int NXPToyCustomerServiceInfoResult_TypeDefinitionIndex = 27311;

	class NXPToyCustomerServiceInfoResult : public Il2CppObject
	{
	public:
		ResultSet* result; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_SERVICE_NXPTOYCUSTOMERSERVICEINFORESULT_.CTOR_OFFSET))(nullptr);
		}

	};
}

