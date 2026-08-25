#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CLANQUITREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF16880)
#define MX_NETWORKPROTOCOL_CLANQUITREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF16890)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ClanQuitRequest_TypeDefinitionIndex = 11502;

	class ClanQuitRequest : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANQUITREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANQUITREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}

