#pragma once
#include "../../unitysdk.h"

namespace MX::Data::Excel { class ObstacleFireLineCheckExcel; }
namespace MX::Core::Math { class IRandomService; }
namespace FlatData { class SquadType; }
namespace MX::Data::Excel { class CharacterExcel; }
namespace MX::Data::Excel { class CharacterExcel&; }
namespace MX::Data::Excel { class CostumeExcel; }
namespace MX::Data { class CharacterDuplicateRewardData&; }
namespace MX::Data::Excel { class CharacterSkillListExcel; }
namespace MX::Data { class CharacterSkillListKey; }
namespace MX::Logic::BattleEntities { class SkillSlot; }
namespace MX::Data::Excel { class CharacterTranscendenceExcel&; }
namespace MX::Data::Excel { class CharacterTranscendenceExcel; }
namespace MX::Data::Excel { class CharacterStatExcel; }
namespace FlatData { class TacticEntityType; }
namespace FlatData { class BattleCalculationStat; }
namespace MX::Data::Excel { class CharacterLevelExcel; }
namespace MX::Data::Excel { class CharacterLevelStatFactorExcel; }
namespace FlatData { class BulletType; }
namespace FlatData { class ArmorType; }
namespace MX::Data::Excel { class TerrainAdaptationFactorExcel; }
namespace FlatData { class StageTopography; }
namespace FlatData { class TerrainAdaptationStat; }
namespace MX::Data::Excel { class CharacterAIExcel&; }
namespace MX::Data::Excel { class CharacterAIExcel; }
namespace MX::Data::Excel { class TacticalSupportSystemExcel; }
namespace MX::Data::Excel { class FloaterCommonExcel; }
namespace MX::Data::Excel { class CharacterIllustCoordinateExcel; }
namespace MX::Data::Excel { class CharacterCombatSkinExcel; }
namespace FlatData { class School; }
namespace FlatData { class Nation; }
namespace FlatData { class ProductionStep; }
namespace MX::Data::Excel { class CostumeExcel&; }
namespace MX::Logic::Data { class HeroSetting; }
namespace MX::Data::Excel { class CharacterVictoryInteractionExcel; }

