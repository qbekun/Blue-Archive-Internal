#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_STICKERLOGINREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4F970)
#define MX_NETWORKPROTOCOL_STICKERLOGINREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4F980)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int StickerLoginRequest_TypeDefinitionIndex = 12148;

	class StickerLoginRequest : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_STICKERLOGINREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_STICKERLOGINREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}

