#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CLANLOGINREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF16200)
#define MX_NETWORKPROTOCOL_CLANLOGINREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF16210)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ClanLoginRequest_TypeDefinitionIndex = 11484;

	class ClanLoginRequest : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANLOGINREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANLOGINREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}

