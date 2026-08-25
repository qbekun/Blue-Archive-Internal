#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_SHOPPICKUPSELECTIONGACHABUYRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4F7F0)
#define MX_NETWORKPROTOCOL_SHOPPICKUPSELECTIONGACHABUYRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4F800)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ShopPickupSelectionGachaBuyResponse_TypeDefinitionIndex = 12141;

	class ShopPickupSelectionGachaBuyResponse : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPPICKUPSELECTIONGACHABUYRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPPICKUPSELECTIONGACHABUYRESPONSE_.CTOR_OFFSET))(nullptr);
		}

	};
}

