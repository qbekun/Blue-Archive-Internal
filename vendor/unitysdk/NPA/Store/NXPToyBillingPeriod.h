#pragma once
#include "../../unitysdk.h"

#define NPA_STORE_NXPTOYBILLINGPERIOD_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CC2F40)

namespace NPA::Store
{
	inline static constexpr unsigned int NXPToyBillingPeriod_TypeDefinitionIndex = 27229;

	class NXPToyBillingPeriod : public Il2CppObject
	{
	public:
		::System::Int32 numberOfPeriods; // 0x10
		Unit* unit; // 0x14

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_STORE_NXPTOYBILLINGPERIOD_.CTOR_OFFSET))(nullptr);
		}

	};
}

