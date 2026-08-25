#pragma once
#include "../../../unitysdk.h"

namespace MX::GameLogic::DBModel { class WeaponDB; }
namespace MX::GameLogic::DBModel { class GearDB; }
namespace MX::GameLogic::DBModel { class CostumeDB; }
namespace MX::GameLogic::DBModel { class CharacterDB; }

#define MX_GAMELOGIC_DBMODEL_ARENACHARACTERDB_GET_SERVERID_OFFSET UNITYSDK_OFFSET(0xFE2D10)
#define MX_GAMELOGIC_DBMODEL_ARENACHARACTERDB_SET_SERVERID_OFFSET UNITYSDK_OFFSET(0xFE2D20)
#define MX_GAMELOGIC_DBMODEL_ARENACHARACTERDB_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0xFE2D30)
#define MX_GAMELOGIC_DBMODEL_ARENACHARACTERDB_SET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0xFE2D40)
#define MX_GAMELOGIC_DBMODEL_ARENACHARACTERDB_GET_STARGRADE_OFFSET UNITYSDK_OFFSET(0xFE2D50)
#define MX_GAMELOGIC_DBMODEL_ARENACHARACTERDB_SET_STARGRADE_OFFSET UNITYSDK_OFFSET(0xFE2D60)
#define MX_GAMELOGIC_DBMODEL_ARENACHARACTERDB_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xFE2D70)
#define MX_GAMELOGIC_DBMODEL_ARENACHARACTERDB_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0xFE2D80)
#define MX_GAMELOGIC_DBMODEL_ARENACHARACTERDB_GET_PUBLICSKILLLEVEL_OFFSET UNITYSDK_OFFSET(0xFE2D90)
#define MX_GAMELOGIC_DBMODEL_ARENACHARACTERDB_SET_PUBLICSKILLLEVEL_OFFSET UNITYSDK_OFFSET(0xFE2DA0)
#define MX_GAMELOGIC_DBMODEL_ARENACHARACTERDB_GET_EXSKILLLEVEL_OFFSET UNITYSDK_OFFSET(0xFE2DB0)
#define MX_GAMELOGIC_DBMODEL_ARENACHARACTERDB_SET_EXSKILLLEVEL_OFFSET UNITYSDK_OFFSET(0xFE2DC0)
#define MX_GAMELOGIC_DBMODEL_ARENACHARACTERDB_GET_PASSIVESKILLLEVEL_OFFSET UNITYSDK_OFFSET(0xFE2DD0)
#define MX_GAMELOGIC_DBMODEL_ARENACHARACTERDB_SET_PASSIVESKILLLEVEL_OFFSET UNITYSDK_OFFSET(0xFE2DE0)
#define MX_GAMELOGIC_DBMODEL_ARENACHARACTERDB_GET_EXTRAPASSIVESKILLLEVEL_OFFSET UNITYSDK_OFFSET(0xFE2DF0)
#define MX_GAMELOGIC_DBMODEL_ARENACHARACTERDB_SET_EXTRAPASSIVESKILLLEVEL_OFFSET UNITYSDK_OFFSET(0xFE2E00)
#define MX_GAMELOGIC_DBMODEL_ARENACHARACTERDB_GET_LEADERSKILLLEVEL_OFFSET UNITYSDK_OFFSET(0xFE2E10)
#define MX_GAMELOGIC_DBMODEL_ARENACHARACTERDB_SET_LEADERSKILLLEVEL_OFFSET UNITYSDK_OFFSET(0xFE2E20)
#define MX_GAMELOGIC_DBMODEL_ARENACHARACTERDB_GET_SLOTINDEX_OFFSET UNITYSDK_OFFSET(0xFE2E30)
#define MX_GAMELOGIC_DBMODEL_ARENACHARACTERDB_SET_SLOTINDEX_OFFSET UNITYSDK_OFFSET(0xFE2E40)
#define MX_GAMELOGIC_DBMODEL_ARENACHARACTERDB_GET_EQUIPMENTDBS_OFFSET UNITYSDK_OFFSET(0xFE2E50)
#define MX_GAMELOGIC_DBMODEL_ARENACHARACTERDB_SET_EQUIPMENTDBS_OFFSET UNITYSDK_OFFSET(0xFE2E60)
#define MX_GAMELOGIC_DBMODEL_ARENACHARACTERDB_GET_FAVORRANKINFO_OFFSET UNITYSDK_OFFSET(0xFE2E70)
#define MX_GAMELOGIC_DBMODEL_ARENACHARACTERDB_SET_FAVORRANKINFO_OFFSET UNITYSDK_OFFSET(0xFE2E80)
#define MX_GAMELOGIC_DBMODEL_ARENACHARACTERDB_GET_POTENTIALSTATS_OFFSET UNITYSDK_OFFSET(0xFE2E90)
#define MX_GAMELOGIC_DBMODEL_ARENACHARACTERDB_SET_POTENTIALSTATS_OFFSET UNITYSDK_OFFSET(0xFE2EA0)
#define MX_GAMELOGIC_DBMODEL_ARENACHARACTERDB_GET_COMBATSTYLEINDEX_OFFSET UNITYSDK_OFFSET(0xFE2EB0)
#define MX_GAMELOGIC_DBMODEL_ARENACHARACTERDB_SET_COMBATSTYLEINDEX_OFFSET UNITYSDK_OFFSET(0xFE2EC0)
#define MX_GAMELOGIC_DBMODEL_ARENACHARACTERDB_GET_WEAPONDB_OFFSET UNITYSDK_OFFSET(0xFE2ED0)
#define MX_GAMELOGIC_DBMODEL_ARENACHARACTERDB_SET_WEAPONDB_OFFSET UNITYSDK_OFFSET(0xFE2EE0)
#define MX_GAMELOGIC_DBMODEL_ARENACHARACTERDB_GET_GEARDB_OFFSET UNITYSDK_OFFSET(0xFE2EF0)
#define MX_GAMELOGIC_DBMODEL_ARENACHARACTERDB_SET_GEARDB_OFFSET UNITYSDK_OFFSET(0xFE2F00)
#define MX_GAMELOGIC_DBMODEL_ARENACHARACTERDB_GET_COSTUMEDB_OFFSET UNITYSDK_OFFSET(0xFE2F10)
#define MX_GAMELOGIC_DBMODEL_ARENACHARACTERDB_SET_COSTUMEDB_OFFSET UNITYSDK_OFFSET(0xFE2F20)
#define MX_GAMELOGIC_DBMODEL_ARENACHARACTERDB_.CTOR_OFFSET UNITYSDK_OFFSET(0xFE2F30)
#define MX_GAMELOGIC_DBMODEL_ARENACHARACTERDB_.CTOR_OFFSET UNITYSDK_OFFSET(0xFE2FB0)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int ArenaCharacterDB_TypeDefinitionIndex = 12483;

	class ArenaCharacterDB : public Il2CppObject
	{
	public:
		::System::Int64 _ServerId_k__BackingField; // 0x10
		::System::Int64 _UniqueId_k__BackingField; // 0x18
		::System::Int32 _StarGrade_k__BackingField; // 0x20
		::System::Int32 _Level_k__BackingField; // 0x24
		::System::Int32 _PublicSkillLevel_k__BackingField; // 0x28
		::System::Int32 _ExSkillLevel_k__BackingField; // 0x2C
		::System::Int32 _PassiveSkillLevel_k__BackingField; // 0x30
		::System::Int32 _ExtraPassiveSkillLevel_k__BackingField; // 0x34
		::System::Int32 _LeaderSkillLevel_k__BackingField; // 0x38
		::System::Int32 _SlotIndex_k__BackingField; // 0x3C
		Il2CppObject* _EquipmentDBs_k__BackingField; // 0x40
		Il2CppObject* _FavorRankInfo_k__BackingField; // 0x48
		Il2CppObject* _PotentialStats_k__BackingField; // 0x50
		::System::Int32 _CombatStyleIndex_k__BackingField; // 0x58
		::MX::GameLogic::DBModel::WeaponDB* _WeaponDB_k__BackingField; // 0x60
		::MX::GameLogic::DBModel::GearDB* _GearDB_k__BackingField; // 0x68
		::MX::GameLogic::DBModel::CostumeDB* _CostumeDB_k__BackingField; // 0x70

		::System::Int64 get_ServerId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ARENACHARACTERDB_GET_SERVERID_OFFSET))(nullptr);
		}

		::System::Void set_ServerId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ARENACHARACTERDB_SET_SERVERID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_UniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ARENACHARACTERDB_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::System::Void set_UniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ARENACHARACTERDB_SET_UNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_StarGrade()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ARENACHARACTERDB_GET_STARGRADE_OFFSET))(nullptr);
		}

		::System::Void set_StarGrade(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ARENACHARACTERDB_SET_STARGRADE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Level()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ARENACHARACTERDB_GET_LEVEL_OFFSET))(nullptr);
		}

		::System::Void set_Level(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ARENACHARACTERDB_SET_LEVEL_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_PublicSkillLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ARENACHARACTERDB_GET_PUBLICSKILLLEVEL_OFFSET))(nullptr);
		}

		::System::Void set_PublicSkillLevel(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ARENACHARACTERDB_SET_PUBLICSKILLLEVEL_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ExSkillLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ARENACHARACTERDB_GET_EXSKILLLEVEL_OFFSET))(nullptr);
		}

		::System::Void set_ExSkillLevel(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ARENACHARACTERDB_SET_EXSKILLLEVEL_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_PassiveSkillLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ARENACHARACTERDB_GET_PASSIVESKILLLEVEL_OFFSET))(nullptr);
		}

		::System::Void set_PassiveSkillLevel(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ARENACHARACTERDB_SET_PASSIVESKILLLEVEL_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ExtraPassiveSkillLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ARENACHARACTERDB_GET_EXTRAPASSIVESKILLLEVEL_OFFSET))(nullptr);
		}

		::System::Void set_ExtraPassiveSkillLevel(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ARENACHARACTERDB_SET_EXTRAPASSIVESKILLLEVEL_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_LeaderSkillLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ARENACHARACTERDB_GET_LEADERSKILLLEVEL_OFFSET))(nullptr);
		}

		::System::Void set_LeaderSkillLevel(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ARENACHARACTERDB_SET_LEADERSKILLLEVEL_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_SlotIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ARENACHARACTERDB_GET_SLOTINDEX_OFFSET))(nullptr);
		}

		::System::Void set_SlotIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ARENACHARACTERDB_SET_SLOTINDEX_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_EquipmentDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ARENACHARACTERDB_GET_EQUIPMENTDBS_OFFSET))(nullptr);
		}

		::System::Void set_EquipmentDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ARENACHARACTERDB_SET_EQUIPMENTDBS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_FavorRankInfo()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ARENACHARACTERDB_GET_FAVORRANKINFO_OFFSET))(nullptr);
		}

		::System::Void set_FavorRankInfo(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ARENACHARACTERDB_SET_FAVORRANKINFO_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_PotentialStats()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ARENACHARACTERDB_GET_POTENTIALSTATS_OFFSET))(nullptr);
		}

		::System::Void set_PotentialStats(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ARENACHARACTERDB_SET_POTENTIALSTATS_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_CombatStyleIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ARENACHARACTERDB_GET_COMBATSTYLEINDEX_OFFSET))(nullptr);
		}

		::System::Void set_CombatStyleIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ARENACHARACTERDB_SET_COMBATSTYLEINDEX_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::WeaponDB* get_WeaponDB()
		{
			return ((::MX::GameLogic::DBModel::WeaponDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ARENACHARACTERDB_GET_WEAPONDB_OFFSET))(nullptr);
		}

		::System::Void set_WeaponDB(::MX::GameLogic::DBModel::WeaponDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::WeaponDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ARENACHARACTERDB_SET_WEAPONDB_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::GearDB* get_GearDB()
		{
			return ((::MX::GameLogic::DBModel::GearDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ARENACHARACTERDB_GET_GEARDB_OFFSET))(nullptr);
		}

		::System::Void set_GearDB(::MX::GameLogic::DBModel::GearDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::GearDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ARENACHARACTERDB_SET_GEARDB_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::CostumeDB* get_CostumeDB()
		{
			return ((::MX::GameLogic::DBModel::CostumeDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ARENACHARACTERDB_GET_COSTUMEDB_OFFSET))(nullptr);
		}

		::System::Void set_CostumeDB(::MX::GameLogic::DBModel::CostumeDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::CostumeDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ARENACHARACTERDB_SET_COSTUMEDB_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ARENACHARACTERDB_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::GameLogic::DBModel::CharacterDB* arg, Il2CppObject* arg2, Il2CppObject* arg3, ::MX::GameLogic::DBModel::WeaponDB* arg4, ::MX::GameLogic::DBModel::GearDB* arg5, ::MX::GameLogic::DBModel::CostumeDB* arg6, ::System::Int32 arg7, ::System::Int32 arg8)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::CharacterDB*, Il2CppObject*, Il2CppObject*, ::MX::GameLogic::DBModel::WeaponDB*, ::MX::GameLogic::DBModel::GearDB*, ::MX::GameLogic::DBModel::CostumeDB*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ARENACHARACTERDB_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, nullptr);
		}

	};
}

