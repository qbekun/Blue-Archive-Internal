#pragma once
#include "unitysdk.h"

class SecureLong;
namespace MX::GameLogic::DBModel { class GearDB; }
namespace MX::Data::Excel { class CharacterGearExcel; }
namespace FlatData { class CurrencyTypes; }
namespace MX::Logic::Data { class GearSetting; }

#define GEAROBJECT_SET_DB_OFFSET UNITYSDK_OFFSET(0x1E4D570)
#define GEAROBJECT_GET_MAXTIER_OFFSET UNITYSDK_OFFSET(0x1E4D580)
#define GEAROBJECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E4C8E0)
#define GEAROBJECT_GET_MAXSTARGRADE_OFFSET UNITYSDK_OFFSET(0x1E4E040)
#define GEAROBJECT_GET_TYPESPRITE_OFFSET UNITYSDK_OFFSET(0x1E4E050)
#define GEAROBJECT_GETEXPTEXT_OFFSET UNITYSDK_OFFSET(0x1E4E0A0)
#define GEAROBJECT_GET_LEVELUPFEEDCOSTCURRENCY_OFFSET UNITYSDK_OFFSET(0x1E4E250)
#define GEAROBJECT_COPYPROPERTYFROMDB_OFFSET UNITYSDK_OFFSET(0x1E4D590)
#define GEAROBJECT_GETTEXTUREDIR_OFFSET UNITYSDK_OFFSET(0x1E4E260)
#define GEAROBJECT_UPDATE_OFFSET UNITYSDK_OFFSET(0x1E4C9B0)
#define GEAROBJECT_SET_CHARACTERGEAREXCEL_OFFSET UNITYSDK_OFFSET(0x1E4E300)
#define GEAROBJECT_GET_COMBATSTYLEGEARSTATSDIC_OFFSET UNITYSDK_OFFSET(0x1E4E320)
#define GEAROBJECT_SET_COMBATSTYLEGEARSTATSDIC_OFFSET UNITYSDK_OFFSET(0x1E4E330)
#define GEAROBJECT_CANTRANSCENDENCE_OFFSET UNITYSDK_OFFSET(0x1E4E350)
#define GEAROBJECT_GET_CANBECONSUMED_OFFSET UNITYSDK_OFFSET(0x1E4E380)
#define GEAROBJECT_GETEXPRATIO_OFFSET UNITYSDK_OFFSET(0x1E4E390)
#define GEAROBJECT_GET_LEVELUPFEEDCOSTAMOUNT_OFFSET UNITYSDK_OFFSET(0x1E4E480)
#define GEAROBJECT_GETGEARSETTING_OFFSET UNITYSDK_OFFSET(0x1E4CC30)
#define GEAROBJECT_GET_HASLEVEL_OFFSET UNITYSDK_OFFSET(0x1E4E490)
#define GEAROBJECT_GETTOTALEXPBASETOCUREXP_OFFSET UNITYSDK_OFFSET(0x1E4E4A0)
#define GEAROBJECT_GET_TEXTUREDIR_OFFSET UNITYSDK_OFFSET(0x1E4E5B0)
#define GEAROBJECT_GET_DB_OFFSET UNITYSDK_OFFSET(0x1E4E5E0)
#define GEAROBJECT_CANLEVELUP_OFFSET UNITYSDK_OFFSET(0x1E4E5F0)
#define GEAROBJECT_GET_ISSTACKABLE_OFFSET UNITYSDK_OFFSET(0x1E4E610)
#define GEAROBJECT_GETTOTALEXPBASELEVELTOMAXLEVEL_OFFSET UNITYSDK_OFFSET(0x1E4E620)
#define GEAROBJECT_GETLEVELUPCURRENCYREQUIREDCOST_OFFSET UNITYSDK_OFFSET(0x1E4E6C0)
#define GEAROBJECT_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x1E4E6D0)
#define GEAROBJECT_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0x1E4E6E0)
#define GEAROBJECT_SET_BOUNDCHARACTERSERVERID_OFFSET UNITYSDK_OFFSET(0x1E4E770)
#define GEAROBJECT_GET_BOUNDCHARACTERSERVERID_OFFSET UNITYSDK_OFFSET(0x1E4E780)
#define GEAROBJECT_SET_MAXTIER_OFFSET UNITYSDK_OFFSET(0x1E4E790)
#define GEAROBJECT_GET_CHARACTERGEAREXCEL_OFFSET UNITYSDK_OFFSET(0x1E4E7A0)
#define GEAROBJECT_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1E4E7B0)
#define GEAROBJECT_GET_LEVELUPFEEDEXP_OFFSET UNITYSDK_OFFSET(0x1E4E840)

	inline static constexpr unsigned int GearObject_TypeDefinitionIndex = 1695;

	class GearObject : public ::System::Numerics::DoubleUlong
	{
	public:
		SecureLong* _BoundCharacterServerId_k__BackingField; // 0x68
		::MX::GameLogic::DBModel::GearDB* _DB_k__BackingField; // 0x70
		::System::Int64 _MaxTier_k__BackingField; // 0x78
		::MX::Data::Excel::CharacterGearExcel* _CharacterGearExcel_k__BackingField; // 0x80
		Il2CppObject* _combatStyleGearStatsDic_k__BackingField; // 0x90

		::System::Void set_DB(::MX::GameLogic::DBModel::GearDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::GearDB*, ::PVOID))((::PBYTE)hIl2Cpp + GEAROBJECT_SET_DB_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_MaxTier()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + GEAROBJECT_GET_MAXTIER_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::GameLogic::DBModel::GearDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::GearDB*, ::PVOID))((::PBYTE)hIl2Cpp + GEAROBJECT_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_MaxStarGrade()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GEAROBJECT_GET_MAXSTARGRADE_OFFSET))(nullptr);
		}

		::System::String* get_TypeSprite()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GEAROBJECT_GET_TYPESPRITE_OFFSET))(nullptr);
		}

		::System::String* GetExpText(::System::Boolean arg)
		{
			return ((::System::String*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + GEAROBJECT_GETEXPTEXT_OFFSET))(arg, nullptr);
		}

		::FlatData::CurrencyTypes* get_LevelUpFeedCostCurrency()
		{
			return ((::FlatData::CurrencyTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + GEAROBJECT_GET_LEVELUPFEEDCOSTCURRENCY_OFFSET))(nullptr);
		}

		::System::Void CopyPropertyFromDB(::MX::GameLogic::DBModel::GearDB* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::GearDB*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + GEAROBJECT_COPYPROPERTYFROMDB_OFFSET))(arg, arg2, nullptr);
		}

		::System::String* GetTextureDir(::System::Int64 arg)
		{
			return ((::System::String*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + GEAROBJECT_GETTEXTUREDIR_OFFSET))(arg, nullptr);
		}

		::System::Void Update(::MX::GameLogic::DBModel::GearDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::GearDB*, ::PVOID))((::PBYTE)hIl2Cpp + GEAROBJECT_UPDATE_OFFSET))(arg, nullptr);
		}

		::System::Void set_CharacterGearExcel(::MX::Data::Excel::CharacterGearExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::CharacterGearExcel*, ::PVOID))((::PBYTE)hIl2Cpp + GEAROBJECT_SET_CHARACTERGEAREXCEL_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_combatStyleGearStatsDic()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + GEAROBJECT_GET_COMBATSTYLEGEARSTATSDIC_OFFSET))(nullptr);
		}

		::System::Void set_combatStyleGearStatsDic(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + GEAROBJECT_SET_COMBATSTYLEGEARSTATSDIC_OFFSET))(arg, nullptr);
		}

		::System::Boolean CanTranscendence()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GEAROBJECT_CANTRANSCENDENCE_OFFSET))(nullptr);
		}

		::System::Boolean get_CanBeConsumed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GEAROBJECT_GET_CANBECONSUMED_OFFSET))(nullptr);
		}

		::System::Single GetExpRatio()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + GEAROBJECT_GETEXPRATIO_OFFSET))(nullptr);
		}

		::System::Int64 get_LevelUpFeedCostAmount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + GEAROBJECT_GET_LEVELUPFEEDCOSTAMOUNT_OFFSET))(nullptr);
		}

		::MX::Logic::Data::GearSetting* GetGearSetting(::System::Int64 arg)
		{
			return ((::MX::Logic::Data::GearSetting*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + GEAROBJECT_GETGEARSETTING_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_HasLevel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GEAROBJECT_GET_HASLEVEL_OFFSET))(nullptr);
		}

		::System::Int64 GetTotalExpBaseToCurExp()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + GEAROBJECT_GETTOTALEXPBASETOCUREXP_OFFSET))(nullptr);
		}

		::System::String* get_TextureDir()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GEAROBJECT_GET_TEXTUREDIR_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::GearDB* get_DB()
		{
			return ((::MX::GameLogic::DBModel::GearDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + GEAROBJECT_GET_DB_OFFSET))(nullptr);
		}

		::System::Boolean CanLevelUp()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GEAROBJECT_CANLEVELUP_OFFSET))(nullptr);
		}

		::System::Boolean get_IsStackable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GEAROBJECT_GET_ISSTACKABLE_OFFSET))(nullptr);
		}

		::System::Int64 GetTotalExpBaseLevelToMaxLevel()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + GEAROBJECT_GETTOTALEXPBASELEVELTOMAXLEVEL_OFFSET))(nullptr);
		}

		::System::Int64 GetLevelUpCurrencyRequiredCost(::System::Int64 arg)
		{
			return ((::System::Int64(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + GEAROBJECT_GETLEVELUPCURRENCYREQUIREDCOST_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GEAROBJECT_GET_ISVALID_OFFSET))(nullptr);
		}

		::System::String* get_Description()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GEAROBJECT_GET_DESCRIPTION_OFFSET))(nullptr);
		}

		::System::Void set_BoundCharacterServerId(SecureLong* arg)
		{
			((::System::Void(*)(SecureLong*, ::PVOID))((::PBYTE)hIl2Cpp + GEAROBJECT_SET_BOUNDCHARACTERSERVERID_OFFSET))(arg, nullptr);
		}

		SecureLong* get_BoundCharacterServerId()
		{
			return ((SecureLong*(*)(::PVOID))((::PBYTE)hIl2Cpp + GEAROBJECT_GET_BOUNDCHARACTERSERVERID_OFFSET))(nullptr);
		}

		::System::Void set_MaxTier(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + GEAROBJECT_SET_MAXTIER_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::CharacterGearExcel* get_CharacterGearExcel()
		{
			return ((::MX::Data::Excel::CharacterGearExcel*(*)(::PVOID))((::PBYTE)hIl2Cpp + GEAROBJECT_GET_CHARACTERGEAREXCEL_OFFSET))(nullptr);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GEAROBJECT_GET_NAME_OFFSET))(nullptr);
		}

		::System::Int64 get_LevelUpFeedExp()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + GEAROBJECT_GET_LEVELUPFEEDEXP_OFFSET))(nullptr);
		}

	};

