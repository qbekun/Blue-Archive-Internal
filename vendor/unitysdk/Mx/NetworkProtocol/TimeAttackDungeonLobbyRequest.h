#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONLOBBYREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4FBB0)
#define MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONLOBBYREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4FBC0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int TimeAttackDungeonLobbyRequest_TypeDefinitionIndex = 12156;

	class TimeAttackDungeonLobbyRequest : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONLOBBYREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONLOBBYREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}

