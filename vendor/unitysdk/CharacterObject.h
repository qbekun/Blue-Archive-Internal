#pragma once
#include "unitysdk.h"

class SecureLong;
class SecureInt;
class CharacterStyle;
namespace MX::GameLogic::DBModel { class CharacterDB; }
namespace MX::GameLogic::DBModel { class AssistCharacterDB; }
namespace MX::Data::Excel { class CharacterTranscendenceExcel; }
namespace MX::Data { class MonthAndDay; }
namespace MX::Logic::Data { class WeaponSetting; }
namespace MX::Logic::Data { class GearSetting; }
class CharacterStyleProperty;
namespace MX::Data::Excel { class CharacterExcel; }
namespace MX::Data::Excel { class CharacterSkillListExcel; }
namespace FlatData { class SquadType; }
namespace FlatData { class ArmorType; }
namespace FlatData { class BulletType; }
namespace FlatData { class WeaponType; }
namespace FlatData { class School; }
namespace MX::Data::Excel { class CostumeExcel; }
namespace MX::Logic::Data { class CostumeSetting; }
namespace FlatData { class CurrencyTypes; }
namespace FlatData { class EquipmentCategory; }
namespace MX::Logic::Data { class HeroSetting; }
namespace FlatData { class StatType; }
namespace Newtonsoft::Json::Linq { class JObject; }