#define MX_DATA_CHARACTERDATA_GETALLPLAYABLECHARACTEREXCELS_OFFSET UNITYSDK_OFFSET(0x1888C20)
#define MX_DATA_CHARACTERDATA_GETCHARACTERDATAIDS_OFFSET UNITYSDK_OFFSET(0x1888D60)
#define MX_DATA_CHARACTERDATA_GETCHARACTERDATAIDSBYSTUDENTFILTER_OFFSET UNITYSDK_OFFSET(0x1888DB0)
#define MX_DATA_CHARACTERDATA_GETCHARACTERIDSBYSTUDENTANDRELEASEFILTER_OFFSET UNITYSDK_OFFSET(0x1888FD0)
#define MX_DATA_CHARACTERDATA_GETCHARACTERIDSBYSQUADTYPE_OFFSET UNITYSDK_OFFSET(0x18891F0)
#define MX_DATA_CHARACTERDATA_ALLCHARACTERS_OFFSET UNITYSDK_OFFSET(0x18893D0)
#define MX_DATA_CHARACTERDATA_CHARACTERSTATDETAILLIST_OFFSET UNITYSDK_OFFSET(0x1889420)
#define MX_DATA_CHARACTERDATA_GETCHARACTERDATA_OFFSET UNITYSDK_OFFSET(0x1889470)
#define MX_DATA_CHARACTERDATA_TRYGETCHARACTERDATA_OFFSET UNITYSDK_OFFSET(0x18894E0)
#define MX_DATA_CHARACTERDATA_HASCHARACTERDATA_OFFSET UNITYSDK_OFFSET(0x1889540)
#define MX_DATA_CHARACTERDATA_TRYGETCHARACTERDATA_OFFSET UNITYSDK_OFFSET(0x18895A0)
#define MX_DATA_CHARACTERDATA_GETCHARACTERDATA_OFFSET UNITYSDK_OFFSET(0x18897A0)
#define MX_DATA_CHARACTERDATA_TRYGETCHARACTERDATA_OFFSET UNITYSDK_OFFSET(0x1889820)
#define MX_DATA_CHARACTERDATA_TRYGETCHARACTERDUPLICATEDREWARDDATA_OFFSET UNITYSDK_OFFSET(0x1889880)
#define MX_DATA_CHARACTERDATA_GETCHARACTERSKILLLISTDATABYCOSTUMEGROUPID_OFFSET UNITYSDK_OFFSET(0x18898E0)
#define MX_DATA_CHARACTERDATA_GETCHARACTERSKILLLISTDATABYCOSTUMEGROUPID_OFFSET UNITYSDK_OFFSET(0x1889930)
#define MX_DATA_CHARACTERDATA_RESETCHARACTERSKILLTIMELINEINDEX_OFFSET UNITYSDK_OFFSET(0x1889A90)
#define MX_DATA_CHARACTERDATA_PICKCHARACTERSKILLTIMELINEINDEX_OFFSET UNITYSDK_OFFSET(0x1889AE0)
#define MX_DATA_CHARACTERDATA_PICKCHARACTERSKILLTIMELINEINDEX_OFFSET UNITYSDK_OFFSET(0x1889B40)
#define MX_DATA_CHARACTERDATA_SPLITINDEXARRAYSTRING_OFFSET UNITYSDK_OFFSET(0x188A600)
#define MX_DATA_CHARACTERDATA_TRYGETTRANSCENDENCE_OFFSET UNITYSDK_OFFSET(0x188A750)
#define MX_DATA_CHARACTERDATA_TRYGETMAXFAVORLEVEL_OFFSET UNITYSDK_OFFSET(0x188A7B0)
#define MX_DATA_CHARACTERDATA_TRYGETMAXLEVELSTAR_OFFSET UNITYSDK_OFFSET(0x188A850)
#define MX_DATA_CHARACTERDATA_GETCHARACTERSKILLLISTDATAS_OFFSET UNITYSDK_OFFSET(0x188A2C0)
#define MX_DATA_CHARACTERDATA_GETCHARACTERSKILLLISTDATAS_OFFSET UNITYSDK_OFFSET(0x188A8A0)
#define MX_DATA_CHARACTERDATA_GETSTUDENTSDATA_OFFSET UNITYSDK_OFFSET(0x188A950)
#define MX_DATA_CHARACTERDATA_GETVEHICLESDATA_OFFSET UNITYSDK_OFFSET(0x188AB60)
#define MX_DATA_CHARACTERDATA_HASCHARACTERDATA_OFFSET UNITYSDK_OFFSET(0x188AD70)
#define MX_DATA_CHARACTERDATA_HASCOSTUMEDATA_OFFSET UNITYSDK_OFFSET(0x188ADC0)
#define MX_DATA_CHARACTERDATA_GETALLCOSTUMEEXCEL_OFFSET UNITYSDK_OFFSET(0x188AE10)
#define MX_DATA_CHARACTERDATA_GETSTATDATA_OFFSET UNITYSDK_OFFSET(0x188AEC0)
#define MX_DATA_CHARACTERDATA_HASSTATDATA_OFFSET UNITYSDK_OFFSET(0x188AF20)
#define MX_DATA_CHARACTERDATA_GETSTATLIMITDATA_OFFSET UNITYSDK_OFFSET(0x188AF70)
#define MX_DATA_CHARACTERDATA_GETBATTLECALCULATIONLIMITDATA_OFFSET UNITYSDK_OFFSET(0x188AFE0)
#define MX_DATA_CHARACTERDATA_GETBATTLECALCULATIONIDEALMAX_OFFSET UNITYSDK_OFFSET(0x188B050)
#define MX_DATA_CHARACTERDATA_GETLEVELEXPDATA_OFFSET UNITYSDK_OFFSET(0x188B1A0)
#define MX_DATA_CHARACTERDATA_HASLEVELEXPDATA_OFFSET UNITYSDK_OFFSET(0x188B200)
#define MX_DATA_CHARACTERDATA_GETCHARACTERMAXLEVEL_OFFSET UNITYSDK_OFFSET(0x188B250)
#define MX_DATA_CHARACTERDATA_GETREQUIREDEXPTOLEVELUP_OFFSET UNITYSDK_OFFSET(0x188B2E0)
#define MX_DATA_CHARACTERDATA_GETEXPDIFF_OFFSET UNITYSDK_OFFSET(0x188B3A0)
#define MX_DATA_CHARACTERDATA_GETLEVELSTATFACTORDATA_OFFSET UNITYSDK_OFFSET(0x188B4A0)
#define MX_DATA_CHARACTERDATA_HASLEVELSTATFACTORDATA_OFFSET UNITYSDK_OFFSET(0x188B500)
#define MX_DATA_CHARACTERDATA_GETCRITICALSTATFACTOR_OFFSET UNITYSDK_OFFSET(0x188B550)
#define MX_DATA_CHARACTERDATA_GETDEFENCESTATFACTOR_OFFSET UNITYSDK_OFFSET(0x188B5F0)
#define MX_DATA_CHARACTERDATA_GETSTABILITYFACTOR_OFFSET UNITYSDK_OFFSET(0x188B690)
#define MX_DATA_CHARACTERDATA_GETBULLETARMORDAMAGERATE_OFFSET UNITYSDK_OFFSET(0x188B730)
#define MX_DATA_CHARACTERDATA_GETBULLETARMORDAMAGEFACTOR_OFFSET UNITYSDK_OFFSET(0x188B8B0)
#define MX_DATA_CHARACTERDATA_GETTERRAINADAPTATIONFACTOREXCEL_OFFSET UNITYSDK_OFFSET(0x188B900)
#define MX_DATA_CHARACTERDATA_GETTERRAINADAPTATIONFACTOREXCEL_OFFSET UNITYSDK_OFFSET(0x188B990)
#define MX_DATA_CHARACTERDATA_GETOBSTACLEFIRELINECHECKDATA_OFFSET UNITYSDK_OFFSET(0x188BA20)
#define MX_DATA_CHARACTERDATA_TRYGETAIDATA_OFFSET UNITYSDK_OFFSET(0x188BA30)
#define MX_DATA_CHARACTERDATA_GETAIDATA_OFFSET UNITYSDK_OFFSET(0x188BA90)
#define MX_DATA_CHARACTERDATA_GETEXTERNALBTEXCELS_OFFSET UNITYSDK_OFFSET(0x188BAF0)
#define MX_DATA_CHARACTERDATA_GETSTANDARDHPBARABBREVIATIONFACTOR_OFFSET UNITYSDK_OFFSET(0x188BB60)
#define MX_DATA_CHARACTERDATA_GETRAIDBOSSHPBARABBREVIATIONFACTOR_OFFSET UNITYSDK_OFFSET(0x188BC00)
#define MX_DATA_CHARACTERDATA_GETTRANSCENDENCE_OFFSET UNITYSDK_OFFSET(0x188BCA0)
#define MX_DATA_CHARACTERDATA_GETMAXFAVORLEVEL_OFFSET UNITYSDK_OFFSET(0x188BD70)
#define MX_DATA_CHARACTERDATA_GETTACTICSUPPORTSYSTEMS_OFFSET UNITYSDK_OFFSET(0x188BE10)
#define MX_DATA_CHARACTERDATA_HASTSSEXCEL_OFFSET UNITYSDK_OFFSET(0x188BE80)
#define MX_DATA_CHARACTERDATA_GETTACTICSUPPORTSYSTEM_OFFSET UNITYSDK_OFFSET(0x188BED0)
#define MX_DATA_CHARACTERDATA_TRYGETTACTICSUPPORTSYSTEMBYTSSID_OFFSET UNITYSDK_OFFSET(0x188BF30)
#define MX_DATA_CHARACTERDATA_GET_TSSIDS_OFFSET UNITYSDK_OFFSET(0x188C010)
#define MX_DATA_CHARACTERDATA_TRYGETTACTICSUPPORTSYSTEMBYSUMMONERID_OFFSET UNITYSDK_OFFSET(0x188C060)
#define MX_DATA_CHARACTERDATA_GETFLOATERCOMMON_OFFSET UNITYSDK_OFFSET(0x188C290)
#define MX_DATA_CHARACTERDATA_GETILLUSTCOORDINATE_OFFSET UNITYSDK_OFFSET(0x188C2F0)
#define MX_DATA_CHARACTERDATA_GETCOMBATSKINDATA_OFFSET UNITYSDK_OFFSET(0x188C350)
#define MX_DATA_CHARACTERDATA_GETCHARACTEREXCELENUMERATOR_OFFSET UNITYSDK_OFFSET(0x188C450)
#define MX_DATA_CHARACTERDATA_GETLEVELDAMAGEFACTOR_OFFSET UNITYSDK_OFFSET(0x188C4E0)
#define MX_DATA_CHARACTERDATA_TRYGETCHARACTEREXCEL_OFFSET UNITYSDK_OFFSET(0x188C550)
#define MX_DATA_CHARACTERDATA_TRYGETCHARACTERTAGS_OFFSET UNITYSDK_OFFSET(0x188C5B0)
#define MX_DATA_CHARACTERDATA_GETCHARACTERTAGS_OFFSET UNITYSDK_OFFSET(0x188C610)
#define MX_DATA_CHARACTERDATA_GETCHARACTERUNIQUEIDSBYSCHOOL_OFFSET UNITYSDK_OFFSET(0x188C680)
#define MX_DATA_CHARACTERDATA_GETCHARACTERSBYTACTICENTITYANDSQUADTYPE_OFFSET UNITYSDK_OFFSET(0x188C6D0)
#define MX_DATA_CHARACTERDATA_CHARACTERPROFILE_OFFSET UNITYSDK_OFFSET(0x188C880)
#define MX_DATA_CHARACTERDATA_ISBIRTHDAY_OFFSET UNITYSDK_OFFSET(0x188C950)
#define MX_DATA_CHARACTERDATA_GETCHARACTERSTATUSSTRING_OFFSET UNITYSDK_OFFSET(0x188CA50)
#define MX_DATA_CHARACTERDATA_GETCHARACTERDEVNAMESTRING_OFFSET UNITYSDK_OFFSET(0x188CCB0)
#define MX_DATA_CHARACTERDATA_GETCHARACTERFULLNAMESTRING_OFFSET UNITYSDK_OFFSET(0x188CDB0)
#define MX_DATA_CHARACTERDATA_GETCHARACTERFAMILYNAMESTRING_OFFSET UNITYSDK_OFFSET(0x188D010)
#define MX_DATA_CHARACTERDATA_GETCHARACTERFAMILYNAMERUBYSTRING_OFFSET UNITYSDK_OFFSET(0x188D270)
#define MX_DATA_CHARACTERDATA_GETCHARACTERPERSONALNAMESTRING_OFFSET UNITYSDK_OFFSET(0x188D4D0)
#define MX_DATA_CHARACTERDATA_GETCHARACTERPERSONALNAMERUBYSTRING_OFFSET UNITYSDK_OFFSET(0x188D730)
#define MX_DATA_CHARACTERDATA_GETCHARACTERSCHOOLYEARSTRING_OFFSET UNITYSDK_OFFSET(0x188D990)
#define MX_DATA_CHARACTERDATA_GETCHARACTERAGESTRING_OFFSET UNITYSDK_OFFSET(0x188DBF0)
#define MX_DATA_CHARACTERDATA_GETCHARACTERBIRTHDAYSTRING_OFFSET UNITYSDK_OFFSET(0x188DE50)
#define MX_DATA_CHARACTERDATA_GETCHARACTERHEIGHTSTRING_OFFSET UNITYSDK_OFFSET(0x188E0B0)
#define MX_DATA_CHARACTERDATA_GETCHARACTERHOBBYSTRING_OFFSET UNITYSDK_OFFSET(0x188E310)
#define MX_DATA_CHARACTERDATA_GETCHARACTERDESIGNNAMESTRING_OFFSET UNITYSDK_OFFSET(0x188E570)
#define MX_DATA_CHARACTERDATA_GETCHARACTERILLUSTNAMESTRING_OFFSET UNITYSDK_OFFSET(0x188E7D0)
#define MX_DATA_CHARACTERDATA_GETCHARACTERVOICESTRING_OFFSET UNITYSDK_OFFSET(0x188EA20)
#define MX_DATA_CHARACTERDATA_GETCHARACTECLUBNAMEFORGACHASTRING_OFFSET UNITYSDK_OFFSET(0x188EF00)
#define MX_DATA_CHARACTERDATA_GETCHARACTERSSRNEW_OFFSET UNITYSDK_OFFSET(0x188F2C0)
#define MX_DATA_CHARACTERDATA_GETCHARACTERINTRODUCTIONSTRING_OFFSET UNITYSDK_OFFSET(0x188F520)
#define MX_DATA_CHARACTERDATA_GETWEAPONNAME_OFFSET UNITYSDK_OFFSET(0x188F780)
#define MX_DATA_CHARACTERDATA_GETWEAPONDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x188F9E0)
#define MX_DATA_CHARACTERDATA_TRYGETPERSONALITYID_OFFSET UNITYSDK_OFFSET(0x188FC40)
#define MX_DATA_CHARACTERDATA_GETPERSONALITYID_OFFSET UNITYSDK_OFFSET(0x188FCA0)
#define MX_DATA_CHARACTERDATA_HASPERSONALITYID_OFFSET UNITYSDK_OFFSET(0x188FD10)
#define MX_DATA_CHARACTERDATA_CHARACTERIDSWITHSAMEPERSONALITYID_OFFSET UNITYSDK_OFFSET(0x188FD60)
#define MX_DATA_CHARACTERDATA_HASVALIDPRODUCTIONSTEP_OFFSET UNITYSDK_OFFSET(0x188FE10)
#define MX_DATA_CHARACTERDATA_ISRELEASESTUDENT_OFFSET UNITYSDK_OFFSET(0x188FEA0)
#define MX_DATA_CHARACTERDATA_GETWHITELISTCHARACTERIDS_OFFSET UNITYSDK_OFFSET(0x188FEB0)
#define MX_DATA_CHARACTERDATA_GETBLACKLISTCHARACTERIDS_OFFSET UNITYSDK_OFFSET(0x188FF20)
#define MX_DATA_CHARACTERDATA_GETAVAILABLEECHELONCONSTRAINTCHARACTERIDS_OFFSET UNITYSDK_OFFSET(0x188FF90)
#define MX_DATA_CHARACTERDATA_ISCOLLECTIONVISIBLE_OFFSET UNITYSDK_OFFSET(0x18901C0)
#define MX_DATA_CHARACTERDATA_ISCOLLECTIONVISIBLE_OFFSET UNITYSDK_OFFSET(0x1890240)
#define MX_DATA_CHARACTERDATA_ISCHARACTERRELEASED_OFFSET UNITYSDK_OFFSET(0x18902E0)
#define MX_DATA_CHARACTERDATA_TRYGETCOSTUMEEXCEL_OFFSET UNITYSDK_OFFSET(0x1890370)
#define MX_DATA_CHARACTERDATA_TRYGETCOSTUMEEXCEL_OFFSET UNITYSDK_OFFSET(0x18903D0)
#define MX_DATA_CHARACTERDATA_TRYGETDEFAULTCOSTUMEEXCEL_OFFSET UNITYSDK_OFFSET(0x18904B0)
#define MX_DATA_CHARACTERDATA_GETDEFAULTCOSTUMEUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1890560)
#define MX_DATA_CHARACTERDATA_TRYGETCOSTUMEEXCEL_OFFSET UNITYSDK_OFFSET(0x1890620)
#define MX_DATA_CHARACTERDATA_TRYGETCOSTUMEEXCELSBYGROUPID_OFFSET UNITYSDK_OFFSET(0x1890680)
#define MX_DATA_CHARACTERDATA_TRYGETCOSTUMEEXCELSBYCHARACTERUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1890710)
#define MX_DATA_CHARACTERDATA_GETALLVICTORYINTERACTIONEXCEL_OFFSET UNITYSDK_OFFSET(0x1890810)
#define MX_DATA_CHARACTERDATA_PICKAVAILABLEVICTORYINTERACTION_OFFSET UNITYSDK_OFFSET(0x18908C0)
#define MX_DATA_CHARACTERDATA_TRYGETCOMBATSTYLEEXCELS_OFFSET UNITYSDK_OFFSET(0x1891560)
#define MX_DATA_CHARACTERDATA_GETCOMBATSTYLECHARACTERUNIQUEID_OFFSET UNITYSDK_OFFSET(0x18915C0)
#define MX_DATA_CHARACTERDATA_GETCOMBATSTYLEINDEX_OFFSET UNITYSDK_OFFSET(0x18916B0)
#define MX_DATA_CHARACTERDATA_GETMAINCOMBATSTYLEORUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1891850)
#define MX_DATA_CHARACTERDATA_ISMAINCOMBATSTYLECHARACTER_OFFSET UNITYSDK_OFFSET(0x18918E0)
#define MX_DATA_CHARACTERDATA_GET_RANDOM_OFFSET UNITYSDK_OFFSET(0x1891980)
#define MX_DATA_CHARACTERDATA_GET_RELEASECHARACTERCOUNT_MAIN_OFFSET UNITYSDK_OFFSET(0x1891990)
#define MX_DATA_CHARACTERDATA_SET_RELEASECHARACTERCOUNT_MAIN_OFFSET UNITYSDK_OFFSET(0x18919A0)
#define MX_DATA_CHARACTERDATA_GET_RELEASECHARACTERCOUNT_SUPPORT_OFFSET UNITYSDK_OFFSET(0x18919B0)
#define MX_DATA_CHARACTERDATA_SET_RELEASECHARACTERCOUNT_SUPPORT_OFFSET UNITYSDK_OFFSET(0x18919C0)
#define MX_DATA_CHARACTERDATA_GET_CHARACTEREXCELSBYPRODUCTIONSTEP_OFFSET UNITYSDK_OFFSET(0x18919D0)
#define MX_DATA_CHARACTERDATA_GET_SUPPORTORTRANSFACTORS_OFFSET UNITYSDK_OFFSET(0x18919E0)
#define MX_DATA_CHARACTERDATA_GET_PERSONALITYBYCHARACTERID_OFFSET UNITYSDK_OFFSET(0x18919F0)
#define MX_DATA_CHARACTERDATA_GET_CHARACTERIDSBYPERSONALITYID_OFFSET UNITYSDK_OFFSET(0x1891A00)
#define MX_DATA_CHARACTERDATA_GET_TACTICSKIPLEVELDIFF_OFFSET UNITYSDK_OFFSET(0x1891A10)
#define MX_DATA_CHARACTERDATA_GET_MAXSTARGRADE_OFFSET UNITYSDK_OFFSET(0x1891A20)
#define MX_DATA_CHARACTERDATA_SET_MAXSTARGRADE_OFFSET UNITYSDK_OFFSET(0x1891A30)
#define MX_DATA_CHARACTERDATA_INITIALIZECOMMON_OFFSET UNITYSDK_OFFSET(0x1891A40)
#define MX_DATA_CHARACTERDATA_PREPAREINITIALDATA_OFFSET UNITYSDK_OFFSET(0x1891D80)
#define MX_DATA_CHARACTERDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1899F30)
#define MX_DATA_CHARACTERDATA__PICKAVAILABLEVICTORYINTERACTION_G__ISCOMPATABLE|116_0_OFFSET UNITYSDK_OFFSET(0x1891170)
#define MX_DATA_CHARACTERDATA__PICKAVAILABLEVICTORYINTERACTION_G__GETDEFAULTSTRIKERLIST|116_1_OFFSET UNITYSDK_OFFSET(0x18913C0)
#define MX_DATA_CHARACTERDATA__PREPAREINITIALDATA_B__191_3_OFFSET UNITYSDK_OFFSET(0x189AC10)

