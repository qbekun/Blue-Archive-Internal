#pragma once
#include "unitysdk.h"

namespace FlatData { class Rarity; }
namespace FlatData { class School; }
namespace FlatData { class BulletType; }
namespace FlatData { class ArmorType; }
namespace FlatData { class WeaponType; }
namespace FlatData { class SquadType; }
namespace FlatData { class TacticRole; }
namespace FlatData { class TacticRange; }
class CharacterObject;
namespace MX::Data::Excel { class CharacterExcel; }

#define COLLECTIONUNITOBJECTBASE_GET_TACTICRANGE_OFFSET UNITYSDK_OFFSET(0xAE7510)
#define COLLECTIONUNITOBJECTBASE_SET_TACTICRANGE_OFFSET UNITYSDK_OFFSET(0xAE7520)
#define COLLECTIONUNITOBJECTBASE_SET_ISCANGAIN_OFFSET UNITYSDK_OFFSET(0xAE7530)
#define COLLECTIONUNITOBJECTBASE_GET_SCHOOL_OFFSET UNITYSDK_OFFSET(0xAE7540)
#define COLLECTIONUNITOBJECTBASE_GET_ISCANGAIN_OFFSET UNITYSDK_OFFSET(0xAE7550)
#define COLLECTIONUNITOBJECTBASE_GET_ISINCOLLECTION_OFFSET UNITYSDK_OFFSET(0xAE7560)
#define COLLECTIONUNITOBJECTBASE_GET_STREETBATTLEADAPTATION_OFFSET UNITYSDK_OFFSET(0xAE7570)
#define COLLECTIONUNITOBJECTBASE_SET_EXSKILLCOST_OFFSET UNITYSDK_OFFSET(0xAE7580)
#define COLLECTIONUNITOBJECTBASE_SET_SCHOOL_OFFSET UNITYSDK_OFFSET(0xAE7590)
#define COLLECTIONUNITOBJECTBASE_SET_ISFAVORITE_OFFSET UNITYSDK_OFFSET(0xAE75A0)
#define COLLECTIONUNITOBJECTBASE_SET_ATTACKVALUE_OFFSET UNITYSDK_OFFSET(0xAE75B0)
#define COLLECTIONUNITOBJECTBASE_GET_ATTACKVALUE_OFFSET UNITYSDK_OFFSET(0xAE75C0)
#define COLLECTIONUNITOBJECTBASE_SET_EXSKILLLEVEL_OFFSET UNITYSDK_OFFSET(0xAE75D0)
#define COLLECTIONUNITOBJECTBASE_SET_HEALPOWER_OFFSET UNITYSDK_OFFSET(0xAE75E0)
#define COLLECTIONUNITOBJECTBASE_SET_POTENTIALSTATS_OFFSET UNITYSDK_OFFSET(0xAE75F0)
#define COLLECTIONUNITOBJECTBASE_SET_ARMORTYPE_OFFSET UNITYSDK_OFFSET(0xAE7610)
#define COLLECTIONUNITOBJECTBASE_GET_TEXTUREPATH_OFFSET UNITYSDK_OFFSET(0xAE7620)
#define COLLECTIONUNITOBJECTBASE_SET_ATTACKRANGE_OFFSET UNITYSDK_OFFSET(0xAE7630)
#define COLLECTIONUNITOBJECTBASE_SET_TEXTUREPATH_OFFSET UNITYSDK_OFFSET(0xAE7640)
#define COLLECTIONUNITOBJECTBASE_SET_SKILLLEVEL_OFFSET UNITYSDK_OFFSET(0xAE7650)
#define COLLECTIONUNITOBJECTBASE_GET_STARGRADE_OFFSET UNITYSDK_OFFSET(0xAE7670)
#define COLLECTIONUNITOBJECTBASE_SET_DEFENSEVALUE_OFFSET UNITYSDK_OFFSET(0xAE7680)
#define COLLECTIONUNITOBJECTBASE_GET_ISFAVORITE_OFFSET UNITYSDK_OFFSET(0xAE7690)
#define COLLECTIONUNITOBJECTBASE_GET_HEALPOWER_OFFSET UNITYSDK_OFFSET(0xAE76A0)
#define COLLECTIONUNITOBJECTBASE_GET_TACTICROLE_OFFSET UNITYSDK_OFFSET(0xAE76B0)
#define COLLECTIONUNITOBJECTBASE_GET_ARMORTYPE_OFFSET UNITYSDK_OFFSET(0xAE76C0)
#define COLLECTIONUNITOBJECTBASE_GET_INDOORBATTLEADAPTATION_OFFSET UNITYSDK_OFFSET(0xAE76D0)
#define COLLECTIONUNITOBJECTBASE_GET_ATTACKRANGE_OFFSET UNITYSDK_OFFSET(0xAE76E0)
#define COLLECTIONUNITOBJECTBASE_SET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0xAE76F0)
#define COLLECTIONUNITOBJECTBASE_GET_COSTUMEID_OFFSET UNITYSDK_OFFSET(0xAE7700)
#define COLLECTIONUNITOBJECTBASE_SET_TACTICROLE_OFFSET UNITYSDK_OFFSET(0xAE7710)
#define COLLECTIONUNITOBJECTBASE_GET_WEAPONSTARGRADE_OFFSET UNITYSDK_OFFSET(0xAE7720)
#define COLLECTIONUNITOBJECTBASE_SET_STARGRADE_OFFSET UNITYSDK_OFFSET(0xAE7730)
#define COLLECTIONUNITOBJECTBASE_SET_FAVORRANK_OFFSET UNITYSDK_OFFSET(0xAE7740)
#define COLLECTIONUNITOBJECTBASE_GET_WEAPONTYPE_OFFSET UNITYSDK_OFFSET(0xAE7750)
#define COLLECTIONUNITOBJECTBASE_GET_SQUADTYPE_OFFSET UNITYSDK_OFFSET(0xAE7760)
#define COLLECTIONUNITOBJECTBASE_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0xAE7770)
#define COLLECTIONUNITOBJECTBASE_SET_SQUADTYPE_OFFSET UNITYSDK_OFFSET(0xAE7780)
#define COLLECTIONUNITOBJECTBASE_GET_DEFENSEVALUE_OFFSET UNITYSDK_OFFSET(0xAE7790)
#define COLLECTIONUNITOBJECTBASE_.CTOR_OFFSET UNITYSDK_OFFSET(0xAE6EA0)
#define COLLECTIONUNITOBJECTBASE_GET_SERVERID_OFFSET UNITYSDK_OFFSET(0xAE77A0)
#define COLLECTIONUNITOBJECTBASE_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0xAE77B0)
#define COLLECTIONUNITOBJECTBASE_SET_GROWTHSCORE_OFFSET UNITYSDK_OFFSET(0xAE77C0)
#define COLLECTIONUNITOBJECTBASE_SETDATA_OFFSET UNITYSDK_OFFSET(0xAE77D0)
#define COLLECTIONUNITOBJECTBASE_GET_RARITY_OFFSET UNITYSDK_OFFSET(0xAE7AB0)
#define COLLECTIONUNITOBJECTBASE_GET_FAVORRANK_OFFSET UNITYSDK_OFFSET(0xAE7AC0)
#define COLLECTIONUNITOBJECTBASE_GET_EXSKILLLEVEL_OFFSET UNITYSDK_OFFSET(0xAE7AD0)
#define COLLECTIONUNITOBJECTBASE_GET_BULLETTYPE_OFFSET UNITYSDK_OFFSET(0xAE7AE0)
#define COLLECTIONUNITOBJECTBASE_GET_EXSKILLCOST_OFFSET UNITYSDK_OFFSET(0xAE7AF0)
#define COLLECTIONUNITOBJECTBASE_GET_GROWTHSCORE_OFFSET UNITYSDK_OFFSET(0xAE7B00)
#define COLLECTIONUNITOBJECTBASE_SET_INDOORBATTLEADAPTATION_OFFSET UNITYSDK_OFFSET(0xAE7B10)
#define COLLECTIONUNITOBJECTBASE_GET_OUTDOORBATTLEADAPTATION_OFFSET UNITYSDK_OFFSET(0xAE7B20)
#define COLLECTIONUNITOBJECTBASE_GET_ISREDDOTON_OFFSET UNITYSDK_OFFSET(0xAE7B30)
#define COLLECTIONUNITOBJECTBASE_SET_NAME_OFFSET UNITYSDK_OFFSET(0xAE7B40)
#define COLLECTIONUNITOBJECTBASE_SET_COSTUMEID_OFFSET UNITYSDK_OFFSET(0xAE7B50)
#define COLLECTIONUNITOBJECTBASE_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xAE7B60)
#define COLLECTIONUNITOBJECTBASE_SET_WEAPONTYPE_OFFSET UNITYSDK_OFFSET(0xAE7B70)
#define COLLECTIONUNITOBJECTBASE_SET_RARITY_OFFSET UNITYSDK_OFFSET(0xAE7B80)
#define COLLECTIONUNITOBJECTBASE_GET_SKILLLEVEL_OFFSET UNITYSDK_OFFSET(0xAE7B90)
#define COLLECTIONUNITOBJECTBASE_SET_BULLETTYPE_OFFSET UNITYSDK_OFFSET(0xAE7BA0)
#define COLLECTIONUNITOBJECTBASE_GET_MAXHPVALUE_OFFSET UNITYSDK_OFFSET(0xAE7BB0)
#define COLLECTIONUNITOBJECTBASE_SET_WEAPONSTARGRADE_OFFSET UNITYSDK_OFFSET(0xAE7BC0)
#define COLLECTIONUNITOBJECTBASE_SET_ISINCOLLECTION_OFFSET UNITYSDK_OFFSET(0xAE7BD0)
#define COLLECTIONUNITOBJECTBASE_SET_ISREDDOTON_OFFSET UNITYSDK_OFFSET(0xAE7BE0)
#define COLLECTIONUNITOBJECTBASE_SET_OUTDOORBATTLEADAPTATION_OFFSET UNITYSDK_OFFSET(0xAE7BF0)
#define COLLECTIONUNITOBJECTBASE_SET_WEAPONLEVEL_OFFSET UNITYSDK_OFFSET(0xAE7C00)
#define COLLECTIONUNITOBJECTBASE_GET_POTENTIALSTATS_OFFSET UNITYSDK_OFFSET(0xAE7C10)
#define COLLECTIONUNITOBJECTBASE_GET_NAME_OFFSET UNITYSDK_OFFSET(0xAE7C20)
#define COLLECTIONUNITOBJECTBASE_SET_SERVERID_OFFSET UNITYSDK_OFFSET(0xAE7C30)
#define COLLECTIONUNITOBJECTBASE_GET_WEAPONLEVEL_OFFSET UNITYSDK_OFFSET(0xAE7C40)
#define COLLECTIONUNITOBJECTBASE_SET_STREETBATTLEADAPTATION_OFFSET UNITYSDK_OFFSET(0xAE7C50)
#define COLLECTIONUNITOBJECTBASE_SET_MAXHPVALUE_OFFSET UNITYSDK_OFFSET(0xAE7C60)

	inline static constexpr unsigned int CollectionUnitObjectBase_TypeDefinitionIndex = 8096;

	class CollectionUnitObjectBase : public Il2CppObject
	{
	public:
		::System::Int64 _UniqueId_k__BackingField; // 0x10
		::System::Int64 _CostumeId_k__BackingField; // 0x18
		::System::Int64 _ServerId_k__BackingField; // 0x20
		::System::String* _Name_k__BackingField; // 0x28
		::System::Int32 _Level_k__BackingField; // 0x30
		::System::Int32 _StarGrade_k__BackingField; // 0x34
		::System::Boolean _IsCanGain_k__BackingField; // 0x38
		::System::Boolean _IsInCollection_k__BackingField; // 0x39
		::System::Int32 _ExSkillLevel_k__BackingField; // 0x3C
		::System::Int32 _ExSkillCost_k__BackingField; // 0x40
		::FlatData::Rarity* _Rarity_k__BackingField; // 0x44
		::FlatData::School* _School_k__BackingField; // 0x48
		::System::String* _TexturePath_k__BackingField; // 0x50
		::System::Boolean _IsRedDotOn_k__BackingField; // 0x58
		::System::Int32 _FavorRank_k__BackingField; // 0x5C
		::System::Int64 _StreetBattleAdaptation_k__BackingField; // 0x60
		::System::Int64 _OutdoorBattleAdaptation_k__BackingField; // 0x68
		::System::Int64 _IndoorBattleAdaptation_k__BackingField; // 0x70
		::System::Int64 _AttackRange_k__BackingField; // 0x78
		::System::Int64 _AttackValue_k__BackingField; // 0x80
		::System::Int64 _DefenseValue_k__BackingField; // 0x88
		::System::Int64 _HealPower_k__BackingField; // 0x90
		::System::Int64 _MaxHpValue_k__BackingField; // 0x98
		::FlatData::BulletType* _BulletType_k__BackingField; // 0xA0
		::FlatData::ArmorType* _ArmorType_k__BackingField; // 0xA4
		::FlatData::WeaponType* _WeaponType_k__BackingField; // 0xA8
		::System::Int32 _WeaponStarGrade_k__BackingField; // 0xAC
		::System::Int32 _WeaponLevel_k__BackingField; // 0xB0
		::FlatData::SquadType* _SquadType_k__BackingField; // 0xB4
		::FlatData::TacticRole* _TacticRole_k__BackingField; // 0xB8
		::FlatData::TacticRange* _TacticRange_k__BackingField; // 0xBC
		Il2CppObject* _SkillLevel_k__BackingField; // 0xC0
		::System::Boolean _IsFavorite_k__BackingField; // 0xC8
		Il2CppObject* _PotentialStats_k__BackingField; // 0xD0
		::System::Int64 _GrowthScore_k__BackingField; // 0xD8
		CharacterObject* characterObject; // 0xE0

		::FlatData::TacticRange* get_TacticRange()
		{
			return ((::FlatData::TacticRange*(*)(::PVOID))((::PBYTE)hIl2Cpp + COLLECTIONUNITOBJECTBASE_GET_TACTICRANGE_OFFSET))(nullptr);
		}

		::System::Void set_TacticRange(::FlatData::TacticRange* arg)
		{
			((::System::Void(*)(::FlatData::TacticRange*, ::PVOID))((::PBYTE)hIl2Cpp + COLLECTIONUNITOBJECTBASE_SET_TACTICRANGE_OFFSET))(arg, nullptr);
		}

		::System::Void set_IsCanGain(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + COLLECTIONUNITOBJECTBASE_SET_ISCANGAIN_OFFSET))(arg, nullptr);
		}

		::FlatData::School* get_School()
		{
			return ((::FlatData::School*(*)(::PVOID))((::PBYTE)hIl2Cpp + COLLECTIONUNITOBJECTBASE_GET_SCHOOL_OFFSET))(nullptr);
		}

		::System::Boolean get_IsCanGain()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + COLLECTIONUNITOBJECTBASE_GET_ISCANGAIN_OFFSET))(nullptr);
		}

		::System::Boolean get_IsInCollection()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + COLLECTIONUNITOBJECTBASE_GET_ISINCOLLECTION_OFFSET))(nullptr);
		}

		::System::Int64 get_StreetBattleAdaptation()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + COLLECTIONUNITOBJECTBASE_GET_STREETBATTLEADAPTATION_OFFSET))(nullptr);
		}

		::System::Void set_ExSkillCost(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + COLLECTIONUNITOBJECTBASE_SET_EXSKILLCOST_OFFSET))(arg, nullptr);
		}

		::System::Void set_School(::FlatData::School* arg)
		{
			((::System::Void(*)(::FlatData::School*, ::PVOID))((::PBYTE)hIl2Cpp + COLLECTIONUNITOBJECTBASE_SET_SCHOOL_OFFSET))(arg, nullptr);
		}

		::System::Void set_IsFavorite(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + COLLECTIONUNITOBJECTBASE_SET_ISFAVORITE_OFFSET))(arg, nullptr);
		}

		::System::Void set_AttackValue(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + COLLECTIONUNITOBJECTBASE_SET_ATTACKVALUE_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_AttackValue()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + COLLECTIONUNITOBJECTBASE_GET_ATTACKVALUE_OFFSET))(nullptr);
		}

		::System::Void set_ExSkillLevel(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + COLLECTIONUNITOBJECTBASE_SET_EXSKILLLEVEL_OFFSET))(arg, nullptr);
		}

		::System::Void set_HealPower(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + COLLECTIONUNITOBJECTBASE_SET_HEALPOWER_OFFSET))(arg, nullptr);
		}

		::System::Void set_PotentialStats(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + COLLECTIONUNITOBJECTBASE_SET_POTENTIALSTATS_OFFSET))(arg, nullptr);
		}

		::System::Void set_ArmorType(::FlatData::ArmorType* arg)
		{
			((::System::Void(*)(::FlatData::ArmorType*, ::PVOID))((::PBYTE)hIl2Cpp + COLLECTIONUNITOBJECTBASE_SET_ARMORTYPE_OFFSET))(arg, nullptr);
		}

		::System::String* get_TexturePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + COLLECTIONUNITOBJECTBASE_GET_TEXTUREPATH_OFFSET))(nullptr);
		}

		::System::Void set_AttackRange(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + COLLECTIONUNITOBJECTBASE_SET_ATTACKRANGE_OFFSET))(arg, nullptr);
		}

		::System::Void set_TexturePath(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + COLLECTIONUNITOBJECTBASE_SET_TEXTUREPATH_OFFSET))(str, nullptr);
		}

		::System::Void set_SkillLevel(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + COLLECTIONUNITOBJECTBASE_SET_SKILLLEVEL_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_StarGrade()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + COLLECTIONUNITOBJECTBASE_GET_STARGRADE_OFFSET))(nullptr);
		}

		::System::Void set_DefenseValue(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + COLLECTIONUNITOBJECTBASE_SET_DEFENSEVALUE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsFavorite()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + COLLECTIONUNITOBJECTBASE_GET_ISFAVORITE_OFFSET))(nullptr);
		}

		::System::Int64 get_HealPower()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + COLLECTIONUNITOBJECTBASE_GET_HEALPOWER_OFFSET))(nullptr);
		}

		::FlatData::TacticRole* get_TacticRole()
		{
			return ((::FlatData::TacticRole*(*)(::PVOID))((::PBYTE)hIl2Cpp + COLLECTIONUNITOBJECTBASE_GET_TACTICROLE_OFFSET))(nullptr);
		}

		::FlatData::ArmorType* get_ArmorType()
		{
			return ((::FlatData::ArmorType*(*)(::PVOID))((::PBYTE)hIl2Cpp + COLLECTIONUNITOBJECTBASE_GET_ARMORTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_IndoorBattleAdaptation()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + COLLECTIONUNITOBJECTBASE_GET_INDOORBATTLEADAPTATION_OFFSET))(nullptr);
		}

		::System::Int64 get_AttackRange()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + COLLECTIONUNITOBJECTBASE_GET_ATTACKRANGE_OFFSET))(nullptr);
		}

		::System::Void set_UniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + COLLECTIONUNITOBJECTBASE_SET_UNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_CostumeId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + COLLECTIONUNITOBJECTBASE_GET_COSTUMEID_OFFSET))(nullptr);
		}

		::System::Void set_TacticRole(::FlatData::TacticRole* arg)
		{
			((::System::Void(*)(::FlatData::TacticRole*, ::PVOID))((::PBYTE)hIl2Cpp + COLLECTIONUNITOBJECTBASE_SET_TACTICROLE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_WeaponStarGrade()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + COLLECTIONUNITOBJECTBASE_GET_WEAPONSTARGRADE_OFFSET))(nullptr);
		}

		::System::Void set_StarGrade(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + COLLECTIONUNITOBJECTBASE_SET_STARGRADE_OFFSET))(arg, nullptr);
		}

		::System::Void set_FavorRank(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + COLLECTIONUNITOBJECTBASE_SET_FAVORRANK_OFFSET))(arg, nullptr);
		}

		::FlatData::WeaponType* get_WeaponType()
		{
			return ((::FlatData::WeaponType*(*)(::PVOID))((::PBYTE)hIl2Cpp + COLLECTIONUNITOBJECTBASE_GET_WEAPONTYPE_OFFSET))(nullptr);
		}

		::FlatData::SquadType* get_SquadType()
		{
			return ((::FlatData::SquadType*(*)(::PVOID))((::PBYTE)hIl2Cpp + COLLECTIONUNITOBJECTBASE_GET_SQUADTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_UniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + COLLECTIONUNITOBJECTBASE_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::System::Void set_SquadType(::FlatData::SquadType* arg)
		{
			((::System::Void(*)(::FlatData::SquadType*, ::PVOID))((::PBYTE)hIl2Cpp + COLLECTIONUNITOBJECTBASE_SET_SQUADTYPE_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_DefenseValue()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + COLLECTIONUNITOBJECTBASE_GET_DEFENSEVALUE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::CharacterExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::CharacterExcel*, ::PVOID))((::PBYTE)hIl2Cpp + COLLECTIONUNITOBJECTBASE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_ServerId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + COLLECTIONUNITOBJECTBASE_GET_SERVERID_OFFSET))(nullptr);
		}

		::System::Void set_Level(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + COLLECTIONUNITOBJECTBASE_SET_LEVEL_OFFSET))(arg, nullptr);
		}

		::System::Void set_GrowthScore(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + COLLECTIONUNITOBJECTBASE_SET_GROWTHSCORE_OFFSET))(arg, nullptr);
		}

		::System::Void SetData(CharacterObject* arg)
		{
			((::System::Void(*)(CharacterObject*, ::PVOID))((::PBYTE)hIl2Cpp + COLLECTIONUNITOBJECTBASE_SETDATA_OFFSET))(arg, nullptr);
		}

		::FlatData::Rarity* get_Rarity()
		{
			return ((::FlatData::Rarity*(*)(::PVOID))((::PBYTE)hIl2Cpp + COLLECTIONUNITOBJECTBASE_GET_RARITY_OFFSET))(nullptr);
		}

		::System::Int32 get_FavorRank()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + COLLECTIONUNITOBJECTBASE_GET_FAVORRANK_OFFSET))(nullptr);
		}

		::System::Int32 get_ExSkillLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + COLLECTIONUNITOBJECTBASE_GET_EXSKILLLEVEL_OFFSET))(nullptr);
		}

		::FlatData::BulletType* get_BulletType()
		{
			return ((::FlatData::BulletType*(*)(::PVOID))((::PBYTE)hIl2Cpp + COLLECTIONUNITOBJECTBASE_GET_BULLETTYPE_OFFSET))(nullptr);
		}

		::System::Int32 get_ExSkillCost()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + COLLECTIONUNITOBJECTBASE_GET_EXSKILLCOST_OFFSET))(nullptr);
		}

		::System::Int64 get_GrowthScore()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + COLLECTIONUNITOBJECTBASE_GET_GROWTHSCORE_OFFSET))(nullptr);
		}

		::System::Void set_IndoorBattleAdaptation(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + COLLECTIONUNITOBJECTBASE_SET_INDOORBATTLEADAPTATION_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_OutdoorBattleAdaptation()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + COLLECTIONUNITOBJECTBASE_GET_OUTDOORBATTLEADAPTATION_OFFSET))(nullptr);
		}

		::System::Boolean get_IsRedDotOn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + COLLECTIONUNITOBJECTBASE_GET_ISREDDOTON_OFFSET))(nullptr);
		}

		::System::Void set_Name(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + COLLECTIONUNITOBJECTBASE_SET_NAME_OFFSET))(str, nullptr);
		}

		::System::Void set_CostumeId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + COLLECTIONUNITOBJECTBASE_SET_COSTUMEID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Level()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + COLLECTIONUNITOBJECTBASE_GET_LEVEL_OFFSET))(nullptr);
		}

		::System::Void set_WeaponType(::FlatData::WeaponType* arg)
		{
			((::System::Void(*)(::FlatData::WeaponType*, ::PVOID))((::PBYTE)hIl2Cpp + COLLECTIONUNITOBJECTBASE_SET_WEAPONTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void set_Rarity(::FlatData::Rarity* arg)
		{
			((::System::Void(*)(::FlatData::Rarity*, ::PVOID))((::PBYTE)hIl2Cpp + COLLECTIONUNITOBJECTBASE_SET_RARITY_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_SkillLevel()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + COLLECTIONUNITOBJECTBASE_GET_SKILLLEVEL_OFFSET))(nullptr);
		}

		::System::Void set_BulletType(::FlatData::BulletType* arg)
		{
			((::System::Void(*)(::FlatData::BulletType*, ::PVOID))((::PBYTE)hIl2Cpp + COLLECTIONUNITOBJECTBASE_SET_BULLETTYPE_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_MaxHpValue()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + COLLECTIONUNITOBJECTBASE_GET_MAXHPVALUE_OFFSET))(nullptr);
		}

		::System::Void set_WeaponStarGrade(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + COLLECTIONUNITOBJECTBASE_SET_WEAPONSTARGRADE_OFFSET))(arg, nullptr);
		}

		::System::Void set_IsInCollection(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + COLLECTIONUNITOBJECTBASE_SET_ISINCOLLECTION_OFFSET))(arg, nullptr);
		}

		::System::Void set_IsRedDotOn(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + COLLECTIONUNITOBJECTBASE_SET_ISREDDOTON_OFFSET))(arg, nullptr);
		}

		::System::Void set_OutdoorBattleAdaptation(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + COLLECTIONUNITOBJECTBASE_SET_OUTDOORBATTLEADAPTATION_OFFSET))(arg, nullptr);
		}

		::System::Void set_WeaponLevel(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + COLLECTIONUNITOBJECTBASE_SET_WEAPONLEVEL_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_PotentialStats()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + COLLECTIONUNITOBJECTBASE_GET_POTENTIALSTATS_OFFSET))(nullptr);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + COLLECTIONUNITOBJECTBASE_GET_NAME_OFFSET))(nullptr);
		}

		::System::Void set_ServerId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + COLLECTIONUNITOBJECTBASE_SET_SERVERID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_WeaponLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + COLLECTIONUNITOBJECTBASE_GET_WEAPONLEVEL_OFFSET))(nullptr);
		}

		::System::Void set_StreetBattleAdaptation(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + COLLECTIONUNITOBJECTBASE_SET_STREETBATTLEADAPTATION_OFFSET))(arg, nullptr);
		}

		::System::Void set_MaxHpValue(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + COLLECTIONUNITOBJECTBASE_SET_MAXHPVALUE_OFFSET))(arg, nullptr);
		}

	};