#define CHARACTEROBJECT_GET_ISFAVORITE_OFFSET UNITYSDK_OFFSET(0x10B71C0)
#define CHARACTEROBJECT_SET_ISFAVORITE_OFFSET UNITYSDK_OFFSET(0x10B71D0)
#define CHARACTEROBJECT_GET_FAVOREXP_OFFSET UNITYSDK_OFFSET(0x10B71E0)
#define CHARACTEROBJECT_SET_FAVOREXP_OFFSET UNITYSDK_OFFSET(0x10B71F0)
#define CHARACTEROBJECT_GET_FAVORRANK_OFFSET UNITYSDK_OFFSET(0x10B7200)
#define CHARACTEROBJECT_SET_FAVORRANK_OFFSET UNITYSDK_OFFSET(0x10B7210)
#define CHARACTEROBJECT_GET_MAXFAVORRANK_OFFSET UNITYSDK_OFFSET(0x10B7220)
#define CHARACTEROBJECT_SET_MAXFAVORRANK_OFFSET UNITYSDK_OFFSET(0x10B7230)
#define CHARACTEROBJECT_GET_ISMAXFAVORRANK_OFFSET UNITYSDK_OFFSET(0x10B7240)
#define CHARACTEROBJECT_GET_ISMAXGRADE_OFFSET UNITYSDK_OFFSET(0x10B7270)
#define CHARACTEROBJECT_GET_HASWEAPON_OFFSET UNITYSDK_OFFSET(0x10B72C0)
#define CHARACTEROBJECT_GET_WEAPONSTARGRADE_OFFSET UNITYSDK_OFFSET(0x10B7390)
#define CHARACTEROBJECT_GET_WEAPONLEVEL_OFFSET UNITYSDK_OFFSET(0x10B74D0)
#define CHARACTEROBJECT_GET_GEARTIER_OFFSET UNITYSDK_OFFSET(0x10B7610)
#define CHARACTEROBJECT_GET_REPSTYLEPROPERTY_OFFSET UNITYSDK_OFFSET(0x10B7760)
#define CHARACTEROBJECT_GET_CURRENTSTYLEPROPERTY_OFFSET UNITYSDK_OFFSET(0x10B77F0)
#define CHARACTEROBJECT_GET_STYLE_OFFSET UNITYSDK_OFFSET(0x10B7880)
#define CHARACTEROBJECT_SET_STYLE_OFFSET UNITYSDK_OFFSET(0x10B7890)
#define CHARACTEROBJECT_GET_STYLEUNIQUEID_OFFSET UNITYSDK_OFFSET(0x10B78B0)
#define CHARACTEROBJECT_GET_STYLEINDEX_OFFSET UNITYSDK_OFFSET(0x10B7920)
#define CHARACTEROBJECT_GET_VOICEGROUPIDONGROWTH_OFFSET UNITYSDK_OFFSET(0x10B7940)
#define CHARACTEROBJECT_GET_HASLEVEL_OFFSET UNITYSDK_OFFSET(0x10B7AD0)
#define CHARACTEROBJECT_GET_ISSTACKABLE_OFFSET UNITYSDK_OFFSET(0x10B7AE0)
#define CHARACTEROBJECT_GET_SKILLLEVELDICTIONARY_OFFSET UNITYSDK_OFFSET(0x10B7AF0)
#define CHARACTEROBJECT_SET_SKILLLEVELDICTIONARY_OFFSET UNITYSDK_OFFSET(0x10B7B00)
#define CHARACTEROBJECT_GET_DB_OFFSET UNITYSDK_OFFSET(0x10B7B20)
#define CHARACTEROBJECT_SET_DB_OFFSET UNITYSDK_OFFSET(0x10B7B30)
#define CHARACTEROBJECT_GET_ASSISTDB_OFFSET UNITYSDK_OFFSET(0x10B7B50)
#define CHARACTEROBJECT_SET_ASSISTDB_OFFSET UNITYSDK_OFFSET(0x10B7B60)
#define CHARACTEROBJECT_GET_ISASSISTCHARACTER_OFFSET UNITYSDK_OFFSET(0x10B7B80)
#define CHARACTEROBJECT_GET_STYLECHARACTEREXCEL_OFFSET UNITYSDK_OFFSET(0x10B7B90)
#define CHARACTEROBJECT_GET_CHARACTEREXCEL_OFFSET UNITYSDK_OFFSET(0x10B4CA0)
#define CHARACTEROBJECT_GET_CHARACTERSKILLLISTEXCEL_OFFSET UNITYSDK_OFFSET(0x10B7C50)
#define CHARACTEROBJECT_GET_REPCHARACTERSKILLLISTEXCEL_OFFSET UNITYSDK_OFFSET(0x10B7D90)
#define CHARACTEROBJECT_GET_TRANSCENDENCEEXCEL_OFFSET UNITYSDK_OFFSET(0x10B7F30)
#define CHARACTEROBJECT_SET_TRANSCENDENCEEXCEL_OFFSET UNITYSDK_OFFSET(0x10B7F40)
#define CHARACTEROBJECT_GET_EQUIPMENTSERVERIDS_OFFSET UNITYSDK_OFFSET(0x10B7F60)
#define CHARACTEROBJECT_SET_EQUIPMENTSERVERIDS_OFFSET UNITYSDK_OFFSET(0x10B7F70)
#define CHARACTEROBJECT_GET_SQUADTYPE_OFFSET UNITYSDK_OFFSET(0x10B7F90)
#define CHARACTEROBJECT_GET_ARMORTYPE_OFFSET UNITYSDK_OFFSET(0x10B8020)
#define CHARACTEROBJECT_GET_BULLETTYPE_OFFSET UNITYSDK_OFFSET(0x10B80B0)
#define CHARACTEROBJECT_GET_WEAPONTYPE_OFFSET UNITYSDK_OFFSET(0x10B4B30)
#define CHARACTEROBJECT_GET_SCHOOL_OFFSET UNITYSDK_OFFSET(0x10B8180)
#define CHARACTEROBJECT_GET_STYLESQUADTYPE_OFFSET UNITYSDK_OFFSET(0x10B8210)
#define CHARACTEROBJECT_GET_STYLEARMORTYPE_OFFSET UNITYSDK_OFFSET(0x10B82B0)
#define CHARACTEROBJECT_GET_STYLEBULLETTYPE_OFFSET UNITYSDK_OFFSET(0x10B8350)
#define CHARACTEROBJECT_GET_STYLEWEAPONTYPE_OFFSET UNITYSDK_OFFSET(0x10B83F0)
#define CHARACTEROBJECT_GET_STYLESCHOOL_OFFSET UNITYSDK_OFFSET(0x10B8490)
#define CHARACTEROBJECT_GET_INTRODUCTIONTEXT_OFFSET UNITYSDK_OFFSET(0x10B8530)
#define CHARACTEROBJECT_GET_STATUSTEXT_OFFSET UNITYSDK_OFFSET(0x10B8610)
#define CHARACTEROBJECT_GET_PERSONALITYID_OFFSET UNITYSDK_OFFSET(0x10B3100)
#define CHARACTEROBJECT_GET_PROFILEBIRTHDAY_OFFSET UNITYSDK_OFFSET(0x10B86F0)
#define CHARACTEROBJECT_SET_PROFILEBIRTHDAY_OFFSET UNITYSDK_OFFSET(0x10B8700)
#define CHARACTEROBJECT_GET_BIRTHDAYISTODAY_OFFSET UNITYSDK_OFFSET(0x10B8720)
#define CHARACTEROBJECT_SET_BIRTHDAYISTODAY_OFFSET UNITYSDK_OFFSET(0x10B8730)
#define CHARACTEROBJECT_GET_BIRTHDAYISCOMMING_OFFSET UNITYSDK_OFFSET(0x10B8740)
#define CHARACTEROBJECT_SET_BIRTHDAYISCOMMING_OFFSET UNITYSDK_OFFSET(0x10B8750)
#define CHARACTEROBJECT_GET_BIRTHDAYISTODAYORCOMMIG_OFFSET UNITYSDK_OFFSET(0x10B8760)
#define CHARACTEROBJECT_GET_BIRTHDAYCOUNTDOWN_OFFSET UNITYSDK_OFFSET(0x10B8780)
#define CHARACTEROBJECT_SET_BIRTHDAYCOUNTDOWN_OFFSET UNITYSDK_OFFSET(0x10B8790)
#define CHARACTEROBJECT_TOEQUIPMENTSETTINGS_OFFSET UNITYSDK_OFFSET(0x10B87A0)
#define CHARACTEROBJECT_GET_FIXEDEQUIPMENTSETTINGS_OFFSET UNITYSDK_OFFSET(0x10B8840)
#define CHARACTEROBJECT_SET_FIXEDEQUIPMENTSETTINGS_OFFSET UNITYSDK_OFFSET(0x10B8850)
#define CHARACTEROBJECT_GET_ASSISTEQUIPMENTSETTINGS_OFFSET UNITYSDK_OFFSET(0x10B8870)
#define CHARACTEROBJECT_SET_ASSISTEQUIPMENTSETTINGS_OFFSET UNITYSDK_OFFSET(0x10B8880)
#define CHARACTEROBJECT_GET__FIXEDWEAPONSETTING_OFFSET UNITYSDK_OFFSET(0x10B88A0)
#define CHARACTEROBJECT_SET__FIXEDWEAPONSETTING_OFFSET UNITYSDK_OFFSET(0x10B88B0)
#define CHARACTEROBJECT_GET_FIXEDWEAPONSETTING_OFFSET UNITYSDK_OFFSET(0x10B88C0)
#define CHARACTEROBJECT_SET_FIXEDWEAPONSETTING_OFFSET UNITYSDK_OFFSET(0x10B8960)
#define CHARACTEROBJECT_GET__ASSISTWEAPONSETTING_OFFSET UNITYSDK_OFFSET(0x10B8970)
#define CHARACTEROBJECT_SET__ASSISTWEAPONSETTING_OFFSET UNITYSDK_OFFSET(0x10B8980)
#define CHARACTEROBJECT_GET_ASSISTWEAPONSETTING_OFFSET UNITYSDK_OFFSET(0x10B8990)
#define CHARACTEROBJECT_SET_ASSISTWEAPONSETTING_OFFSET UNITYSDK_OFFSET(0x10B8A40)
#define CHARACTEROBJECT_TOWEAPONSETTING_OFFSET UNITYSDK_OFFSET(0x10B7CE0)
#define CHARACTEROBJECT_TOWEAPONSETTING_OFFSET UNITYSDK_OFFSET(0x10B8A50)
#define CHARACTEROBJECT_GET__FIXEDGEARSETTING_OFFSET UNITYSDK_OFFSET(0x10B8C00)
#define CHARACTEROBJECT_SET__FIXEDGEARSETTING_OFFSET UNITYSDK_OFFSET(0x10B8C10)
#define CHARACTEROBJECT_GET_FIXEDGEARSETTING_OFFSET UNITYSDK_OFFSET(0x10B8C20)
#define CHARACTEROBJECT_SET_FIXEDGEARSETTING_OFFSET UNITYSDK_OFFSET(0x10B8F10)
#define CHARACTEROBJECT_GET__ASSISTGEARSETTING_OFFSET UNITYSDK_OFFSET(0x10B8F20)
#define CHARACTEROBJECT_SET__ASSISTGEARSETTING_OFFSET UNITYSDK_OFFSET(0x10B8F30)
#define CHARACTEROBJECT_GET_ASSISTGEARSETTING_OFFSET UNITYSDK_OFFSET(0x10B8F40)
#define CHARACTEROBJECT_SET_ASSISTGEARSETTING_OFFSET UNITYSDK_OFFSET(0x10B9230)
#define CHARACTEROBJECT_TOGEARSETTING_OFFSET UNITYSDK_OFFSET(0x10B7D10)
#define CHARACTEROBJECT_TOGEARSETTING_OFFSET UNITYSDK_OFFSET(0x10B9240)
#define CHARACTEROBJECT_TRYGETTSSINTERACTIONEXCEL_OFFSET UNITYSDK_OFFSET(0x10B93F0)
#define CHARACTEROBJECT_GET_COSTUMEID_OFFSET UNITYSDK_OFFSET(0x10B46F0)
#define CHARACTEROBJECT_GET_STYLECOSTUMEID_OFFSET UNITYSDK_OFFSET(0x10B4610)
#define CHARACTEROBJECT_GET_COSTUMEEXCEL_OFFSET UNITYSDK_OFFSET(0x10B7A80)
#define CHARACTEROBJECT_GET_STYLECOSTUMEEXCEL_OFFSET UNITYSDK_OFFSET(0x10B7A20)
#define CHARACTEROBJECT_TOCOSTUMESETTING_OFFSET UNITYSDK_OFFSET(0x10B9560)
#define CHARACTEROBJECT_GET_MODELPREFABNAME_OFFSET UNITYSDK_OFFSET(0x10B9720)
#define CHARACTEROBJECT_GET_CAFEMODELPREFABNAME_OFFSET UNITYSDK_OFFSET(0x10B9780)
#define CHARACTEROBJECT_GET_ECHELONMODELPREFABNAME_OFFSET UNITYSDK_OFFSET(0x10B97E0)
#define CHARACTEROBJECT_GET_STRATEGYMODELPREFABNAME_OFFSET UNITYSDK_OFFSET(0x10B9840)
#define CHARACTEROBJECT_GET_ENTERSTRATEGYANIMATIONNAME_OFFSET UNITYSDK_OFFSET(0x10B98A0)
#define CHARACTEROBJECT_GET_STYLEMODELPREFABNAME_OFFSET UNITYSDK_OFFSET(0x10B9900)
#define CHARACTEROBJECT_GET_STYLECAFEMODELPREFABNAME_OFFSET UNITYSDK_OFFSET(0x10B9970)
#define CHARACTEROBJECT_GET_STYLEECHELONMODELPREFABNAME_OFFSET UNITYSDK_OFFSET(0x10B99E0)
#define CHARACTEROBJECT_GET_STYLESTRATEGYMODELPREFABNAME_OFFSET UNITYSDK_OFFSET(0x10B9A50)
#define CHARACTEROBJECT_GET_STYLEENTERSTRATEGYANIMATIONNAME_OFFSET UNITYSDK_OFFSET(0x10B9AC0)
#define CHARACTEROBJECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x10B9B30)
#define CHARACTEROBJECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x10B2E50)
#define CHARACTEROBJECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x10BA0B0)
#define CHARACTEROBJECT_CREATE_OFFSET UNITYSDK_OFFSET(0x10B9CA0)
#define CHARACTEROBJECT_SETASSISTCHARACTERDB_OFFSET UNITYSDK_OFFSET(0x10BAA60)
#define CHARACTEROBJECT_UPDATE_OFFSET UNITYSDK_OFFSET(0x10B2FD0)
#define CHARACTEROBJECT_REAPPLYDB_OFFSET UNITYSDK_OFFSET(0x10BB0D0)
#define CHARACTEROBJECT_COPYPROPERTYFROMDB_OFFSET UNITYSDK_OFFSET(0x10BA660)
#define CHARACTEROBJECT_COPYSKILLLEVEL_OFFSET UNITYSDK_OFFSET(0x10BB0E0)
#define CHARACTEROBJECT_CANLEVELUP_OFFSET UNITYSDK_OFFSET(0x10BB380)
#define CHARACTEROBJECT_GETEXPRATIO_OFFSET UNITYSDK_OFFSET(0x10BB3A0)
#define CHARACTEROBJECT_GETEXPTEXT_OFFSET UNITYSDK_OFFSET(0x10BB460)
#define CHARACTEROBJECT_GETTOTALEXPBASETOCUREXP_OFFSET UNITYSDK_OFFSET(0x10BB600)
#define CHARACTEROBJECT_GETTOTALEXPBASELEVELTOMAXLEVEL_OFFSET UNITYSDK_OFFSET(0x10BB720)
#define CHARACTEROBJECT_GETLEVELUPCURRENCYREQUIREDCOST_OFFSET UNITYSDK_OFFSET(0x10BB7D0)
#define CHARACTEROBJECT_CANTRANSCENDENCE_OFFSET UNITYSDK_OFFSET(0x10BB7E0)
#define CHARACTEROBJECT_GET_MAXSTARGRADE_OFFSET UNITYSDK_OFFSET(0x10BB810)
#define CHARACTEROBJECT_GET_LEVELUPFEEDCOSTCURRENCY_OFFSET UNITYSDK_OFFSET(0x10BB860)
#define CHARACTEROBJECT_GET_LEVELUPFEEDCOSTAMOUNT_OFFSET UNITYSDK_OFFSET(0x10BB870)
#define CHARACTEROBJECT_GET_LEVELUPFEEDEXP_OFFSET UNITYSDK_OFFSET(0x10BB880)
#define CHARACTEROBJECT_GET_TYPESPRITE_OFFSET UNITYSDK_OFFSET(0x10BB890)
#define CHARACTEROBJECT_GET_STYLETEXTUREDIR_OFFSET UNITYSDK_OFFSET(0x10BB930)
#define CHARACTEROBJECT_GET_TEXTUREDIR_OFFSET UNITYSDK_OFFSET(0x10BB9A0)
#define CHARACTEROBJECT_GET_COLLECTIONTEXTUREPATH_OFFSET UNITYSDK_OFFSET(0x10BBA00)
#define CHARACTEROBJECT_GET_NAME_OFFSET UNITYSDK_OFFSET(0x10BBA60)
#define CHARACTEROBJECT_GET_STYLENAME_OFFSET UNITYSDK_OFFSET(0x10BBAF0)
#define CHARACTEROBJECT_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0x10BBB90)
#define CHARACTEROBJECT_GET_STYLEDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x10BBC20)
#define CHARACTEROBJECT_GET_CANBECONSUMED_OFFSET UNITYSDK_OFFSET(0x10BBCC0)
#define CHARACTEROBJECT_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x10BBD70)
#define CHARACTEROBJECT_GETEQUIPMENTITEMSERVERID_OFFSET UNITYSDK_OFFSET(0x10BBD80)
#define CHARACTEROBJECT_ISLOCKEQUIPSLOT_OFFSET UNITYSDK_OFFSET(0x10BBDF0)
#define CHARACTEROBJECT_ISEQUIPPED_OFFSET UNITYSDK_OFFSET(0x10BBE40)
#define CHARACTEROBJECT_GETEQUIPMENTITEMCATEGORY_OFFSET UNITYSDK_OFFSET(0x10BBEB0)
#define CHARACTEROBJECT_TOBATTLESETTING_OFFSET UNITYSDK_OFFSET(0x10BBF50)
#define CHARACTEROBJECT_TOBATTLESETTING_OFFSET UNITYSDK_OFFSET(0x10BBF80)
#define CHARACTEROBJECT_TOFIXEDECHELONCHARACTERBATTLESETTING_OFFSET UNITYSDK_OFFSET(0x10BC430)
#define CHARACTEROBJECT_TOASSISTECHELONCHARACTERBATTLESETTING_OFFSET UNITYSDK_OFFSET(0x10BC850)
#define CHARACTEROBJECT_CURRENTSTATVALUE_OFFSET UNITYSDK_OFFSET(0x10BCA80)
#define CHARACTEROBJECT_GETEXSKILLCOST_OFFSET UNITYSDK_OFFSET(0x10BCB40)
#define CHARACTEROBJECT_REFRESHBATTLESETTING_OFFSET UNITYSDK_OFFSET(0x10B3650)
#define CHARACTEROBJECT_GETASSISTHEROBATTLESETTING_OFFSET UNITYSDK_OFFSET(0x10BCC10)
#define CHARACTEROBJECT_GETASSISTECHELONSLOTTYPE_OFFSET UNITYSDK_OFFSET(0x10BD130)
#define CHARACTEROBJECT_SETBIRTHDAY_OFFSET UNITYSDK_OFFSET(0x10BD190)
#define CHARACTEROBJECT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x10BD390)
#define CHARACTEROBJECT_TOJOBJECT_OFFSET UNITYSDK_OFFSET(0x10BD620)
#define CHARACTEROBJECT_CHANGESTYLE_OFFSET UNITYSDK_OFFSET(0x10BAB20)
#define CHARACTEROBJECT_CHANGESTYLE_OFFSET UNITYSDK_OFFSET(0x10BD780)

	inline static constexpr unsigned int CharacterObject_TypeDefinitionIndex = 928;

	class CharacterObject : public ::System::Numerics::DoubleUlong
	{
	public:
		::System::Boolean _IsFavorite_k__BackingField; // 0x68
		SecureLong* _FavorExp_k__BackingField; // 0x70
		SecureInt* _FavorRank_k__BackingField; // 0x78
		::System::Int64 _MaxFavorRank_k__BackingField; // 0x80
		CharacterStyle* _Style_k__BackingField; // 0x88
		Il2CppObject* _SkillLevelDictionary_k__BackingField; // 0x90
		::MX::GameLogic::DBModel::CharacterDB* _DB_k__BackingField; // 0x98
		::MX::GameLogic::DBModel::AssistCharacterDB* _AssistDB_k__BackingField; // 0xA0
		::MX::Data::Excel::CharacterTranscendenceExcel* _TranscendenceExcel_k__BackingField; // 0xA8
		Il2CppObject* _EquipmentServerIds_k__BackingField; // 0xB8
		::MX::Data::MonthAndDay* _ProfileBirthDay_k__BackingField; // 0xC0
		::System::Boolean _BirthDayIsToday_k__BackingField; // 0xC8
		::System::Boolean _BirthDayIsComming_k__BackingField; // 0xC9
		::System::Int32 _BirthDayCountdown_k__BackingField; // 0xCC
		Il2CppObject* _FixedEquipmentSettings_k__BackingField; // 0xD0
		Il2CppObject* _AssistEquipmentSettings_k__BackingField; // 0xD8
		::MX::Logic::Data::WeaponSetting* __fixedWeaponSetting_k__BackingField; // 0xE0
		::MX::Logic::Data::WeaponSetting* __assistWeaponSetting_k__BackingField; // 0xF0
		::MX::Logic::Data::GearSetting* __fixedGearSetting_k__BackingField; // 0x100
		::MX::Logic::Data::GearSetting* __assistGearSetting_k__BackingField; // 0x110
		Il2CppObject* characters; // 0x120

		::System::Boolean get_IsFavorite()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTEROBJECT_GET_ISFAVORITE_OFFSET))(nullptr);
		}

		::System::Void set_IsFavorite(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTEROBJECT_SET_ISFAVORITE_OFFSET))(arg, nullptr);
		}

		SecureLong* get_FavorExp()
		{
			return ((SecureLong*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTEROBJECT_GET_FAVOREXP_OFFSET))(nullptr);
		}

		::System::Void set_FavorExp(SecureLong* arg)
		{
			((::System::Void(*)(SecureLong*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTEROBJECT_SET_FAVOREXP_OFFSET))(arg, nullptr);
		}

		SecureInt* get_FavorRank()
		{
			return ((SecureInt*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTEROBJECT_GET_FAVORRANK_OFFSET))(nullptr);
		}

		::System::Void set_FavorRank(SecureInt* arg)
		{
			((::System::Void(*)(SecureInt*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTEROBJECT_SET_FAVORRANK_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_MaxFavorRank()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTEROBJECT_GET_MAXFAVORRANK_OFFSET))(nullptr);
		}

		::System::Void set_MaxFavorRank(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTEROBJECT_SET_MAXFAVORRANK_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsMaxFavorRank()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTEROBJECT_GET_ISMAXFAVORRANK_OFFSET))(nullptr);
		}

		::System::Boolean get_IsMaxGrade()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTEROBJECT_GET_ISMAXGRADE_OFFSET))(nullptr);
		}

		::System::Boolean get_HasWeapon()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTEROBJECT_GET_HASWEAPON_OFFSET))(nullptr);
		}

		::System::Int32 get_WeaponStarGrade()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTEROBJECT_GET_WEAPONSTARGRADE_OFFSET))(nullptr);
		}

		::System::Int32 get_WeaponLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTEROBJECT_GET_WEAPONLEVEL_OFFSET))(nullptr);
		}

		::System::Int64 get_GearTier()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTEROBJECT_GET_GEARTIER_OFFSET))(nullptr);
		}

		CharacterStyleProperty* get_RepStyleProperty()
		{
			return ((CharacterStyleProperty*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTEROBJECT_GET_REPSTYLEPROPERTY_OFFSET))(nullptr);
		}

		CharacterStyleProperty* get_CurrentStyleProperty()
		{
			return ((CharacterStyleProperty*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTEROBJECT_GET_CURRENTSTYLEPROPERTY_OFFSET))(nullptr);
		}

		CharacterStyle* get_Style()
		{
			return ((CharacterStyle*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTEROBJECT_GET_STYLE_OFFSET))(nullptr);
		}

		::System::Void set_Style(CharacterStyle* arg)
		{
			((::System::Void(*)(CharacterStyle*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTEROBJECT_SET_STYLE_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_StyleUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTEROBJECT_GET_STYLEUNIQUEID_OFFSET))(nullptr);
		}

		::System::Int32 get_StyleIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTEROBJECT_GET_STYLEINDEX_OFFSET))(nullptr);
		}

		::System::Int64 get_VoiceGroupIdOnGrowth()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTEROBJECT_GET_VOICEGROUPIDONGROWTH_OFFSET))(nullptr);
		}

		::System::Boolean get_HasLevel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTEROBJECT_GET_HASLEVEL_OFFSET))(nullptr);
		}

		::System::Boolean get_IsStackable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTEROBJECT_GET_ISSTACKABLE_OFFSET))(nullptr);
		}

		Il2CppObject* get_SkillLevelDictionary()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTEROBJECT_GET_SKILLLEVELDICTIONARY_OFFSET))(nullptr);
		}

		::System::Void set_SkillLevelDictionary(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTEROBJECT_SET_SKILLLEVELDICTIONARY_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::CharacterDB* get_DB()
		{
			return ((::MX::GameLogic::DBModel::CharacterDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTEROBJECT_GET_DB_OFFSET))(nullptr);
		}

		::System::Void set_DB(::MX::GameLogic::DBModel::CharacterDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::CharacterDB*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTEROBJECT_SET_DB_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::AssistCharacterDB* get_AssistDB()
		{
			return ((::MX::GameLogic::DBModel::AssistCharacterDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTEROBJECT_GET_ASSISTDB_OFFSET))(nullptr);
		}

		::System::Void set_AssistDB(::MX::GameLogic::DBModel::AssistCharacterDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::AssistCharacterDB*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTEROBJECT_SET_ASSISTDB_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsAssistCharacter()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTEROBJECT_GET_ISASSISTCHARACTER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::CharacterExcel* get_StyleCharacterExcel()
		{
			return ((::MX::Data::Excel::CharacterExcel*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTEROBJECT_GET_STYLECHARACTEREXCEL_OFFSET))(nullptr);
		}

		::MX::Data::Excel::CharacterExcel* get_CharacterExcel()
		{
			return ((::MX::Data::Excel::CharacterExcel*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTEROBJECT_GET_CHARACTEREXCEL_OFFSET))(nullptr);
		}

		::MX::Data::Excel::CharacterSkillListExcel* get_CharacterSkillListExcel()
		{
			return ((::MX::Data::Excel::CharacterSkillListExcel*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTEROBJECT_GET_CHARACTERSKILLLISTEXCEL_OFFSET))(nullptr);
		}

		::MX::Data::Excel::CharacterSkillListExcel* get_RepCharacterSkillListExcel()
		{
			return ((::MX::Data::Excel::CharacterSkillListExcel*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTEROBJECT_GET_REPCHARACTERSKILLLISTEXCEL_OFFSET))(nullptr);
		}

		::MX::Data::Excel::CharacterTranscendenceExcel* get_TranscendenceExcel()
		{
			return ((::MX::Data::Excel::CharacterTranscendenceExcel*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTEROBJECT_GET_TRANSCENDENCEEXCEL_OFFSET))(nullptr);
		}

		::System::Void set_TranscendenceExcel(::MX::Data::Excel::CharacterTranscendenceExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::CharacterTranscendenceExcel*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTEROBJECT_SET_TRANSCENDENCEEXCEL_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_EquipmentServerIds()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTEROBJECT_GET_EQUIPMENTSERVERIDS_OFFSET))(nullptr);
		}

		::System::Void set_EquipmentServerIds(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTEROBJECT_SET_EQUIPMENTSERVERIDS_OFFSET))(arg, nullptr);
		}

		::FlatData::SquadType* get_SquadType()
		{
			return ((::FlatData::SquadType*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTEROBJECT_GET_SQUADTYPE_OFFSET))(nullptr);
		}

		::FlatData::ArmorType* get_ArmorType()
		{
			return ((::FlatData::ArmorType*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTEROBJECT_GET_ARMORTYPE_OFFSET))(nullptr);
		}

		::FlatData::BulletType* get_BulletType()
		{
			return ((::FlatData::BulletType*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTEROBJECT_GET_BULLETTYPE_OFFSET))(nullptr);
		}

		::FlatData::WeaponType* get_WeaponType()
		{
			return ((::FlatData::WeaponType*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTEROBJECT_GET_WEAPONTYPE_OFFSET))(nullptr);
		}

		::FlatData::School* get_School()
		{
			return ((::FlatData::School*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTEROBJECT_GET_SCHOOL_OFFSET))(nullptr);
		}

		::FlatData::SquadType* get_StyleSquadType()
		{
			return ((::FlatData::SquadType*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTEROBJECT_GET_STYLESQUADTYPE_OFFSET))(nullptr);
		}

		::FlatData::ArmorType* get_StyleArmorType()
		{
			return ((::FlatData::ArmorType*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTEROBJECT_GET_STYLEARMORTYPE_OFFSET))(nullptr);
		}

		::FlatData::BulletType* get_StyleBulletType()
		{
			return ((::FlatData::BulletType*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTEROBJECT_GET_STYLEBULLETTYPE_OFFSET))(nullptr);
		}

		::FlatData::WeaponType* get_StyleWeaponType()
		{
			return ((::FlatData::WeaponType*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTEROBJECT_GET_STYLEWEAPONTYPE_OFFSET))(nullptr);
		}

		::FlatData::School* get_StyleSchool()
		{
			return ((::FlatData::School*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTEROBJECT_GET_STYLESCHOOL_OFFSET))(nullptr);
		}

		::System::String* get_IntroductionText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTEROBJECT_GET_INTRODUCTIONTEXT_OFFSET))(nullptr);
		}

		::System::String* get_StatusText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTEROBJECT_GET_STATUSTEXT_OFFSET))(nullptr);
		}

		::System::Int64 get_PersonalityId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTEROBJECT_GET_PERSONALITYID_OFFSET))(nullptr);
		}

		::MX::Data::MonthAndDay* get_ProfileBirthDay()
		{
			return ((::MX::Data::MonthAndDay*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTEROBJECT_GET_PROFILEBIRTHDAY_OFFSET))(nullptr);
		}

		::System::Void set_ProfileBirthDay(::MX::Data::MonthAndDay* arg)
		{
			((::System::Void(*)(::MX::Data::MonthAndDay*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTEROBJECT_SET_PROFILEBIRTHDAY_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_BirthDayIsToday()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTEROBJECT_GET_BIRTHDAYISTODAY_OFFSET))(nullptr);
		}

		::System::Void set_BirthDayIsToday(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTEROBJECT_SET_BIRTHDAYISTODAY_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_BirthDayIsComming()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTEROBJECT_GET_BIRTHDAYISCOMMING_OFFSET))(nullptr);
		}

		::System::Void set_BirthDayIsComming(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTEROBJECT_SET_BIRTHDAYISCOMMING_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_BirthDayIsTodayOrCommig()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTEROBJECT_GET_BIRTHDAYISTODAYORCOMMIG_OFFSET))(nullptr);
		}

		::System::Int32 get_BirthDayCountdown()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTEROBJECT_GET_BIRTHDAYCOUNTDOWN_OFFSET))(nullptr);
		}

		::System::Void set_BirthDayCountdown(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTEROBJECT_SET_BIRTHDAYCOUNTDOWN_OFFSET))(arg, nullptr);
		}

		Il2CppObject* ToEquipmentSettings()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTEROBJECT_TOEQUIPMENTSETTINGS_OFFSET))(nullptr);
		}

		Il2CppObject* get_FixedEquipmentSettings()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTEROBJECT_GET_FIXEDEQUIPMENTSETTINGS_OFFSET))(nullptr);
		}

		::System::Void set_FixedEquipmentSettings(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTEROBJECT_SET_FIXEDEQUIPMENTSETTINGS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_AssistEquipmentSettings()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTEROBJECT_GET_ASSISTEQUIPMENTSETTINGS_OFFSET))(nullptr);
		}

		::System::Void set_AssistEquipmentSettings(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTEROBJECT_SET_ASSISTEQUIPMENTSETTINGS_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Data::WeaponSetting* get__fixedWeaponSetting()
		{
			return ((::MX::Logic::Data::WeaponSetting*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTEROBJECT_GET__FIXEDWEAPONSETTING_OFFSET))(nullptr);
		}

		::System::Void set__fixedWeaponSetting(::MX::Logic::Data::WeaponSetting* arg)
		{
			((::System::Void(*)(::MX::Logic::Data::WeaponSetting*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTEROBJECT_SET__FIXEDWEAPONSETTING_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Data::WeaponSetting* get_FixedWeaponSetting()
		{
			return ((::MX::Logic::Data::WeaponSetting*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTEROBJECT_GET_FIXEDWEAPONSETTING_OFFSET))(nullptr);
		}

		::System::Void set_FixedWeaponSetting(::MX::Logic::Data::WeaponSetting* arg)
		{
			((::System::Void(*)(::MX::Logic::Data::WeaponSetting*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTEROBJECT_SET_FIXEDWEAPONSETTING_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Data::WeaponSetting* get__assistWeaponSetting()
		{
			return ((::MX::Logic::Data::WeaponSetting*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTEROBJECT_GET__ASSISTWEAPONSETTING_OFFSET))(nullptr);
		}

		::System::Void set__assistWeaponSetting(::MX::Logic::Data::WeaponSetting* arg)
		{
			((::System::Void(*)(::MX::Logic::Data::WeaponSetting*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTEROBJECT_SET__ASSISTWEAPONSETTING_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Data::WeaponSetting* get_AssistWeaponSetting()
		{
			return ((::MX::Logic::Data::WeaponSetting*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTEROBJECT_GET_ASSISTWEAPONSETTING_OFFSET))(nullptr);
		}

		::System::Void set_AssistWeaponSetting(::MX::Logic::Data::WeaponSetting* arg)
		{
			((::System::Void(*)(::MX::Logic::Data::WeaponSetting*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTEROBJECT_SET_ASSISTWEAPONSETTING_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Data::WeaponSetting* ToWeaponSetting()
		{
			return ((::MX::Logic::Data::WeaponSetting*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTEROBJECT_TOWEAPONSETTING_OFFSET))(nullptr);
		}

		::MX::Logic::Data::WeaponSetting* ToWeaponSetting(::System::Int32 arg)
		{
			return ((::MX::Logic::Data::WeaponSetting*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTEROBJECT_TOWEAPONSETTING_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Data::GearSetting* get__fixedGearSetting()
		{
			return ((::MX::Logic::Data::GearSetting*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTEROBJECT_GET__FIXEDGEARSETTING_OFFSET))(nullptr);
		}

		::System::Void set__fixedGearSetting(::MX::Logic::Data::GearSetting* arg)
		{
			((::System::Void(*)(::MX::Logic::Data::GearSetting*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTEROBJECT_SET__FIXEDGEARSETTING_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Data::GearSetting* get_FixedGearSetting()
		{
			return ((::MX::Logic::Data::GearSetting*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTEROBJECT_GET_FIXEDGEARSETTING_OFFSET))(nullptr);
		}

		::System::Void set_FixedGearSetting(::MX::Logic::Data::GearSetting* arg)
		{
			((::System::Void(*)(::MX::Logic::Data::GearSetting*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTEROBJECT_SET_FIXEDGEARSETTING_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Data::GearSetting* get__assistGearSetting()
		{
			return ((::MX::Logic::Data::GearSetting*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTEROBJECT_GET__ASSISTGEARSETTING_OFFSET))(nullptr);
		}

		::System::Void set__assistGearSetting(::MX::Logic::Data::GearSetting* arg)
		{
			((::System::Void(*)(::MX::Logic::Data::GearSetting*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTEROBJECT_SET__ASSISTGEARSETTING_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Data::GearSetting* get_AssistGearSetting()
		{
			return ((::MX::Logic::Data::GearSetting*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTEROBJECT_GET_ASSISTGEARSETTING_OFFSET))(nullptr);
		}

		::System::Void set_AssistGearSetting(::MX::Logic::Data::GearSetting* arg)
		{
			((::System::Void(*)(::MX::Logic::Data::GearSetting*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTEROBJECT_SET_ASSISTGEARSETTING_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Data::GearSetting* ToGearSetting()
		{
			return ((::MX::Logic::Data::GearSetting*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTEROBJECT_TOGEARSETTING_OFFSET))(nullptr);
		}

		::MX::Logic::Data::GearSetting* ToGearSetting(::System::Int32 arg)
		{
			return ((::MX::Logic::Data::GearSetting*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTEROBJECT_TOGEARSETTING_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetTSSInteractionExcel(Il2CppObject&* arg)
		{
			return ((::System::Boolean(*)(Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTEROBJECT_TRYGETTSSINTERACTIONEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_CostumeId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTEROBJECT_GET_COSTUMEID_OFFSET))(nullptr);
		}

		::System::Int64 get_StyleCostumeId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTEROBJECT_GET_STYLECOSTUMEID_OFFSET))(nullptr);
		}

		::MX::Data::Excel::CostumeExcel* get_CostumeExcel()
		{
			return ((::MX::Data::Excel::CostumeExcel*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTEROBJECT_GET_COSTUMEEXCEL_OFFSET))(nullptr);
		}

		::MX::Data::Excel::CostumeExcel* get_StyleCostumeExcel()
		{
			return ((::MX::Data::Excel::CostumeExcel*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTEROBJECT_GET_STYLECOSTUMEEXCEL_OFFSET))(nullptr);
		}

		::MX::Logic::Data::CostumeSetting* ToCostumeSetting(::System::Int32 arg)
		{
			return ((::MX::Logic::Data::CostumeSetting*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTEROBJECT_TOCOSTUMESETTING_OFFSET))(arg, nullptr);
		}

		::System::String* get_ModelPrefabName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTEROBJECT_GET_MODELPREFABNAME_OFFSET))(nullptr);
		}

		::System::String* get_CafeModelPrefabName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTEROBJECT_GET_CAFEMODELPREFABNAME_OFFSET))(nullptr);
		}

		::System::String* get_EchelonModelPrefabName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTEROBJECT_GET_ECHELONMODELPREFABNAME_OFFSET))(nullptr);
		}

		::System::String* get_StrategyModelPrefabName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTEROBJECT_GET_STRATEGYMODELPREFABNAME_OFFSET))(nullptr);
		}

		::System::String* get_EnterStrategyAnimationName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTEROBJECT_GET_ENTERSTRATEGYANIMATIONNAME_OFFSET))(nullptr);
		}

		::System::String* get_StyleModelPrefabName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTEROBJECT_GET_STYLEMODELPREFABNAME_OFFSET))(nullptr);
		}

		::System::String* get_StyleCafeModelPrefabName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTEROBJECT_GET_STYLECAFEMODELPREFABNAME_OFFSET))(nullptr);
		}

		::System::String* get_StyleEchelonModelPrefabName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTEROBJECT_GET_STYLEECHELONMODELPREFABNAME_OFFSET))(nullptr);
		}

		::System::String* get_StyleStrategyModelPrefabName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTEROBJECT_GET_STYLESTRATEGYMODELPREFABNAME_OFFSET))(nullptr);
		}

		::System::String* get_StyleEnterStrategyAnimationName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTEROBJECT_GET_STYLEENTERSTRATEGYANIMATIONNAME_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTEROBJECT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::GameLogic::DBModel::CharacterDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::CharacterDB*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTEROBJECT_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::CharacterExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::CharacterExcel*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTEROBJECT_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Create(::MX::GameLogic::DBModel::CharacterDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::CharacterDB*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTEROBJECT_CREATE_OFFSET))(arg, nullptr);
		}

		::System::Void SetAssistCharacterDB(::MX::GameLogic::DBModel::AssistCharacterDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::AssistCharacterDB*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTEROBJECT_SETASSISTCHARACTERDB_OFFSET))(arg, nullptr);
		}

		::System::Void Update(::MX::GameLogic::DBModel::CharacterDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::CharacterDB*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTEROBJECT_UPDATE_OFFSET))(arg, nullptr);
		}

		::System::Void ReapplyDB()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTEROBJECT_REAPPLYDB_OFFSET))(nullptr);
		}

		::System::Void CopyPropertyFromDB(::MX::GameLogic::DBModel::CharacterDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::CharacterDB*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTEROBJECT_COPYPROPERTYFROMDB_OFFSET))(arg, nullptr);
		}

		::System::Void CopySkillLevel(::MX::GameLogic::DBModel::CharacterDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::CharacterDB*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTEROBJECT_COPYSKILLLEVEL_OFFSET))(arg, nullptr);
		}

		::System::Boolean CanLevelUp()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTEROBJECT_CANLEVELUP_OFFSET))(nullptr);
		}

		::System::Single GetExpRatio()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTEROBJECT_GETEXPRATIO_OFFSET))(nullptr);
		}

		::System::String* GetExpText(::System::Boolean arg)
		{
			return ((::System::String*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTEROBJECT_GETEXPTEXT_OFFSET))(arg, nullptr);
		}

		::System::Int64 GetTotalExpBaseToCurExp()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTEROBJECT_GETTOTALEXPBASETOCUREXP_OFFSET))(nullptr);
		}

		::System::Int64 GetTotalExpBaseLevelToMaxLevel()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTEROBJECT_GETTOTALEXPBASELEVELTOMAXLEVEL_OFFSET))(nullptr);
		}

		::System::Int64 GetLevelUpCurrencyRequiredCost(::System::Int64 arg)
		{
			return ((::System::Int64(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTEROBJECT_GETLEVELUPCURRENCYREQUIREDCOST_OFFSET))(arg, nullptr);
		}

		::System::Boolean CanTranscendence()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTEROBJECT_CANTRANSCENDENCE_OFFSET))(nullptr);
		}

		::System::Int32 get_MaxStarGrade()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTEROBJECT_GET_MAXSTARGRADE_OFFSET))(nullptr);
		}

		::FlatData::CurrencyTypes* get_LevelUpFeedCostCurrency()
		{
			return ((::FlatData::CurrencyTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTEROBJECT_GET_LEVELUPFEEDCOSTCURRENCY_OFFSET))(nullptr);
		}

		::System::Int64 get_LevelUpFeedCostAmount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTEROBJECT_GET_LEVELUPFEEDCOSTAMOUNT_OFFSET))(nullptr);
		}

		::System::Int64 get_LevelUpFeedExp()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTEROBJECT_GET_LEVELUPFEEDEXP_OFFSET))(nullptr);
		}

		::System::String* get_TypeSprite()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTEROBJECT_GET_TYPESPRITE_OFFSET))(nullptr);
		}

		::System::String* get_StyleTextureDir()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTEROBJECT_GET_STYLETEXTUREDIR_OFFSET))(nullptr);
		}

		::System::String* get_TextureDir()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTEROBJECT_GET_TEXTUREDIR_OFFSET))(nullptr);
		}

		::System::String* get_CollectionTexturePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTEROBJECT_GET_COLLECTIONTEXTUREPATH_OFFSET))(nullptr);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTEROBJECT_GET_NAME_OFFSET))(nullptr);
		}

		::System::String* get_StyleName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTEROBJECT_GET_STYLENAME_OFFSET))(nullptr);
		}

		::System::String* get_Description()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTEROBJECT_GET_DESCRIPTION_OFFSET))(nullptr);
		}

		::System::String* get_StyleDescription()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTEROBJECT_GET_STYLEDESCRIPTION_OFFSET))(nullptr);
		}

		::System::Boolean get_CanBeConsumed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTEROBJECT_GET_CANBECONSUMED_OFFSET))(nullptr);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTEROBJECT_GET_ISVALID_OFFSET))(nullptr);
		}

		::System::Int64 GetEquipmentItemServerId(::System::Int32 arg)
		{
			return ((::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTEROBJECT_GETEQUIPMENTITEMSERVERID_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsLockEquipSlot(::System::Int32 arg)
		{
			return ((::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTEROBJECT_ISLOCKEQUIPSLOT_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsEquipped(::System::Int32 arg)
		{
			return ((::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTEROBJECT_ISEQUIPPED_OFFSET))(arg, nullptr);
		}

		::FlatData::EquipmentCategory* GetEquipmentItemCategory(::System::Int32 arg)
		{
			return ((::FlatData::EquipmentCategory*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTEROBJECT_GETEQUIPMENTITEMCATEGORY_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Data::HeroSetting* ToBattleSetting()
		{
			return ((::MX::Logic::Data::HeroSetting*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTEROBJECT_TOBATTLESETTING_OFFSET))(nullptr);
		}

		::MX::Logic::Data::HeroSetting* ToBattleSetting(::System::Int32 arg)
		{
			return ((::MX::Logic::Data::HeroSetting*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTEROBJECT_TOBATTLESETTING_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Data::HeroSetting* ToFixedEchelonCharacterBattleSetting()
		{
			return ((::MX::Logic::Data::HeroSetting*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTEROBJECT_TOFIXEDECHELONCHARACTERBATTLESETTING_OFFSET))(nullptr);
		}

		::MX::Logic::Data::HeroSetting* ToAssistEchelonCharacterBattleSetting(::System::Int32 arg)
		{
			return ((::MX::Logic::Data::HeroSetting*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTEROBJECT_TOASSISTECHELONCHARACTERBATTLESETTING_OFFSET))(arg, nullptr);
		}

		::System::Int64 CurrentStatValue(::FlatData::StatType* arg, ::System::Boolean arg2)
		{
			return ((::System::Int64(*)(::FlatData::StatType*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTEROBJECT_CURRENTSTATVALUE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int32 GetExSkillCost()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTEROBJECT_GETEXSKILLCOST_OFFSET))(nullptr);
		}

		::System::Void RefreshBattleSetting()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTEROBJECT_REFRESHBATTLESETTING_OFFSET))(nullptr);
		}

		::MX::Logic::Data::HeroSetting* GetAssistHeroBattleSetting(::System::Int32 arg)
		{
			return ((::MX::Logic::Data::HeroSetting*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTEROBJECT_GETASSISTHEROBATTLESETTING_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetAssistEchelonSlotType()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTEROBJECT_GETASSISTECHELONSLOTTYPE_OFFSET))(nullptr);
		}

		::System::Void SetBirthDay()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTEROBJECT_SETBIRTHDAY_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTEROBJECT_TOSTRING_OFFSET))(nullptr);
		}

		::Newtonsoft::Json::Linq::JObject* ToJObject()
		{
			return ((::Newtonsoft::Json::Linq::JObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTEROBJECT_TOJOBJECT_OFFSET))(nullptr);
		}

		::System::Void ChangeStyle(::System::Int32 arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTEROBJECT_CHANGESTYLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void ChangeStyle(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTEROBJECT_CHANGESTYLE_OFFSET))(arg, nullptr);
		}

	};

