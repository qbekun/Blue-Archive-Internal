#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_ARENACHECKSEASONCLOSEREWARDRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF11360)
#define MX_NETWORKPROTOCOL_ARENACHECKSEASONCLOSEREWARDRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF11370)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ArenaCheckSeasonCloseRewardResponse_TypeDefinitionIndex = 11302;

	class ArenaCheckSeasonCloseRewardResponse : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ARENACHECKSEASONCLOSEREWARDRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ARENACHECKSEASONCLOSEREWARDRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}

