#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class SquadType; }

#define MX_GAMELOGIC_DBMODEL_CLEARDECKCHARACTERDB_GET_SLOTNUMBER_OFFSET UNITYSDK_OFFSET(0xFED5F0)
#define MX_GAMELOGIC_DBMODEL_CLEARDECKCHARACTERDB_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0xFED600)
#define MX_GAMELOGIC_DBMODEL_CLEARDECKCHARACTERDB_SET_COMBATSTYLEINDEX_OFFSET UNITYSDK_OFFSET(0xFED610)
#define MX_GAMELOGIC_DBMODEL_CLEARDECKCHARACTERDB_SET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0xFED620)
#define MX_GAMELOGIC_DBMODEL_CLEARDECKCHARACTERDB_SET_SQUADTYPE_OFFSET UNITYSDK_OFFSET(0xFED630)
#define MX_GAMELOGIC_DBMODEL_CLEARDECKCHARACTERDB_GET_COMBATSTYLEINDEX_OFFSET UNITYSDK_OFFSET(0xFED640)
#define MX_GAMELOGIC_DBMODEL_CLEARDECKCHARACTERDB_SET_WEAPONSTARGRADE_OFFSET UNITYSDK_OFFSET(0xFED650)
#define MX_GAMELOGIC_DBMODEL_CLEARDECKCHARACTERDB_GET_STARGRADE_OFFSET UNITYSDK_OFFSET(0xFED660)
#define MX_GAMELOGIC_DBMODEL_CLEARDECKCHARACTERDB_SET_HASWEAPON_OFFSET UNITYSDK_OFFSET(0xFED670)
#define MX_GAMELOGIC_DBMODEL_CLEARDECKCHARACTERDB_SET_STARGRADE_OFFSET UNITYSDK_OFFSET(0xFED680)
#define MX_GAMELOGIC_DBMODEL_CLEARDECKCHARACTERDB_GET_SQUADTYPE_OFFSET UNITYSDK_OFFSET(0xFED690)
#define MX_GAMELOGIC_DBMODEL_CLEARDECKCHARACTERDB_SET_ISASSIST_OFFSET UNITYSDK_OFFSET(0xFED6A0)
#define MX_GAMELOGIC_DBMODEL_CLEARDECKCHARACTERDB_.CTOR_OFFSET UNITYSDK_OFFSET(0xFED6B0)
#define MX_GAMELOGIC_DBMODEL_CLEARDECKCHARACTERDB_GET_HASWEAPON_OFFSET UNITYSDK_OFFSET(0xFED6C0)
#define MX_GAMELOGIC_DBMODEL_CLEARDECKCHARACTERDB_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0xFED6D0)
#define MX_GAMELOGIC_DBMODEL_CLEARDECKCHARACTERDB_GET_ISASSIST_OFFSET UNITYSDK_OFFSET(0xFED6E0)
#define MX_GAMELOGIC_DBMODEL_CLEARDECKCHARACTERDB_GET_WEAPONSTARGRADE_OFFSET UNITYSDK_OFFSET(0xFED6F0)
#define MX_GAMELOGIC_DBMODEL_CLEARDECKCHARACTERDB_SET_SLOTNUMBER_OFFSET UNITYSDK_OFFSET(0xFED700)
#define MX_GAMELOGIC_DBMODEL_CLEARDECKCHARACTERDB_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xFED710)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int ClearDeckCharacterDB_TypeDefinitionIndex = 12529;

	class ClearDeckCharacterDB : public Il2CppObject
	{
	public:
		::System::Int64 _UniqueId_k__BackingField; // 0x10
		::System::Int32 _StarGrade_k__BackingField; // 0x18
		::System::Int32 _Level_k__BackingField; // 0x1C
		::System::Int32 _SlotNumber_k__BackingField; // 0x20
		::System::Boolean _HasWeapon_k__BackingField; // 0x24
		::FlatData::SquadType* _SquadType_k__BackingField; // 0x28
		::System::Int32 _WeaponStarGrade_k__BackingField; // 0x2C
		::System::Int32 _CombatStyleIndex_k__BackingField; // 0x30
		::System::Boolean _IsAssist_k__BackingField; // 0x34

		::System::Int32 get_SlotNumber()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLEARDECKCHARACTERDB_GET_SLOTNUMBER_OFFSET))(nullptr);
		}

		::System::Int64 get_UniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLEARDECKCHARACTERDB_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::System::Void set_CombatStyleIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLEARDECKCHARACTERDB_SET_COMBATSTYLEINDEX_OFFSET))(arg, nullptr);
		}

		::System::Void set_UniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLEARDECKCHARACTERDB_SET_UNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Void set_SquadType(::FlatData::SquadType* arg)
		{
			((::System::Void(*)(::FlatData::SquadType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLEARDECKCHARACTERDB_SET_SQUADTYPE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_CombatStyleIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLEARDECKCHARACTERDB_GET_COMBATSTYLEINDEX_OFFSET))(nullptr);
		}

		::System::Void set_WeaponStarGrade(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLEARDECKCHARACTERDB_SET_WEAPONSTARGRADE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_StarGrade()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLEARDECKCHARACTERDB_GET_STARGRADE_OFFSET))(nullptr);
		}

		::System::Void set_HasWeapon(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLEARDECKCHARACTERDB_SET_HASWEAPON_OFFSET))(arg, nullptr);
		}

		::System::Void set_StarGrade(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLEARDECKCHARACTERDB_SET_STARGRADE_OFFSET))(arg, nullptr);
		}

		::FlatData::SquadType* get_SquadType()
		{
			return ((::FlatData::SquadType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLEARDECKCHARACTERDB_GET_SQUADTYPE_OFFSET))(nullptr);
		}

		::System::Void set_IsAssist(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLEARDECKCHARACTERDB_SET_ISASSIST_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLEARDECKCHARACTERDB_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean get_HasWeapon()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLEARDECKCHARACTERDB_GET_HASWEAPON_OFFSET))(nullptr);
		}

		::System::Void set_Level(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLEARDECKCHARACTERDB_SET_LEVEL_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsAssist()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLEARDECKCHARACTERDB_GET_ISASSIST_OFFSET))(nullptr);
		}

		::System::Int32 get_WeaponStarGrade()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLEARDECKCHARACTERDB_GET_WEAPONSTARGRADE_OFFSET))(nullptr);
		}

		::System::Void set_SlotNumber(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLEARDECKCHARACTERDB_SET_SLOTNUMBER_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Level()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLEARDECKCHARACTERDB_GET_LEVEL_OFFSET))(nullptr);
		}

	};
}

