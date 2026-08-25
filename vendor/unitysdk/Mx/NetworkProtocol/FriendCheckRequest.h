#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_FRIENDCHECKREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF47300)
#define MX_NETWORKPROTOCOL_FRIENDCHECKREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF47310)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int FriendCheckRequest_TypeDefinitionIndex = 11815;

	class FriendCheckRequest : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_FRIENDCHECKREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_FRIENDCHECKREQUEST_.CTOR_OFFSET))(nullptr);
		}

	};
}

