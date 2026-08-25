#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_SHOPBUYGACHA2REQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4EA30)
#define MX_NETWORKPROTOCOL_SHOPBUYGACHA2REQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4EA40)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ShopBuyGacha2Request_TypeDefinitionIndex = 12111;

	class ShopBuyGacha2Request : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPBUYGACHA2REQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPBUYGACHA2REQUEST_.CTOR_OFFSET))(nullptr);
		}

	};
}

