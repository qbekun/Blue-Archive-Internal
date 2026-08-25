#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CAMPAIGNENTERTACTICRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF14BE0)
#define MX_NETWORKPROTOCOL_CAMPAIGNENTERTACTICRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF14BF0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int CampaignEnterTacticResponse_TypeDefinitionIndex = 11427;

	class CampaignEnterTacticResponse : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNENTERTACTICRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNENTERTACTICRESPONSE_.CTOR_OFFSET))(nullptr);
		}

	};
}

