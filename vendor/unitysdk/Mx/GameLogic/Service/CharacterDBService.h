#pragma once
#include "../../../unitysdk.h"

namespace MX::GameLogic::DBModel { class CharacterDB; }
namespace MX::Logic::BattleEntities { class O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4; }
namespace MX::GameLogic::DBModel { class WeaponDB; }
namespace MX::GameLogic::DBModel { class GearDB; }
namespace MX::GameLogic::DBModel { class CostumeDB; }
namespace MX::Logic::BattleEntities { class SkillSlot; }
namespace MX::GameLogic::Parcel { class ParcelCost; }
namespace FlatData { class Club; }
namespace MX::GameLogic::DBModel { class PotentialGrowthRequestDB; }
namespace FlatData { class PotentialStatBonusRateType; }

#define MX_GAMELOGIC_SERVICE_CHARACTERDBSERVICE_LEVELUPCURRENCYREQUIRED_OFFSET UNITYSDK_OFFSET(0xF89520)
#define MX_GAMELOGIC_SERVICE_CHARACTERDBSERVICE_TRYGETCONSUMEEXPSUMANDOTHERINFO_OFFSET UNITYSDK_OFFSET(0xF89560)
#define MX_GAMELOGIC_SERVICE_CHARACTERDBSERVICE_TRYGETLEVELANDEXPAFTERFEED_OFFSET UNITYSDK_OFFSET(0xF89C80)
#define MX_GAMELOGIC_SERVICE_CHARACTERDBSERVICE_ISVALIDCONSUMEREQUEST_OFFSET UNITYSDK_OFFSET(0xF89E30)
#define MX_GAMELOGIC_SERVICE_CHARACTERDBSERVICE_APPLYEXPFEED_OFFSET UNITYSDK_OFFSET(0xF8A1E0)
#define MX_GAMELOGIC_SERVICE_CHARACTERDBSERVICE_TRYGETFAVORRANKANDEXPAFTERFEED_OFFSET UNITYSDK_OFFSET(0xF8A240)
#define MX_GAMELOGIC_SERVICE_CHARACTERDBSERVICE_TRYGETCONSUMEITEMFAVOREXPPARCELINFOS_OFFSET UNITYSDK_OFFSET(0xF8A410)
#define MX_GAMELOGIC_SERVICE_CHARACTERDBSERVICE_APPLYFAVERRANKEXPFEED_OFFSET UNITYSDK_OFFSET(0xF8A9B0)
#define MX_GAMELOGIC_SERVICE_CHARACTERDBSERVICE_GETTRANSCENDENCECOUNT_OFFSET UNITYSDK_OFFSET(0xF8AA00)
#define MX_GAMELOGIC_SERVICE_CHARACTERDBSERVICE_GETTRANSCENDENCECOUNT_OFFSET UNITYSDK_OFFSET(0xF8AAB0)
#define MX_GAMELOGIC_SERVICE_CHARACTERDBSERVICE_CREATECHARACTERENTITY_OFFSET UNITYSDK_OFFSET(0xF8ABD0)
#define MX_GAMELOGIC_SERVICE_CHARACTERDBSERVICE_GETSKILLSLOTOFOPENSKILL_OFFSET UNITYSDK_OFFSET(0xF8AC10)
#define MX_GAMELOGIC_SERVICE_CHARACTERDBSERVICE_GETSKILLLEVEL_OFFSET UNITYSDK_OFFSET(0xF8AC30)
#define MX_GAMELOGIC_SERVICE_CHARACTERDBSERVICE_SETSKILLLEVEL_OFFSET UNITYSDK_OFFSET(0xF8ACB0)
#define MX_GAMELOGIC_SERVICE_CHARACTERDBSERVICE_TRYGETSKILLGAINSTARGRADE_OFFSET UNITYSDK_OFFSET(0xF8AD20)
#define MX_GAMELOGIC_SERVICE_CHARACTERDBSERVICE_GETSKILLACTIONGROUPID_OFFSET UNITYSDK_OFFSET(0xF8AF50)
#define MX_GAMELOGIC_SERVICE_CHARACTERDBSERVICE_GETSKILLREQUIRECHARACTERLEVEL_OFFSET UNITYSDK_OFFSET(0xF8B1D0)
#define MX_GAMELOGIC_SERVICE_CHARACTERDBSERVICE_CANLEVELUPSKILL_OFFSET UNITYSDK_OFFSET(0xF8B2C0)
#define MX_GAMELOGIC_SERVICE_CHARACTERDBSERVICE_ISSKILLLEVELMAXOVER_OFFSET UNITYSDK_OFFSET(0xF8B3C0)
#define MX_GAMELOGIC_SERVICE_CHARACTERDBSERVICE_GETSKILLMAXLEVEL_OFFSET UNITYSDK_OFFSET(0xF8B4D0)
#define MX_GAMELOGIC_SERVICE_CHARACTERDBSERVICE_GETSKILLLEVELUPMATERIALPARCELINFOS_OFFSET UNITYSDK_OFFSET(0xF8B5E0)
#define MX_GAMELOGIC_SERVICE_CHARACTERDBSERVICE_CANADDCHARACTERWITHSKILLLEVEL_OFFSET UNITYSDK_OFFSET(0xF8B810)
#define MX_GAMELOGIC_SERVICE_CHARACTERDBSERVICE_TRYGETCLUBCHARACTERCOUNT_OFFSET UNITYSDK_OFFSET(0xF8B9E0)
#define MX_GAMELOGIC_SERVICE_CHARACTERDBSERVICE_FILTERTSS_OFFSET UNITYSDK_OFFSET(0xF8BC40)
#define MX_GAMELOGIC_SERVICE_CHARACTERDBSERVICE_TRYGETTRANSCENDENCERECIPEIDANDSTARGRADE_OFFSET UNITYSDK_OFFSET(0xF8C190)
#define MX_GAMELOGIC_SERVICE_CHARACTERDBSERVICE_LEVELUPCHARACTERDBS_OFFSET UNITYSDK_OFFSET(0xF8C290)
#define MX_GAMELOGIC_SERVICE_CHARACTERDBSERVICE_GETCHARACTERFAVORRANKDICTGROUPBYPERSONALITYID_OFFSET UNITYSDK_OFFSET(0xF8C770)
#define MX_GAMELOGIC_SERVICE_CHARACTERDBSERVICE_BUILDFAVORRANKINFO_OFFSET UNITYSDK_OFFSET(0xF8CBD0)
#define MX_GAMELOGIC_SERVICE_CHARACTERDBSERVICE_CALCREMAINELIGMACOUNTFORMAXGRADE_OFFSET UNITYSDK_OFFSET(0xF8D080)
#define MX_GAMELOGIC_SERVICE_CHARACTERDBSERVICE_CALCREMAINELIGMACOUNTFORCHARACTERMAXGRADE_OFFSET UNITYSDK_OFFSET(0xF8D270)
#define MX_GAMELOGIC_SERVICE_CHARACTERDBSERVICE_CALCREMAINELIGMACOUNTFORWEAPONMAXGRADE_OFFSET UNITYSDK_OFFSET(0xF8D400)
#define MX_GAMELOGIC_SERVICE_CHARACTERDBSERVICE_CANUNLOCKWEAPON_OFFSET UNITYSDK_OFFSET(0xF8D5D0)
#define MX_GAMELOGIC_SERVICE_CHARACTERDBSERVICE_GETCOUNTSBYSKILLLEVEL_OFFSET UNITYSDK_OFFSET(0xF8D680)
#define MX_GAMELOGIC_SERVICE_CHARACTERDBSERVICE_BUILDACCUMULATEDCOUNTSBYVALUE_OFFSET UNITYSDK_OFFSET(0xF8DA00)
#define MX_GAMELOGIC_SERVICE_CHARACTERDBSERVICE_GETCOUNTSBYSTARGRADE_OFFSET UNITYSDK_OFFSET(0xF8DB10)
#define MX_GAMELOGIC_SERVICE_CHARACTERDBSERVICE_GETFAVORRANKSBYUNIQUEID_OFFSET UNITYSDK_OFFSET(0xF8DEC0)
#define MX_GAMELOGIC_SERVICE_CHARACTERDBSERVICE_TRYGETSECRETSTONE_OFFSET UNITYSDK_OFFSET(0xF8E200)
#define MX_GAMELOGIC_SERVICE_CHARACTERDBSERVICE_ISVALIDCHARACTERFAVORITES_OFFSET UNITYSDK_OFFSET(0xF8E650)
#define MX_GAMELOGIC_SERVICE_CHARACTERDBSERVICE_FILTERDCHARACTERFAVORITES_OFFSET UNITYSDK_OFFSET(0xF8E910)
#define MX_GAMELOGIC_SERVICE_CHARACTERDBSERVICE_BUILDCHARACTERFAVORITES_OFFSET UNITYSDK_OFFSET(0xF8ED50)
#define MX_GAMELOGIC_SERVICE_CHARACTERDBSERVICE_ISREACHEDMAXSTARGRADE_OFFSET UNITYSDK_OFFSET(0xF8F1B0)
#define MX_GAMELOGIC_SERVICE_CHARACTERDBSERVICE_CHECKINVALIDPOTENTIALGROWTHREQUESTDBS_OFFSET UNITYSDK_OFFSET(0xF8F250)
#define MX_GAMELOGIC_SERVICE_CHARACTERDBSERVICE_ISINVALIDPOTENTIALGROWTHREQUESTDB_OFFSET UNITYSDK_OFFSET(0xF8F5F0)
#define MX_GAMELOGIC_SERVICE_CHARACTERDBSERVICE_TRYGETPOTENTIALCOST_OFFSET UNITYSDK_OFFSET(0xF8F6C0)
#define MX_GAMELOGIC_SERVICE_CHARACTERDBSERVICE_GETPOTENTIALREWARDS_OFFSET UNITYSDK_OFFSET(0xF8F8B0)
#define MX_GAMELOGIC_SERVICE_CHARACTERDBSERVICE_GETPOTENTIALMAXLEVEL_OFFSET UNITYSDK_OFFSET(0xF8FA30)

