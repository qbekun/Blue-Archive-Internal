#pragma once
#include "../../unitysdk.h"

namespace NPA::Store { class NXPToyBillingPeriod; }
namespace NPA::Store { class NXPToyBillingSubscriptionIntroductory; }

#define NPA_STORE_NXPTOYBILLINGPRODUCT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CC2FB0)

namespace NPA::Store
{
	inline static constexpr unsigned int NXPToyBillingProduct_TypeDefinitionIndex = 27231;

	class NXPToyBillingProduct : public Il2CppObject
	{
	public:
		::System::String* localizedDescription; // 0x10
		::System::String* localizedTitle; // 0x18
		::System::String* productId; // 0x20
		::System::Int32 valid; // 0x28
		::System::String* type; // 0x30
		::System::String* skuDetailJsonStr; // 0x38
		::NPA::Store::NXPToyBillingPeriod* subscriptionPeriod; // 0x40
		::NPA::Store::NXPToyBillingSubscriptionIntroductory* subscriptionIntroductory; // 0x48
		::System::Boolean multiQuantityEnabled; // 0x50
		::System::Boolean multiProductEnabled; // 0x51
		::System::Int64 priceAmountMicros; // 0x58
		::System::String* priceCurrencyCode; // 0x60
		::System::String* localizedPrice; // 0x68
		::System::Int64 basePriceAmountMicros; // 0x70
		::System::String* basePriceCurrencyCode; // 0x78
		::System::String* localizedBasePrice; // 0x80
		::System::Int64 specialPriceAmountMicros; // 0x88
		::System::String* specialPriceCurrencyCode; // 0x90
		::System::String* localizedSpecialPrice; // 0x98

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_STORE_NXPTOYBILLINGPRODUCT_.CTOR_OFFSET))(nullptr);
		}

	};
}

