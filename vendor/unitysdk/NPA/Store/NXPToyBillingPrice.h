#pragma once
#include "../../unitysdk.h"

#define NPA_STORE_NXPTOYBILLINGPRICE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CC2F50)

namespace NPA::Store
{
	inline static constexpr unsigned int NXPToyBillingPrice_TypeDefinitionIndex = 27230;

	class NXPToyBillingPrice : public Il2CppObject
	{
	public:
		::System::String* localizedPrice; // 0x10
		::System::Int64 priceAmountMicros; // 0x18
		::System::String* priceCurrencyCode; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_STORE_NXPTOYBILLINGPRICE_.CTOR_OFFSET))(nullptr);
		}

	};
}