namespace MX::GameLogic::Service
{
	inline static constexpr unsigned int CharacterDBService_TypeDefinitionIndex = 12276;

	class CharacterDBService : public Il2CppObject
	{
	public:
		::System::Int64 LevelUpCurrencyRequired(::System::Int64 arg)
		{
			return ((::System::Int64(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CHARACTERDBSERVICE_LEVELUPCURRENCYREQUIRED_OFFSET))(arg, nullptr);
		}

		Il2CppObject* TryGetConsumeExpSumAndOtherInfo(Il2CppObject* arg, int64_t&* arg2, Il2CppObject&* arg3, Il2CppObject* arg4)
		{
			return ((Il2CppObject*(*)(Il2CppObject*, int64_t&*, Il2CppObject&*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CHARACTERDBSERVICE_TRYGETCONSUMEEXPSUMANDOTHERINFO_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Boolean TryGetLevelAndExpAfterFeed(::MX::GameLogic::DBModel::CharacterDB* arg, ::System::Int64 arg2, ::System::Int64 arg3, int32_t&* arg4, int64_t&* arg5, int64_t&* arg6)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::CharacterDB*, ::System::Int64, ::System::Int64, int32_t&*, int64_t&*, int64_t&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CHARACTERDBSERVICE_TRYGETLEVELANDEXPAFTERFEED_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		::System::Boolean IsValidConsumeRequest(::System::Int64 arg, Il2CppObject* arg2, Il2CppObject* arg3)
		{
			return ((::System::Boolean(*)(::System::Int64, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CHARACTERDBSERVICE_ISVALIDCONSUMEREQUEST_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void ApplyExpFeed(::MX::GameLogic::DBModel::CharacterDB* arg, ::System::Int64 arg2, ::System::Int32 arg3)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::CharacterDB*, ::System::Int64, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CHARACTERDBSERVICE_APPLYEXPFEED_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean TryGetFavorRankAndExpAfterFeed(::MX::GameLogic::DBModel::CharacterDB* arg, ::System::Int64 arg2, int32_t&* arg3, int64_t&* arg4)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::CharacterDB*, ::System::Int64, int32_t&*, int64_t&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CHARACTERDBSERVICE_TRYGETFAVORRANKANDEXPAFTERFEED_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Boolean TryGetConsumeItemFavorExpParcelInfos(Il2CppObject* arg, ::System::Int64 arg2, Il2CppObject* arg3, Il2CppObject&* arg4, ::MX::GameLogic::Parcel::ParcelCost&* arg5)
		{
			return ((::System::Boolean(*)(Il2CppObject*, ::System::Int64, Il2CppObject*, Il2CppObject&*, ::MX::GameLogic::Parcel::ParcelCost&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CHARACTERDBSERVICE_TRYGETCONSUMEITEMFAVOREXPPARCELINFOS_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Void ApplyFaverRankExpFeed(::MX::GameLogic::DBModel::CharacterDB* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::CharacterDB*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CHARACTERDBSERVICE_APPLYFAVERRANKEXPFEED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int32 GetTranscendenceCount(::MX::GameLogic::DBModel::CharacterDB* arg)
		{
			return ((::System::Int32(*)(::MX::GameLogic::DBModel::CharacterDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CHARACTERDBSERVICE_GETTRANSCENDENCECOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetTranscendenceCount(Il2CppObject* arg)
		{
			return ((::System::Int32(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CHARACTERDBSERVICE_GETTRANSCENDENCECOUNT_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* CreateCharacterEntity(::MX::GameLogic::DBModel::CharacterDB* arg, Il2CppObject* arg2, Il2CppObject* arg3, ::MX::GameLogic::DBModel::WeaponDB* arg4, ::MX::GameLogic::DBModel::GearDB* arg5, ::MX::GameLogic::DBModel::CostumeDB* arg6, ::System::Int32 arg7)
		{
			return ((::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*(*)(::MX::GameLogic::DBModel::CharacterDB*, Il2CppObject*, Il2CppObject*, ::MX::GameLogic::DBModel::WeaponDB*, ::MX::GameLogic::DBModel::GearDB*, ::MX::GameLogic::DBModel::CostumeDB*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CHARACTERDBSERVICE_CREATECHARACTERENTITY_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, nullptr);
		}

		::MX::Logic::BattleEntities::SkillSlot* GetSkillSlotOfOpenSkill(::System::Int32 arg)
		{
			return ((::MX::Logic::BattleEntities::SkillSlot*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CHARACTERDBSERVICE_GETSKILLSLOTOFOPENSKILL_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetSkillLevel(::MX::GameLogic::DBModel::CharacterDB* arg, ::MX::Logic::BattleEntities::SkillSlot* arg2)
		{
			return ((::System::Int32(*)(::MX::GameLogic::DBModel::CharacterDB*, ::MX::Logic::BattleEntities::SkillSlot*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CHARACTERDBSERVICE_GETSKILLLEVEL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetSkillLevel(::MX::GameLogic::DBModel::CharacterDB* arg, ::MX::Logic::BattleEntities::SkillSlot* arg2, ::System::Int32 arg3)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::CharacterDB*, ::MX::Logic::BattleEntities::SkillSlot*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CHARACTERDBSERVICE_SETSKILLLEVEL_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean TryGetSkillGainStarGrade(::System::Int64 arg, ::MX::Logic::BattleEntities::SkillSlot* arg2, int32_t&* arg3)
		{
			return ((::System::Boolean(*)(::System::Int64, ::MX::Logic::BattleEntities::SkillSlot*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CHARACTERDBSERVICE_TRYGETSKILLGAINSTARGRADE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::String* GetSkillActionGroupId(::MX::GameLogic::DBModel::CharacterDB* arg, ::MX::Logic::BattleEntities::SkillSlot* arg2)
		{
			return ((::System::String*(*)(::MX::GameLogic::DBModel::CharacterDB*, ::MX::Logic::BattleEntities::SkillSlot*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CHARACTERDBSERVICE_GETSKILLACTIONGROUPID_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int64 GetSkillRequireCharacterLevel(::MX::GameLogic::DBModel::CharacterDB* arg, ::MX::Logic::BattleEntities::SkillSlot* arg2, ::System::Int32 arg3)
		{
			return ((::System::Int64(*)(::MX::GameLogic::DBModel::CharacterDB*, ::MX::Logic::BattleEntities::SkillSlot*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CHARACTERDBSERVICE_GETSKILLREQUIRECHARACTERLEVEL_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean CanLevelUpSkill(::MX::GameLogic::DBModel::CharacterDB* arg, ::MX::Logic::BattleEntities::SkillSlot* arg2, ::System::Int32 arg3)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::CharacterDB*, ::MX::Logic::BattleEntities::SkillSlot*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CHARACTERDBSERVICE_CANLEVELUPSKILL_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean IsSkillLevelMaxOver(::MX::Logic::BattleEntities::SkillSlot* arg, ::System::Int32 arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::SkillSlot*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CHARACTERDBSERVICE_ISSKILLLEVELMAXOVER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int32 GetSkillMaxLevel(::MX::Logic::BattleEntities::SkillSlot* arg)
		{
			return ((::System::Int32(*)(::MX::Logic::BattleEntities::SkillSlot*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CHARACTERDBSERVICE_GETSKILLMAXLEVEL_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::Parcel::ParcelCost* GetSkillLevelUpMaterialParcelInfos(::MX::GameLogic::DBModel::CharacterDB* arg, ::MX::Logic::BattleEntities::SkillSlot* arg2, ::System::Int32 arg3)
		{
			return ((::MX::GameLogic::Parcel::ParcelCost*(*)(::MX::GameLogic::DBModel::CharacterDB*, ::MX::Logic::BattleEntities::SkillSlot*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CHARACTERDBSERVICE_GETSKILLLEVELUPMATERIALPARCELINFOS_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean CanAddCharacterWithSkillLevel(::System::Int64 arg, ::System::Int32 arg2, ::System::Int32 arg3)
		{
			return ((::System::Boolean(*)(::System::Int64, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CHARACTERDBSERVICE_CANADDCHARACTERWITHSKILLLEVEL_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean TryGetClubCharacterCount(Il2CppObject* arg, ::FlatData::Club* arg2, int32_t&* arg3)
		{
			return ((::System::Boolean(*)(Il2CppObject*, ::FlatData::Club*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CHARACTERDBSERVICE_TRYGETCLUBCHARACTERCOUNT_OFFSET))(arg, arg2, arg3, nullptr);
		}

		Il2CppObject* FilterTSS(Il2CppObject* arg)
		{
			return ((Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CHARACTERDBSERVICE_FILTERTSS_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetTranscendenceRecipeIdAndStarGrade(::MX::GameLogic::DBModel::CharacterDB* arg, int64_t&* arg2, int32_t&* arg3)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::CharacterDB*, int64_t&*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CHARACTERDBSERVICE_TRYGETTRANSCENDENCERECIPEIDANDSTARGRADE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		Il2CppObject* LevelUpCharacterDBs(Il2CppObject* arg, Il2CppObject* arg2)
		{
			return ((Il2CppObject*(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CHARACTERDBSERVICE_LEVELUPCHARACTERDBS_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* GetCharacterFavorRankDictGroupByPersonalityId(Il2CppObject* arg)
		{
			return ((Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CHARACTERDBSERVICE_GETCHARACTERFAVORRANKDICTGROUPBYPERSONALITYID_OFFSET))(arg, nullptr);
		}

		Il2CppObject* BuildFavorRankInfo(Il2CppObject* arg, ::MX::GameLogic::DBModel::CharacterDB* arg2)
		{
			return ((Il2CppObject*(*)(Il2CppObject*, ::MX::GameLogic::DBModel::CharacterDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CHARACTERDBSERVICE_BUILDFAVORRANKINFO_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int64 CalcRemainEligmaCountForMaxGrade(::System::Boolean arg, ::System::Int64 arg2, ::System::Int32 arg3, ::System::Int32 arg4)
		{
			return ((::System::Int64(*)(::System::Boolean, ::System::Int64, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CHARACTERDBSERVICE_CALCREMAINELIGMACOUNTFORMAXGRADE_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Int64 CalcRemainEligmaCountForCharacterMaxGrade(::System::Int32 arg, ::System::Int64 arg2)
		{
			return ((::System::Int64(*)(::System::Int32, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CHARACTERDBSERVICE_CALCREMAINELIGMACOUNTFORCHARACTERMAXGRADE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int64 CalcRemainEligmaCountForWeaponMaxGrade(::System::Int64 arg, ::System::Int32 arg2)
		{
			return ((::System::Int64(*)(::System::Int64, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CHARACTERDBSERVICE_CALCREMAINELIGMACOUNTFORWEAPONMAXGRADE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean CanUnlockWeapon(::MX::GameLogic::DBModel::CharacterDB* arg)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::CharacterDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CHARACTERDBSERVICE_CANUNLOCKWEAPON_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetCountsBySkillLevel(Il2CppObject* arg)
		{
			return ((Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CHARACTERDBSERVICE_GETCOUNTSBYSKILLLEVEL_OFFSET))(arg, nullptr);
		}

		::System::Void BuildAccumulatedCountsByValue(Il2CppObject* arg, ::System::Int32 arg2, ::System::Int32 arg3)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CHARACTERDBSERVICE_BUILDACCUMULATEDCOUNTSBYVALUE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		Il2CppObject* GetCountsByStarGrade(Il2CppObject* arg)
		{
			return ((Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CHARACTERDBSERVICE_GETCOUNTSBYSTARGRADE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetFavorRanksByUniqueId(Il2CppObject* arg)
		{
			return ((Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CHARACTERDBSERVICE_GETFAVORRANKSBYUNIQUEID_OFFSET))(arg, nullptr);
		}

		Il2CppObject* TryGetSecretStone(::System::Int64 arg)
		{
			return ((Il2CppObject*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CHARACTERDBSERVICE_TRYGETSECRETSTONE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsValidCharacterFavorites(Il2CppObject* arg, Il2CppObject* arg2)
		{
			return ((::System::Boolean(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CHARACTERDBSERVICE_ISVALIDCHARACTERFAVORITES_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* FilterdCharacterFavorites(Il2CppObject* arg, Il2CppObject* arg2)
		{
			return ((Il2CppObject*(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CHARACTERDBSERVICE_FILTERDCHARACTERFAVORITES_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* BuildCharacterFavorites(Il2CppObject* arg, Il2CppObject* arg2)
		{
			return ((Il2CppObject*(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CHARACTERDBSERVICE_BUILDCHARACTERFAVORITES_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean IsReachedMaxStarGrade(::System::Int64 arg, ::System::Int32 arg2)
		{
			return ((::System::Boolean(*)(::System::Int64, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CHARACTERDBSERVICE_ISREACHEDMAXSTARGRADE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean CheckInvalidPotentialGrowthRequestDBs(::MX::GameLogic::DBModel::CharacterDB* arg, Il2CppObject* arg2)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::CharacterDB*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CHARACTERDBSERVICE_CHECKINVALIDPOTENTIALGROWTHREQUESTDBS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean IsInvalidPotentialGrowthRequestDB(::MX::GameLogic::DBModel::CharacterDB* arg, ::MX::GameLogic::DBModel::PotentialGrowthRequestDB* arg2)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::CharacterDB*, ::MX::GameLogic::DBModel::PotentialGrowthRequestDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CHARACTERDBSERVICE_ISINVALIDPOTENTIALGROWTHREQUESTDB_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean TryGetPotentialCost(::MX::GameLogic::DBModel::CharacterDB* arg, ::System::Int32 arg2, ::FlatData::PotentialStatBonusRateType* arg3, Il2CppObject&* arg4)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::CharacterDB*, ::System::Int32, ::FlatData::PotentialStatBonusRateType*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CHARACTERDBSERVICE_TRYGETPOTENTIALCOST_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		Il2CppObject* GetPotentialRewards(::MX::GameLogic::DBModel::CharacterDB* arg)
		{
			return ((Il2CppObject*(*)(::MX::GameLogic::DBModel::CharacterDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CHARACTERDBSERVICE_GETPOTENTIALREWARDS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetPotentialMaxLevel(::FlatData::PotentialStatBonusRateType* arg)
		{
			return ((::System::Int32(*)(::FlatData::PotentialStatBonusRateType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CHARACTERDBSERVICE_GETPOTENTIALMAXLEVEL_OFFSET))(arg, nullptr);
		}

	};
}

