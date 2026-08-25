#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_FRIENDLISTREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF46890)
#define MX_NETWORKPROTOCOL_FRIENDLISTREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF468A0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int FriendListRequest_TypeDefinitionIndex = 11795;

	class FriendListRequest : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_FRIENDLISTREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_FRIENDLISTREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}

