#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_FRIENDSETIDCARDRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF46EE0)
#define MX_NETWORKPROTOCOL_FRIENDSETIDCARDRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF46EF0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int FriendSetIdCardResponse_TypeDefinitionIndex = 11804;

	class FriendSetIdCardResponse : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_FRIENDSETIDCARDRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_FRIENDSETIDCARDRESPONSE_.CTOR_OFFSET))(nullptr);
		}

	};
}

