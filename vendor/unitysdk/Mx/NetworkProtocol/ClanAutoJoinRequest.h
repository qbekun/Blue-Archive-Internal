#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CLANAUTOJOINREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF167E0)
#define MX_NETWORKPROTOCOL_CLANAUTOJOINREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF167F0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ClanAutoJoinRequest_TypeDefinitionIndex = 11500;

	class ClanAutoJoinRequest : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANAUTOJOINREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANAUTOJOINREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}

