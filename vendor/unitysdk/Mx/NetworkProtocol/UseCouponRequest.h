#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_USECOUPONREQUEST_SET_COUPONSERIAL_OFFSET UNITYSDK_OFFSET(0xF467B0)
#define MX_NETWORKPROTOCOL_USECOUPONREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF467C0)
#define MX_NETWORKPROTOCOL_USECOUPONREQUEST_GET_COUPONSERIAL_OFFSET UNITYSDK_OFFSET(0xF467D0)
#define MX_NETWORKPROTOCOL_USECOUPONREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF467E0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int UseCouponRequest_TypeDefinitionIndex = 11791;

	class UseCouponRequest : public Il2CppObject
	{
	public:
		::System::String* _CouponSerial_k__BackingField; // 0x40

		::System::Void set_CouponSerial(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_USECOUPONREQUEST_SET_COUPONSERIAL_OFFSET))(str, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_USECOUPONREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::String* get_CouponSerial()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_USECOUPONREQUEST_GET_COUPONSERIAL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_USECOUPONREQUEST_.CTOR_OFFSET))(nullptr);
		}

	};
}

