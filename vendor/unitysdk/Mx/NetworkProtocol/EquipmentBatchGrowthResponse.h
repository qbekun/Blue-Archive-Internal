#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class GearDB; }
namespace MX::GameLogic::Parcel { class ParcelResultDB; }
namespace MX::GameLogic::DBModel { class ConsumeResultDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_EQUIPMENTBATCHGROWTHRESPONSE_GET_CONSUMERESULTDB_OFFSET UNITYSDK_OFFSET(0xF43880)
#define MX_NETWORKPROTOCOL_EQUIPMENTBATCHGROWTHRESPONSE_GET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF43890)
#define MX_NETWORKPROTOCOL_EQUIPMENTBATCHGROWTHRESPONSE_SET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF438A0)
#define MX_NETWORKPROTOCOL_EQUIPMENTBATCHGROWTHRESPONSE_SET_CONSUMERESULTDB_OFFSET UNITYSDK_OFFSET(0xF438B0)
#define MX_NETWORKPROTOCOL_EQUIPMENTBATCHGROWTHRESPONSE_GET_EQUIPMENTDBS_OFFSET UNITYSDK_OFFSET(0xF438C0)
#define MX_NETWORKPROTOCOL_EQUIPMENTBATCHGROWTHRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF438D0)
#define MX_NETWORKPROTOCOL_EQUIPMENTBATCHGROWTHRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF438E0)
#define MX_NETWORKPROTOCOL_EQUIPMENTBATCHGROWTHRESPONSE_GET_GEARDB_OFFSET UNITYSDK_OFFSET(0xF438F0)
#define MX_NETWORKPROTOCOL_EQUIPMENTBATCHGROWTHRESPONSE_SET_EQUIPMENTDBS_OFFSET UNITYSDK_OFFSET(0xF43900)
#define MX_NETWORKPROTOCOL_EQUIPMENTBATCHGROWTHRESPONSE_SET_GEARDB_OFFSET UNITYSDK_OFFSET(0xF43910)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int EquipmentBatchGrowthResponse_TypeDefinitionIndex = 11678;

	class EquipmentBatchGrowthResponse : public Il2CppObject
	{
	public:
		Il2CppObject* _EquipmentDBs_k__BackingField; // 0x50
		::MX::GameLogic::DBModel::GearDB* _GearDB_k__BackingField; // 0x58
		::MX::GameLogic::Parcel::ParcelResultDB* _ParcelResultDB_k__BackingField; // 0x60
		::MX::GameLogic::DBModel::ConsumeResultDB* _ConsumeResultDB_k__BackingField; // 0x68

		::MX::GameLogic::DBModel::ConsumeResultDB* get_ConsumeResultDB()
		{
			return ((::MX::GameLogic::DBModel::ConsumeResultDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EQUIPMENTBATCHGROWTHRESPONSE_GET_CONSUMERESULTDB_OFFSET))(nullptr);
		}

		::MX::GameLogic::Parcel::ParcelResultDB* get_ParcelResultDB()
		{
			return ((::MX::GameLogic::Parcel::ParcelResultDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EQUIPMENTBATCHGROWTHRESPONSE_GET_PARCELRESULTDB_OFFSET))(nullptr);
		}

		::System::Void set_ParcelResultDB(::MX::GameLogic::Parcel::ParcelResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EQUIPMENTBATCHGROWTHRESPONSE_SET_PARCELRESULTDB_OFFSET))(arg, nullptr);
		}

		::System::Void set_ConsumeResultDB(::MX::GameLogic::DBModel::ConsumeResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ConsumeResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EQUIPMENTBATCHGROWTHRESPONSE_SET_CONSUMERESULTDB_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_EquipmentDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EQUIPMENTBATCHGROWTHRESPONSE_GET_EQUIPMENTDBS_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EQUIPMENTBATCHGROWTHRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EQUIPMENTBATCHGROWTHRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::GearDB* get_GearDB()
		{
			return ((::MX::GameLogic::DBModel::GearDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EQUIPMENTBATCHGROWTHRESPONSE_GET_GEARDB_OFFSET))(nullptr);
		}

		::System::Void set_EquipmentDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EQUIPMENTBATCHGROWTHRESPONSE_SET_EQUIPMENTDBS_OFFSET))(arg, nullptr);
		}

		::System::Void set_GearDB(::MX::GameLogic::DBModel::GearDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::GearDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EQUIPMENTBATCHGROWTHRESPONSE_SET_GEARDB_OFFSET))(arg, nullptr);
		}

	};
}

