#pragma once
#include "../../unitysdk.h"

#define NPA_SERVICE_NXPTOYPUTCOUPONRESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CC61F0)

namespace NPA::Service
{
	inline static constexpr unsigned int NXPToyPutCouponResult_TypeDefinitionIndex = 27324;

	class NXPToyPutCouponResult : public Il2CppObject
	{
	public:
		ResultSet* result; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_SERVICE_NXPTOYPUTCOUPONRESULT_.CTOR_OFFSET))(nullptr);
		}

	};
}

