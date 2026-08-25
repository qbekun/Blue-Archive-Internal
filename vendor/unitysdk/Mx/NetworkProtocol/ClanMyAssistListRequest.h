#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CLANMYASSISTLISTREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF16C20)
#define MX_NETWORKPROTOCOL_CLANMYASSISTLISTREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF16C30)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ClanMyAssistListRequest_TypeDefinitionIndex = 11516;

	class ClanMyAssistListRequest : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANMYASSISTLISTREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANMYASSISTLISTREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}

