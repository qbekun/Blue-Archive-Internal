#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_ACCOUNTAUTH2REQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF0F350)
#define MX_NETWORKPROTOCOL_ACCOUNTAUTH2REQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF0F360)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int AccountAuth2Request_TypeDefinitionIndex = 11231;

	class AccountAuth2Request : public DelayPromise
	{
	public:
		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTAUTH2REQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTAUTH2REQUEST_.CTOR_OFFSET))(nullptr);
		}

	};
}

