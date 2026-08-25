#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_ACCOUNTAUTH2RESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF0F370)
#define MX_NETWORKPROTOCOL_ACCOUNTAUTH2RESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF0F380)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int AccountAuth2Response_TypeDefinitionIndex = 11232;

	class AccountAuth2Response : public <>c
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTAUTH2RESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTAUTH2RESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}

