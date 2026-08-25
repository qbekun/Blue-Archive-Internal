#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_EVENTLISTREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF466D0)
#define MX_NETWORKPROTOCOL_EVENTLISTREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF466E0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int EventListRequest_TypeDefinitionIndex = 11787;

	class EventListRequest : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTLISTREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTLISTREQUEST_.CTOR_OFFSET))(nullptr);
		}

	};
}

