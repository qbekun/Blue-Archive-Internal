#pragma once
#include "../../../unitysdk.h"

namespace MX::Campaign { class HexaTileUnitMovementOrderComparer; }
namespace MX::Data { class CampaignChapterInfo; }
namespace FlatData { class StageDifficulty; }
namespace MX::Data { class CampaignStageInfo; }
namespace MX::Data { class FieldContentStageInfo; }
namespace MX::GameLogic::DBModel { class CampaignStageHistoryDB; }
namespace MX::Data::Excel { class CampaignUnitExcel; }
namespace MX::GameLogic::DBModel { class CampaignMainStageSaveDB; }
namespace MX::GameLogic::Service { class ContentsRank; }
namespace FlatData { class ContentType; }
namespace MX::Logic::Battles::Summary { class BattleSummary; }
namespace MX::Data { class EventContentStageInfo; }
namespace MX::Campaign { class HexaTileMap; }
namespace MX::Campaign { class Strategy; }
namespace MX::Campaign { class HexaUnit; }
namespace MX::Campaign { class HexLocation; }
namespace MX::GameLogic::DBModel { class EventContentMainStageSaveDB; }
namespace MX::Campaign::HexaTileMapEvent { class HexaDisplayType; }
namespace MX::Campaign::HexaTileMapEvent { class HexaDisplayInfo; }
namespace MX::Campaign::HexaTileMapEvent::HexaTileMapCommand { class HexaCommand; }
namespace MX::GameLogic::DBModel { class EchelonDB; }
namespace MX::Data { class CampaignData; }
namespace MX::Data { class StrategyObjectData; }
namespace MX::GameLogic::Parcel { class ParcelInfo; }
namespace MX::Campaign { class HexaTile; }
namespace FlatData { class StrategyObjectType; }
namespace MX::GameLogic::Parcel { class ParcelCost; }

