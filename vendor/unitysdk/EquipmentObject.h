#pragma once
#include "unitysdk.h"

class SecureLong;
class SecureInt;
namespace MX::GameLogic::DBModel { class EquipmentDB; }
namespace MX::Data::Excel { class EquipmentExcel; }
namespace MX::Data::Excel { class EquipmentLevelExcel; }
namespace MX::Data::Excel { class EquipmentStatExcel; }
namespace MX::Logic::Data { class EquipmentSetting; }
namespace Newtonsoft::Json::Linq { class JObject; }
namespace FlatData { class CurrencyTypes; }
namespace FlatData { class EquipmentCategory; }

#define EQUIPMENTOBJECT_GET_HASLEVEL_OFFSET UNITYSDK_OFFSET(0x1E46270)
#define EQUIPMENTOBJECT_GET_TYPESPRITE_OFFSET UNITYSDK_OFFSET(0x1E46280)
#define EQUIPMENTOBJECT_SET_STACKCOUNT_OFFSET UNITYSDK_OFFSET(0x1E46300)
#define EQUIPMENTOBJECT_SET_BOUNDCHARACTERSERVERID_OFFSET UNITYSDK_OFFSET(0x1E46340)
#define EQUIPMENTOBJECT_GET_TAGS_OFFSET UNITYSDK_OFFSET(0x1E46350)
#define EQUIPMENTOBJECT_SET_LEVELSTATS_OFFSET UNITYSDK_OFFSET(0x1E46360)
#define EQUIPMENTOBJECT_GET_EQUIPMENTSTATEXCEL_OFFSET UNITYSDK_OFFSET(0x1E46380)
#define EQUIPMENTOBJECT_GET_TEXTUREDIR_OFFSET UNITYSDK_OFFSET(0x1E46390)
#define EQUIPMENTOBJECT_GET_LEVELSTATS_OFFSET UNITYSDK_OFFSET(0x1E463C0)
#define EQUIPMENTOBJECT_GET_LEVELUPFEEDCOSTAMOUNT_OFFSET UNITYSDK_OFFSET(0x1E463D0)
#define EQUIPMENTOBJECT_SET_EQUIPMENTSTATEXCEL_OFFSET UNITYSDK_OFFSET(0x1E46400)
#define EQUIPMENTOBJECT_GETEXPTEXT_OFFSET UNITYSDK_OFFSET(0x1E46420)
#define EQUIPMENTOBJECT_GETTOTALEXPBASETOCUREXP_OFFSET UNITYSDK_OFFSET(0x1E46620)
#define EQUIPMENTOBJECT_GETEXPRATIO_OFFSET UNITYSDK_OFFSET(0x1E46740)
#define EQUIPMENTOBJECT_GETTOTALEXPBASELEVELTOMAXLEVEL_OFFSET UNITYSDK_OFFSET(0x1E46880)
#define EQUIPMENTOBJECT_COPYPROPERTYFROMDB_OFFSET UNITYSDK_OFFSET(0x1E46930)
#define EQUIPMENTOBJECT_GET_DAMAGEFACTORGROUPID_OFFSET UNITYSDK_OFFSET(0x1E470C0)
#define EQUIPMENTOBJECT_CANLEVELUP_OFFSET UNITYSDK_OFFSET(0x1E470F0)
#define EQUIPMENTOBJECT_GET_LEVELUPFEEDEXP_OFFSET UNITYSDK_OFFSET(0x1E47130)
#define EQUIPMENTOBJECT_GET_BOUNDCHARACTERSERVERID_OFFSET UNITYSDK_OFFSET(0x1E47160)
#define EQUIPMENTOBJECT_GET_EQUIPMENTLEVELEXCEL_OFFSET UNITYSDK_OFFSET(0x1E47170)
#define EQUIPMENTOBJECT_GET_EQUIPMENTEXCEL_OFFSET UNITYSDK_OFFSET(0x1E47180)
#define EQUIPMENTOBJECT_GET_BOUNDSLOTINDEX_OFFSET UNITYSDK_OFFSET(0x1E47190)
#define EQUIPMENTOBJECT_SET_TAGS_OFFSET UNITYSDK_OFFSET(0x1E471A0)
#define EQUIPMENTOBJECT_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1E471C0)
#define EQUIPMENTOBJECT_CANTIERUP_OFFSET UNITYSDK_OFFSET(0x1E47250)
#define EQUIPMENTOBJECT_TOEQUIPMENTSETTING_OFFSET UNITYSDK_OFFSET(0x1E44A80)
#define EQUIPMENTOBJECT_CANTRANSCENDENCE_OFFSET UNITYSDK_OFFSET(0x1E47620)
#define EQUIPMENTOBJECT_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0x1E476A0)
#define EQUIPMENTOBJECT_GETLEVELUPCURRENCYREQUIREDCOST_OFFSET UNITYSDK_OFFSET(0x1E47730)
#define EQUIPMENTOBJECT_GET_STACKCOUNT_OFFSET UNITYSDK_OFFSET(0x1E47740)
#define EQUIPMENTOBJECT_GET_CATEGORYNAME_OFFSET UNITYSDK_OFFSET(0x1E47750)
#define EQUIPMENTOBJECT_GET_ISSTACKABLE_OFFSET UNITYSDK_OFFSET(0x1E477C0)
#define EQUIPMENTOBJECT_GET_ISMAXSTACK_OFFSET UNITYSDK_OFFSET(0x1E45AC0)
#define EQUIPMENTOBJECT_GET_DB_OFFSET UNITYSDK_OFFSET(0x1E477D0)
#define EQUIPMENTOBJECT_UPDATE_OFFSET UNITYSDK_OFFSET(0x1E434A0)
#define EQUIPMENTOBJECT_TOJOBJECT_OFFSET UNITYSDK_OFFSET(0x1E477E0)
#define EQUIPMENTOBJECT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E478E0)
#define EQUIPMENTOBJECT_GET_LEVELUPFEEDCOSTCURRENCY_OFFSET UNITYSDK_OFFSET(0x1E479D0)
#define EQUIPMENTOBJECT_SETTAGS_OFFSET UNITYSDK_OFFSET(0x1E46ED0)
#define EQUIPMENTOBJECT_GET_ISBOUNDED_OFFSET UNITYSDK_OFFSET(0x1E437C0)
#define EQUIPMENTOBJECT_SET_EQUIPMENTEXCEL_OFFSET UNITYSDK_OFFSET(0x1E47A00)
#define EQUIPMENTOBJECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E437F0)
#define EQUIPMENTOBJECT_GET_CATEGORY_OFFSET UNITYSDK_OFFSET(0x1E44800)
#define EQUIPMENTOBJECT_GET_MAXSTARGRADE_OFFSET UNITYSDK_OFFSET(0x1E47A20)
#define EQUIPMENTOBJECT_SET_DB_OFFSET UNITYSDK_OFFSET(0x1E47A30)
#define EQUIPMENTOBJECT_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x1E47A40)
#define EQUIPMENTOBJECT_SET_BOUNDSLOTINDEX_OFFSET UNITYSDK_OFFSET(0x1E47A50)
#define EQUIPMENTOBJECT_GET_CANBECONSUMED_OFFSET UNITYSDK_OFFSET(0x1E47A60)
#define EQUIPMENTOBJECT_SET_EQUIPMENTLEVELEXCEL_OFFSET UNITYSDK_OFFSET(0x1E47A90)

	inline static constexpr unsigned int EquipmentObject_TypeDefinitionIndex = 1681;

	class EquipmentObject : public ::System::Numerics::DoubleUlong
	{
	public:
		SecureLong* _BoundCharacterServerId_k__BackingField; // 0x68
		SecureInt* _BoundSlotIndex_k__BackingField; // 0x70
		::MX::GameLogic::DBModel::EquipmentDB* _DB_k__BackingField; // 0x78
		::MX::Data::Excel::EquipmentExcel* _EquipmentExcel_k__BackingField; // 0x80
		::MX::Data::Excel::EquipmentLevelExcel* _EquipmentLevelExcel_k__BackingField; // 0x90
		::MX::Data::Excel::EquipmentStatExcel* _EquipmentStatExcel_k__BackingField; // 0xA0
		Il2CppObject* _LevelStats_k__BackingField; // 0xB0
		Il2CppObject* _Tags_k__BackingField; // 0xB8

		::System::Boolean get_HasLevel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTOBJECT_GET_HASLEVEL_OFFSET))(nullptr);
		}

		::System::String* get_TypeSprite()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTOBJECT_GET_TYPESPRITE_OFFSET))(nullptr);
		}

		::System::Void set_StackCount(SecureLong* arg)
		{
			((::System::Void(*)(SecureLong*, ::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTOBJECT_SET_STACKCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Void set_BoundCharacterServerId(SecureLong* arg)
		{
			((::System::Void(*)(SecureLong*, ::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTOBJECT_SET_BOUNDCHARACTERSERVERID_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Tags()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTOBJECT_GET_TAGS_OFFSET))(nullptr);
		}

		::System::Void set_LevelStats(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTOBJECT_SET_LEVELSTATS_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::EquipmentStatExcel* get_EquipmentStatExcel()
		{
			return ((::MX::Data::Excel::EquipmentStatExcel*(*)(::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTOBJECT_GET_EQUIPMENTSTATEXCEL_OFFSET))(nullptr);
		}

		::System::String* get_TextureDir()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTOBJECT_GET_TEXTUREDIR_OFFSET))(nullptr);
		}

		Il2CppObject* get_LevelStats()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTOBJECT_GET_LEVELSTATS_OFFSET))(nullptr);
		}

		::System::Int64 get_LevelUpFeedCostAmount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTOBJECT_GET_LEVELUPFEEDCOSTAMOUNT_OFFSET))(nullptr);
		}

		::System::Void set_EquipmentStatExcel(::MX::Data::Excel::EquipmentStatExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::EquipmentStatExcel*, ::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTOBJECT_SET_EQUIPMENTSTATEXCEL_OFFSET))(arg, nullptr);
		}

		::System::String* GetExpText(::System::Boolean arg)
		{
			return ((::System::String*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTOBJECT_GETEXPTEXT_OFFSET))(arg, nullptr);
		}

		::System::Int64 GetTotalExpBaseToCurExp()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTOBJECT_GETTOTALEXPBASETOCUREXP_OFFSET))(nullptr);
		}

		::System::Single GetExpRatio()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTOBJECT_GETEXPRATIO_OFFSET))(nullptr);
		}

		::System::Int64 GetTotalExpBaseLevelToMaxLevel()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTOBJECT_GETTOTALEXPBASELEVELTOMAXLEVEL_OFFSET))(nullptr);
		}

		::System::Void CopyPropertyFromDB(::MX::GameLogic::DBModel::EquipmentDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::EquipmentDB*, ::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTOBJECT_COPYPROPERTYFROMDB_OFFSET))(arg, nullptr);
		}

		::System::String* get_DamageFactorGroupId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTOBJECT_GET_DAMAGEFACTORGROUPID_OFFSET))(nullptr);
		}

		::System::Boolean CanLevelUp()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTOBJECT_CANLEVELUP_OFFSET))(nullptr);
		}

		::System::Int64 get_LevelUpFeedExp()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTOBJECT_GET_LEVELUPFEEDEXP_OFFSET))(nullptr);
		}

		SecureLong* get_BoundCharacterServerId()
		{
			return ((SecureLong*(*)(::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTOBJECT_GET_BOUNDCHARACTERSERVERID_OFFSET))(nullptr);
		}

		::MX::Data::Excel::EquipmentLevelExcel* get_EquipmentLevelExcel()
		{
			return ((::MX::Data::Excel::EquipmentLevelExcel*(*)(::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTOBJECT_GET_EQUIPMENTLEVELEXCEL_OFFSET))(nullptr);
		}

		::MX::Data::Excel::EquipmentExcel* get_EquipmentExcel()
		{
			return ((::MX::Data::Excel::EquipmentExcel*(*)(::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTOBJECT_GET_EQUIPMENTEXCEL_OFFSET))(nullptr);
		}

		SecureInt* get_BoundSlotIndex()
		{
			return ((SecureInt*(*)(::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTOBJECT_GET_BOUNDSLOTINDEX_OFFSET))(nullptr);
		}

		::System::Void set_Tags(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTOBJECT_SET_TAGS_OFFSET))(arg, nullptr);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTOBJECT_GET_NAME_OFFSET))(nullptr);
		}

		::System::Boolean CanTierUp()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTOBJECT_CANTIERUP_OFFSET))(nullptr);
		}

		::MX::Logic::Data::EquipmentSetting* ToEquipmentSetting()
		{
			return ((::MX::Logic::Data::EquipmentSetting*(*)(::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTOBJECT_TOEQUIPMENTSETTING_OFFSET))(nullptr);
		}

		::System::Boolean CanTranscendence()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTOBJECT_CANTRANSCENDENCE_OFFSET))(nullptr);
		}

		::System::String* get_Description()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTOBJECT_GET_DESCRIPTION_OFFSET))(nullptr);
		}

		::System::Int64 GetLevelUpCurrencyRequiredCost(::System::Int64 arg)
		{
			return ((::System::Int64(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTOBJECT_GETLEVELUPCURRENCYREQUIREDCOST_OFFSET))(arg, nullptr);
		}

		SecureLong* get_StackCount()
		{
			return ((SecureLong*(*)(::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTOBJECT_GET_STACKCOUNT_OFFSET))(nullptr);
		}

		::System::String* get_CategoryName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTOBJECT_GET_CATEGORYNAME_OFFSET))(nullptr);
		}

		::System::Boolean get_IsStackable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTOBJECT_GET_ISSTACKABLE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsMaxStack()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTOBJECT_GET_ISMAXSTACK_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::EquipmentDB* get_DB()
		{
			return ((::MX::GameLogic::DBModel::EquipmentDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTOBJECT_GET_DB_OFFSET))(nullptr);
		}

		::System::Void Update(::MX::GameLogic::DBModel::EquipmentDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::EquipmentDB*, ::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTOBJECT_UPDATE_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::Linq::JObject* ToJObject()
		{
			return ((::Newtonsoft::Json::Linq::JObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTOBJECT_TOJOBJECT_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTOBJECT_TOSTRING_OFFSET))(nullptr);
		}

		::FlatData::CurrencyTypes* get_LevelUpFeedCostCurrency()
		{
			return ((::FlatData::CurrencyTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTOBJECT_GET_LEVELUPFEEDCOSTCURRENCY_OFFSET))(nullptr);
		}

		::System::Void SetTags()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTOBJECT_SETTAGS_OFFSET))(nullptr);
		}

		::System::Boolean get_IsBounded()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTOBJECT_GET_ISBOUNDED_OFFSET))(nullptr);
		}

		::System::Void set_EquipmentExcel(::MX::Data::Excel::EquipmentExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::EquipmentExcel*, ::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTOBJECT_SET_EQUIPMENTEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::GameLogic::DBModel::EquipmentDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::EquipmentDB*, ::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTOBJECT_.CTOR_OFFSET))(arg, nullptr);
		}

		::FlatData::EquipmentCategory* get_Category()
		{
			return ((::FlatData::EquipmentCategory*(*)(::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTOBJECT_GET_CATEGORY_OFFSET))(nullptr);
		}

		::System::Int32 get_MaxStarGrade()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTOBJECT_GET_MAXSTARGRADE_OFFSET))(nullptr);
		}

		::System::Void set_DB(::MX::GameLogic::DBModel::EquipmentDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::EquipmentDB*, ::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTOBJECT_SET_DB_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTOBJECT_GET_ISVALID_OFFSET))(nullptr);
		}

		::System::Void set_BoundSlotIndex(SecureInt* arg)
		{
			((::System::Void(*)(SecureInt*, ::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTOBJECT_SET_BOUNDSLOTINDEX_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_CanBeConsumed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTOBJECT_GET_CANBECONSUMED_OFFSET))(nullptr);
		}

		::System::Void set_EquipmentLevelExcel(::MX::Data::Excel::EquipmentLevelExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::EquipmentLevelExcel*, ::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTOBJECT_SET_EQUIPMENTLEVELEXCEL_OFFSET))(arg, nullptr);
		}

	};

