#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class BillingPurchaseCashShopVerifyByNexonResponse; }
namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define BILLINGPURCHASECASHSHOPVERIFYBYNEXONRESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0xC47B00)
#define BILLINGPURCHASECASHSHOPVERIFYBYNEXONRESPONSEMESSAGE_SET_ISTEENAGE_OFFSET UNITYSDK_OFFSET(0xC47B50)
#define BILLINGPURCHASECASHSHOPVERIFYBYNEXONRESPONSEMESSAGE_GET_RESPONSE_OFFSET UNITYSDK_OFFSET(0xC47B60)
#define BILLINGPURCHASECASHSHOPVERIFYBYNEXONRESPONSEMESSAGE_SET_SHOPCASHID_OFFSET UNITYSDK_OFFSET(0xC47B70)
#define BILLINGPURCHASECASHSHOPVERIFYBYNEXONRESPONSEMESSAGE_GET_SHOPCASHID_OFFSET UNITYSDK_OFFSET(0xC47B80)
#define BILLINGPURCHASECASHSHOPVERIFYBYNEXONRESPONSEMESSAGE_SET_RESPONSE_OFFSET UNITYSDK_OFFSET(0xC47B90)
#define BILLINGPURCHASECASHSHOPVERIFYBYNEXONRESPONSEMESSAGE_GET_ISTEENAGE_OFFSET UNITYSDK_OFFSET(0xC47BA0)

	inline static constexpr unsigned int BillingPurchaseCashShopVerifyByNexonResponseMessage_TypeDefinitionIndex = 8918;

	class BillingPurchaseCashShopVerifyByNexonResponseMessage : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::BillingPurchaseCashShopVerifyByNexonResponse* _Response_k__BackingField; // 0x20
		::System::Boolean _IsTeenage_k__BackingField; // 0x28
		::System::Int64 _ShopCashId_k__BackingField; // 0x30

		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg, ::MX::NetworkProtocol::BillingPurchaseCashShopVerifyByNexonResponse* arg2, ::System::Boolean arg3, ::System::Int64 arg4)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::MX::NetworkProtocol::BillingPurchaseCashShopVerifyByNexonResponse*, ::System::Boolean, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + BILLINGPURCHASECASHSHOPVERIFYBYNEXONRESPONSEMESSAGE_.CTOR_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void set_IsTeenage(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BILLINGPURCHASECASHSHOPVERIFYBYNEXONRESPONSEMESSAGE_SET_ISTEENAGE_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::BillingPurchaseCashShopVerifyByNexonResponse* get_Response()
		{
			return ((::MX::NetworkProtocol::BillingPurchaseCashShopVerifyByNexonResponse*(*)(::PVOID))((::PBYTE)hIl2Cpp + BILLINGPURCHASECASHSHOPVERIFYBYNEXONRESPONSEMESSAGE_GET_RESPONSE_OFFSET))(nullptr);
		}

		::System::Void set_ShopCashId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + BILLINGPURCHASECASHSHOPVERIFYBYNEXONRESPONSEMESSAGE_SET_SHOPCASHID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_ShopCashId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + BILLINGPURCHASECASHSHOPVERIFYBYNEXONRESPONSEMESSAGE_GET_SHOPCASHID_OFFSET))(nullptr);
		}

		::System::Void set_Response(::MX::NetworkProtocol::BillingPurchaseCashShopVerifyByNexonResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::BillingPurchaseCashShopVerifyByNexonResponse*, ::PVOID))((::PBYTE)hIl2Cpp + BILLINGPURCHASECASHSHOPVERIFYBYNEXONRESPONSEMESSAGE_SET_RESPONSE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsTeenage()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BILLINGPURCHASECASHSHOPVERIFYBYNEXONRESPONSEMESSAGE_GET_ISTEENAGE_OFFSET))(nullptr);
		}

	};

