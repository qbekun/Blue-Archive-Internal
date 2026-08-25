#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_BILLINGPURCHASELISTBYYOSTARREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF12110)
#define MX_NETWORKPROTOCOL_BILLINGPURCHASELISTBYYOSTARREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF12120)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int BillingPurchaseListByYostarRequest_TypeDefinitionIndex = 11345;

	class BillingPurchaseListByYostarRequest : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_BILLINGPURCHASELISTBYYOSTARREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_BILLINGPURCHASELISTBYYOSTARREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}

