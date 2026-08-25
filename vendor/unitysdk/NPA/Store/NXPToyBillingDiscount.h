#pragma once
#include "../../unitysdk.h"

namespace NPA::Store { class NXPToyBillingPeriod; }
namespace NPA::Store { class NXPToyBillingPrice; }

#define NPA_STORE_NXPTOYBILLINGDISCOUNT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CC2F30)

namespace NPA::Store
{
	inline static constexpr unsigned int NXPToyBillingDiscount_TypeDefinitionIndex = 27227;

	class NXPToyBillingDiscount : public Il2CppObject
	{
	public:
		::NPA::Store::NXPToyBillingPeriod* period; // 0x10
		::System::Int32 cycles; // 0x18
		::NPA::Store::NXPToyBillingPrice* price; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_STORE_NXPTOYBILLINGDISCOUNT_.CTOR_OFFSET))(nullptr);
		}

	};
}

