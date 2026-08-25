#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_FRIENDCHECKRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF47320)
#define MX_NETWORKPROTOCOL_FRIENDCHECKRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF47330)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int FriendCheckResponse_TypeDefinitionIndex = 11816;

	class FriendCheckResponse : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_FRIENDCHECKRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_FRIENDCHECKRESPONSE_.CTOR_OFFSET))(nullptr);
		}

	};
}

