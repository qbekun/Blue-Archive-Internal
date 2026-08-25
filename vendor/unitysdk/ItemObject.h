#pragma once
#include "unitysdk.h"

namespace MX::GameLogic::DBModel { class ItemDB; }
namespace MX::Data::Excel { class ItemExcel; }
namespace FlatData { class CurrencyTypes; }
class SecureLong;
namespace FlatData { class ItemCategory; }

#define ITEMOBJECT_GET_TYPESPRITE_OFFSET UNITYSDK_OFFSET(0x1E52210)
#define ITEMOBJECT_GET_ISMAXSTACK_OFFSET UNITYSDK_OFFSET(0x1E51D90)
#define ITEMOBJECT_GET_LEVELUPFEEDCOSTCURRENCY_OFFSET UNITYSDK_OFFSET(0x1E52290)
#define ITEMOBJECT_GET_EXPIRATIONDATETIME_OFFSET UNITYSDK_OFFSET(0x1E522A0)
#define ITEMOBJECT_SET_ITEMEXCEL_OFFSET UNITYSDK_OFFSET(0x1E522B0)
#define ITEMOBJECT_GET_TEXTUREDIR_OFFSET UNITYSDK_OFFSET(0x1E522D0)
#define ITEMOBJECT_SET_STACKCOUNT_OFFSET UNITYSDK_OFFSET(0x1E522F0)
#define ITEMOBJECT_COPYPROPERTYFROMDB_OFFSET UNITYSDK_OFFSET(0x1E52330)
#define ITEMOBJECT_GETLEVELUPCURRENCYREQUIREDCOST_OFFSET UNITYSDK_OFFSET(0x1E525C0)
#define ITEMOBJECT_GET_ISSTACKABLE_OFFSET UNITYSDK_OFFSET(0x1E525D0)
#define ITEMOBJECT_UPDATE_OFFSET UNITYSDK_OFFSET(0x1E4F300)
#define ITEMOBJECT_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x1E525E0)
#define ITEMOBJECT_GET_STACKCOUNT_OFFSET UNITYSDK_OFFSET(0x1E526B0)
#define ITEMOBJECT_GET_CANBECONSUMED_OFFSET UNITYSDK_OFFSET(0x1E526C0)
#define ITEMOBJECT_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1E526F0)
#define ITEMOBJECT_GET_QUALITY_OFFSET UNITYSDK_OFFSET(0x1E52780)
#define ITEMOBJECT_CANTRANSCENDENCE_OFFSET UNITYSDK_OFFSET(0x1E52790)
#define ITEMOBJECT_GET_HASEXPIRATIONDATETIME_OFFSET UNITYSDK_OFFSET(0x1E51F30)
#define ITEMOBJECT_GET_CATEGORY_OFFSET UNITYSDK_OFFSET(0x1E4FA30)
#define ITEMOBJECT_SET_QUALITY_OFFSET UNITYSDK_OFFSET(0x1E527A0)
#define ITEMOBJECT_GET_ITEMEXCEL_OFFSET UNITYSDK_OFFSET(0x1E527B0)
#define ITEMOBJECT_GET_LEVELUPFEEDCOSTAMOUNT_OFFSET UNITYSDK_OFFSET(0x1E527C0)
#define ITEMOBJECT_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0x1E527D0)
#define ITEMOBJECT_SETTAGS_OFFSET UNITYSDK_OFFSET(0x1E523D0)
#define ITEMOBJECT_GET_MAXSTARGRADE_OFFSET UNITYSDK_OFFSET(0x1E52860)
#define ITEMOBJECT_GET_DB_OFFSET UNITYSDK_OFFSET(0x1E52870)
#define ITEMOBJECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E4EFB0)
#define ITEMOBJECT_GETEXPRATIO_OFFSET UNITYSDK_OFFSET(0x1E52880)
#define ITEMOBJECT_GET_ISREMAINEXPIRATIONTIME_OFFSET UNITYSDK_OFFSET(0x1E525F0)
#define ITEMOBJECT_CANLEVELUP_OFFSET UNITYSDK_OFFSET(0x1E52890)
#define ITEMOBJECT_GETTOTALEXPBASELEVELTOMAXLEVEL_OFFSET UNITYSDK_OFFSET(0x1E528A0)
#define ITEMOBJECT_SET_DB_OFFSET UNITYSDK_OFFSET(0x1E528B0)
#define ITEMOBJECT_GET_HASLEVEL_OFFSET UNITYSDK_OFFSET(0x1E528C0)
#define ITEMOBJECT_GET_LEVELUPFEEDEXP_OFFSET UNITYSDK_OFFSET(0x1E528D0)
#define ITEMOBJECT_GETTOTALEXPBASETOCUREXP_OFFSET UNITYSDK_OFFSET(0x1E528F0)
#define ITEMOBJECT_SET_EXPIRATIONDATETIME_OFFSET UNITYSDK_OFFSET(0x1E52900)

	inline static constexpr unsigned int ItemObject_TypeDefinitionIndex = 1704;

	class ItemObject : public ::System::Numerics::DoubleUlong
	{
	public:
		::MX::GameLogic::DBModel::ItemDB* _DB_k__BackingField; // 0x68
		::MX::Data::Excel::ItemExcel* _ItemExcel_k__BackingField; // 0x70
		::System::Int64 _Quality_k__BackingField; // 0x80
		Il2CppObject* Tags; // 0x88
		::System::DateTime* _ExpirationDateTime_k__BackingField; // 0x90

		::System::String* get_TypeSprite()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ITEMOBJECT_GET_TYPESPRITE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsMaxStack()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ITEMOBJECT_GET_ISMAXSTACK_OFFSET))(nullptr);
		}

		::FlatData::CurrencyTypes* get_LevelUpFeedCostCurrency()
		{
			return ((::FlatData::CurrencyTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + ITEMOBJECT_GET_LEVELUPFEEDCOSTCURRENCY_OFFSET))(nullptr);
		}

		::System::DateTime* get_ExpirationDateTime()
		{
			return ((::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + ITEMOBJECT_GET_EXPIRATIONDATETIME_OFFSET))(nullptr);
		}

		::System::Void set_ItemExcel(::MX::Data::Excel::ItemExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::ItemExcel*, ::PVOID))((::PBYTE)hIl2Cpp + ITEMOBJECT_SET_ITEMEXCEL_OFFSET))(arg, nullptr);
		}

		::System::String* get_TextureDir()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ITEMOBJECT_GET_TEXTUREDIR_OFFSET))(nullptr);
		}

		::System::Void set_StackCount(SecureLong* arg)
		{
			((::System::Void(*)(SecureLong*, ::PVOID))((::PBYTE)hIl2Cpp + ITEMOBJECT_SET_STACKCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Void CopyPropertyFromDB(::MX::GameLogic::DBModel::ItemDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ItemDB*, ::PVOID))((::PBYTE)hIl2Cpp + ITEMOBJECT_COPYPROPERTYFROMDB_OFFSET))(arg, nullptr);
		}

		::System::Int64 GetLevelUpCurrencyRequiredCost(::System::Int64 arg)
		{
			return ((::System::Int64(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + ITEMOBJECT_GETLEVELUPCURRENCYREQUIREDCOST_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsStackable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ITEMOBJECT_GET_ISSTACKABLE_OFFSET))(nullptr);
		}

		::System::Void Update(::MX::GameLogic::DBModel::ItemDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ItemDB*, ::PVOID))((::PBYTE)hIl2Cpp + ITEMOBJECT_UPDATE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ITEMOBJECT_GET_ISVALID_OFFSET))(nullptr);
		}

		SecureLong* get_StackCount()
		{
			return ((SecureLong*(*)(::PVOID))((::PBYTE)hIl2Cpp + ITEMOBJECT_GET_STACKCOUNT_OFFSET))(nullptr);
		}

		::System::Boolean get_CanBeConsumed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ITEMOBJECT_GET_CANBECONSUMED_OFFSET))(nullptr);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ITEMOBJECT_GET_NAME_OFFSET))(nullptr);
		}

		::System::Int64 get_Quality()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + ITEMOBJECT_GET_QUALITY_OFFSET))(nullptr);
		}

		::System::Boolean CanTranscendence()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ITEMOBJECT_CANTRANSCENDENCE_OFFSET))(nullptr);
		}

		::System::Boolean get_HasExpirationDateTime()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ITEMOBJECT_GET_HASEXPIRATIONDATETIME_OFFSET))(nullptr);
		}

		::FlatData::ItemCategory* get_Category()
		{
			return ((::FlatData::ItemCategory*(*)(::PVOID))((::PBYTE)hIl2Cpp + ITEMOBJECT_GET_CATEGORY_OFFSET))(nullptr);
		}

		::System::Void set_Quality(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + ITEMOBJECT_SET_QUALITY_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::ItemExcel* get_ItemExcel()
		{
			return ((::MX::Data::Excel::ItemExcel*(*)(::PVOID))((::PBYTE)hIl2Cpp + ITEMOBJECT_GET_ITEMEXCEL_OFFSET))(nullptr);
		}

		::System::Int64 get_LevelUpFeedCostAmount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + ITEMOBJECT_GET_LEVELUPFEEDCOSTAMOUNT_OFFSET))(nullptr);
		}

		::System::String* get_Description()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ITEMOBJECT_GET_DESCRIPTION_OFFSET))(nullptr);
		}

		::System::Void SetTags()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ITEMOBJECT_SETTAGS_OFFSET))(nullptr);
		}

		::System::Int32 get_MaxStarGrade()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ITEMOBJECT_GET_MAXSTARGRADE_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::ItemDB* get_DB()
		{
			return ((::MX::GameLogic::DBModel::ItemDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + ITEMOBJECT_GET_DB_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::GameLogic::DBModel::ItemDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ItemDB*, ::PVOID))((::PBYTE)hIl2Cpp + ITEMOBJECT_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Single GetExpRatio()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ITEMOBJECT_GETEXPRATIO_OFFSET))(nullptr);
		}

		::System::Boolean get_IsRemainExpirationTime()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ITEMOBJECT_GET_ISREMAINEXPIRATIONTIME_OFFSET))(nullptr);
		}

		::System::Boolean CanLevelUp()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ITEMOBJECT_CANLEVELUP_OFFSET))(nullptr);
		}

		::System::Int64 GetTotalExpBaseLevelToMaxLevel()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + ITEMOBJECT_GETTOTALEXPBASELEVELTOMAXLEVEL_OFFSET))(nullptr);
		}

		::System::Void set_DB(::MX::GameLogic::DBModel::ItemDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ItemDB*, ::PVOID))((::PBYTE)hIl2Cpp + ITEMOBJECT_SET_DB_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_HasLevel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ITEMOBJECT_GET_HASLEVEL_OFFSET))(nullptr);
		}

		::System::Int64 get_LevelUpFeedExp()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + ITEMOBJECT_GET_LEVELUPFEEDEXP_OFFSET))(nullptr);
		}

		::System::Int64 GetTotalExpBaseToCurExp()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + ITEMOBJECT_GETTOTALEXPBASETOCUREXP_OFFSET))(nullptr);
		}

		::System::Void set_ExpirationDateTime(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + ITEMOBJECT_SET_EXPIRATIONDATETIME_OFFSET))(arg, nullptr);
		}

	};