#define MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_GETOPENCHAPTERS_OFFSET UNITYSDK_OFFSET(0xF608F0)
#define MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_GETOPENNORMALSTAGES_OFFSET UNITYSDK_OFFSET(0xF60980)
#define MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_GETOPENHARDSTAGES_OFFSET UNITYSDK_OFFSET(0xF60A10)
#define MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_GETOPENVERYHARDSTAGES_OFFSET UNITYSDK_OFFSET(0xF60AA0)
#define MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_ISCLEAREDCHAPTER_OFFSET UNITYSDK_OFFSET(0xF60B30)
#define MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_ISOPENSTAGE_OFFSET UNITYSDK_OFFSET(0xF60C30)
#define MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_ISOPENSTAGE_OFFSET UNITYSDK_OFFSET(0xF60DD0)
#define MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_ISOPENSTAGE_OFFSET UNITYSDK_OFFSET(0xF61150)
#define MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_ISAVAILABLESTAGETODAY_OFFSET UNITYSDK_OFFSET(0xF61260)
#define MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_ISAVAILABLESTAGETODAY_OFFSET UNITYSDK_OFFSET(0xF612C0)
#define MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_GETHARDSTAGETODAYPLAYCOUNT_OFFSET UNITYSDK_OFFSET(0xF61390)
#define MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_GETHARDSTAGETODAYPURCHASEPLAYCOUNT_OFFSET UNITYSDK_OFFSET(0xF61410)
#define MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_CANTACTICSKIPCAMPAIGNUNIT_OFFSET UNITYSDK_OFFSET(0xF614C0)
#define MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_CREATESTAGEHISTORYDB_OFFSET UNITYSDK_OFFSET(0xF61580)
#define MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_CREATESTRATEGYSAVE_OFFSET UNITYSDK_OFFSET(0xF61650)
#define MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_CREATESTRATEGYSKIPSAVE_OFFSET UNITYSDK_OFFSET(0xF62750)
#define MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_CALCSTARCOUNT_OFFSET UNITYSDK_OFFSET(0xF62870)
#define MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_CALCSTRATEGYSTARCOUNT_OFFSET UNITYSDK_OFFSET(0xF628E0)
#define MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_CALCTACTICRANK_OFFSET UNITYSDK_OFFSET(0xF62970)
#define MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_CALCTACTICRANK_OFFSET UNITYSDK_OFFSET(0xF62A60)
#define MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_CALCTACTICRANK_OFFSET UNITYSDK_OFFSET(0xF62F10)
#define MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_CALCEVENTTACTICRANK_OFFSET UNITYSDK_OFFSET(0xF62C20)
#define MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_INCREASESTARCOUNTWITHHISTORYSTARFLAG_OFFSET UNITYSDK_OFFSET(0xF63030)
#define MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_CALCTACTICRANKWITHSTARFLAG_OFFSET UNITYSDK_OFFSET(0xF63500)
#define MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_CALCEVENTTACTICRANKWITHSTARFLAG_OFFSET UNITYSDK_OFFSET(0xF63160)
#define MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_CALCFIELDTACTICRANKWITHSTARFLAG_OFFSET UNITYSDK_OFFSET(0xF635F0)
#define MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_ISALLALIVE_OFFSET UNITYSDK_OFFSET(0xF62FC0)
#define MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_ISCLEARTIMEINSEC_OFFSET UNITYSDK_OFFSET(0xF62FD0)
#define MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_CLONEHEXATILEMAPANDAPPLYTILESTATES_OFFSET UNITYSDK_OFFSET(0xF62140)
#define MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_SETFOGIFNEEDED_OFFSET UNITYSDK_OFFSET(0xF621E0)
#define MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_CLEARFOGOFWAR_OFFSET UNITYSDK_OFFSET(0xF641B0)
#define MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_CLEARFOGOFWAR_OFFSET UNITYSDK_OFFSET(0xF645F0)
#define MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_UPDATEHEXLOCATIONFROMSAVEDBTOHEXTILEMAP_OFFSET UNITYSDK_OFFSET(0xF63950)
#define MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_SAVEHEXATILESTATESINCAMPAIGNSTRATEGYSAVEDB_OFFSET UNITYSDK_OFFSET(0xF62700)
#define MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_ADVANCEPHASE_OFFSET UNITYSDK_OFFSET(0xF64BC0)
#define MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_ADVANCEPHASE_OFFSET UNITYSDK_OFFSET(0xF64E60)
#define MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_ADVANCEPHASE_OFFSET UNITYSDK_OFFSET(0xF64C60)
#define MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_ADDDISPLAYINFO_OFFSET UNITYSDK_OFFSET(0xF64500)
#define MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_ADDDISPLAYINFO_OFFSET UNITYSDK_OFFSET(0xF66F70)
#define MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_CLEARDISPLAYINFO_OFFSET UNITYSDK_OFFSET(0xF64F90)
#define MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_CHECKHEXATILEMAPCONDITIONANDCOMMAND_OFFSET UNITYSDK_OFFSET(0xF62370)
#define MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_EXECUTEDELAYEDEVENT_OFFSET UNITYSDK_OFFSET(0xF66BE0)
#define MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_ADDACTIVATEDHEXAEVENTSANDCONDITIONHISTORY_OFFSET UNITYSDK_OFFSET(0xF670A0)
#define MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_ADDHEXAEVENTDELAYEDACTIVATIONRESERVATION_OFFSET UNITYSDK_OFFSET(0xF67130)
#define MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_EXECUTEDEVENTS_OFFSET UNITYSDK_OFFSET(0xF673C0)
#define MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_INITIALIZEHEXAUNITPROPERTIES_OFFSET UNITYSDK_OFFSET(0xF67450)
#define MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_INITIALIZEFIXEDECHELONHEXAUNITPROPERTIES_OFFSET UNITYSDK_OFFSET(0xF61DE0)
#define MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_INITIALIZEHPINFO_OFFSET UNITYSDK_OFFSET(0xF67850)
#define MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_REFRESHHEXAUNITPROPERTY_OFFSET UNITYSDK_OFFSET(0xF65020)
#define MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_UPDATECHARACTERSTATBASEDHEXAUNITABILITY_OFFSET UNITYSDK_OFFSET(0xF67C70)
#define MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_REMOVEENEMYHEXAUNITS_OFFSET UNITYSDK_OFFSET(0xF67D50)
#define MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_REMOVEENEMYHEXAUNIT_OFFSET UNITYSDK_OFFSET(0xF68090)
#define MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_CHECKREMOVEDUNITISSTAGECLEARTARGETBOSS_OFFSET UNITYSDK_OFFSET(0xF68250)
#define MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_CHANGEHEXAUNITLOCATIONONHEXATILEMAP_OFFSET UNITYSDK_OFFSET(0xF68600)
#define MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_GETNEXTMOVEMENTORDER_OFFSET UNITYSDK_OFFSET(0xF67670)
#define MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_DECIDEAIDESTINATION_OFFSET UNITYSDK_OFFSET(0xF65AD0)
#define MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_DECIDEGUARD_OFFSET UNITYSDK_OFFSET(0xF687F0)
#define MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_DECIDEPURSUIT_OFFSET UNITYSDK_OFFSET(0xF689C0)
#define MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_APPLYAIMOVEMENTANDCLEARAIDESTINATION_OFFSET UNITYSDK_OFFSET(0xF66490)
#define MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_FINDMOVEINFO_OFFSET UNITYSDK_OFFSET(0xF68C20)
#define MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_HASENCOUNTER_OFFSET UNITYSDK_OFFSET(0xF66020)
#define MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_CANMOVEHEXAUNIT_OFFSET UNITYSDK_OFFSET(0xF68D00)
#define MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_MOVEHEXAUNIT_OFFSET UNITYSDK_OFFSET(0xF68F20)
#define MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_ISENGAGED_OFFSET UNITYSDK_OFFSET(0xF691B0)
#define MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_MOVEHEXAUNITBYPORTAL_OFFSET UNITYSDK_OFFSET(0xF69B40)
#define MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_ISPOSITIONSWAP_OFFSET UNITYSDK_OFFSET(0xF69D90)
#define MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_SWAPHEXAUNITPOSITION_OFFSET UNITYSDK_OFFSET(0xF69EC0)
#define MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_HANDLESTRATEGYOBJECT_OFFSET UNITYSDK_OFFSET(0xF69600)
#define MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_CANSTARATEGYMAPHEAL_OFFSET UNITYSDK_OFFSET(0xF6AB40)
#define MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_HEALBYSTRATEGYOBJECT_OFFSET UNITYSDK_OFFSET(0xF6A5C0)
#define MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_BUFFBYSTRATEGYOBJECT_OFFSET UNITYSDK_OFFSET(0xF6A380)
#define MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_ACTIVATEOBSERVATORYOBJECT_OFFSET UNITYSDK_OFFSET(0xF6A910)
#define MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_SWITCHTILEMOVABILITY_OFFSET UNITYSDK_OFFSET(0xF6A9C0)
#define MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_TOGGLETILEMOVABILITYBYSTRATEGYOBJECTS_OFFSET UNITYSDK_OFFSET(0xF6B170)
#define MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_FINDSTRATEGYOBJECT_OFFSET UNITYSDK_OFFSET(0xF6A140)
#define MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_FINDPORTALEXIT_OFFSET UNITYSDK_OFFSET(0xF6BD00)
#define MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_FINDCOUNTERPARTPORTALOBJECT_OFFSET UNITYSDK_OFFSET(0xF6BEA0)
#define MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_TRYGETSWITCHTARGETS_OFFSET UNITYSDK_OFFSET(0xF6AC50)
#define MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_PROCESSSTRATEGYOBJECTENDTURN_OFFSET UNITYSDK_OFFSET(0xF65620)
#define MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_FINDOBTAINABLESTRATEGYREWARD_OFFSET UNITYSDK_OFFSET(0xF6C110)
#define MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_GETEVACUATIONPOSITION_OFFSET UNITYSDK_OFFSET(0xF6B7D0)
#define MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_ISSTARTORFIXEDSTART_OFFSET UNITYSDK_OFFSET(0xF6C2C0)
#define MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_CANRECEIVECHAPTERREWARD_OFFSET UNITYSDK_OFFSET(0xF6C2D0)
#define MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_GETCHAPTERSTARCOUNT_OFFSET UNITYSDK_OFFSET(0xF6C3F0)
#define MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_ISCHAPTERREWARED_OFFSET UNITYSDK_OFFSET(0xF6C820)
#define MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_STARATEGYMAPHEALCOST_OFFSET UNITYSDK_OFFSET(0xF6C900)
#define MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_.CCTOR_OFFSET UNITYSDK_OFFSET(0xF6CA40)
#define MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE__GETOPENNORMALSTAGES_G__GETOPENNORMALSTAGESINTERNAL|4_2_OFFSET UNITYSDK_OFFSET(0xF6CAF0)

