#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class BillingPurchaseListByNexonResponse; }
namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define BILLINGPURCHASELISTBYNEXONRESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0xC482C0)
#define BILLINGPURCHASELISTBYNEXONRESPONSEMESSAGE_GET_RESPONSE_OFFSET UNITYSDK_OFFSET(0xC48300)
#define BILLINGPURCHASELISTBYNEXONRESPONSEMESSAGE_SET_RESPONSE_OFFSET UNITYSDK_OFFSET(0xC48310)
#define BILLINGPURCHASELISTBYNEXONRESPONSEMESSAGE_SET_ISTEENAGE_OFFSET UNITYSDK_OFFSET(0xC48320)
#define BILLINGPURCHASELISTBYNEXONRESPONSEMESSAGE_GET_ISTEENAGE_OFFSET UNITYSDK_OFFSET(0xC48330)

	inline static constexpr unsigned int BillingPurchaseListByNexonResponseMessage_TypeDefinitionIndex = 8921;

	class BillingPurchaseListByNexonResponseMessage : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::BillingPurchaseListByNexonResponse* _Response_k__BackingField; // 0x20
		::System::Boolean _IsTeenage_k__BackingField; // 0x28

		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg, ::MX::NetworkProtocol::BillingPurchaseListByNexonResponse* arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::MX::NetworkProtocol::BillingPurchaseListByNexonResponse*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BILLINGPURCHASELISTBYNEXONRESPONSEMESSAGE_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::MX::NetworkProtocol::BillingPurchaseListByNexonResponse* get_Response()
		{
			return ((::MX::NetworkProtocol::BillingPurchaseListByNexonResponse*(*)(::PVOID))((::PBYTE)hIl2Cpp + BILLINGPURCHASELISTBYNEXONRESPONSEMESSAGE_GET_RESPONSE_OFFSET))(nullptr);
		}

		::System::Void set_Response(::MX::NetworkProtocol::BillingPurchaseListByNexonResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::BillingPurchaseListByNexonResponse*, ::PVOID))((::PBYTE)hIl2Cpp + BILLINGPURCHASELISTBYNEXONRESPONSEMESSAGE_SET_RESPONSE_OFFSET))(arg, nullptr);
		}

		::System::Void set_IsTeenage(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BILLINGPURCHASELISTBYNEXONRESPONSEMESSAGE_SET_ISTEENAGE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsTeenage()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BILLINGPURCHASELISTBYNEXONRESPONSEMESSAGE_GET_ISTEENAGE_OFFSET))(nullptr);
		}

	};

