#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_USECOUPONRESPONSE_GET_COUPONCOMPLETEREWARDRECEIVED_OFFSET UNITYSDK_OFFSET(0xF467F0)
#define MX_NETWORKPROTOCOL_USECOUPONRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF46800)
#define MX_NETWORKPROTOCOL_USECOUPONRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF46810)
#define MX_NETWORKPROTOCOL_USECOUPONRESPONSE_SET_COUPONCOMPLETEREWARDRECEIVED_OFFSET UNITYSDK_OFFSET(0xF46820)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int UseCouponResponse_TypeDefinitionIndex = 11792;

	class UseCouponResponse : public Il2CppObject
	{
	public:
		::System::Boolean _CouponCompleteRewardReceived_k__BackingField; // 0x50

		::System::Boolean get_CouponCompleteRewardReceived()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_USECOUPONRESPONSE_GET_COUPONCOMPLETEREWARDRECEIVED_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_USECOUPONRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_USECOUPONRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_CouponCompleteRewardReceived(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_USECOUPONRESPONSE_SET_COUPONCOMPLETEREWARDRECEIVED_OFFSET))(arg, nullptr);
		}

	};
}

