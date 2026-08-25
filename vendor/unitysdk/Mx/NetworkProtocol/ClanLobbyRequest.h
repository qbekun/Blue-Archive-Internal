#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CLANLOBBYREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF162A0)
#define MX_NETWORKPROTOCOL_CLANLOBBYREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF162B0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ClanLobbyRequest_TypeDefinitionIndex = 11486;

	class ClanLobbyRequest : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANLOBBYREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANLOBBYREQUEST_.CTOR_OFFSET))(nullptr);
		}

	};
}

