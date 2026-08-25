#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_ACCOUNTVERIFYADULTCHECKRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF0FC60)
#define MX_NETWORKPROTOCOL_ACCOUNTVERIFYADULTCHECKRESPONSE_GET_CHECKADULTAGREE_OFFSET UNITYSDK_OFFSET(0xF0FC70)
#define MX_NETWORKPROTOCOL_ACCOUNTVERIFYADULTCHECKRESPONSE_SET_CHECKADULTAGREE_OFFSET UNITYSDK_OFFSET(0xF0FC80)
#define MX_NETWORKPROTOCOL_ACCOUNTVERIFYADULTCHECKRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF0FC90)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int AccountVerifyAdultCheckResponse_TypeDefinitionIndex = 11258;

	class AccountVerifyAdultCheckResponse : public Il2CppObject
	{
	public:
		::System::Boolean _CheckAdultAgree_k__BackingField; // 0x50

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTVERIFYADULTCHECKRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean get_CheckAdultAgree()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTVERIFYADULTCHECKRESPONSE_GET_CHECKADULTAGREE_OFFSET))(nullptr);
		}

		::System::Void set_CheckAdultAgree(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTVERIFYADULTCHECKRESPONSE_SET_CHECKADULTAGREE_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTVERIFYADULTCHECKRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}

