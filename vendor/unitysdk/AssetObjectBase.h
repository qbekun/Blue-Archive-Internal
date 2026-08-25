#pragma once
#include "unitysdk.h"

class SecureLong;
namespace FlatData { class Rarity; }
class SecureInt;
namespace Newtonsoft::Json::Linq { class JObject; }
namespace FlatData { class CurrencyTypes; }

#define ASSETOBJECTBASE_TOJOBJECT_OFFSET UNITYSDK_OFFSET(0x181EB50)
#define ASSETOBJECTBASE_GET_CANBECONSUMED_OFFSET UNITYSDK_OFFSET(0x000000)
#define ASSETOBJECTBASE_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x181ECA0)
#define ASSETOBJECTBASE_GETLEVELUPCURRENCYREQUIREDCOST_OFFSET UNITYSDK_OFFSET(0x000000)
#define ASSETOBJECTBASE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x181ECB0)
#define ASSETOBJECTBASE_CANLEVELUP_OFFSET UNITYSDK_OFFSET(0x000000)
#define ASSETOBJECTBASE_CANTRANSCENDENCE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ASSETOBJECTBASE_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x181ED90)
#define ASSETOBJECTBASE_.CTOR_OFFSET UNITYSDK_OFFSET(0x181EDA0)
#define ASSETOBJECTBASE_SET_STARGRADE_OFFSET UNITYSDK_OFFSET(0x181EDB0)
#define ASSETOBJECTBASE_SET_ISLOCKED_OFFSET UNITYSDK_OFFSET(0x181EDC0)
#define ASSETOBJECTBASE_SET_MAXLEVEL_OFFSET UNITYSDK_OFFSET(0x181EDD0)
#define ASSETOBJECTBASE_GET_LEVELUPFEEDCOSTCURRENCY_OFFSET UNITYSDK_OFFSET(0x000000)
#define ASSETOBJECTBASE_GET_MAXSTARGRADE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ASSETOBJECTBASE_GETEXPRATIO_OFFSET UNITYSDK_OFFSET(0x000000)
#define ASSETOBJECTBASE_GET_ISLOCKED_OFFSET UNITYSDK_OFFSET(0x181EDE0)
#define ASSETOBJECTBASE_GET_TEXTUREDIR_OFFSET UNITYSDK_OFFSET(0x000000)
#define ASSETOBJECTBASE_SET_EXP_OFFSET UNITYSDK_OFFSET(0x181EDF0)
#define ASSETOBJECTBASE_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0x000000)
#define ASSETOBJECTBASE_GET_LEVELUPFEEDEXP_OFFSET UNITYSDK_OFFSET(0x000000)
#define ASSETOBJECTBASE_SET_ISNEW_OFFSET UNITYSDK_OFFSET(0x181EE00)
#define ASSETOBJECTBASE_SET_SERVERID_OFFSET UNITYSDK_OFFSET(0x181EE10)
#define ASSETOBJECTBASE_SET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x181EE20)
#define ASSETOBJECTBASE_GET_HASLEVEL_OFFSET UNITYSDK_OFFSET(0x000000)
#define ASSETOBJECTBASE_GET_EXP_OFFSET UNITYSDK_OFFSET(0x181EE30)
#define ASSETOBJECTBASE_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x181EE40)
#define ASSETOBJECTBASE_GET_TRANSCENDENCECOUNT_OFFSET UNITYSDK_OFFSET(0x181EE50)
#define ASSETOBJECTBASE_SET_TIER_OFFSET UNITYSDK_OFFSET(0x181EE60)
#define ASSETOBJECTBASE_GET_MAXLEVEL_OFFSET UNITYSDK_OFFSET(0x181EE70)
#define ASSETOBJECTBASE_GET_TYPESPRITE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ASSETOBJECTBASE_GET_SERVERID_OFFSET UNITYSDK_OFFSET(0x181EE80)
#define ASSETOBJECTBASE_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x000000)
#define ASSETOBJECTBASE_SET_RARITY_OFFSET UNITYSDK_OFFSET(0x181EE90)
#define ASSETOBJECTBASE_GET_STACKCOUNT_OFFSET UNITYSDK_OFFSET(0x181EEA0)
#define ASSETOBJECTBASE_GETTOTALEXPBASELEVELTOMAXLEVEL_OFFSET UNITYSDK_OFFSET(0x000000)
#define ASSETOBJECTBASE_GET_ISNEW_OFFSET UNITYSDK_OFFSET(0x181EEB0)
#define ASSETOBJECTBASE_SET_TRANSCENDENCECOUNT_OFFSET UNITYSDK_OFFSET(0x181EEC0)
#define ASSETOBJECTBASE_GET_RARITY_OFFSET UNITYSDK_OFFSET(0x181EED0)
#define ASSETOBJECTBASE_GET_ISMAXLEVEL_OFFSET UNITYSDK_OFFSET(0x181EEE0)
#define ASSETOBJECTBASE_GET_LEVELUPFEEDCOSTAMOUNT_OFFSET UNITYSDK_OFFSET(0x000000)
#define ASSETOBJECTBASE_GET_TIER_OFFSET UNITYSDK_OFFSET(0x181EEF0)
#define ASSETOBJECTBASE_SET_STACKCOUNT_OFFSET UNITYSDK_OFFSET(0x181EF00)
#define ASSETOBJECTBASE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x000000)
#define ASSETOBJECTBASE_GET_STARGRADE_OFFSET UNITYSDK_OFFSET(0x181EF10)
#define ASSETOBJECTBASE_GET_ISSTACKABLE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ASSETOBJECTBASE_GETTOTALEXPBASETOCUREXP_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int AssetObjectBase_TypeDefinitionIndex = 1282;

	class AssetObjectBase : public Il2CppObject
	{
	public:
		SecureLong* _ServerId_k__BackingField; // 0x10
		SecureLong* _UniqueId_k__BackingField; // 0x18
		::FlatData::Rarity* _Rarity_k__BackingField; // 0x20
		SecureLong* _Tier_k__BackingField; // 0x28
		SecureInt* _StarGrade_k__BackingField; // 0x30
		SecureInt* _Level_k__BackingField; // 0x38
		SecureLong* _Exp_k__BackingField; // 0x40
		SecureInt* _TranscendenceCount_k__BackingField; // 0x48
		::System::Boolean _IsNew_k__BackingField; // 0x50
		::System::Boolean _IsLocked_k__BackingField; // 0x51
		SecureInt* _MaxLevel_k__BackingField; // 0x58
		SecureLong* _StackCount_k__BackingField; // 0x60

		::Newtonsoft::Json::Linq::JObject* ToJObject()
		{
			return ((::Newtonsoft::Json::Linq::JObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETOBJECTBASE_TOJOBJECT_OFFSET))(nullptr);
		}

		::System::Boolean get_CanBeConsumed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETOBJECTBASE_GET_CANBECONSUMED_OFFSET))(nullptr);
		}

		SecureLong* get_UniqueId()
		{
			return ((SecureLong*(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETOBJECTBASE_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::System::Int64 GetLevelUpCurrencyRequiredCost(::System::Int64 arg)
		{
			return ((::System::Int64(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + ASSETOBJECTBASE_GETLEVELUPCURRENCYREQUIREDCOST_OFFSET))(arg, nullptr);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETOBJECTBASE_TOSTRING_OFFSET))(nullptr);
		}

		::System::Boolean CanLevelUp()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETOBJECTBASE_CANLEVELUP_OFFSET))(nullptr);
		}

		::System::Boolean CanTranscendence()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETOBJECTBASE_CANTRANSCENDENCE_OFFSET))(nullptr);
		}

		SecureInt* get_Level()
		{
			return ((SecureInt*(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETOBJECTBASE_GET_LEVEL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETOBJECTBASE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_StarGrade(SecureInt* arg)
		{
			((::System::Void(*)(SecureInt*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETOBJECTBASE_SET_STARGRADE_OFFSET))(arg, nullptr);
		}

		::System::Void set_IsLocked(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + ASSETOBJECTBASE_SET_ISLOCKED_OFFSET))(arg, nullptr);
		}

		::System::Void set_MaxLevel(SecureInt* arg)
		{
			((::System::Void(*)(SecureInt*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETOBJECTBASE_SET_MAXLEVEL_OFFSET))(arg, nullptr);
		}

		::FlatData::CurrencyTypes* get_LevelUpFeedCostCurrency()
		{
			return ((::FlatData::CurrencyTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETOBJECTBASE_GET_LEVELUPFEEDCOSTCURRENCY_OFFSET))(nullptr);
		}

		::System::Int32 get_MaxStarGrade()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETOBJECTBASE_GET_MAXSTARGRADE_OFFSET))(nullptr);
		}

		::System::Single GetExpRatio()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETOBJECTBASE_GETEXPRATIO_OFFSET))(nullptr);
		}

		::System::Boolean get_IsLocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETOBJECTBASE_GET_ISLOCKED_OFFSET))(nullptr);
		}

		::System::String* get_TextureDir()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETOBJECTBASE_GET_TEXTUREDIR_OFFSET))(nullptr);
		}

		::System::Void set_Exp(SecureLong* arg)
		{
			((::System::Void(*)(SecureLong*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETOBJECTBASE_SET_EXP_OFFSET))(arg, nullptr);
		}

		::System::String* get_Description()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETOBJECTBASE_GET_DESCRIPTION_OFFSET))(nullptr);
		}

		::System::Int64 get_LevelUpFeedExp()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETOBJECTBASE_GET_LEVELUPFEEDEXP_OFFSET))(nullptr);
		}

		::System::Void set_IsNew(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + ASSETOBJECTBASE_SET_ISNEW_OFFSET))(arg, nullptr);
		}

		::System::Void set_ServerId(SecureLong* arg)
		{
			((::System::Void(*)(SecureLong*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETOBJECTBASE_SET_SERVERID_OFFSET))(arg, nullptr);
		}

		::System::Void set_UniqueId(SecureLong* arg)
		{
			((::System::Void(*)(SecureLong*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETOBJECTBASE_SET_UNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_HasLevel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETOBJECTBASE_GET_HASLEVEL_OFFSET))(nullptr);
		}

		SecureLong* get_Exp()
		{
			return ((SecureLong*(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETOBJECTBASE_GET_EXP_OFFSET))(nullptr);
		}

		::System::Void set_Level(SecureInt* arg)
		{
			((::System::Void(*)(SecureInt*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETOBJECTBASE_SET_LEVEL_OFFSET))(arg, nullptr);
		}

		SecureInt* get_TranscendenceCount()
		{
			return ((SecureInt*(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETOBJECTBASE_GET_TRANSCENDENCECOUNT_OFFSET))(nullptr);
		}

		::System::Void set_Tier(SecureLong* arg)
		{
			((::System::Void(*)(SecureLong*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETOBJECTBASE_SET_TIER_OFFSET))(arg, nullptr);
		}

		SecureInt* get_MaxLevel()
		{
			return ((SecureInt*(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETOBJECTBASE_GET_MAXLEVEL_OFFSET))(nullptr);
		}

		::System::String* get_TypeSprite()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETOBJECTBASE_GET_TYPESPRITE_OFFSET))(nullptr);
		}

		SecureLong* get_ServerId()
		{
			return ((SecureLong*(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETOBJECTBASE_GET_SERVERID_OFFSET))(nullptr);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETOBJECTBASE_GET_ISVALID_OFFSET))(nullptr);
		}

		::System::Void set_Rarity(::FlatData::Rarity* arg)
		{
			((::System::Void(*)(::FlatData::Rarity*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETOBJECTBASE_SET_RARITY_OFFSET))(arg, nullptr);
		}

		SecureLong* get_StackCount()
		{
			return ((SecureLong*(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETOBJECTBASE_GET_STACKCOUNT_OFFSET))(nullptr);
		}

		::System::Int64 GetTotalExpBaseLevelToMaxLevel()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETOBJECTBASE_GETTOTALEXPBASELEVELTOMAXLEVEL_OFFSET))(nullptr);
		}

		::System::Boolean get_IsNew()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETOBJECTBASE_GET_ISNEW_OFFSET))(nullptr);
		}

		::System::Void set_TranscendenceCount(SecureInt* arg)
		{
			((::System::Void(*)(SecureInt*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETOBJECTBASE_SET_TRANSCENDENCECOUNT_OFFSET))(arg, nullptr);
		}

		::FlatData::Rarity* get_Rarity()
		{
			return ((::FlatData::Rarity*(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETOBJECTBASE_GET_RARITY_OFFSET))(nullptr);
		}

		::System::Boolean get_IsMaxLevel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETOBJECTBASE_GET_ISMAXLEVEL_OFFSET))(nullptr);
		}

		::System::Int64 get_LevelUpFeedCostAmount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETOBJECTBASE_GET_LEVELUPFEEDCOSTAMOUNT_OFFSET))(nullptr);
		}

		SecureLong* get_Tier()
		{
			return ((SecureLong*(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETOBJECTBASE_GET_TIER_OFFSET))(nullptr);
		}

		::System::Void set_StackCount(SecureLong* arg)
		{
			((::System::Void(*)(SecureLong*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETOBJECTBASE_SET_STACKCOUNT_OFFSET))(arg, nullptr);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETOBJECTBASE_GET_NAME_OFFSET))(nullptr);
		}

		SecureInt* get_StarGrade()
		{
			return ((SecureInt*(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETOBJECTBASE_GET_STARGRADE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsStackable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETOBJECTBASE_GET_ISSTACKABLE_OFFSET))(nullptr);
		}

		::System::Int64 GetTotalExpBaseToCurExp()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETOBJECTBASE_GETTOTALEXPBASETOCUREXP_OFFSET))(nullptr);
		}

	};

