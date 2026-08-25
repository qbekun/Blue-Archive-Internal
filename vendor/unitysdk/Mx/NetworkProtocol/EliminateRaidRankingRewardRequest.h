#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_ELIMINATERAIDRANKINGREWARDREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF42F40)
#define MX_NETWORKPROTOCOL_ELIMINATERAIDRANKINGREWARDREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF42F50)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int EliminateRaidRankingRewardRequest_TypeDefinitionIndex = 11651;

	class EliminateRaidRankingRewardRequest : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ELIMINATERAIDRANKINGREWARDREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ELIMINATERAIDRANKINGREWARDREQUEST_.CTOR_OFFSET))(nullptr);
		}

	};
}

