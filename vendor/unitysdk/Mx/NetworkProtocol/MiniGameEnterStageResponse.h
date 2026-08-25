#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_MINIGAMEENTERSTAGERESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF482C0)
#define MX_NETWORKPROTOCOL_MINIGAMEENTERSTAGERESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF482D0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int MiniGameEnterStageResponse_TypeDefinitionIndex = 11862;

	class MiniGameEnterStageResponse : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMEENTERSTAGERESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMEENTERSTAGERESPONSE_.CTOR_OFFSET))(nullptr);
		}

	};
}

