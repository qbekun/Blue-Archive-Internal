#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_BILLINGPURCHASEFREEPRODUCTREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF127F0)
#define MX_NETWORKPROTOCOL_BILLINGPURCHASEFREEPRODUCTREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF12800)
#define MX_NETWORKPROTOCOL_BILLINGPURCHASEFREEPRODUCTREQUEST_GET_SHOPCASHID_OFFSET UNITYSDK_OFFSET(0xF12810)
#define MX_NETWORKPROTOCOL_BILLINGPURCHASEFREEPRODUCTREQUEST_SET_SHOPCASHID_OFFSET UNITYSDK_OFFSET(0xF12820)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int BillingPurchaseFreeProductRequest_TypeDefinitionIndex = 11351;

	class BillingPurchaseFreeProductRequest : public Il2CppObject
	{
	public:
		::System::Int64 _ShopCashId_k__BackingField; // 0x40

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_BILLINGPURCHASEFREEPRODUCTREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_BILLINGPURCHASEFREEPRODUCTREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_ShopCashId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_BILLINGPURCHASEFREEPRODUCTREQUEST_GET_SHOPCASHID_OFFSET))(nullptr);
		}

		::System::Void set_ShopCashId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_BILLINGPURCHASEFREEPRODUCTREQUEST_SET_SHOPCASHID_OFFSET))(arg, nullptr);
		}

	};
}

