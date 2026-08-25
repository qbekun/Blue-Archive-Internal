#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class EquipmentDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_EQUIPMENTITEMLOCKRESPONSE_SET_EQUIPMENTDB_OFFSET UNITYSDK_OFFSET(0xF436E0)
#define MX_NETWORKPROTOCOL_EQUIPMENTITEMLOCKRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF436F0)
#define MX_NETWORKPROTOCOL_EQUIPMENTITEMLOCKRESPONSE_GET_EQUIPMENTDB_OFFSET UNITYSDK_OFFSET(0xF43700)
#define MX_NETWORKPROTOCOL_EQUIPMENTITEMLOCKRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF43710)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int EquipmentItemLockResponse_TypeDefinitionIndex = 11674;

	class EquipmentItemLockResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::EquipmentDB* _EquipmentDB_k__BackingField; // 0x50

		::System::Void set_EquipmentDB(::MX::GameLogic::DBModel::EquipmentDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::EquipmentDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EQUIPMENTITEMLOCKRESPONSE_SET_EQUIPMENTDB_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EQUIPMENTITEMLOCKRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::EquipmentDB* get_EquipmentDB()
		{
			return ((::MX::GameLogic::DBModel::EquipmentDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EQUIPMENTITEMLOCKRESPONSE_GET_EQUIPMENTDB_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EQUIPMENTITEMLOCKRESPONSE_.CTOR_OFFSET))(nullptr);
		}

	};
}

