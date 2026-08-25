#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_ACCOUNTINVALIDATETOKENRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF0FC20)
#define MX_NETWORKPROTOCOL_ACCOUNTINVALIDATETOKENRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF0FC30)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int AccountInvalidateTokenResponse_TypeDefinitionIndex = 11256;

	class AccountInvalidateTokenResponse : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTINVALIDATETOKENRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTINVALIDATETOKENRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}

