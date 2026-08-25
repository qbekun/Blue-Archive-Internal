#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CAMPAIGNLISTREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF145D0)
#define MX_NETWORKPROTOCOL_CAMPAIGNLISTREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF145E0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int CampaignListRequest_TypeDefinitionIndex = 11410;

	class CampaignListRequest : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNLISTREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNLISTREQUEST_.CTOR_OFFSET))(nullptr);
		}

	};
}

