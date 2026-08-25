#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_ELIMINATERAIDRANKINGINDEXREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF43340)
#define MX_NETWORKPROTOCOL_ELIMINATERAIDRANKINGINDEXREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF43350)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int EliminateRaidRankingIndexRequest_TypeDefinitionIndex = 11663;

	class EliminateRaidRankingIndexRequest : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ELIMINATERAIDRANKINGINDEXREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ELIMINATERAIDRANKINGINDEXREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}

