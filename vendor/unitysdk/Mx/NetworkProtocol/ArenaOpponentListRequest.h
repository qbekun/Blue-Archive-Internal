#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_ARENAOPPONENTLISTREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF10CA0)
#define MX_NETWORKPROTOCOL_ARENAOPPONENTLISTREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF10CB0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ArenaOpponentListRequest_TypeDefinitionIndex = 11283;

	class ArenaOpponentListRequest : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ARENAOPPONENTLISTREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ARENAOPPONENTLISTREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}