namespace MX::Data
{
	inline static constexpr unsigned int CharacterData_TypeDefinitionIndex = 16003;

	class CharacterData : public Il2CppObject
	{
	public:
		Il2CppObject* characterSpawnTempleteIdDic; // 0x28
		Il2CppObject* characterDic; // 0x30
		Il2CppObject* characterDuplicateRewardDataDic; // 0x38
		Il2CppObject* combatStyleIndexDic; // 0x40
		Il2CppObject* statDic; // 0x48
		Il2CppObject* statDetailDic; // 0x50
		Il2CppObject* levelExpDic; // 0x58
		Il2CppObject* levelStatFactorDic; // 0x60
		Il2CppObject* levelDamageFactorTable; // 0x68
		Il2CppObject* bulletArmorDamageFactorDic; // 0x70
		Il2CppObject* terrainAdaptationFactorDic; // 0x78
		::MX::Data::Excel::ObstacleFireLineCheckExcel* obstacleFireLineCheckExcel; // 0x80
		Il2CppObject* aiDic; // 0x90
		Il2CppObject* characterExternalBTDic; // 0x98
		Il2CppObject* transcendenceDic; // 0xA0
		Il2CppObject* tacticalSupportSystemDic; // 0xA8
		Il2CppObject* hpBarAbbreviationDic; // 0xB0
		Il2CppObject* floaterCommonDic; // 0xB8
		Il2CppObject* combatSkinDic; // 0xC0
		Il2CppObject* characterTags; // 0xC8
		Il2CppObject* statMinMaxDic; // 0xD0
		Il2CppObject* damageCalculationMinMaxDic; // 0xD8
		Il2CppObject* damageCalculationIdealMaxDic; // 0xE0
		Il2CppObject* characterSkillDic; // 0xE8
		Il2CppObject* illustCoordinateDic; // 0xF0
		Il2CppObject* characterProfileDic; // 0xF8
		Il2CppObject* pickedRandomSkillTimelineIndexDic; // 0x100
		Il2CppObject* characterVictoryInteractionDic; // 0x108
		::MX::Core::Math::IRandomService* _random_k__BackingField; // 0x110
		::System::Int32 characterVictoryInteractionMaxCount; // 0x0
		::System::String* characterVictoryInteractionAssetPath; // 0x0
		::System::Int32 _ReleaseCharacterCount_Main_k__BackingField; // 0x118
		::System::Int32 _ReleaseCharacterCount_Support_k__BackingField; // 0x11C
		Il2CppObject* characterExcelsByProductionStep; // 0x120
		Il2CppObject* characterStatsTransExcels; // 0x128
		Il2CppObject* personalityByCharacterId; // 0x130
		Il2CppObject* characterIdsByPersonalityId; // 0x138
		Il2CppObject* personalityDic; // 0x140
		Il2CppObject* tacticSkipLevelDiff; // 0x148
		Il2CppObject* whiteListCharacterDictionary; // 0x150
		Il2CppObject* blackListCharacterDictionary; // 0x158
		Il2CppObject* characterIdsBySchool; // 0x160
		::System::Int64 _MaxStarGrade_k__BackingField; // 0x168
		Il2CppObject* costumeDictionary; // 0x170
		Il2CppObject* defaultCostumeDictionary; // 0x178
		Il2CppObject* costumeDictionaryByGroupId; // 0x180

