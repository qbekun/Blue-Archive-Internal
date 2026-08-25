#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CLANQUITRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF168A0)
#define MX_NETWORKPROTOCOL_CLANQUITRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF168B0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ClanQuitResponse_TypeDefinitionIndex = 11503;

	class ClanQuitResponse : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANQUITRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANQUITRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}

