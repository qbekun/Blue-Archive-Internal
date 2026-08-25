#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_FRIENDGETIDCARDREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF46CE0)
#define MX_NETWORKPROTOCOL_FRIENDGETIDCARDREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF46CF0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int FriendGetIdCardRequest_TypeDefinitionIndex = 11801;

	class FriendGetIdCardRequest : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_FRIENDGETIDCARDREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_FRIENDGETIDCARDREQUEST_.CTOR_OFFSET))(nullptr);
		}

	};
}

