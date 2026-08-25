#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_MINIGAMEDEFENSEENTERBATTLERESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF49560)
#define MX_NETWORKPROTOCOL_MINIGAMEDEFENSEENTERBATTLERESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF49570)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int MiniGameDefenseEnterBattleResponse_TypeDefinitionIndex = 11910;

	class MiniGameDefenseEnterBattleResponse : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMEDEFENSEENTERBATTLERESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMEDEFENSEENTERBATTLERESPONSE_.CTOR_OFFSET))(nullptr);
		}

	};
}

