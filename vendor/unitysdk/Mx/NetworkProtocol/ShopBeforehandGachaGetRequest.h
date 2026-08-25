#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_SHOPBEFOREHANDGACHAGETREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4F2A0)
#define MX_NETWORKPROTOCOL_SHOPBEFOREHANDGACHAGETREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4F2B0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ShopBeforehandGachaGetRequest_TypeDefinitionIndex = 12128;

	class ShopBeforehandGachaGetRequest : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPBEFOREHANDGACHAGETREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPBEFOREHANDGACHAGETREQUEST_.CTOR_OFFSET))(nullptr);
		}

	};
}

