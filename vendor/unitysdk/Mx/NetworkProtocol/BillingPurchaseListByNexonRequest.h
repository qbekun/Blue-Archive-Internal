#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_BILLINGPURCHASELISTBYNEXONREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF128B0)
#define MX_NETWORKPROTOCOL_BILLINGPURCHASELISTBYNEXONREQUEST_SET_ISTEENAGE_OFFSET UNITYSDK_OFFSET(0xF128C0)
#define MX_NETWORKPROTOCOL_BILLINGPURCHASELISTBYNEXONREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF128D0)
#define MX_NETWORKPROTOCOL_BILLINGPURCHASELISTBYNEXONREQUEST_GET_ISTEENAGE_OFFSET UNITYSDK_OFFSET(0xF128E0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int BillingPurchaseListByNexonRequest_TypeDefinitionIndex = 11353;

	class BillingPurchaseListByNexonRequest : public Il2CppObject
	{
	public:
		::System::Boolean _IsTeenage_k__BackingField; // 0x40

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_BILLINGPURCHASELISTBYNEXONREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_IsTeenage(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_BILLINGPURCHASELISTBYNEXONREQUEST_SET_ISTEENAGE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_BILLINGPURCHASELISTBYNEXONREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean get_IsTeenage()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_BILLINGPURCHASELISTBYNEXONREQUEST_GET_ISTEENAGE_OFFSET))(nullptr);
		}

	};
}