namespace MX::GameLogic::Service
{
	inline static constexpr unsigned int CampaignService_TypeDefinitionIndex = 12264;

	class CampaignService : public Il2CppObject
	{
	public:
		::System::Int32 EnemyHexaUnitActionCount; // 0x0
		::System::Int32 BuffMax; // 0x4
		::MX::Campaign::HexaTileUnitMovementOrderComparer* HexaTileUnitMovementOrderComparer; // 0x8

		Il2CppObject* GetOpenChapters(Il2CppObject* arg, Il2CppObject* arg2)
		{
			return ((Il2CppObject*(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_GETOPENCHAPTERS_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* GetOpenNormalStages(::MX::Data::CampaignChapterInfo* arg, Il2CppObject* arg2)
		{
			return ((Il2CppObject*(*)(::MX::Data::CampaignChapterInfo*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_GETOPENNORMALSTAGES_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* GetOpenHardStages(::MX::Data::CampaignChapterInfo* arg, Il2CppObject* arg2)
		{
			return ((Il2CppObject*(*)(::MX::Data::CampaignChapterInfo*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_GETOPENHARDSTAGES_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* GetOpenVeryHardStages(::MX::Data::CampaignChapterInfo* arg, Il2CppObject* arg2)
		{
			return ((Il2CppObject*(*)(::MX::Data::CampaignChapterInfo*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_GETOPENVERYHARDSTAGES_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean IsClearedChapter(::MX::Data::CampaignChapterInfo* arg, Il2CppObject* arg2, ::FlatData::StageDifficulty* arg3)
		{
			return ((::System::Boolean(*)(::MX::Data::CampaignChapterInfo*, Il2CppObject*, ::FlatData::StageDifficulty*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_ISCLEAREDCHAPTER_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean IsOpenStage(::MX::Data::CampaignStageInfo* arg, Il2CppObject* arg2, Il2CppObject* arg3)
		{
			return ((::System::Boolean(*)(::MX::Data::CampaignStageInfo*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_ISOPENSTAGE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean IsOpenStage(::MX::Data::CampaignStageInfo* arg, Il2CppObject* arg2, Il2CppObject* arg3)
		{
			return ((::System::Boolean(*)(::MX::Data::CampaignStageInfo*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_ISOPENSTAGE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean IsOpenStage(::MX::Data::FieldContentStageInfo* arg, Il2CppObject* arg2)
		{
			return ((::System::Boolean(*)(::MX::Data::FieldContentStageInfo*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_ISOPENSTAGE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean IsAvailableStageToday(::MX::Data::CampaignStageInfo* arg, ::MX::GameLogic::DBModel::CampaignStageHistoryDB* arg2, ::System::DateTime* arg3)
		{
			return ((::System::Boolean(*)(::MX::Data::CampaignStageInfo*, ::MX::GameLogic::DBModel::CampaignStageHistoryDB*, ::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_ISAVAILABLESTAGETODAY_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean IsAvailableStageToday(::MX::Data::CampaignStageInfo* arg, ::MX::GameLogic::DBModel::CampaignStageHistoryDB* arg2, ::System::Int64 arg3, ::System::DateTime* arg4)
		{
			return ((::System::Boolean(*)(::MX::Data::CampaignStageInfo*, ::MX::GameLogic::DBModel::CampaignStageHistoryDB*, ::System::Int64, ::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_ISAVAILABLESTAGETODAY_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Int64 GetHardStageTodayPlayCount(::MX::GameLogic::DBModel::CampaignStageHistoryDB* arg, ::System::DateTime* arg2)
		{
			return ((::System::Int64(*)(::MX::GameLogic::DBModel::CampaignStageHistoryDB*, ::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_GETHARDSTAGETODAYPLAYCOUNT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int64 GetHardStageTodayPurchasePlayCount(::MX::GameLogic::DBModel::CampaignStageHistoryDB* arg, ::System::DateTime* arg2)
		{
			return ((::System::Int64(*)(::MX::GameLogic::DBModel::CampaignStageHistoryDB*, ::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_GETHARDSTAGETODAYPURCHASEPLAYCOUNT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean CanTacticSkipCampaignUnit(::MX::Data::Excel::CampaignUnitExcel* arg)
		{
			return ((::System::Boolean(*)(::MX::Data::Excel::CampaignUnitExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_CANTACTICSKIPCAMPAIGNUNIT_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::CampaignStageHistoryDB* CreateStageHistoryDB(::System::Int64 arg, ::MX::Data::CampaignStageInfo* arg2)
		{
			return ((::MX::GameLogic::DBModel::CampaignStageHistoryDB*(*)(::System::Int64, ::MX::Data::CampaignStageInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_CREATESTAGEHISTORYDB_OFFSET))(arg, arg2, nullptr);
		}

		::MX::GameLogic::DBModel::CampaignMainStageSaveDB* CreateStrategySave(::System::Int64 arg, ::MX::Data::CampaignStageInfo* arg2, ::System::DateTime* arg3, Il2CppObject* arg4)
		{
			return ((::MX::GameLogic::DBModel::CampaignMainStageSaveDB*(*)(::System::Int64, ::MX::Data::CampaignStageInfo*, ::System::DateTime*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_CREATESTRATEGYSAVE_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::MX::GameLogic::DBModel::CampaignMainStageSaveDB* CreateStrategySkipSave(::System::Int64 arg, ::MX::Data::CampaignStageInfo* arg2, ::System::Int64 arg3, ::System::DateTime* arg4)
		{
			return ((::MX::GameLogic::DBModel::CampaignMainStageSaveDB*(*)(::System::Int64, ::MX::Data::CampaignStageInfo*, ::System::Int64, ::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_CREATESTRATEGYSKIPSAVE_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Int64 CalcStarCount(::MX::Data::CampaignStageInfo* arg, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB* arg2, ::System::Boolean arg3)
		{
			return ((::System::Int64(*)(::MX::Data::CampaignStageInfo*, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_CALCSTARCOUNT_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::MX::GameLogic::Service::ContentsRank* CalcStrategyStarCount(::MX::Data::CampaignStageInfo* arg, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB* arg2, ::System::Boolean arg3)
		{
			return ((::MX::GameLogic::Service::ContentsRank*(*)(::MX::Data::CampaignStageInfo*, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_CALCSTRATEGYSTARCOUNT_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Int64 CalcTacticRank(::FlatData::ContentType* arg, ::MX::Logic::Battles::Summary::BattleSummary* arg2)
		{
			return ((::System::Int64(*)(::FlatData::ContentType*, ::MX::Logic::Battles::Summary::BattleSummary*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_CALCTACTICRANK_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int64 CalcTacticRank(::FlatData::ContentType* arg, ::System::Int64 arg2, ::System::Boolean arg3, ::System::TimeSpan* arg4, ::System::Int32 arg5, ::System::Int32 arg6)
		{
			return ((::System::Int64(*)(::FlatData::ContentType*, ::System::Int64, ::System::Boolean, ::System::TimeSpan*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_CALCTACTICRANK_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		::System::Int64 CalcTacticRank(::System::Boolean arg, ::System::TimeSpan* arg2, ::System::Int32 arg3, ::System::Int32 arg4)
		{
			return ((::System::Int64(*)(::System::Boolean, ::System::TimeSpan*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_CALCTACTICRANK_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Int64 CalcEventTacticRank(::MX::Data::EventContentStageInfo* arg, ::System::Boolean arg2, ::System::TimeSpan* arg3, ::System::Int32 arg4, ::System::Int32 arg5)
		{
			return ((::System::Int64(*)(::MX::Data::EventContentStageInfo*, ::System::Boolean, ::System::TimeSpan*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_CALCEVENTTACTICRANK_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Int64 IncreaseStarCountWithHistoryStarFlag(::FlatData::ContentType* arg, ::MX::GameLogic::DBModel::CampaignStageHistoryDB* arg2, ::System::Boolean arg3, ::System::TimeSpan* arg4, ::System::Int32 arg5, ::System::Int32 arg6)
		{
			return ((::System::Int64(*)(::FlatData::ContentType*, ::MX::GameLogic::DBModel::CampaignStageHistoryDB*, ::System::Boolean, ::System::TimeSpan*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_INCREASESTARCOUNTWITHHISTORYSTARFLAG_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		::System::Int64 CalcTacticRankWithStarFlag(::MX::GameLogic::DBModel::CampaignStageHistoryDB* arg, ::System::Boolean arg2, ::System::TimeSpan* arg3, ::System::Int32 arg4, ::System::Int32 arg5)
		{
			return ((::System::Int64(*)(::MX::GameLogic::DBModel::CampaignStageHistoryDB*, ::System::Boolean, ::System::TimeSpan*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_CALCTACTICRANKWITHSTARFLAG_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Int64 CalcEventTacticRankWithStarFlag(::MX::Data::EventContentStageInfo* arg, ::MX::GameLogic::DBModel::CampaignStageHistoryDB* arg2, ::System::Boolean arg3, ::System::TimeSpan* arg4, ::System::Int32 arg5, ::System::Int32 arg6)
		{
			return ((::System::Int64(*)(::MX::Data::EventContentStageInfo*, ::MX::GameLogic::DBModel::CampaignStageHistoryDB*, ::System::Boolean, ::System::TimeSpan*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_CALCEVENTTACTICRANKWITHSTARFLAG_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		::System::Int64 CalcFieldTacticRankWithStarFlag(::MX::Data::FieldContentStageInfo* arg, ::MX::GameLogic::DBModel::CampaignStageHistoryDB* arg2, ::System::Boolean arg3, ::System::TimeSpan* arg4, ::System::Int32 arg5, ::System::Int32 arg6)
		{
			return ((::System::Int64(*)(::MX::Data::FieldContentStageInfo*, ::MX::GameLogic::DBModel::CampaignStageHistoryDB*, ::System::Boolean, ::System::TimeSpan*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_CALCFIELDTACTICRANKWITHSTARFLAG_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		::System::Boolean IsAllAlive(::System::Int32 arg, ::System::Int32 arg2)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_ISALLALIVE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean IsClearTimeInSec(::System::Int64 arg, ::System::TimeSpan* arg2)
		{
			return ((::System::Boolean(*)(::System::Int64, ::System::TimeSpan*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_ISCLEARTIMEINSEC_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Campaign::HexaTileMap* CloneHexaTileMapAndApplyTileStates(::MX::Data::CampaignStageInfo* arg, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB* arg2)
		{
			return ((::MX::Campaign::HexaTileMap*(*)(::MX::Data::CampaignStageInfo*, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_CLONEHEXATILEMAPANDAPPLYTILESTATES_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetFogIfNeeded(::MX::Data::CampaignStageInfo* arg, ::MX::Campaign::HexaTileMap* arg2, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB* arg3)
		{
			((::System::Void(*)(::MX::Data::CampaignStageInfo*, ::MX::Campaign::HexaTileMap*, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_SETFOGIFNEEDED_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void ClearFogOfWar(::MX::Data::CampaignStageInfo* arg, ::MX::Campaign::HexaTileMap* arg2, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB* arg3, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB* arg4, ::MX::Campaign::Strategy* arg5)
		{
			((::System::Void(*)(::MX::Data::CampaignStageInfo*, ::MX::Campaign::HexaTileMap*, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB*, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB*, ::MX::Campaign::Strategy*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_CLEARFOGOFWAR_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Void ClearFogOfWar(::MX::Data::CampaignStageInfo* arg, ::MX::Campaign::HexaTileMap* arg2, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB* arg3, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB* arg4, ::MX::Campaign::HexaUnit* arg5, ::MX::Campaign::HexLocation* arg6)
		{
			((::System::Void(*)(::MX::Data::CampaignStageInfo*, ::MX::Campaign::HexaTileMap*, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB*, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB*, ::MX::Campaign::HexaUnit*, ::MX::Campaign::HexLocation*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_CLEARFOGOFWAR_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		::System::Void UpdateHexLocationFromSaveDBToHexTileMap(::MX::Campaign::HexaTileMap* arg, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB* arg2)
		{
			((::System::Void(*)(::MX::Campaign::HexaTileMap*, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_UPDATEHEXLOCATIONFROMSAVEDBTOHEXTILEMAP_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SaveHexaTileStatesInCampaignStrategySaveDB(::MX::Campaign::HexaTileMap* arg, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB* arg2)
		{
			((::System::Void(*)(::MX::Campaign::HexaTileMap*, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_SAVEHEXATILESTATESINCAMPAIGNSTRATEGYSAVEDB_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AdvancePhase(::MX::Data::CampaignStageInfo* arg, ::MX::Campaign::HexaTileMap* arg2, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB* arg3, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB&* arg4)
		{
			((::System::Void(*)(::MX::Data::CampaignStageInfo*, ::MX::Campaign::HexaTileMap*, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB*, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_ADVANCEPHASE_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void AdvancePhase(::MX::Data::EventContentStageInfo* arg, ::MX::Campaign::HexaTileMap* arg2, ::MX::GameLogic::DBModel::EventContentMainStageSaveDB* arg3, ::MX::GameLogic::DBModel::EventContentMainStageSaveDB&* arg4)
		{
			((::System::Void(*)(::MX::Data::EventContentStageInfo*, ::MX::Campaign::HexaTileMap*, ::MX::GameLogic::DBModel::EventContentMainStageSaveDB*, ::MX::GameLogic::DBModel::EventContentMainStageSaveDB&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_ADVANCEPHASE_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void AdvancePhase(::MX::Data::CampaignStageInfo* arg, ::MX::Campaign::HexaTileMap* arg2, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB* arg3, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB* arg4)
		{
			((::System::Void(*)(::MX::Data::CampaignStageInfo*, ::MX::Campaign::HexaTileMap*, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB*, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_ADVANCEPHASE_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void AddDisplayInfo(::MX::GameLogic::DBModel::CampaignMainStageSaveDB* arg, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB* arg2, ::MX::Campaign::HexaTileMapEvent::HexaDisplayType* arg3, ::System::Int64 arg4, ::System::Int64 arg5, ::MX::Campaign::HexLocation* arg6, ::System::Int64 arg7)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::CampaignMainStageSaveDB*, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB*, ::MX::Campaign::HexaTileMapEvent::HexaDisplayType*, ::System::Int64, ::System::Int64, ::MX::Campaign::HexLocation*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_ADDDISPLAYINFO_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, nullptr);
		}

		::System::Void AddDisplayInfo(::MX::GameLogic::DBModel::CampaignMainStageSaveDB* arg, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB* arg2, ::MX::Campaign::HexaTileMapEvent::HexaDisplayInfo* arg3)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::CampaignMainStageSaveDB*, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB*, ::MX::Campaign::HexaTileMapEvent::HexaDisplayInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_ADDDISPLAYINFO_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void ClearDisplayInfo(::MX::GameLogic::DBModel::CampaignMainStageSaveDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::CampaignMainStageSaveDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_CLEARDISPLAYINFO_OFFSET))(arg, nullptr);
		}

		::System::Void CheckHexaTileMapConditionAndCommand(::MX::Campaign::HexaTileMap* arg, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB* arg2, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB* arg3)
		{
			((::System::Void(*)(::MX::Campaign::HexaTileMap*, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB*, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_CHECKHEXATILEMAPCONDITIONANDCOMMAND_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void ExecuteDelayedEvent(::MX::Campaign::HexaTileMap* arg, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB* arg2, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB* arg3)
		{
			((::System::Void(*)(::MX::Campaign::HexaTileMap*, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB*, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_EXECUTEDELAYEDEVENT_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void AddActivatedHexaEventsAndConditionHistory(::MX::GameLogic::DBModel::CampaignMainStageSaveDB* arg, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB* arg2, ::System::Int64 arg3, Il2CppObject* arg4)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::CampaignMainStageSaveDB*, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB*, ::System::Int64, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_ADDACTIVATEDHEXAEVENTSANDCONDITIONHISTORY_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void AddHexaEventDelayedActivationReservation(::MX::GameLogic::DBModel::CampaignMainStageSaveDB* arg, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB* arg2, ::MX::Campaign::HexaTileMapEvent::HexaTileMapCommand::HexaCommand* arg3, ::System::Int64 arg4)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::CampaignMainStageSaveDB*, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB*, ::MX::Campaign::HexaTileMapEvent::HexaTileMapCommand::HexaCommand*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_ADDHEXAEVENTDELAYEDACTIVATIONRESERVATION_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		Il2CppObject* ExecutedEvents(::MX::Campaign::HexaTileMap* arg, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB* arg2)
		{
			return ((Il2CppObject*(*)(::MX::Campaign::HexaTileMap*, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_EXECUTEDEVENTS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void InitializeHexaUnitProperties(::MX::GameLogic::DBModel::CampaignMainStageSaveDB* arg, ::MX::Campaign::HexaUnit* arg2, ::MX::GameLogic::DBModel::EchelonDB* arg3, Il2CppObject* arg4, Il2CppObject* arg5, Il2CppObject* arg6, Il2CppObject* arg7, Il2CppObject* arg8, Il2CppObject* arg9)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::CampaignMainStageSaveDB*, ::MX::Campaign::HexaUnit*, ::MX::GameLogic::DBModel::EchelonDB*, Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_INITIALIZEHEXAUNITPROPERTIES_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, nullptr);
		}

		::System::Void InitializeFixedEchelonHexaUnitProperties(::MX::GameLogic::DBModel::CampaignMainStageSaveDB* arg, ::MX::Campaign::HexaUnit* arg2)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::CampaignMainStageSaveDB*, ::MX::Campaign::HexaUnit*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_INITIALIZEFIXEDECHELONHEXAUNITPROPERTIES_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void InitializeHPInfo(::MX::Campaign::HexaUnit* arg, ::MX::GameLogic::DBModel::EchelonDB* arg2, Il2CppObject* arg3, Il2CppObject* arg4, Il2CppObject* arg5, Il2CppObject* arg6, Il2CppObject* arg7, Il2CppObject* arg8)
		{
			((::System::Void(*)(::MX::Campaign::HexaUnit*, ::MX::GameLogic::DBModel::EchelonDB*, Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_INITIALIZEHPINFO_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, nullptr);
		}

		::System::Void RefreshHexaUnitProperty(::MX::GameLogic::DBModel::CampaignMainStageSaveDB* arg, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB* arg2)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::CampaignMainStageSaveDB*, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_REFRESHHEXAUNITPROPERTY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void UpdateCharacterStatBasedHexaUnitAbility(::MX::Campaign::HexaUnit* arg, ::MX::GameLogic::DBModel::EchelonDB* arg2, Il2CppObject* arg3, Il2CppObject* arg4, Il2CppObject* arg5, Il2CppObject* arg6, Il2CppObject* arg7, Il2CppObject* arg8)
		{
			((::System::Void(*)(::MX::Campaign::HexaUnit*, ::MX::GameLogic::DBModel::EchelonDB*, Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_UPDATECHARACTERSTATBASEDHEXAUNITABILITY_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, nullptr);
		}

		::System::Void RemoveEnemyHexaUnits(::MX::Campaign::HexaTileMap* arg, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB* arg2, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB* arg3, Il2CppObject* arg4)
		{
			((::System::Void(*)(::MX::Campaign::HexaTileMap*, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB*, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_REMOVEENEMYHEXAUNITS_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void RemoveEnemyHexaUnit(::MX::Campaign::HexaTileMap* arg, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB* arg2, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB* arg3, ::System::Int64 arg4)
		{
			((::System::Void(*)(::MX::Campaign::HexaTileMap*, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB*, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_REMOVEENEMYHEXAUNIT_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void CheckRemovedUnitIsStageClearTargetBoss(::MX::Campaign::HexaTileMap* arg, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB* arg2, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB* arg3, ::System::Int64 arg4)
		{
			((::System::Void(*)(::MX::Campaign::HexaTileMap*, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB*, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_CHECKREMOVEDUNITISSTAGECLEARTARGETBOSS_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void ChangeHexaUnitLocationOnHexaTileMap(::MX::GameLogic::DBModel::CampaignMainStageSaveDB* arg, ::MX::Campaign::HexaTileMap* arg2, ::MX::Campaign::HexaUnit* arg3, ::MX::Campaign::HexLocation* arg4)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::CampaignMainStageSaveDB*, ::MX::Campaign::HexaTileMap*, ::MX::Campaign::HexaUnit*, ::MX::Campaign::HexLocation*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_CHANGEHEXAUNITLOCATIONONHEXATILEMAP_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Int32 GetNextMovementOrder(::MX::GameLogic::DBModel::CampaignMainStageSaveDB* arg)
		{
			return ((::System::Int32(*)(::MX::GameLogic::DBModel::CampaignMainStageSaveDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_GETNEXTMOVEMENTORDER_OFFSET))(arg, nullptr);
		}

		::System::Void DecideAIDestination(::MX::Data::CampaignStageInfo* arg, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB* arg2, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB* arg3, ::System::Int64 arg4)
		{
			((::System::Void(*)(::MX::Data::CampaignStageInfo*, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB*, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_DECIDEAIDESTINATION_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Boolean DecideGuard(::MX::Campaign::HexaUnit* arg, ::MX::Campaign::HexaTileMap* arg2, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB* arg3, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB* arg4)
		{
			return ((::System::Boolean(*)(::MX::Campaign::HexaUnit*, ::MX::Campaign::HexaTileMap*, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB*, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_DECIDEGUARD_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Boolean DecidePursuit(::MX::Campaign::HexaUnit* arg, ::MX::Campaign::HexaTileMap* arg2, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB* arg3, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB* arg4)
		{
			return ((::System::Boolean(*)(::MX::Campaign::HexaUnit*, ::MX::Campaign::HexaTileMap*, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB*, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_DECIDEPURSUIT_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void ApplyAIMovementAndClearAIDestination(::MX::Campaign::HexaTileMap* arg, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB* arg2, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB* arg3, ::MX::Campaign::HexaUnit* arg4)
		{
			((::System::Void(*)(::MX::Campaign::HexaTileMap*, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB*, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB*, ::MX::Campaign::HexaUnit*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_APPLYAIMOVEMENTANDCLEARAIDESTINATION_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::MX::Campaign::HexaTileMapEvent::HexaDisplayInfo* FindMoveInfo(::MX::GameLogic::DBModel::CampaignMainStageSaveDB* arg, ::System::Int64 arg2)
		{
			return ((::MX::Campaign::HexaTileMapEvent::HexaDisplayInfo*(*)(::MX::GameLogic::DBModel::CampaignMainStageSaveDB*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_FINDMOVEINFO_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean HasEncounter(::MX::GameLogic::DBModel::CampaignMainStageSaveDB* arg)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::CampaignMainStageSaveDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_HASENCOUNTER_OFFSET))(arg, nullptr);
		}

		::System::Boolean CanMoveHexaUnit(::MX::Campaign::HexaTileMap* arg, ::MX::Campaign::HexaUnit* arg2, ::MX::Campaign::HexLocation* arg3)
		{
			return ((::System::Boolean(*)(::MX::Campaign::HexaTileMap*, ::MX::Campaign::HexaUnit*, ::MX::Campaign::HexLocation*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_CANMOVEHEXAUNIT_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void MoveHexaUnit(::MX::Campaign::HexaUnit* arg, ::MX::Data::CampaignStageInfo* arg2, ::MX::Campaign::HexaTileMap* arg3, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB* arg4, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB* arg5, ::MX::Campaign::HexLocation* arg6, ::MX::Campaign::Strategy&* arg7, Il2CppObject&* arg8)
		{
			((::System::Void(*)(::MX::Campaign::HexaUnit*, ::MX::Data::CampaignStageInfo*, ::MX::Campaign::HexaTileMap*, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB*, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB*, ::MX::Campaign::HexLocation*, ::MX::Campaign::Strategy&*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_MOVEHEXAUNIT_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, nullptr);
		}

		::System::Boolean IsEngaged(::MX::GameLogic::DBModel::CampaignMainStageSaveDB* arg)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::CampaignMainStageSaveDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_ISENGAGED_OFFSET))(arg, nullptr);
		}

		::System::Void MoveHexaUnitByPortal(::MX::Campaign::HexaUnit* arg, ::MX::Data::CampaignStageInfo* arg2, ::MX::Campaign::HexaTileMap* arg3, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB* arg4, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB&* arg5, ::MX::Campaign::HexLocation* arg6)
		{
			((::System::Void(*)(::MX::Campaign::HexaUnit*, ::MX::Data::CampaignStageInfo*, ::MX::Campaign::HexaTileMap*, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB*, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB&*, ::MX::Campaign::HexLocation*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_MOVEHEXAUNITBYPORTAL_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		::System::Boolean IsPositionSwap(::MX::GameLogic::DBModel::CampaignMainStageSaveDB* arg, ::MX::Campaign::HexaUnit* arg2, ::MX::Campaign::HexLocation* arg3, ::MX::Campaign::HexaUnit&* arg4)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::CampaignMainStageSaveDB*, ::MX::Campaign::HexaUnit*, ::MX::Campaign::HexLocation*, ::MX::Campaign::HexaUnit&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_ISPOSITIONSWAP_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void SwapHexaUnitPosition(::MX::Campaign::HexaUnit* arg, ::MX::Campaign::HexaUnit* arg2, ::MX::Campaign::HexaTileMap* arg3, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB* arg4, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB* arg5)
		{
			((::System::Void(*)(::MX::Campaign::HexaUnit*, ::MX::Campaign::HexaUnit*, ::MX::Campaign::HexaTileMap*, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB*, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_SWAPHEXAUNITPOSITION_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Boolean HandleStrategyObject(::MX::Campaign::HexaUnit* arg, ::MX::Campaign::HexLocation* arg2, ::MX::Campaign::HexaTileMap* arg3, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB* arg4, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB* arg5, ::MX::Campaign::Strategy&* arg6, Il2CppObject&* arg7)
		{
			return ((::System::Boolean(*)(::MX::Campaign::HexaUnit*, ::MX::Campaign::HexLocation*, ::MX::Campaign::HexaTileMap*, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB*, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB*, ::MX::Campaign::Strategy&*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_HANDLESTRATEGYOBJECT_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, nullptr);
		}

		::System::Boolean CanStarategyMapHeal(::MX::GameLogic::DBModel::CampaignMainStageSaveDB* arg, ::System::Int64 arg2, ::System::Int64 arg3)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::CampaignMainStageSaveDB*, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_CANSTARATEGYMAPHEAL_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void HealByStrategyObject(::MX::Campaign::HexaUnit* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::MX::Campaign::HexaUnit*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_HEALBYSTRATEGYOBJECT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void BuffByStrategyObject(::MX::Campaign::HexaUnit* arg, ::System::Int64 arg2, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB* arg3, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB* arg4)
		{
			((::System::Void(*)(::MX::Campaign::HexaUnit*, ::System::Int64, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB*, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_BUFFBYSTRATEGYOBJECT_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void ActivateObservatoryObject(::MX::Data::CampaignData* arg, ::MX::Campaign::HexaTileMap* arg2, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB* arg3, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB* arg4, ::MX::Campaign::Strategy* arg5)
		{
			((::System::Void(*)(::MX::Data::CampaignData*, ::MX::Campaign::HexaTileMap*, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB*, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB*, ::MX::Campaign::Strategy*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_ACTIVATEOBSERVATORYOBJECT_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Void SwitchTileMovability(::MX::Data::CampaignData* arg, ::MX::Campaign::HexaTileMap* arg2, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB* arg3, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB* arg4, ::MX::Campaign::Strategy* arg5)
		{
			((::System::Void(*)(::MX::Data::CampaignData*, ::MX::Campaign::HexaTileMap*, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB*, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB*, ::MX::Campaign::Strategy*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_SWITCHTILEMOVABILITY_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Void ToggleTileMovabilityByStrategyObjects(::MX::GameLogic::DBModel::CampaignMainStageSaveDB* arg, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB* arg2, ::MX::Campaign::HexaTileMap* arg3, Il2CppObject* arg4)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::CampaignMainStageSaveDB*, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB*, ::MX::Campaign::HexaTileMap*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_TOGGLETILEMOVABILITYBYSTRATEGYOBJECTS_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::MX::Campaign::Strategy* FindStrategyObject(::MX::GameLogic::DBModel::CampaignMainStageSaveDB* arg, ::MX::Campaign::HexLocation* arg2)
		{
			return ((::MX::Campaign::Strategy*(*)(::MX::GameLogic::DBModel::CampaignMainStageSaveDB*, ::MX::Campaign::HexLocation*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_FINDSTRATEGYOBJECT_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Campaign::Strategy* FindPortalExit(::MX::GameLogic::DBModel::CampaignMainStageSaveDB* arg, ::System::Int64 arg2)
		{
			return ((::MX::Campaign::Strategy*(*)(::MX::GameLogic::DBModel::CampaignMainStageSaveDB*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_FINDPORTALEXIT_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Campaign::Strategy* FindCounterPartPortalObject(::MX::Data::CampaignData* arg, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB* arg2, ::MX::Campaign::Strategy* arg3, ::MX::Data::StrategyObjectData* arg4)
		{
			return ((::MX::Campaign::Strategy*(*)(::MX::Data::CampaignData*, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB*, ::MX::Campaign::Strategy*, ::MX::Data::StrategyObjectData*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_FINDCOUNTERPARTPORTALOBJECT_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Boolean TryGetSwitchTargets(::MX::Data::CampaignData* arg, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB* arg2, ::MX::Campaign::HexaTileMap* arg3, ::MX::Campaign::Strategy* arg4, ::MX::Data::StrategyObjectData* arg5, Il2CppObject&* arg6, Il2CppObject&* arg7)
		{
			return ((::System::Boolean(*)(::MX::Data::CampaignData*, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB*, ::MX::Campaign::HexaTileMap*, ::MX::Campaign::Strategy*, ::MX::Data::StrategyObjectData*, Il2CppObject&*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_TRYGETSWITCHTARGETS_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, nullptr);
		}

		::System::Void ProcessStrategyObjectEndTurn(::MX::Campaign::HexaTileMap* arg, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB* arg2, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB* arg3)
		{
			((::System::Void(*)(::MX::Campaign::HexaTileMap*, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB*, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_PROCESSSTRATEGYOBJECTENDTURN_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::MX::GameLogic::Parcel::ParcelInfo* FindObtainableStrategyReward(Il2CppObject* arg, ::System::Int64 arg2)
		{
			return ((::MX::GameLogic::Parcel::ParcelInfo*(*)(Il2CppObject*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_FINDOBTAINABLESTRATEGYREWARD_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Campaign::HexaTile* GetEvacuationPosition(::MX::Campaign::HexaTileMap* arg, ::MX::Campaign::HexLocation* arg2)
		{
			return ((::MX::Campaign::HexaTile*(*)(::MX::Campaign::HexaTileMap*, ::MX::Campaign::HexLocation*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_GETEVACUATIONPOSITION_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean IsStartOrFixedStart(::FlatData::StrategyObjectType* arg)
		{
			return ((::System::Boolean(*)(::FlatData::StrategyObjectType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_ISSTARTORFIXEDSTART_OFFSET))(arg, nullptr);
		}

		::System::Boolean CanReceiveChapterReward(Il2CppObject* arg, Il2CppObject* arg2, ::System::Int64 arg3, ::FlatData::StageDifficulty* arg4)
		{
			return ((::System::Boolean(*)(Il2CppObject*, Il2CppObject*, ::System::Int64, ::FlatData::StageDifficulty*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_CANRECEIVECHAPTERREWARD_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Int64 GetChapterStarCount(Il2CppObject* arg, ::System::Int64 arg2, ::FlatData::StageDifficulty* arg3)
		{
			return ((::System::Int64(*)(Il2CppObject*, ::System::Int64, ::FlatData::StageDifficulty*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_GETCHAPTERSTARCOUNT_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean IsChapterRewared(Il2CppObject* arg, ::System::Int64 arg2, ::FlatData::StageDifficulty* arg3)
		{
			return ((::System::Boolean(*)(Il2CppObject*, ::System::Int64, ::FlatData::StageDifficulty*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_ISCHAPTERREWARED_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::MX::GameLogic::Parcel::ParcelCost* StarategyMapHealCost(::System::Int64 arg)
		{
			return ((::MX::GameLogic::Parcel::ParcelCost*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_STARATEGYMAPHEALCOST_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE_.CCTOR_OFFSET))(nullptr);
		}

		::MX::Data::CampaignStageInfo* _GetOpenNormalStages_g__GetOpenNormalStagesInternal|4_2(::System::Int64 arg, <>c__DisplayClass4_0&* arg2)
		{
			return ((::MX::Data::CampaignStageInfo*(*)(::System::Int64, <>c__DisplayClass4_0&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CAMPAIGNSERVICE__GETOPENNORMALSTAGES_G__GETOPENNORMALSTAGESINTERNAL|4_2_OFFSET))(arg, arg2, nullptr);
		}

	};
}

