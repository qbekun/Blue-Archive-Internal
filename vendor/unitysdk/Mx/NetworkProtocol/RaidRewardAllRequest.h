#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_RAIDREWARDALLREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4D180)
#define MX_NETWORKPROTOCOL_RAIDREWARDALLREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4D190)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int RaidRewardAllRequest_TypeDefinitionIndex = 12037;

	class RaidRewardAllRequest : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDREWARDALLREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDREWARDALLREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}

