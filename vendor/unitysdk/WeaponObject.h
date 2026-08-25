#pragma once
#include "unitysdk.h"

class SecureLong;
namespace MX::GameLogic::DBModel { class WeaponDB; }
namespace MX::Data::Excel { class CharacterWeaponExcel; }
namespace FlatData { class CurrencyTypes; }

#define WEAPONOBJECT_GET_HASLEVEL_OFFSET UNITYSDK_OFFSET(0x1E535C0)
#define WEAPONOBJECT_GET_ISSTACKABLE_OFFSET UNITYSDK_OFFSET(0x1E535D0)
#define WEAPONOBJECT_GET_BOUNDCHARACTERSERVERID_OFFSET UNITYSDK_OFFSET(0x1E535E0)
#define WEAPONOBJECT_SET_BOUNDCHARACTERSERVERID_OFFSET UNITYSDK_OFFSET(0x1E535F0)
#define WEAPONOBJECT_GET_DB_OFFSET UNITYSDK_OFFSET(0x1E53600)
#define WEAPONOBJECT_SET_DB_OFFSET UNITYSDK_OFFSET(0x1E53610)
#define WEAPONOBJECT_GET_CHARACTERWEAPONEXCEL_OFFSET UNITYSDK_OFFSET(0x1E53620)
#define WEAPONOBJECT_GET_STATS_OFFSET UNITYSDK_OFFSET(0x1E536C0)
#define WEAPONOBJECT_SET_STATS_OFFSET UNITYSDK_OFFSET(0x1E536D0)
#define WEAPONOBJECT_GET_FOURSTARSTAT_OFFSET UNITYSDK_OFFSET(0x1E536E0)
#define WEAPONOBJECT_SET_FOURSTARSTAT_OFFSET UNITYSDK_OFFSET(0x1E536F0)
#define WEAPONOBJECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E52CA0)
#define WEAPONOBJECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E53390)
#define WEAPONOBJECT_UPDATE_OFFSET UNITYSDK_OFFSET(0x1E52D40)
#define WEAPONOBJECT_COPYPROPERTYFROMDB_OFFSET UNITYSDK_OFFSET(0x1E53700)
#define WEAPONOBJECT_SETSTAT_OFFSET UNITYSDK_OFFSET(0x1E538C0)
#define WEAPONOBJECT_CANLEVELUP_OFFSET UNITYSDK_OFFSET(0x1E53EF0)
#define WEAPONOBJECT_GETEXPRATIO_OFFSET UNITYSDK_OFFSET(0x1E53F10)
#define WEAPONOBJECT_GETEXPTEXT_OFFSET UNITYSDK_OFFSET(0x1E54020)
#define WEAPONOBJECT_GETTOTALEXPBASETOCUREXP_OFFSET UNITYSDK_OFFSET(0x1E54210)
#define WEAPONOBJECT_GETTOTALEXPBASELEVELTOMAXLEVEL_OFFSET UNITYSDK_OFFSET(0x1E54310)
#define WEAPONOBJECT_GETLEVELUPCURRENCYREQUIREDCOST_OFFSET UNITYSDK_OFFSET(0x1E543A0)
#define WEAPONOBJECT_CANTRANSCENDENCE_OFFSET UNITYSDK_OFFSET(0x1E543B0)
#define WEAPONOBJECT_GET_MAXSTARGRADE_OFFSET UNITYSDK_OFFSET(0x1E54470)
#define WEAPONOBJECT_GET_LEVELUPFEEDCOSTCURRENCY_OFFSET UNITYSDK_OFFSET(0x1E544A0)
#define WEAPONOBJECT_GET_LEVELUPFEEDCOSTAMOUNT_OFFSET UNITYSDK_OFFSET(0x1E544B0)
#define WEAPONOBJECT_GET_LEVELUPFEEDEXP_OFFSET UNITYSDK_OFFSET(0x1E544C0)
#define WEAPONOBJECT_GET_TYPESPRITE_OFFSET UNITYSDK_OFFSET(0x1E544D0)
#define WEAPONOBJECT_GET_TEXTUREDIR_OFFSET UNITYSDK_OFFSET(0x1E54520)
#define WEAPONOBJECT_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1E54550)
#define WEAPONOBJECT_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0x1E545D0)
#define WEAPONOBJECT_GET_CANBECONSUMED_OFFSET UNITYSDK_OFFSET(0x1E54650)
#define WEAPONOBJECT_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x1E54660)

	inline static constexpr unsigned int WeaponObject_TypeDefinitionIndex = 1707;

	class WeaponObject : public ::System::Numerics::DoubleUlong
	{
	public:
		SecureLong* _BoundCharacterServerId_k__BackingField; // 0x68
		::MX::GameLogic::DBModel::WeaponDB* _DB_k__BackingField; // 0x70
		Il2CppObject* _Stats_k__BackingField; // 0x78
		Il2CppObject* _FourStarStat_k__BackingField; // 0x80

		::System::Boolean get_HasLevel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + WEAPONOBJECT_GET_HASLEVEL_OFFSET))(nullptr);
		}

		::System::Boolean get_IsStackable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + WEAPONOBJECT_GET_ISSTACKABLE_OFFSET))(nullptr);
		}

		SecureLong* get_BoundCharacterServerId()
		{
			return ((SecureLong*(*)(::PVOID))((::PBYTE)hIl2Cpp + WEAPONOBJECT_GET_BOUNDCHARACTERSERVERID_OFFSET))(nullptr);
		}

		::System::Void set_BoundCharacterServerId(SecureLong* arg)
		{
			((::System::Void(*)(SecureLong*, ::PVOID))((::PBYTE)hIl2Cpp + WEAPONOBJECT_SET_BOUNDCHARACTERSERVERID_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::WeaponDB* get_DB()
		{
			return ((::MX::GameLogic::DBModel::WeaponDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + WEAPONOBJECT_GET_DB_OFFSET))(nullptr);
		}

		::System::Void set_DB(::MX::GameLogic::DBModel::WeaponDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::WeaponDB*, ::PVOID))((::PBYTE)hIl2Cpp + WEAPONOBJECT_SET_DB_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::CharacterWeaponExcel* get_CharacterWeaponExcel()
		{
			return ((::MX::Data::Excel::CharacterWeaponExcel*(*)(::PVOID))((::PBYTE)hIl2Cpp + WEAPONOBJECT_GET_CHARACTERWEAPONEXCEL_OFFSET))(nullptr);
		}

		Il2CppObject* get_Stats()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + WEAPONOBJECT_GET_STATS_OFFSET))(nullptr);
		}

		::System::Void set_Stats(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + WEAPONOBJECT_SET_STATS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_FourStarStat()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + WEAPONOBJECT_GET_FOURSTARSTAT_OFFSET))(nullptr);
		}

		::System::Void set_FourStarStat(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + WEAPONOBJECT_SET_FOURSTARSTAT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::GameLogic::DBModel::WeaponDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::WeaponDB*, ::PVOID))((::PBYTE)hIl2Cpp + WEAPONOBJECT_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::GameLogic::DBModel::WeaponDB* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::WeaponDB*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + WEAPONOBJECT_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Update(::MX::GameLogic::DBModel::WeaponDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::WeaponDB*, ::PVOID))((::PBYTE)hIl2Cpp + WEAPONOBJECT_UPDATE_OFFSET))(arg, nullptr);
		}

		::System::Void CopyPropertyFromDB(::MX::GameLogic::DBModel::WeaponDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::WeaponDB*, ::PVOID))((::PBYTE)hIl2Cpp + WEAPONOBJECT_COPYPROPERTYFROMDB_OFFSET))(arg, nullptr);
		}

		::System::Void SetStat()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WEAPONOBJECT_SETSTAT_OFFSET))(nullptr);
		}

		::System::Boolean CanLevelUp()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + WEAPONOBJECT_CANLEVELUP_OFFSET))(nullptr);
		}

		::System::Single GetExpRatio()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + WEAPONOBJECT_GETEXPRATIO_OFFSET))(nullptr);
		}

		::System::String* GetExpText(::System::Boolean arg)
		{
			return ((::System::String*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + WEAPONOBJECT_GETEXPTEXT_OFFSET))(arg, nullptr);
		}

		::System::Int64 GetTotalExpBaseToCurExp()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + WEAPONOBJECT_GETTOTALEXPBASETOCUREXP_OFFSET))(nullptr);
		}

		::System::Int64 GetTotalExpBaseLevelToMaxLevel()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + WEAPONOBJECT_GETTOTALEXPBASELEVELTOMAXLEVEL_OFFSET))(nullptr);
		}

		::System::Int64 GetLevelUpCurrencyRequiredCost(::System::Int64 arg)
		{
			return ((::System::Int64(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + WEAPONOBJECT_GETLEVELUPCURRENCYREQUIREDCOST_OFFSET))(arg, nullptr);
		}

		::System::Boolean CanTranscendence()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + WEAPONOBJECT_CANTRANSCENDENCE_OFFSET))(nullptr);
		}

		::System::Int32 get_MaxStarGrade()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + WEAPONOBJECT_GET_MAXSTARGRADE_OFFSET))(nullptr);
		}

		::FlatData::CurrencyTypes* get_LevelUpFeedCostCurrency()
		{
			return ((::FlatData::CurrencyTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + WEAPONOBJECT_GET_LEVELUPFEEDCOSTCURRENCY_OFFSET))(nullptr);
		}

		::System::Int64 get_LevelUpFeedCostAmount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + WEAPONOBJECT_GET_LEVELUPFEEDCOSTAMOUNT_OFFSET))(nullptr);
		}

		::System::Int64 get_LevelUpFeedExp()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + WEAPONOBJECT_GET_LEVELUPFEEDEXP_OFFSET))(nullptr);
		}

		::System::String* get_TypeSprite()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + WEAPONOBJECT_GET_TYPESPRITE_OFFSET))(nullptr);
		}

		::System::String* get_TextureDir()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + WEAPONOBJECT_GET_TEXTUREDIR_OFFSET))(nullptr);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + WEAPONOBJECT_GET_NAME_OFFSET))(nullptr);
		}

		::System::String* get_Description()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + WEAPONOBJECT_GET_DESCRIPTION_OFFSET))(nullptr);
		}

		::System::Boolean get_CanBeConsumed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + WEAPONOBJECT_GET_CANBECONSUMED_OFFSET))(nullptr);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + WEAPONOBJECT_GET_ISVALID_OFFSET))(nullptr);
		}

	};

