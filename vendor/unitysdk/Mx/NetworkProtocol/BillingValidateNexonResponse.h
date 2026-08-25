#pragma once
#include "../../unitysdk.h"

#define MX_NETWORKPROTOCOL_BILLINGVALIDATENEXONRESPONSE_SET_ORDER_ID_OFFSET UNITYSDK_OFFSET(0xF13290)
#define MX_NETWORKPROTOCOL_BILLINGVALIDATENEXONRESPONSE_SET_CHARACTER_ID_OFFSET UNITYSDK_OFFSET(0xF132A0)
#define MX_NETWORKPROTOCOL_BILLINGVALIDATENEXONRESPONSE_SET_SERVICE_PAYLOAD_OFFSET UNITYSDK_OFFSET(0xF132B0)
#define MX_NETWORKPROTOCOL_BILLINGVALIDATENEXONRESPONSE_SET_MARKET_TYPE_OFFSET UNITYSDK_OFFSET(0xF132C0)
#define MX_NETWORKPROTOCOL_BILLINGVALIDATENEXONRESPONSE_GET_ORDER_ID_OFFSET UNITYSDK_OFFSET(0xF132D0)
#define MX_NETWORKPROTOCOL_BILLINGVALIDATENEXONRESPONSE_GET_CHARACTER_ID_OFFSET UNITYSDK_OFFSET(0xF132E0)
#define MX_NETWORKPROTOCOL_BILLINGVALIDATENEXONRESPONSE_GET_USER_ID_OFFSET UNITYSDK_OFFSET(0xF132F0)
#define MX_NETWORKPROTOCOL_BILLINGVALIDATENEXONRESPONSE_GET_PURCHASE_TYPE_OFFSET UNITYSDK_OFFSET(0xF13300)
#define MX_NETWORKPROTOCOL_BILLINGVALIDATENEXONRESPONSE_SET_USER_ID_OFFSET UNITYSDK_OFFSET(0xF13310)
#define MX_NETWORKPROTOCOL_BILLINGVALIDATENEXONRESPONSE_GET_STAMP_TOKEN_OFFSET UNITYSDK_OFFSET(0xF13320)
#define MX_NETWORKPROTOCOL_BILLINGVALIDATENEXONRESPONSE_GET_PRICE_OFFSET UNITYSDK_OFFSET(0xF13330)
#define MX_NETWORKPROTOCOL_BILLINGVALIDATENEXONRESPONSE_GET_CURRENCY_OFFSET UNITYSDK_OFFSET(0xF13340)
#define MX_NETWORKPROTOCOL_BILLINGVALIDATENEXONRESPONSE_SET_PURCHASE_TYPE_OFFSET UNITYSDK_OFFSET(0xF13350)
#define MX_NETWORKPROTOCOL_BILLINGVALIDATENEXONRESPONSE_GET_PRODUCT_ID_OFFSET UNITYSDK_OFFSET(0xF13360)
#define MX_NETWORKPROTOCOL_BILLINGVALIDATENEXONRESPONSE_SET_CURRENCY_OFFSET UNITYSDK_OFFSET(0xF13370)
#define MX_NETWORKPROTOCOL_BILLINGVALIDATENEXONRESPONSE_SET_PRODUCT_ID_OFFSET UNITYSDK_OFFSET(0xF13380)
#define MX_NETWORKPROTOCOL_BILLINGVALIDATENEXONRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF13390)
#define MX_NETWORKPROTOCOL_BILLINGVALIDATENEXONRESPONSE_SET_PRICE_OFFSET UNITYSDK_OFFSET(0xF13410)
#define MX_NETWORKPROTOCOL_BILLINGVALIDATENEXONRESPONSE_GET_MARKET_TYPE_OFFSET UNITYSDK_OFFSET(0xF13420)
#define MX_NETWORKPROTOCOL_BILLINGVALIDATENEXONRESPONSE_GET_SERVICE_PAYLOAD_OFFSET UNITYSDK_OFFSET(0xF13430)
#define MX_NETWORKPROTOCOL_BILLINGVALIDATENEXONRESPONSE_SET_STAMP_TOKEN_OFFSET UNITYSDK_OFFSET(0xF13440)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int BillingValidateNexonResponse_TypeDefinitionIndex = 11359;

	class BillingValidateNexonResponse : public Il2CppObject
	{
	public:
		::System::String* _stamp_token_k__BackingField; // 0x10
		::System::String* _order_id_k__BackingField; // 0x18
		Il2CppObject* _product_id_k__BackingField; // 0x20
		::System::String* _user_id_k__BackingField; // 0x28
		::System::String* _character_id_k__BackingField; // 0x30
		::System::String* _service_payload_k__BackingField; // 0x38
		::System::String* _market_type_k__BackingField; // 0x40
		::System::String* _purchase_type_k__BackingField; // 0x48
		::System::String* _currency_k__BackingField; // 0x50
		::System::String* _price_k__BackingField; // 0x58

		::System::Void set_order_id(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_BILLINGVALIDATENEXONRESPONSE_SET_ORDER_ID_OFFSET))(str, nullptr);
		}

		::System::Void set_character_id(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_BILLINGVALIDATENEXONRESPONSE_SET_CHARACTER_ID_OFFSET))(str, nullptr);
		}

		::System::Void set_service_payload(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_BILLINGVALIDATENEXONRESPONSE_SET_SERVICE_PAYLOAD_OFFSET))(str, nullptr);
		}

		::System::Void set_market_type(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_BILLINGVALIDATENEXONRESPONSE_SET_MARKET_TYPE_OFFSET))(str, nullptr);
		}

		::System::String* get_order_id()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_BILLINGVALIDATENEXONRESPONSE_GET_ORDER_ID_OFFSET))(nullptr);
		}

		::System::String* get_character_id()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_BILLINGVALIDATENEXONRESPONSE_GET_CHARACTER_ID_OFFSET))(nullptr);
		}

		::System::String* get_user_id()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_BILLINGVALIDATENEXONRESPONSE_GET_USER_ID_OFFSET))(nullptr);
		}

		::System::String* get_purchase_type()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_BILLINGVALIDATENEXONRESPONSE_GET_PURCHASE_TYPE_OFFSET))(nullptr);
		}

		::System::Void set_user_id(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_BILLINGVALIDATENEXONRESPONSE_SET_USER_ID_OFFSET))(str, nullptr);
		}

		::System::String* get_stamp_token()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_BILLINGVALIDATENEXONRESPONSE_GET_STAMP_TOKEN_OFFSET))(nullptr);
		}

		::System::String* get_price()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_BILLINGVALIDATENEXONRESPONSE_GET_PRICE_OFFSET))(nullptr);
		}

		::System::String* get_currency()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_BILLINGVALIDATENEXONRESPONSE_GET_CURRENCY_OFFSET))(nullptr);
		}

		::System::Void set_purchase_type(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_BILLINGVALIDATENEXONRESPONSE_SET_PURCHASE_TYPE_OFFSET))(str, nullptr);
		}

		Il2CppObject* get_product_id()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_BILLINGVALIDATENEXONRESPONSE_GET_PRODUCT_ID_OFFSET))(nullptr);
		}

		::System::Void set_currency(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_BILLINGVALIDATENEXONRESPONSE_SET_CURRENCY_OFFSET))(str, nullptr);
		}

		::System::Void set_product_id(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_BILLINGVALIDATENEXONRESPONSE_SET_PRODUCT_ID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_BILLINGVALIDATENEXONRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_price(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_BILLINGVALIDATENEXONRESPONSE_SET_PRICE_OFFSET))(str, nullptr);
		}

		::System::String* get_market_type()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_BILLINGVALIDATENEXONRESPONSE_GET_MARKET_TYPE_OFFSET))(nullptr);
		}

		::System::String* get_service_payload()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_BILLINGVALIDATENEXONRESPONSE_GET_SERVICE_PAYLOAD_OFFSET))(nullptr);
		}

		::System::Void set_stamp_token(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_BILLINGVALIDATENEXONRESPONSE_SET_STAMP_TOKEN_OFFSET))(str, nullptr);
		}

	};
}

