#pragma once
#include "../../unitysdk.h"

#define MX_NETWORKPROTOCOL_BILLINGFINISHNEXONRESPONSE_SET_STAMP_TOKEN_OFFSET UNITYSDK_OFFSET(0xF13450)
#define MX_NETWORKPROTOCOL_BILLINGFINISHNEXONRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF13460)
#define MX_NETWORKPROTOCOL_BILLINGFINISHNEXONRESPONSE_GET_STAMP_TOKEN_OFFSET UNITYSDK_OFFSET(0xF13470)
#define MX_NETWORKPROTOCOL_BILLINGFINISHNEXONRESPONSE_SET_PRODUCT_ID_OFFSET UNITYSDK_OFFSET(0xF13480)
#define MX_NETWORKPROTOCOL_BILLINGFINISHNEXONRESPONSE_GET_PRODUCT_ID_OFFSET UNITYSDK_OFFSET(0xF13490)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int BillingFinishNexonResponse_TypeDefinitionIndex = 11360;

	class BillingFinishNexonResponse : public Il2CppObject
	{
	public:
		::System::String* _stamp_token_k__BackingField; // 0x10
		::System::String* _product_id_k__BackingField; // 0x18

		::System::Void set_stamp_token(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_BILLINGFINISHNEXONRESPONSE_SET_STAMP_TOKEN_OFFSET))(str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_BILLINGFINISHNEXONRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::System::String* get_stamp_token()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_BILLINGFINISHNEXONRESPONSE_GET_STAMP_TOKEN_OFFSET))(nullptr);
		}

		::System::Void set_product_id(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_BILLINGFINISHNEXONRESPONSE_SET_PRODUCT_ID_OFFSET))(str, nullptr);
		}

		::System::String* get_product_id()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_BILLINGFINISHNEXONRESPONSE_GET_PRODUCT_ID_OFFSET))(nullptr);
		}

	};
}

