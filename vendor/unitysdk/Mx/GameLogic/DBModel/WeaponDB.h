#pragma once
#include "../../../unitysdk.h"

namespace MX::GameLogic::DBModel { class WeaponDB; }
namespace FlatData { class ParcelType; }

#define MX_GAMELOGIC_DBMODEL_WEAPONDB_SET_BOUNDCHARACTERSERVERID_OFFSET UNITYSDK_OFFSET(0x1012740)
#define MX_GAMELOGIC_DBMODEL_WEAPONDB_CLONE_OFFSET UNITYSDK_OFFSET(0x1012750)
#define MX_GAMELOGIC_DBMODEL_WEAPONDB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1012810)
#define MX_GAMELOGIC_DBMODEL_WEAPONDB_GET_STARGRADE_OFFSET UNITYSDK_OFFSET(0x1012AC0)
#define MX_GAMELOGIC_DBMODEL_WEAPONDB_GET_PARCELINFOS_OFFSET UNITYSDK_OFFSET(0x1012AD0)
#define MX_GAMELOGIC_DBMODEL_WEAPONDB_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1012BC0)
#define MX_GAMELOGIC_DBMODEL_WEAPONDB_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x1012BD0)
#define MX_GAMELOGIC_DBMODEL_WEAPONDB_.CTOR_OFFSET UNITYSDK_OFFSET(0x10127E0)
#define MX_GAMELOGIC_DBMODEL_WEAPONDB_GET_EXP_OFFSET UNITYSDK_OFFSET(0x1012BE0)
#define MX_GAMELOGIC_DBMODEL_WEAPONDB_SET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x1012BF0)
#define MX_GAMELOGIC_DBMODEL_WEAPONDB_SET_EXP_OFFSET UNITYSDK_OFFSET(0x1012C00)
#define MX_GAMELOGIC_DBMODEL_WEAPONDB_SET_STARGRADE_OFFSET UNITYSDK_OFFSET(0x1012C10)
#define MX_GAMELOGIC_DBMODEL_WEAPONDB_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x1012C20)
#define MX_GAMELOGIC_DBMODEL_WEAPONDB_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x1012C30)
#define MX_GAMELOGIC_DBMODEL_WEAPONDB_EQUIVALENT_OFFSET UNITYSDK_OFFSET(0x1012C40)
#define MX_GAMELOGIC_DBMODEL_WEAPONDB_GET_BOUNDCHARACTERSERVERID_OFFSET UNITYSDK_OFFSET(0x1012C80)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int WeaponDB_TypeDefinitionIndex = 12748;

	class WeaponDB : public Il2CppObject
	{
	public:
		::System::Int64 _UniqueId_k__BackingField; // 0x10
		::System::Int32 _Level_k__BackingField; // 0x18
		::System::Int64 _Exp_k__BackingField; // 0x20
		::System::Int32 _StarGrade_k__BackingField; // 0x28
		::System::Int64 _BoundCharacterServerId_k__BackingField; // 0x30

		::System::Void set_BoundCharacterServerId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_WEAPONDB_SET_BOUNDCHARACTERSERVERID_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::WeaponDB* Clone()
		{
			return ((::MX::GameLogic::DBModel::WeaponDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_WEAPONDB_CLONE_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_WEAPONDB_TOSTRING_OFFSET))(nullptr);
		}

		::System::Int32 get_StarGrade()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_WEAPONDB_GET_STARGRADE_OFFSET))(nullptr);
		}

		Il2CppObject* get_ParcelInfos()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_WEAPONDB_GET_PARCELINFOS_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* get_Type()
		{
			return ((::FlatData::ParcelType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_WEAPONDB_GET_TYPE_OFFSET))(nullptr);
		}

		::System::Int32 get_Level()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_WEAPONDB_GET_LEVEL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_WEAPONDB_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_Exp()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_WEAPONDB_GET_EXP_OFFSET))(nullptr);
		}

		::System::Void set_UniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_WEAPONDB_SET_UNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Void set_Exp(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_WEAPONDB_SET_EXP_OFFSET))(arg, nullptr);
		}

		::System::Void set_StarGrade(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_WEAPONDB_SET_STARGRADE_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_UniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_WEAPONDB_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::System::Void set_Level(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_WEAPONDB_SET_LEVEL_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equivalent(::MX::GameLogic::DBModel::WeaponDB* arg, ::MX::GameLogic::DBModel::WeaponDB* arg2)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::WeaponDB*, ::MX::GameLogic::DBModel::WeaponDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_WEAPONDB_EQUIVALENT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int64 get_BoundCharacterServerId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_WEAPONDB_GET_BOUNDCHARACTERSERVERID_OFFSET))(nullptr);
		}

	};
}

