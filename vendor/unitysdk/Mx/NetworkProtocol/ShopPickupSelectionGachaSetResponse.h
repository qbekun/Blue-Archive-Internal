#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_SHOPPICKUPSELECTIONGACHASETRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4F770)
#define MX_NETWORKPROTOCOL_SHOPPICKUPSELECTIONGACHASETRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4F780)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ShopPickupSelectionGachaSetResponse_TypeDefinitionIndex = 12139;

	class ShopPickupSelectionGachaSetResponse : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPPICKUPSELECTIONGACHASETRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPPICKUPSELECTIONGACHASETRESPONSE_.CTOR_OFFSET))(nullptr);
		}

	};
}

