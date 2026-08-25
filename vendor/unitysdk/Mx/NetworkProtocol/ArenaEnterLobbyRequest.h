#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_ARENAENTERLOBBYREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF10B20)
#define MX_NETWORKPROTOCOL_ARENAENTERLOBBYREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF10B30)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ArenaEnterLobbyRequest_TypeDefinitionIndex = 11277;

	class ArenaEnterLobbyRequest : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ARENAENTERLOBBYREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ARENAENTERLOBBYREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}

