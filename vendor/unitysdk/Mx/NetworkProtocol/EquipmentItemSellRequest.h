#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_EQUIPMENTITEMSELLREQUEST_SET_TARGETSERVERIDS_OFFSET UNITYSDK_OFFSET(0xF43400)
#define MX_NETWORKPROTOCOL_EQUIPMENTITEMSELLREQUEST_GET_TARGETSERVERIDS_OFFSET UNITYSDK_OFFSET(0xF43410)
#define MX_NETWORKPROTOCOL_EQUIPMENTITEMSELLREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF43420)
#define MX_NETWORKPROTOCOL_EQUIPMENTITEMSELLREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF43430)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int EquipmentItemSellRequest_TypeDefinitionIndex = 11667;

	class EquipmentItemSellRequest : public Il2CppObject
	{
	public:
		Il2CppObject* _TargetServerIds_k__BackingField; // 0x40

		::System::Void set_TargetServerIds(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EQUIPMENTITEMSELLREQUEST_SET_TARGETSERVERIDS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_TargetServerIds()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EQUIPMENTITEMSELLREQUEST_GET_TARGETSERVERIDS_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EQUIPMENTITEMSELLREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EQUIPMENTITEMSELLREQUEST_.CTOR_OFFSET))(nullptr);
		}

	};
}

