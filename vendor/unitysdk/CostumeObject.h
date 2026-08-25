#pragma once
#include "unitysdk.h"

class SecureLong;
namespace MX::GameLogic::DBModel { class CostumeDB; }
namespace MX::Logic::Data { class CostumeSetting; }
class CharacterObject;
namespace FlatData { class CurrencyTypes; }

#define COSTUMEOBJECT_GET_MAXSTARGRADE_OFFSET UNITYSDK_OFFSET(0x1E426F0)
#define COSTUMEOBJECT_CANTRANSCENDENCE_OFFSET UNITYSDK_OFFSET(0x1E42700)
#define COSTUMEOBJECT_SET_DB_OFFSET UNITYSDK_OFFSET(0x1E42710)
#define COSTUMEOBJECT_GET_ISSTACKABLE_OFFSET UNITYSDK_OFFSET(0x1E42720)
#define COSTUMEOBJECT_GET_HASLEVEL_OFFSET UNITYSDK_OFFSET(0x1E42730)
#define COSTUMEOBJECT_COPYPROPERTYFROMDB_OFFSET UNITYSDK_OFFSET(0x1E42740)
#define COSTUMEOBJECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E428C0)
#define COSTUMEOBJECT_GETLEVELUPCURRENCYREQUIREDCOST_OFFSET UNITYSDK_OFFSET(0x1E42960)
#define COSTUMEOBJECT_GET_LEVELUPFEEDEXP_OFFSET UNITYSDK_OFFSET(0x1E42970)
#define COSTUMEOBJECT_GET_BOUNDCHARACTERSERVERID_OFFSET UNITYSDK_OFFSET(0x1E42980)
#define COSTUMEOBJECT_CANLEVELUP_OFFSET UNITYSDK_OFFSET(0x1E42990)
#define COSTUMEOBJECT_GET_TEXTUREDIR_OFFSET UNITYSDK_OFFSET(0x1E429A0)
#define COSTUMEOBJECT_GET_DB_OFFSET UNITYSDK_OFFSET(0x1E42A60)
#define COSTUMEOBJECT_TOCOSTUMESETTING_OFFSET UNITYSDK_OFFSET(0x1E42A70)
#define COSTUMEOBJECT_GET_COSTUMEGROUPID_OFFSET UNITYSDK_OFFSET(0x1E42AF0)
#define COSTUMEOBJECT_GET_LEVELUPFEEDCOSTCURRENCY_OFFSET UNITYSDK_OFFSET(0x1E42B90)
#define COSTUMEOBJECT_UDPATE_OFFSET UNITYSDK_OFFSET(0x1E42BA0)
#define COSTUMEOBJECT_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1E42BF0)
#define COSTUMEOBJECT_GET_COSTUMEEXCEL_OFFSET UNITYSDK_OFFSET(0x1E42C80)
#define COSTUMEOBJECT_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x1E42CA0)
#define COSTUMEOBJECT_GETTOTALEXPBASELEVELTOMAXLEVEL_OFFSET UNITYSDK_OFFSET(0x1E42CB0)
#define COSTUMEOBJECT_GET_LEVELUPFEEDCOSTAMOUNT_OFFSET UNITYSDK_OFFSET(0x1E42CC0)
#define COSTUMEOBJECT_GET_TYPESPRITE_OFFSET UNITYSDK_OFFSET(0x1E42CD0)
#define COSTUMEOBJECT_GETEXPRATIO_OFFSET UNITYSDK_OFFSET(0x1E42D10)
#define COSTUMEOBJECT_GETTOTALEXPBASETOCUREXP_OFFSET UNITYSDK_OFFSET(0x1E42D20)
#define COSTUMEOBJECT_SET_COSTUMEEXCEL_OFFSET UNITYSDK_OFFSET(0x1E42D30)
#define COSTUMEOBJECT_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0x1E42D50)
#define COSTUMEOBJECT_GET_CANBECONSUMED_OFFSET UNITYSDK_OFFSET(0x1E42DE0)

	inline static constexpr unsigned int CostumeObject_TypeDefinitionIndex = 1674;

	class CostumeObject : public ::System::Numerics::DoubleUlong
	{
	public:
		SecureLong* _BoundCharacterServerId_k__BackingField; // 0x68
		::MX::GameLogic::DBModel::CostumeDB* _DB_k__BackingField; // 0x70
		Il2CppObject* _CostumeExcel_k__BackingField; // 0x78

		::System::Int32 get_MaxStarGrade()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + COSTUMEOBJECT_GET_MAXSTARGRADE_OFFSET))(nullptr);
		}

		::System::Boolean CanTranscendence()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + COSTUMEOBJECT_CANTRANSCENDENCE_OFFSET))(nullptr);
		}

		::System::Void set_DB(::MX::GameLogic::DBModel::CostumeDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::CostumeDB*, ::PVOID))((::PBYTE)hIl2Cpp + COSTUMEOBJECT_SET_DB_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsStackable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + COSTUMEOBJECT_GET_ISSTACKABLE_OFFSET))(nullptr);
		}

		::System::Boolean get_HasLevel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + COSTUMEOBJECT_GET_HASLEVEL_OFFSET))(nullptr);
		}

		::System::Void CopyPropertyFromDB(::MX::GameLogic::DBModel::CostumeDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::CostumeDB*, ::PVOID))((::PBYTE)hIl2Cpp + COSTUMEOBJECT_COPYPROPERTYFROMDB_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::GameLogic::DBModel::CostumeDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::CostumeDB*, ::PVOID))((::PBYTE)hIl2Cpp + COSTUMEOBJECT_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int64 GetLevelUpCurrencyRequiredCost(::System::Int64 arg)
		{
			return ((::System::Int64(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + COSTUMEOBJECT_GETLEVELUPCURRENCYREQUIREDCOST_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_LevelUpFeedExp()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + COSTUMEOBJECT_GET_LEVELUPFEEDEXP_OFFSET))(nullptr);
		}

		SecureLong* get_BoundCharacterServerId()
		{
			return ((SecureLong*(*)(::PVOID))((::PBYTE)hIl2Cpp + COSTUMEOBJECT_GET_BOUNDCHARACTERSERVERID_OFFSET))(nullptr);
		}

		::System::Boolean CanLevelUp()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + COSTUMEOBJECT_CANLEVELUP_OFFSET))(nullptr);
		}

		::System::String* get_TextureDir()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + COSTUMEOBJECT_GET_TEXTUREDIR_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::CostumeDB* get_DB()
		{
			return ((::MX::GameLogic::DBModel::CostumeDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + COSTUMEOBJECT_GET_DB_OFFSET))(nullptr);
		}

		::MX::Logic::Data::CostumeSetting* ToCostumeSetting(CharacterObject* arg, ::System::Int32 arg2)
		{
			return ((::MX::Logic::Data::CostumeSetting*(*)(CharacterObject*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + COSTUMEOBJECT_TOCOSTUMESETTING_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int64 get_CostumeGroupId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + COSTUMEOBJECT_GET_COSTUMEGROUPID_OFFSET))(nullptr);
		}

		::FlatData::CurrencyTypes* get_LevelUpFeedCostCurrency()
		{
			return ((::FlatData::CurrencyTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + COSTUMEOBJECT_GET_LEVELUPFEEDCOSTCURRENCY_OFFSET))(nullptr);
		}

		::System::Void Udpate(::MX::GameLogic::DBModel::CostumeDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::CostumeDB*, ::PVOID))((::PBYTE)hIl2Cpp + COSTUMEOBJECT_UDPATE_OFFSET))(arg, nullptr);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + COSTUMEOBJECT_GET_NAME_OFFSET))(nullptr);
		}

		Il2CppObject* get_CostumeExcel()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + COSTUMEOBJECT_GET_COSTUMEEXCEL_OFFSET))(nullptr);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + COSTUMEOBJECT_GET_ISVALID_OFFSET))(nullptr);
		}

		::System::Int64 GetTotalExpBaseLevelToMaxLevel()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + COSTUMEOBJECT_GETTOTALEXPBASELEVELTOMAXLEVEL_OFFSET))(nullptr);
		}

		::System::Int64 get_LevelUpFeedCostAmount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + COSTUMEOBJECT_GET_LEVELUPFEEDCOSTAMOUNT_OFFSET))(nullptr);
		}

		::System::String* get_TypeSprite()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + COSTUMEOBJECT_GET_TYPESPRITE_OFFSET))(nullptr);
		}

		::System::Single GetExpRatio()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + COSTUMEOBJECT_GETEXPRATIO_OFFSET))(nullptr);
		}

		::System::Int64 GetTotalExpBaseToCurExp()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + COSTUMEOBJECT_GETTOTALEXPBASETOCUREXP_OFFSET))(nullptr);
		}

		::System::Void set_CostumeExcel(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + COSTUMEOBJECT_SET_COSTUMEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::String* get_Description()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + COSTUMEOBJECT_GET_DESCRIPTION_OFFSET))(nullptr);
		}

		::System::Boolean get_CanBeConsumed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + COSTUMEOBJECT_GET_CANBECONSUMED_OFFSET))(nullptr);
		}

	};

