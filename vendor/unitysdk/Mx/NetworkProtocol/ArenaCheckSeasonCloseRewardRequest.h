#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_ARENACHECKSEASONCLOSEREWARDREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF11340)
#define MX_NETWORKPROTOCOL_ARENACHECKSEASONCLOSEREWARDREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF11350)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ArenaCheckSeasonCloseRewardRequest_TypeDefinitionIndex = 11301;

	class ArenaCheckSeasonCloseRewardRequest : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ARENACHECKSEASONCLOSEREWARDREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ARENACHECKSEASONCLOSEREWARDREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}

