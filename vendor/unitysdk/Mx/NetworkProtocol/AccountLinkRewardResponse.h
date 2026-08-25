#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_ACCOUNTLINKREWARDRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF0FAD0)
#define MX_NETWORKPROTOCOL_ACCOUNTLINKREWARDRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF0FAE0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int AccountLinkRewardResponse_TypeDefinitionIndex = 11250;

	class AccountLinkRewardResponse : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTLINKREWARDRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTLINKREWARDRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}

