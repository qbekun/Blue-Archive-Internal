#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_BILLINGCHECKCONDITIONCASHGOODSREQUEST_GET_PRODUCT_ID_OFFSET UNITYSDK_OFFSET(0xF12E20)
#define MX_NETWORKPROTOCOL_BILLINGCHECKCONDITIONCASHGOODSREQUEST_GET_USER_ID_OFFSET UNITYSDK_OFFSET(0xF12E30)
#define MX_NETWORKPROTOCOL_BILLINGCHECKCONDITIONCASHGOODSREQUEST_SET_USER_ID_OFFSET UNITYSDK_OFFSET(0xF12E40)
#define MX_NETWORKPROTOCOL_BILLINGCHECKCONDITIONCASHGOODSREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF12E50)
#define MX_NETWORKPROTOCOL_BILLINGCHECKCONDITIONCASHGOODSREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF12E60)
#define MX_NETWORKPROTOCOL_BILLINGCHECKCONDITIONCASHGOODSREQUEST_SET_PRODUCT_ID_OFFSET UNITYSDK_OFFSET(0xF12E70)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int BillingCheckConditionCashGoodsRequest_TypeDefinitionIndex = 11356;

	class BillingCheckConditionCashGoodsRequest : public Il2CppObject
	{
	public:
		::System::String* _user_id_k__BackingField; // 0x40
		::System::Int64 _product_id_k__BackingField; // 0x48

		::System::Int64 get_product_id()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_BILLINGCHECKCONDITIONCASHGOODSREQUEST_GET_PRODUCT_ID_OFFSET))(nullptr);
		}

		::System::String* get_user_id()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_BILLINGCHECKCONDITIONCASHGOODSREQUEST_GET_USER_ID_OFFSET))(nullptr);
		}

		::System::Void set_user_id(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_BILLINGCHECKCONDITIONCASHGOODSREQUEST_SET_USER_ID_OFFSET))(str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_BILLINGCHECKCONDITIONCASHGOODSREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_BILLINGCHECKCONDITIONCASHGOODSREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_product_id(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_BILLINGCHECKCONDITIONCASHGOODSREQUEST_SET_PRODUCT_ID_OFFSET))(arg, nullptr);
		}

	};
}

