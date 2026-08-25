#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_BILLINGCHECKCONDITIONCASHGOODSRESPONSE_SET_RESULT_OFFSET UNITYSDK_OFFSET(0xF12E80)
#define MX_NETWORKPROTOCOL_BILLINGCHECKCONDITIONCASHGOODSRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF12E90)
#define MX_NETWORKPROTOCOL_BILLINGCHECKCONDITIONCASHGOODSRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF12EA0)
#define MX_NETWORKPROTOCOL_BILLINGCHECKCONDITIONCASHGOODSRESPONSE_GET_RESULT_OFFSET UNITYSDK_OFFSET(0xF12EB0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int BillingCheckConditionCashGoodsResponse_TypeDefinitionIndex = 11357;

	class BillingCheckConditionCashGoodsResponse : public Il2CppObject
	{
	public:
		::System::Boolean _result_k__BackingField; // 0x50

		::System::Void set_result(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_BILLINGCHECKCONDITIONCASHGOODSRESPONSE_SET_RESULT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_BILLINGCHECKCONDITIONCASHGOODSRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_BILLINGCHECKCONDITIONCASHGOODSRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Boolean get_result()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_BILLINGCHECKCONDITIONCASHGOODSRESPONSE_GET_RESULT_OFFSET))(nullptr);
		}

	};
}

