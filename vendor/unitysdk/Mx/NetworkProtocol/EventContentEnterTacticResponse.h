#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_EVENTCONTENTENTERTACTICRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF43CE0)
#define MX_NETWORKPROTOCOL_EVENTCONTENTENTERTACTICRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF43CF0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int EventContentEnterTacticResponse_TypeDefinitionIndex = 11688;

	class EventContentEnterTacticResponse : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTENTERTACTICRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTENTERTACTICRESPONSE_.CTOR_OFFSET))(nullptr);
		}

	};
}

