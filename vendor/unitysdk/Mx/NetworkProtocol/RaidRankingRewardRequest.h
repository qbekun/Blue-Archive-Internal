#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_RAIDRANKINGREWARDREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4D260)
#define MX_NETWORKPROTOCOL_RAIDRANKINGREWARDREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4D270)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int RaidRankingRewardRequest_TypeDefinitionIndex = 12041;

	class RaidRankingRewardRequest : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDRANKINGREWARDREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDRANKINGREWARDREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}

