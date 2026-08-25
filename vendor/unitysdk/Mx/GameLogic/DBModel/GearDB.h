#pragma once
#include "../../../unitysdk.h"

namespace MX::GameLogic::DBModel { class EquipmentDB; }
namespace FlatData { class ParcelType; }
namespace MX::GameLogic::DBModel { class GearDB; }

#define MX_GAMELOGIC_DBMODEL_GEARDB_GET_EXP_OFFSET UNITYSDK_OFFSET(0x1000370)
#define MX_GAMELOGIC_DBMODEL_GEARDB_SET_SLOTINDEX_OFFSET UNITYSDK_OFFSET(0x1000380)
#define MX_GAMELOGIC_DBMODEL_GEARDB_GET_TIER_OFFSET UNITYSDK_OFFSET(0x1000390)
#define MX_GAMELOGIC_DBMODEL_GEARDB_SET_SERVERID_OFFSET UNITYSDK_OFFSET(0x10003A0)
#define MX_GAMELOGIC_DBMODEL_GEARDB_GET_TOEQUIPMENTDB_OFFSET UNITYSDK_OFFSET(0x10003B0)
#define MX_GAMELOGIC_DBMODEL_GEARDB_.CTOR_OFFSET UNITYSDK_OFFSET(0x1000460)
#define MX_GAMELOGIC_DBMODEL_GEARDB_SET_EXP_OFFSET UNITYSDK_OFFSET(0x1000470)
#define MX_GAMELOGIC_DBMODEL_GEARDB_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x1000480)
#define MX_GAMELOGIC_DBMODEL_GEARDB_GET_PARCELINFOS_OFFSET UNITYSDK_OFFSET(0x1000490)
#define MX_GAMELOGIC_DBMODEL_GEARDB_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x1000580)
#define MX_GAMELOGIC_DBMODEL_GEARDB_SET_TIER_OFFSET UNITYSDK_OFFSET(0x1000590)
#define MX_GAMELOGIC_DBMODEL_GEARDB_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x10005A0)
#define MX_GAMELOGIC_DBMODEL_GEARDB_SET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x10005B0)
#define MX_GAMELOGIC_DBMODEL_GEARDB_SET_BOUNDCHARACTERSERVERID_OFFSET UNITYSDK_OFFSET(0x10005C0)
#define MX_GAMELOGIC_DBMODEL_GEARDB_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x10005D0)
#define MX_GAMELOGIC_DBMODEL_GEARDB_GET_SLOTINDEX_OFFSET UNITYSDK_OFFSET(0x10005E0)
#define MX_GAMELOGIC_DBMODEL_GEARDB_GET_SERVERID_OFFSET UNITYSDK_OFFSET(0x10005F0)
#define MX_GAMELOGIC_DBMODEL_GEARDB_CLONE_OFFSET UNITYSDK_OFFSET(0x1000600)
#define MX_GAMELOGIC_DBMODEL_GEARDB_CREATE_OFFSET UNITYSDK_OFFSET(0x1000690)
#define MX_GAMELOGIC_DBMODEL_GEARDB_GET_BOUNDCHARACTERSERVERID_OFFSET UNITYSDK_OFFSET(0x1000720)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int GearDB_TypeDefinitionIndex = 12633;

	class GearDB : public Il2CppObject
	{
	public:
		::System::Int64 _ServerId_k__BackingField; // 0x10
		::System::Int64 _UniqueId_k__BackingField; // 0x18
		::System::Int32 _Level_k__BackingField; // 0x20
		::System::Int64 _Exp_k__BackingField; // 0x28
		::System::Int32 _Tier_k__BackingField; // 0x30
		::System::Int64 _SlotIndex_k__BackingField; // 0x38
		::System::Int64 _BoundCharacterServerId_k__BackingField; // 0x40

		::System::Int64 get_Exp()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_GEARDB_GET_EXP_OFFSET))(nullptr);
		}

		::System::Void set_SlotIndex(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_GEARDB_SET_SLOTINDEX_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Tier()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_GEARDB_GET_TIER_OFFSET))(nullptr);
		}

		::System::Void set_ServerId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_GEARDB_SET_SERVERID_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::EquipmentDB* get_ToEquipmentDB()
		{
			return ((::MX::GameLogic::DBModel::EquipmentDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_GEARDB_GET_TOEQUIPMENTDB_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_GEARDB_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_Exp(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_GEARDB_SET_EXP_OFFSET))(arg, nullptr);
		}

		::System::Void set_Level(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_GEARDB_SET_LEVEL_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_ParcelInfos()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_GEARDB_GET_PARCELINFOS_OFFSET))(nullptr);
		}

		::System::Int32 get_Level()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_GEARDB_GET_LEVEL_OFFSET))(nullptr);
		}

		::System::Void set_Tier(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_GEARDB_SET_TIER_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_UniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_GEARDB_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::System::Void set_UniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_GEARDB_SET_UNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Void set_BoundCharacterServerId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_GEARDB_SET_BOUNDCHARACTERSERVERID_OFFSET))(arg, nullptr);
		}

		::FlatData::ParcelType* get_Type()
		{
			return ((::FlatData::ParcelType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_GEARDB_GET_TYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_SlotIndex()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_GEARDB_GET_SLOTINDEX_OFFSET))(nullptr);
		}

		::System::Int64 get_ServerId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_GEARDB_GET_SERVERID_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::GearDB* Clone()
		{
			return ((::MX::GameLogic::DBModel::GearDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_GEARDB_CLONE_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::GearDB* Create(::System::Int64 arg, ::System::Int64 arg2, ::System::Int64 arg3)
		{
			return ((::MX::GameLogic::DBModel::GearDB*(*)(::System::Int64, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_GEARDB_CREATE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Int64 get_BoundCharacterServerId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_GEARDB_GET_BOUNDCHARACTERSERVERID_OFFSET))(nullptr);
		}

	};
}

