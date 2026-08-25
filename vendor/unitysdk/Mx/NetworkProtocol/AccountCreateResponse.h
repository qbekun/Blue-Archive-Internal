#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_ACCOUNTCREATERESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF0F500)
#define MX_NETWORKPROTOCOL_ACCOUNTCREATERESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF0F510)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int AccountCreateResponse_TypeDefinitionIndex = 11234;

	class AccountCreateResponse : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTCREATERESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTCREATERESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}

