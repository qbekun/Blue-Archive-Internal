#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_EQUIPMENTITEMLISTREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF433A0)
#define MX_NETWORKPROTOCOL_EQUIPMENTITEMLISTREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF433B0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int EquipmentItemListRequest_TypeDefinitionIndex = 11665;

	class EquipmentItemListRequest : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EQUIPMENTITEMLISTREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EQUIPMENTITEMLISTREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}

