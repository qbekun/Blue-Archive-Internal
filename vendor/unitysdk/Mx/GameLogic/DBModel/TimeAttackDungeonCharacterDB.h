#pragma once
#include "../../../unitysdk.h"

namespace MX::GameLogic::DBModel { class WeaponDB; }
namespace MX::GameLogic::DBModel { class CharacterDB; }
namespace MX::GameLogic::DBModel { class AssistCharacterDB; }

#define MX_GAMELOGIC_DBMODEL_TIMEATTACKDUNGEONCHARACTERDB_GET_SERVERID_OFFSET UNITYSDK_OFFSET(0x100F5F0)
#define MX_GAMELOGIC_DBMODEL_TIMEATTACKDUNGEONCHARACTERDB_SET_SERVERID_OFFSET UNITYSDK_OFFSET(0x100F600)
#define MX_GAMELOGIC_DBMODEL_TIMEATTACKDUNGEONCHARACTERDB_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x100F610)
#define MX_GAMELOGIC_DBMODEL_TIMEATTACKDUNGEONCHARACTERDB_SET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x100F620)
#define MX_GAMELOGIC_DBMODEL_TIMEATTACKDUNGEONCHARACTERDB_GET_COSTUMEID_OFFSET UNITYSDK_OFFSET(0x100F630)
#define MX_GAMELOGIC_DBMODEL_TIMEATTACKDUNGEONCHARACTERDB_SET_COSTUMEID_OFFSET UNITYSDK_OFFSET(0x100F640)
#define MX_GAMELOGIC_DBMODEL_TIMEATTACKDUNGEONCHARACTERDB_GET_STARGRADE_OFFSET UNITYSDK_OFFSET(0x100F650)
#define MX_GAMELOGIC_DBMODEL_TIMEATTACKDUNGEONCHARACTERDB_SET_STARGRADE_OFFSET UNITYSDK_OFFSET(0x100F660)
#define MX_GAMELOGIC_DBMODEL_TIMEATTACKDUNGEONCHARACTERDB_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x100F670)
#define MX_GAMELOGIC_DBMODEL_TIMEATTACKDUNGEONCHARACTERDB_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x100F680)
#define MX_GAMELOGIC_DBMODEL_TIMEATTACKDUNGEONCHARACTERDB_GET_HASWEAPON_OFFSET UNITYSDK_OFFSET(0x100F690)
#define MX_GAMELOGIC_DBMODEL_TIMEATTACKDUNGEONCHARACTERDB_SET_HASWEAPON_OFFSET UNITYSDK_OFFSET(0x100F6A0)
#define MX_GAMELOGIC_DBMODEL_TIMEATTACKDUNGEONCHARACTERDB_GET_WEAPONDB_OFFSET UNITYSDK_OFFSET(0x100F6B0)
#define MX_GAMELOGIC_DBMODEL_TIMEATTACKDUNGEONCHARACTERDB_SET_WEAPONDB_OFFSET UNITYSDK_OFFSET(0x100F6C0)
#define MX_GAMELOGIC_DBMODEL_TIMEATTACKDUNGEONCHARACTERDB_GET_ISASSIST_OFFSET UNITYSDK_OFFSET(0x100F6D0)
#define MX_GAMELOGIC_DBMODEL_TIMEATTACKDUNGEONCHARACTERDB_SET_ISASSIST_OFFSET UNITYSDK_OFFSET(0x100F6E0)
#define MX_GAMELOGIC_DBMODEL_TIMEATTACKDUNGEONCHARACTERDB_GET_COMBATSTYLEINDEX_OFFSET UNITYSDK_OFFSET(0x100F6F0)
#define MX_GAMELOGIC_DBMODEL_TIMEATTACKDUNGEONCHARACTERDB_SET_COMBATSTYLEINDEX_OFFSET UNITYSDK_OFFSET(0x100F700)
#define MX_GAMELOGIC_DBMODEL_TIMEATTACKDUNGEONCHARACTERDB_.CTOR_OFFSET UNITYSDK_OFFSET(0x100F710)
#define MX_GAMELOGIC_DBMODEL_TIMEATTACKDUNGEONCHARACTERDB_.CTOR_OFFSET UNITYSDK_OFFSET(0x100F720)
#define MX_GAMELOGIC_DBMODEL_TIMEATTACKDUNGEONCHARACTERDB_.CTOR_OFFSET UNITYSDK_OFFSET(0x100F7A0)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int TimeAttackDungeonCharacterDB_TypeDefinitionIndex = 12736;

	class TimeAttackDungeonCharacterDB : public Il2CppObject
	{
	public:
		::System::Int64 _ServerId_k__BackingField; // 0x10
		::System::Int64 _UniqueId_k__BackingField; // 0x18
		::System::Int64 _CostumeId_k__BackingField; // 0x20
		::System::Int32 _StarGrade_k__BackingField; // 0x28
		::System::Int32 _Level_k__BackingField; // 0x2C
		::System::Boolean _HasWeapon_k__BackingField; // 0x30
		::MX::GameLogic::DBModel::WeaponDB* _WeaponDB_k__BackingField; // 0x38
		::System::Boolean _IsAssist_k__BackingField; // 0x40
		::System::Int32 _CombatStyleIndex_k__BackingField; // 0x44

		::System::Int64 get_ServerId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_TIMEATTACKDUNGEONCHARACTERDB_GET_SERVERID_OFFSET))(nullptr);
		}

		::System::Void set_ServerId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_TIMEATTACKDUNGEONCHARACTERDB_SET_SERVERID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_UniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_TIMEATTACKDUNGEONCHARACTERDB_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::System::Void set_UniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_TIMEATTACKDUNGEONCHARACTERDB_SET_UNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_CostumeId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_TIMEATTACKDUNGEONCHARACTERDB_GET_COSTUMEID_OFFSET))(nullptr);
		}

		::System::Void set_CostumeId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_TIMEATTACKDUNGEONCHARACTERDB_SET_COSTUMEID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_StarGrade()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_TIMEATTACKDUNGEONCHARACTERDB_GET_STARGRADE_OFFSET))(nullptr);
		}

		::System::Void set_StarGrade(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_TIMEATTACKDUNGEONCHARACTERDB_SET_STARGRADE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Level()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_TIMEATTACKDUNGEONCHARACTERDB_GET_LEVEL_OFFSET))(nullptr);
		}

		::System::Void set_Level(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_TIMEATTACKDUNGEONCHARACTERDB_SET_LEVEL_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_HasWeapon()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_TIMEATTACKDUNGEONCHARACTERDB_GET_HASWEAPON_OFFSET))(nullptr);
		}

		::System::Void set_HasWeapon(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_TIMEATTACKDUNGEONCHARACTERDB_SET_HASWEAPON_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::WeaponDB* get_WeaponDB()
		{
			return ((::MX::GameLogic::DBModel::WeaponDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_TIMEATTACKDUNGEONCHARACTERDB_GET_WEAPONDB_OFFSET))(nullptr);
		}

		::System::Void set_WeaponDB(::MX::GameLogic::DBModel::WeaponDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::WeaponDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_TIMEATTACKDUNGEONCHARACTERDB_SET_WEAPONDB_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsAssist()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_TIMEATTACKDUNGEONCHARACTERDB_GET_ISASSIST_OFFSET))(nullptr);
		}

		::System::Void set_IsAssist(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_TIMEATTACKDUNGEONCHARACTERDB_SET_ISASSIST_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_CombatStyleIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_TIMEATTACKDUNGEONCHARACTERDB_GET_COMBATSTYLEINDEX_OFFSET))(nullptr);
		}

		::System::Void set_CombatStyleIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_TIMEATTACKDUNGEONCHARACTERDB_SET_COMBATSTYLEINDEX_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_TIMEATTACKDUNGEONCHARACTERDB_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::GameLogic::DBModel::CharacterDB* arg, ::MX::GameLogic::DBModel::WeaponDB* arg2, ::System::Int64 arg3, ::System::Int32 arg4)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::CharacterDB*, ::MX::GameLogic::DBModel::WeaponDB*, ::System::Int64, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_TIMEATTACKDUNGEONCHARACTERDB_.CTOR_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void .ctor(::MX::GameLogic::DBModel::AssistCharacterDB* arg, ::MX::GameLogic::DBModel::WeaponDB* arg2)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::AssistCharacterDB*, ::MX::GameLogic::DBModel::WeaponDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_TIMEATTACKDUNGEONCHARACTERDB_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

	};
}

