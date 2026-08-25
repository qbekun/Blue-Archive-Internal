#pragma once
#include "../../../unitysdk.h"

namespace MX::GameLogic::DBModel { class RaidCharacterDB; }

#define MX_GAMELOGIC_DBMODEL_RAIDCHARACTERDB_GET_SERVERID_OFFSET UNITYSDK_OFFSET(0x1009800)
#define MX_GAMELOGIC_DBMODEL_RAIDCHARACTERDB_SET_SERVERID_OFFSET UNITYSDK_OFFSET(0x1009810)
#define MX_GAMELOGIC_DBMODEL_RAIDCHARACTERDB_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x1009820)
#define MX_GAMELOGIC_DBMODEL_RAIDCHARACTERDB_SET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x1009830)
#define MX_GAMELOGIC_DBMODEL_RAIDCHARACTERDB_GET_STARGRADE_OFFSET UNITYSDK_OFFSET(0x1009840)
#define MX_GAMELOGIC_DBMODEL_RAIDCHARACTERDB_SET_STARGRADE_OFFSET UNITYSDK_OFFSET(0x1009850)
#define MX_GAMELOGIC_DBMODEL_RAIDCHARACTERDB_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x1009860)
#define MX_GAMELOGIC_DBMODEL_RAIDCHARACTERDB_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x1009870)
#define MX_GAMELOGIC_DBMODEL_RAIDCHARACTERDB_GET_SLOTINDEX_OFFSET UNITYSDK_OFFSET(0x1009880)
#define MX_GAMELOGIC_DBMODEL_RAIDCHARACTERDB_SET_SLOTINDEX_OFFSET UNITYSDK_OFFSET(0x1009890)
#define MX_GAMELOGIC_DBMODEL_RAIDCHARACTERDB_GET_ACCOUNTID_OFFSET UNITYSDK_OFFSET(0x10098A0)
#define MX_GAMELOGIC_DBMODEL_RAIDCHARACTERDB_SET_ACCOUNTID_OFFSET UNITYSDK_OFFSET(0x10098B0)
#define MX_GAMELOGIC_DBMODEL_RAIDCHARACTERDB_GET_ISASSIST_OFFSET UNITYSDK_OFFSET(0x10098C0)
#define MX_GAMELOGIC_DBMODEL_RAIDCHARACTERDB_SET_ISASSIST_OFFSET UNITYSDK_OFFSET(0x10098D0)
#define MX_GAMELOGIC_DBMODEL_RAIDCHARACTERDB_GET_HASWEAPON_OFFSET UNITYSDK_OFFSET(0x10098E0)
#define MX_GAMELOGIC_DBMODEL_RAIDCHARACTERDB_SET_HASWEAPON_OFFSET UNITYSDK_OFFSET(0x10098F0)
#define MX_GAMELOGIC_DBMODEL_RAIDCHARACTERDB_GET_WEAPONSTARGRADE_OFFSET UNITYSDK_OFFSET(0x1009900)
#define MX_GAMELOGIC_DBMODEL_RAIDCHARACTERDB_SET_WEAPONSTARGRADE_OFFSET UNITYSDK_OFFSET(0x1009910)
#define MX_GAMELOGIC_DBMODEL_RAIDCHARACTERDB_GET_COSTUMEID_OFFSET UNITYSDK_OFFSET(0x1009920)
#define MX_GAMELOGIC_DBMODEL_RAIDCHARACTERDB_SET_COSTUMEID_OFFSET UNITYSDK_OFFSET(0x1009930)
#define MX_GAMELOGIC_DBMODEL_RAIDCHARACTERDB_GET_COMBATSTYLEINDEX_OFFSET UNITYSDK_OFFSET(0x1009940)
#define MX_GAMELOGIC_DBMODEL_RAIDCHARACTERDB_SET_COMBATSTYLEINDEX_OFFSET UNITYSDK_OFFSET(0x1009950)
#define MX_GAMELOGIC_DBMODEL_RAIDCHARACTERDB_CLONE_OFFSET UNITYSDK_OFFSET(0x1009960)
#define MX_GAMELOGIC_DBMODEL_RAIDCHARACTERDB_CLONE_OFFSET UNITYSDK_OFFSET(0x10097C0)
#define MX_GAMELOGIC_DBMODEL_RAIDCHARACTERDB_.CTOR_OFFSET UNITYSDK_OFFSET(0x1009240)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int RaidCharacterDB_TypeDefinitionIndex = 12700;

	class RaidCharacterDB : public Il2CppObject
	{
	public:
		::System::Int64 _ServerId_k__BackingField; // 0x10
		::System::Int64 _UniqueId_k__BackingField; // 0x18
		::System::Int32 _StarGrade_k__BackingField; // 0x20
		::System::Int32 _Level_k__BackingField; // 0x24
		::System::Int32 _SlotIndex_k__BackingField; // 0x28
		::System::Int64 _AccountId_k__BackingField; // 0x30
		::System::Boolean _IsAssist_k__BackingField; // 0x38
		::System::Boolean _HasWeapon_k__BackingField; // 0x39
		::System::Int32 _WeaponStarGrade_k__BackingField; // 0x3C
		::System::Int64 _CostumeId_k__BackingField; // 0x40
		::System::Int32 _CombatStyleIndex_k__BackingField; // 0x48

		::System::Int64 get_ServerId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDCHARACTERDB_GET_SERVERID_OFFSET))(nullptr);
		}

		::System::Void set_ServerId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDCHARACTERDB_SET_SERVERID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_UniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDCHARACTERDB_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::System::Void set_UniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDCHARACTERDB_SET_UNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_StarGrade()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDCHARACTERDB_GET_STARGRADE_OFFSET))(nullptr);
		}

		::System::Void set_StarGrade(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDCHARACTERDB_SET_STARGRADE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Level()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDCHARACTERDB_GET_LEVEL_OFFSET))(nullptr);
		}

		::System::Void set_Level(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDCHARACTERDB_SET_LEVEL_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_SlotIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDCHARACTERDB_GET_SLOTINDEX_OFFSET))(nullptr);
		}

		::System::Void set_SlotIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDCHARACTERDB_SET_SLOTINDEX_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_AccountId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDCHARACTERDB_GET_ACCOUNTID_OFFSET))(nullptr);
		}

		::System::Void set_AccountId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDCHARACTERDB_SET_ACCOUNTID_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsAssist()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDCHARACTERDB_GET_ISASSIST_OFFSET))(nullptr);
		}

		::System::Void set_IsAssist(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDCHARACTERDB_SET_ISASSIST_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_HasWeapon()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDCHARACTERDB_GET_HASWEAPON_OFFSET))(nullptr);
		}

		::System::Void set_HasWeapon(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDCHARACTERDB_SET_HASWEAPON_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_WeaponStarGrade()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDCHARACTERDB_GET_WEAPONSTARGRADE_OFFSET))(nullptr);
		}

		::System::Void set_WeaponStarGrade(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDCHARACTERDB_SET_WEAPONSTARGRADE_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_CostumeId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDCHARACTERDB_GET_COSTUMEID_OFFSET))(nullptr);
		}

		::System::Void set_CostumeId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDCHARACTERDB_SET_COSTUMEID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_CombatStyleIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDCHARACTERDB_GET_COMBATSTYLEINDEX_OFFSET))(nullptr);
		}

		::System::Void set_CombatStyleIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDCHARACTERDB_SET_COMBATSTYLEINDEX_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::RaidCharacterDB* Clone(::MX::GameLogic::DBModel::RaidCharacterDB* arg)
		{
			return ((::MX::GameLogic::DBModel::RaidCharacterDB*(*)(::MX::GameLogic::DBModel::RaidCharacterDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDCHARACTERDB_CLONE_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::RaidCharacterDB* Clone()
		{
			return ((::MX::GameLogic::DBModel::RaidCharacterDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDCHARACTERDB_CLONE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDCHARACTERDB_.CTOR_OFFSET))(nullptr);
		}

	};
}

