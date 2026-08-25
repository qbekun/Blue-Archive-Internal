#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_EQUIPMENTITEMLISTRESPONSE_SET_EQUIPMENTDBS_OFFSET UNITYSDK_OFFSET(0xF433C0)
#define MX_NETWORKPROTOCOL_EQUIPMENTITEMLISTRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF433D0)
#define MX_NETWORKPROTOCOL_EQUIPMENTITEMLISTRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF433E0)
#define MX_NETWORKPROTOCOL_EQUIPMENTITEMLISTRESPONSE_GET_EQUIPMENTDBS_OFFSET UNITYSDK_OFFSET(0xF433F0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int EquipmentItemListResponse_TypeDefinitionIndex = 11666;

	class EquipmentItemListResponse : public Il2CppObject
	{
	public:
		Il2CppObject* _EquipmentDBs_k__BackingField; // 0x50

		::System::Void set_EquipmentDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EQUIPMENTITEMLISTRESPONSE_SET_EQUIPMENTDBS_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EQUIPMENTITEMLISTRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EQUIPMENTITEMLISTRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* get_EquipmentDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EQUIPMENTITEMLISTRESPONSE_GET_EQUIPMENTDBS_OFFSET))(nullptr);
		}

	};
}