		Il2CppObject* GetAllPlayableCharacterExcels()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDATA_GETALLPLAYABLECHARACTEREXCELS_OFFSET))(nullptr);
		}

		Il2CppObject* GetCharacterDataIDs()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDATA_GETCHARACTERDATAIDS_OFFSET))(nullptr);
		}

		Il2CppObject* GetCharacterDataIDsByStudentFilter()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDATA_GETCHARACTERDATAIDSBYSTUDENTFILTER_OFFSET))(nullptr);
		}

		Il2CppObject* GetCharacterIdsByStudentAndReleaseFilter()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDATA_GETCHARACTERIDSBYSTUDENTANDRELEASEFILTER_OFFSET))(nullptr);
		}

		Il2CppObject* GetCharacterIdsBySquadType(::FlatData::SquadType* arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::SquadType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDATA_GETCHARACTERIDSBYSQUADTYPE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* AllCharacters()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDATA_ALLCHARACTERS_OFFSET))(nullptr);
		}

		Il2CppObject* CharacterStatDetailList()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDATA_CHARACTERSTATDETAILLIST_OFFSET))(nullptr);
		}

		::MX::Data::Excel::CharacterExcel* GetCharacterData(::System::String* str)
		{
			return (return (::MX::Data::Excel::CharacterExcel*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDATA_GETCHARACTERDATA_OFFSET))(str, nullptr);
		}

		::System::Boolean TryGetCharacterData(::System::String* str, ::MX::Data::Excel::CharacterExcel&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::MX::Data::Excel::CharacterExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDATA_TRYGETCHARACTERDATA_OFFSET))(str, arg, nullptr);
		}

		::System::Boolean HasCharacterData(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDATA_HASCHARACTERDATA_OFFSET))(str, nullptr);
		}

		::System::Boolean TryGetCharacterData(::MX::Data::Excel::CostumeExcel* arg, ::MX::Data::Excel::CharacterExcel&* arg)
		{
			return (return (::System::Boolean(*)(::MX::Data::Excel::CostumeExcel*, ::MX::Data::Excel::CharacterExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDATA_TRYGETCHARACTERDATA_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::CharacterExcel* GetCharacterData(::System::Int64 arg)
		{
			return (return (::MX::Data::Excel::CharacterExcel*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDATA_GETCHARACTERDATA_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetCharacterData(::System::Int64 arg, ::MX::Data::Excel::CharacterExcel&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::Excel::CharacterExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDATA_TRYGETCHARACTERDATA_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetCharacterDuplicatedRewardData(::System::Int64 arg, ::MX::Data::CharacterDuplicateRewardData&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::CharacterDuplicateRewardData&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDATA_TRYGETCHARACTERDUPLICATEDREWARDDATA_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::CharacterSkillListExcel* GetCharacterSkillListDataByCostumeGroupId(::System::Int64 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::MX::Data::Excel::CharacterSkillListExcel*(*)(::System::Int64, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDATA_GETCHARACTERSKILLLISTDATABYCOSTUMEGROUPID_OFFSET))(arg, arg, arg, nullptr);
		}

		::MX::Data::Excel::CharacterSkillListExcel* GetCharacterSkillListDataByCostumeGroupId(::System::Int64 arg, ::System::Int32 arg, ::System::Int32 arg, ::MX::Data::CharacterSkillListKey* arg)
		{
			return (return (::MX::Data::Excel::CharacterSkillListExcel*(*)(::System::Int64, ::System::Int32, ::System::Int32, ::MX::Data::CharacterSkillListKey*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDATA_GETCHARACTERSKILLLISTDATABYCOSTUMEGROUPID_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void ResetCharacterSkillTimelineIndex()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDATA_RESETCHARACTERSKILLTIMELINEINDEX_OFFSET))(nullptr);
		}

		Il2CppObject* PickCharacterSkillTimelineIndex(::System::Int64 arg, ::System::Int32 arg, ::System::Int32 arg, ::MX::Data::CharacterSkillListKey* arg, ::MX::Logic::BattleEntities::SkillSlot* arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Int32, ::System::Int32, ::MX::Data::CharacterSkillListKey*, ::MX::Logic::BattleEntities::SkillSlot*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDATA_PICKCHARACTERSKILLTIMELINEINDEX_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		Il2CppObject* PickCharacterSkillTimelineIndex(::MX::Data::Excel::CharacterSkillListExcel* arg, ::MX::Logic::BattleEntities::SkillSlot* arg)
		{
			return (return (Il2CppObject*(*)(::MX::Data::Excel::CharacterSkillListExcel*, ::MX::Logic::BattleEntities::SkillSlot*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDATA_PICKCHARACTERSKILLTIMELINEINDEX_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SplitIndexArrayString(::System::String* str)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDATA_SPLITINDEXARRAYSTRING_OFFSET))(str, nullptr);
		}

		::System::Boolean TryGetTranscendence(::System::Int64 arg, ::MX::Data::Excel::CharacterTranscendenceExcel&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::Excel::CharacterTranscendenceExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDATA_TRYGETTRANSCENDENCE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetMaxFavorLevel(::System::Int64 arg, ::System::Int32 arg, int64_t&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::System::Int32, int64_t&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDATA_TRYGETMAXFAVORLEVEL_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean TryGetMaxLevelStar(::System::Int32 arg, ::MX::Data::Excel::CharacterTranscendenceExcel* arg, int64_t&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::MX::Data::Excel::CharacterTranscendenceExcel*, int64_t&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDATA_TRYGETMAXLEVELSTAR_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* GetCharacterSkillListDatas(::System::Int64 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDATA_GETCHARACTERSKILLLISTDATAS_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* GetCharacterSkillListDatas(::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDATA_GETCHARACTERSKILLLISTDATAS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetStudentsData()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDATA_GETSTUDENTSDATA_OFFSET))(nullptr);
		}

		Il2CppObject* GetVehiclesData()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDATA_GETVEHICLESDATA_OFFSET))(nullptr);
		}

		::System::Boolean HasCharacterData(::System::Int64 arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDATA_HASCHARACTERDATA_OFFSET))(arg, nullptr);
		}

		::System::Boolean HasCostumeData(::System::Int64 arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDATA_HASCOSTUMEDATA_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetAllCostumeExcel()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDATA_GETALLCOSTUMEEXCEL_OFFSET))(nullptr);
		}

		::MX::Data::Excel::CharacterStatExcel* GetStatData(::System::Int64 arg)
		{
			return (return (::MX::Data::Excel::CharacterStatExcel*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDATA_GETSTATDATA_OFFSET))(arg, nullptr);
		}

		::System::Boolean HasStatData(::System::Int64 arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDATA_HASSTATDATA_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetStatLimitData(::FlatData::TacticEntityType* arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::TacticEntityType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDATA_GETSTATLIMITDATA_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetBattleCalculationLimitData(::FlatData::TacticEntityType* arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::TacticEntityType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDATA_GETBATTLECALCULATIONLIMITDATA_OFFSET))(arg, nullptr);
		}

		::System::Int64 GetBattleCalculationIdealMax(::FlatData::TacticEntityType* arg, ::FlatData::BattleCalculationStat* arg)
		{
			return (return (::System::Int64(*)(::FlatData::TacticEntityType*, ::FlatData::BattleCalculationStat*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDATA_GETBATTLECALCULATIONIDEALMAX_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::CharacterLevelExcel* GetLevelExpData(::System::Int32 arg)
		{
			return (return (::MX::Data::Excel::CharacterLevelExcel*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDATA_GETLEVELEXPDATA_OFFSET))(arg, nullptr);
		}

		::System::Boolean HasLevelExpData(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDATA_HASLEVELEXPDATA_OFFSET))(arg, nullptr);
		}

		::System::Int64 GetCharacterMaxLevel()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDATA_GETCHARACTERMAXLEVEL_OFFSET))(nullptr);
		}

		::System::Int64 GetRequiredExpToLevelUp(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDATA_GETREQUIREDEXPTOLEVELUP_OFFSET))(arg, nullptr);
		}

		::System::Int64 GetExpDiff(::System::Int32 arg, ::System::Int64 arg, ::System::Int32 arg, ::System::Int64 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::System::Int64, ::System::Int32, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDATA_GETEXPDIFF_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::MX::Data::Excel::CharacterLevelStatFactorExcel* GetLevelStatFactorData(::System::Int32 arg)
		{
			return (return (::MX::Data::Excel::CharacterLevelStatFactorExcel*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDATA_GETLEVELSTATFACTORDATA_OFFSET))(arg, nullptr);
		}

		::System::Boolean HasLevelStatFactorData(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDATA_HASLEVELSTATFACTORDATA_OFFSET))(arg, nullptr);
		}

		::System::Int64 GetCriticalStatFactor(::System::Int64 arg)
		{
			return (return (::System::Int64(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDATA_GETCRITICALSTATFACTOR_OFFSET))(arg, nullptr);
		}

		::System::Int64 GetDefenceStatFactor(::System::Int64 arg)
		{
			return (return (::System::Int64(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDATA_GETDEFENCESTATFACTOR_OFFSET))(arg, nullptr);
		}

		::System::Int64 GetStabilityFactor(::System::Int64 arg)
		{
			return (return (::System::Int64(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDATA_GETSTABILITYFACTOR_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetBulletArmorDamageRate(::System::String* str, ::FlatData::BulletType* arg, ::FlatData::ArmorType* arg)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::FlatData::BulletType*, ::FlatData::ArmorType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDATA_GETBULLETARMORDAMAGERATE_OFFSET))(str, arg, arg, nullptr);
		}

		Il2CppObject* GetBulletArmorDamageFactor(::System::String* str)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDATA_GETBULLETARMORDAMAGEFACTOR_OFFSET))(str, nullptr);
		}

		::MX::Data::Excel::TerrainAdaptationFactorExcel* GetTerrainAdaptationFactorExcel(::FlatData::StageTopography* arg, ::System::Int64 arg)
		{
			return (return (::MX::Data::Excel::TerrainAdaptationFactorExcel*(*)(::FlatData::StageTopography*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDATA_GETTERRAINADAPTATIONFACTOREXCEL_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::TerrainAdaptationFactorExcel* GetTerrainAdaptationFactorExcel(::FlatData::StageTopography* arg, ::FlatData::TerrainAdaptationStat* arg)
		{
			return (return (::MX::Data::Excel::TerrainAdaptationFactorExcel*(*)(::FlatData::StageTopography*, ::FlatData::TerrainAdaptationStat*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDATA_GETTERRAINADAPTATIONFACTOREXCEL_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::ObstacleFireLineCheckExcel* GetObstacleFireLineCheckData()
		{
			return (return (::MX::Data::Excel::ObstacleFireLineCheckExcel*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDATA_GETOBSTACLEFIRELINECHECKDATA_OFFSET))(nullptr);
		}

		::System::Boolean TryGetAIData(::System::Int64 arg, ::MX::Data::Excel::CharacterAIExcel&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::Excel::CharacterAIExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDATA_TRYGETAIDATA_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::CharacterAIExcel* GetAIData(::System::Int64 arg)
		{
			return (return (::MX::Data::Excel::CharacterAIExcel*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDATA_GETAIDATA_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetExternalBTExcels(::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDATA_GETEXTERNALBTEXCELS_OFFSET))(arg, nullptr);
		}

		::System::Int64 GetStandardHpBarAbbreviationFactor(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDATA_GETSTANDARDHPBARABBREVIATIONFACTOR_OFFSET))(arg, nullptr);
		}

		::System::Int64 GetRaidBossHpBarAbbreviationFactor(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDATA_GETRAIDBOSSHPBARABBREVIATIONFACTOR_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetTranscendence(::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDATA_GETTRANSCENDENCE_OFFSET))(arg, nullptr);
		}

		::System::Int64 GetMaxFavorLevel(::System::Int64 arg, ::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int64, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDATA_GETMAXFAVORLEVEL_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* GetTacticSupportSystems()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDATA_GETTACTICSUPPORTSYSTEMS_OFFSET))(nullptr);
		}

		::System::Boolean HasTSSExcel(::System::Int64 arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDATA_HASTSSEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::TacticalSupportSystemExcel* GetTacticSupportSystem(::System::Int64 arg)
		{
			return (return (::MX::Data::Excel::TacticalSupportSystemExcel*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDATA_GETTACTICSUPPORTSYSTEM_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetTacticSupportSystemByTSSId(::System::Int64 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDATA_TRYGETTACTICSUPPORTSYSTEMBYTSSID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* get_TSSIds()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDATA_GET_TSSIDS_OFFSET))(nullptr);
		}

		::System::Boolean TryGetTacticSupportSystemBySummonerId(::System::Int64 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDATA_TRYGETTACTICSUPPORTSYSTEMBYSUMMONERID_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::FloaterCommonExcel* GetFloaterCommon(::FlatData::TacticEntityType* arg)
		{
			return (return (::MX::Data::Excel::FloaterCommonExcel*(*)(::FlatData::TacticEntityType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDATA_GETFLOATERCOMMON_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::CharacterIllustCoordinateExcel* GetIllustCoordinate(::System::Int64 arg)
		{
			return (return (::MX::Data::Excel::CharacterIllustCoordinateExcel*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDATA_GETILLUSTCOORDINATE_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::CharacterCombatSkinExcel* GetCombatSkinData(::System::String* str, ::System::Int64 arg)
		{
			return (return (::MX::Data::Excel::CharacterCombatSkinExcel*(*)(::System::String*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDATA_GETCOMBATSKINDATA_OFFSET))(str, arg, nullptr);
		}

		Il2CppObject* GetCharacterExcelEnumerator()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDATA_GETCHARACTEREXCELENUMERATOR_OFFSET))(nullptr);
		}

		::System::Int64 GetLevelDamageFactor(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDATA_GETLEVELDAMAGEFACTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetCharacterExcel(::System::Int64 arg, ::MX::Data::Excel::CharacterExcel&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::Excel::CharacterExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDATA_TRYGETCHARACTEREXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetCharacterTags(::System::Int64 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDATA_TRYGETCHARACTERTAGS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* GetCharacterTags(::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDATA_GETCHARACTERTAGS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetCharacterUniqueIdsBySchool(::FlatData::School* arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::School*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDATA_GETCHARACTERUNIQUEIDSBYSCHOOL_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetCharactersByTacticEntityAndSquadType(::FlatData::TacticEntityType* arg, ::FlatData::SquadType* arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::TacticEntityType*, ::FlatData::SquadType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDATA_GETCHARACTERSBYTACTICENTITYANDSQUADTYPE_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* CharacterProfile(::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDATA_CHARACTERPROFILE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsBirthDay(::System::Int64 arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDATA_ISBIRTHDAY_OFFSET))(arg, nullptr);
		}

		::System::String* GetCharacterStatusString(::System::Int64 arg)
		{
			return (return (::System::String*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDATA_GETCHARACTERSTATUSSTRING_OFFSET))(arg, nullptr);
		}

		::System::String* GetCharacterDevNameString(::System::Int64 arg)
		{
			return (return (::System::String*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDATA_GETCHARACTERDEVNAMESTRING_OFFSET))(arg, nullptr);
		}

		::System::String* GetCharacterFullNameString(::System::Int64 arg)
		{
			return (return (::System::String*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDATA_GETCHARACTERFULLNAMESTRING_OFFSET))(arg, nullptr);
		}

		::System::String* GetCharacterFamilyNameString(::System::Int64 arg)
		{
			return (return (::System::String*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDATA_GETCHARACTERFAMILYNAMESTRING_OFFSET))(arg, nullptr);
		}

		::System::String* GetCharacterFamilyNameRubyString(::System::Int64 arg)
		{
			return (return (::System::String*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDATA_GETCHARACTERFAMILYNAMERUBYSTRING_OFFSET))(arg, nullptr);
		}

		::System::String* GetCharacterPersonalNameString(::System::Int64 arg)
		{
			return (return (::System::String*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDATA_GETCHARACTERPERSONALNAMESTRING_OFFSET))(arg, nullptr);
		}

		::System::String* GetCharacterPersonalNameRubyString(::System::Int64 arg)
		{
			return (return (::System::String*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDATA_GETCHARACTERPERSONALNAMERUBYSTRING_OFFSET))(arg, nullptr);
		}

		::System::String* GetCharacterSchoolYearString(::System::Int64 arg)
		{
			return (return (::System::String*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDATA_GETCHARACTERSCHOOLYEARSTRING_OFFSET))(arg, nullptr);
		}

		::System::String* GetCharacterAgeString(::System::Int64 arg)
		{
			return (return (::System::String*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDATA_GETCHARACTERAGESTRING_OFFSET))(arg, nullptr);
		}

		::System::String* GetCharacterBirthDayString(::System::Int64 arg)
		{
			return (return (::System::String*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDATA_GETCHARACTERBIRTHDAYSTRING_OFFSET))(arg, nullptr);
		}

		::System::String* GetCharacterHeightString(::System::Int64 arg)
		{
			return (return (::System::String*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDATA_GETCHARACTERHEIGHTSTRING_OFFSET))(arg, nullptr);
		}

		::System::String* GetCharacterHobbyString(::System::Int64 arg)
		{
			return (return (::System::String*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDATA_GETCHARACTERHOBBYSTRING_OFFSET))(arg, nullptr);
		}

		::System::String* GetCharacterDesignNameString(::System::Int64 arg)
		{
			return (return (::System::String*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDATA_GETCHARACTERDESIGNNAMESTRING_OFFSET))(arg, nullptr);
		}

		::System::String* GetCharacterIllustNameString(::System::Int64 arg)
		{
			return (return (::System::String*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDATA_GETCHARACTERILLUSTNAMESTRING_OFFSET))(arg, nullptr);
		}

		::System::String* GetCharacterVoiceString(::System::Int64 arg, ::FlatData::Nation* arg, bool&* arg)
		{
			return (return (::System::String*(*)(::System::Int64, ::FlatData::Nation*, bool&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDATA_GETCHARACTERVOICESTRING_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::String* GetCharacteClubNameForGachaString(::System::Int64 arg)
		{
			return (return (::System::String*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDATA_GETCHARACTECLUBNAMEFORGACHASTRING_OFFSET))(arg, nullptr);
		}

		::System::String* GetCharacterSSRNew(::System::Int64 arg)
		{
			return (return (::System::String*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDATA_GETCHARACTERSSRNEW_OFFSET))(arg, nullptr);
		}

		::System::String* GetCharacterIntroductionString(::System::Int64 arg)
		{
			return (return (::System::String*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDATA_GETCHARACTERINTRODUCTIONSTRING_OFFSET))(arg, nullptr);
		}

		::System::String* GetWeaponName(::System::Int64 arg)
		{
			return (return (::System::String*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDATA_GETWEAPONNAME_OFFSET))(arg, nullptr);
		}

		::System::String* GetWeaponDescription(::System::Int64 arg)
		{
			return (return (::System::String*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDATA_GETWEAPONDESCRIPTION_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetPersonalityId(::System::Int64 arg, int64_t&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, int64_t&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDATA_TRYGETPERSONALITYID_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 GetPersonalityId(::System::Int64 arg)
		{
			return (return (::System::Int64(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDATA_GETPERSONALITYID_OFFSET))(arg, nullptr);
		}

		::System::Boolean HasPersonalityId(::System::Int64 arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDATA_HASPERSONALITYID_OFFSET))(arg, nullptr);
		}

		Il2CppObject* CharacterIdsWithSamePersonalityId(::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDATA_CHARACTERIDSWITHSAMEPERSONALITYID_OFFSET))(arg, nullptr);
		}

		::System::Boolean HasValidProductionStep(::FlatData::ProductionStep* arg)
		{
			return (return (::System::Boolean(*)(::FlatData::ProductionStep*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDATA_HASVALIDPRODUCTIONSTEP_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsReleaseStudent(::FlatData::ProductionStep* arg, ::FlatData::TacticEntityType* arg)
		{
			return (return (::System::Boolean(*)(::FlatData::ProductionStep*, ::FlatData::TacticEntityType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDATA_ISRELEASESTUDENT_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* GetWhiteListCharacterIds(::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDATA_GETWHITELISTCHARACTERIDS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetBlackListCharacterIds(::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDATA_GETBLACKLISTCHARACTERIDS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetAvailableEchelonConstraintCharacterIds(::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDATA_GETAVAILABLEECHELONCONSTRAINTCHARACTERIDS_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsCollectionVisible(::System::Int64 arg, ::System::DateTime* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDATA_ISCOLLECTIONVISIBLE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsCollectionVisible(::MX::Data::Excel::CharacterExcel* arg, ::System::DateTime* arg)
		{
			return (return (::System::Boolean(*)(::MX::Data::Excel::CharacterExcel*, ::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDATA_ISCOLLECTIONVISIBLE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsCharacterReleased(::MX::Data::Excel::CharacterExcel* arg, ::System::DateTime* arg)
		{
			return (return (::System::Boolean(*)(::MX::Data::Excel::CharacterExcel*, ::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDATA_ISCHARACTERRELEASED_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetCostumeExcel(::System::Int64 arg, ::MX::Data::Excel::CostumeExcel&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::Excel::CostumeExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDATA_TRYGETCOSTUMEEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetCostumeExcel(::System::Int64 arg, ::System::Int64 arg, ::MX::Data::Excel::CostumeExcel&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::System::Int64, ::MX::Data::Excel::CostumeExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDATA_TRYGETCOSTUMEEXCEL_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean TryGetDefaultCostumeExcel(::System::Int64 arg, ::MX::Data::Excel::CostumeExcel&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::Excel::CostumeExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDATA_TRYGETDEFAULTCOSTUMEEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 GetDefaultCostumeUniqueId(::System::Int64 arg)
		{
			return (return (::System::Int64(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDATA_GETDEFAULTCOSTUMEUNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetCostumeExcel(::MX::Logic::Data::HeroSetting* arg, ::MX::Data::Excel::CostumeExcel&* arg)
		{
			return (return (::System::Boolean(*)(::MX::Logic::Data::HeroSetting*, ::MX::Data::Excel::CostumeExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDATA_TRYGETCOSTUMEEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetCostumeExcelsByGroupId(::System::Int64 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDATA_TRYGETCOSTUMEEXCELSBYGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetCostumeExcelsByCharacterUniqueId(::System::Int64 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDATA_TRYGETCOSTUMEEXCELSBYCHARACTERUNIQUEID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* GetAllVictoryInteractionExcel()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDATA_GETALLVICTORYINTERACTIONEXCEL_OFFSET))(nullptr);
		}

		Il2CppObject* PickAvailableVictoryInteraction(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDATA_PICKAVAILABLEVICTORYINTERACTION_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetCombatStyleExcels(::System::Int64 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDATA_TRYGETCOMBATSTYLEEXCELS_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 GetCombatStyleCharacterUniqueId(::System::Int64 arg, ::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int64, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDATA_GETCOMBATSTYLECHARACTERUNIQUEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetCombatStyleIndex(::System::Int64 arg)
		{
			return (return (::System::Int32(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDATA_GETCOMBATSTYLEINDEX_OFFSET))(arg, nullptr);
		}

		::System::Int64 GetMainCombatStyleOrUniqueId(::System::Int64 arg)
		{
			return (return (::System::Int64(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDATA_GETMAINCOMBATSTYLEORUNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsMainCombatStyleCharacter(::System::Int64 arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDATA_ISMAINCOMBATSTYLECHARACTER_OFFSET))(arg, nullptr);
		}

		::MX::Core::Math::IRandomService* get_random()
		{
			return (return (::MX::Core::Math::IRandomService*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDATA_GET_RANDOM_OFFSET))(nullptr);
		}

		::System::Int32 get_ReleaseCharacterCount_Main()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDATA_GET_RELEASECHARACTERCOUNT_MAIN_OFFSET))(nullptr);
		}

		::System::Void set_ReleaseCharacterCount_Main(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDATA_SET_RELEASECHARACTERCOUNT_MAIN_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ReleaseCharacterCount_Support()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDATA_GET_RELEASECHARACTERCOUNT_SUPPORT_OFFSET))(nullptr);
		}

		::System::Void set_ReleaseCharacterCount_Support(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDATA_SET_RELEASECHARACTERCOUNT_SUPPORT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_CharacterExcelsByProductionStep()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDATA_GET_CHARACTEREXCELSBYPRODUCTIONSTEP_OFFSET))(nullptr);
		}

		Il2CppObject* get_SupportorTransFactors()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDATA_GET_SUPPORTORTRANSFACTORS_OFFSET))(nullptr);
		}

		Il2CppObject* get_PersonalityByCharacterId()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDATA_GET_PERSONALITYBYCHARACTERID_OFFSET))(nullptr);
		}

		Il2CppObject* get_CharacterIdsByPersonalityId()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDATA_GET_CHARACTERIDSBYPERSONALITYID_OFFSET))(nullptr);
		}

		Il2CppObject* get_TacticSkipLevelDiff()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDATA_GET_TACTICSKIPLEVELDIFF_OFFSET))(nullptr);
		}

		::System::Int64 get_MaxStarGrade()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDATA_GET_MAXSTARGRADE_OFFSET))(nullptr);
		}

		::System::Void set_MaxStarGrade(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDATA_SET_MAXSTARGRADE_OFFSET))(arg, nullptr);
		}

		::System::Void InitializeCommon()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDATA_INITIALIZECOMMON_OFFSET))(nullptr);
		}

		::System::Void PrepareInitialData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDATA_PREPAREINITIALDATA_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _PickAvailableVictoryInteraction_g__IsCompatable|116_0(::MX::Data::Excel::CharacterVictoryInteractionExcel* arg, Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(::MX::Data::Excel::CharacterVictoryInteractionExcel*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDATA__PICKAVAILABLEVICTORYINTERACTION_G__ISCOMPATABLE|116_0_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* _PickAvailableVictoryInteraction_g__GetDefaultStrikerList|116_1(::MX::Data::Excel::CharacterVictoryInteractionExcel* arg)
		{
			return (return (Il2CppObject*(*)(::MX::Data::Excel::CharacterVictoryInteractionExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDATA__PICKAVAILABLEVICTORYINTERACTION_G__GETDEFAULTSTRIKERLIST|116_1_OFFSET))(arg, nullptr);
		}

		::System::Boolean _PrepareInitialData_b__191_3(::MX::Data::Excel::CharacterExcel* arg)
		{
			return (return (::System::Boolean(*)(::MX::Data::Excel::CharacterExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDATA__PREPAREINITIALDATA_B__191_3_OFFSET))(arg, nullptr);
		}

	};
}

