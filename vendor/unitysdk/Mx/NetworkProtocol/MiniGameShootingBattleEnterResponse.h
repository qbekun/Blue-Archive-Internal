#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_MINIGAMESHOOTINGBATTLEENTERRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF486C0)
#define MX_NETWORKPROTOCOL_MINIGAMESHOOTINGBATTLEENTERRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF486D0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int MiniGameShootingBattleEnterResponse_TypeDefinitionIndex = 11874;

	class MiniGameShootingBattleEnterResponse : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMESHOOTINGBATTLEENTERRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMESHOOTINGBATTLEENTERRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}

