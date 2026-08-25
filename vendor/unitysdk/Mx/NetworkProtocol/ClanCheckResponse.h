#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CLANCHECKRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF3EF80)
#define MX_NETWORKPROTOCOL_CLANCHECKRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF3EF90)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ClanCheckResponse_TypeDefinitionIndex = 11523;

	class ClanCheckResponse : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANCHECKRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANCHECKRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}

