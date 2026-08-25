#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_EVENTCONTENTPERMANENTLISTREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF45F10)
#define MX_NETWORKPROTOCOL_EVENTCONTENTPERMANENTLISTREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF45F20)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int EventContentPermanentListRequest_TypeDefinitionIndex = 11765;

	class EventContentPermanentListRequest : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTPERMANENTLISTREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTPERMANENTLISTREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}

