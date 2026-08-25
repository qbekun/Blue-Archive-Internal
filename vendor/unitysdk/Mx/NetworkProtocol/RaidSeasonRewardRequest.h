#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_RAIDSEASONREWARDREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4D2E0)
#define MX_NETWORKPROTOCOL_RAIDSEASONREWARDREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4D2F0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int RaidSeasonRewardRequest_TypeDefinitionIndex = 12043;

	class RaidSeasonRewardRequest : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDSEASONREWARDREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDSEASONREWARDREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}

