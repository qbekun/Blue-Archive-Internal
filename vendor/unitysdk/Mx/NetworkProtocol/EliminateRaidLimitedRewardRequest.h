#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_ELIMINATERAIDLIMITEDREWARDREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF43040)
#define MX_NETWORKPROTOCOL_ELIMINATERAIDLIMITEDREWARDREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF43050)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int EliminateRaidLimitedRewardRequest_TypeDefinitionIndex = 11655;

	class EliminateRaidLimitedRewardRequest : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ELIMINATERAIDLIMITEDREWARDREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ELIMINATERAIDLIMITEDREWARDREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}

