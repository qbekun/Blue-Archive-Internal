#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_ELIMINATERAIDLOBBYREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF428E0)
#define MX_NETWORKPROTOCOL_ELIMINATERAIDLOBBYREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF428F0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int EliminateRaidLobbyRequest_TypeDefinitionIndex = 11641;

	class EliminateRaidLobbyRequest : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ELIMINATERAIDLOBBYREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ELIMINATERAIDLOBBYREQUEST_.CTOR_OFFSET))(nullptr);
		}

	};
}

