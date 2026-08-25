#pragma once
#include "../../../unitysdk.h"

namespace MX::GameLogic::Service { class StageUnionType; }
namespace FlatData { class EchelonType; }
namespace FlatData { class ParcelChangeReason; }
namespace FlatData { class OpenConditionContent; }
namespace FlatData { class WeekDungeonType; }
namespace MX::GameLogic::DBModel { class ContentSaveDB; }
namespace MX::GameLogic::DBModel { class CampaignStageHistoryDB; }

#define MX_GAMELOGIC_SERVICE_STAGESERVICE_HASSTAR_OFFSET UNITYSDK_OFFSET(0xFC85B0)
#define MX_GAMELOGIC_SERVICE_STAGESERVICE_ISREPLAYABLE_OFFSET UNITYSDK_OFFSET(0xFC8600)
#define MX_GAMELOGIC_SERVICE_STAGESERVICE_ISSWEEPABLESTAGE_OFFSET UNITYSDK_OFFSET(0xFC8650)
#define MX_GAMELOGIC_SERVICE_STAGESERVICE_MAYCONTAINECHELONFROMUSERCHARACTER_OFFSET UNITYSDK_OFFSET(0xFC87B0)
#define MX_GAMELOGIC_SERVICE_STAGESERVICE_CANRECEIVEBONUSREWARDS_OFFSET UNITYSDK_OFFSET(0xFC8860)
#define MX_GAMELOGIC_SERVICE_STAGESERVICE_NEEDINCREASETOTALCLEARCAMPAIGNSTAGECOUNTACHIEVEMENT_OFFSET UNITYSDK_OFFSET(0xFC88A0)
#define MX_GAMELOGIC_SERVICE_STAGESERVICE_GETECHELONTYPE_OFFSET UNITYSDK_OFFSET(0xFC8A30)
#define MX_GAMELOGIC_SERVICE_STAGESERVICE_HASHEXATILEMAP_OFFSET UNITYSDK_OFFSET(0xFC8DB0)
#define MX_GAMELOGIC_SERVICE_STAGESERVICE_GETSTAGEENTERPARCELCHANGEREASON_OFFSET UNITYSDK_OFFSET(0xFC8E00)
#define MX_GAMELOGIC_SERVICE_STAGESERVICE_GETSTAGERESULTPARCELCHANGEREASON_OFFSET UNITYSDK_OFFSET(0xFC8EE0)
#define MX_GAMELOGIC_SERVICE_STAGESERVICE_GETSTAGERETREATPARCELCHANGEREASON_OFFSET UNITYSDK_OFFSET(0xFC9040)
#define MX_GAMELOGIC_SERVICE_STAGESERVICE_ISCAMPAIGNOREVENTCAMPAIGN_OFFSET UNITYSDK_OFFSET(0xFC90F0)
#define MX_GAMELOGIC_SERVICE_STAGESERVICE_ISCAMPAIGN_OFFSET UNITYSDK_OFFSET(0xFC8D00)
#define MX_GAMELOGIC_SERVICE_STAGESERVICE_ISEVENTCAMPAIGN_OFFSET UNITYSDK_OFFSET(0xFC8CB0)
#define MX_GAMELOGIC_SERVICE_STAGESERVICE_ISWEEKDUNGEON_OFFSET UNITYSDK_OFFSET(0xFC9170)
#define MX_GAMELOGIC_SERVICE_STAGESERVICE_ISSCHOOLDUNGEON_OFFSET UNITYSDK_OFFSET(0xFC91B0)
#define MX_GAMELOGIC_SERVICE_STAGESERVICE_ISCONQUEST_OFFSET UNITYSDK_OFFSET(0xFC8D70)
#define MX_GAMELOGIC_SERVICE_STAGESERVICE_ISSTORYSTRATEGYSTAGE_OFFSET UNITYSDK_OFFSET(0xFC8D50)
#define MX_GAMELOGIC_SERVICE_STAGESERVICE_ISFIELDSTAGE_OFFSET UNITYSDK_OFFSET(0xFC8D90)
#define MX_GAMELOGIC_SERVICE_STAGESERVICE_ISFARMINGDUNGEONOPEN_OFFSET UNITYSDK_OFFSET(0xFC91D0)
#define MX_GAMELOGIC_SERVICE_STAGESERVICE_GETGROUNDID_OFFSET UNITYSDK_OFFSET(0xFC93A0)
#define MX_GAMELOGIC_SERVICE_STAGESERVICE_GETLOCKTYPEANDOPENCONDITION_OFFSET UNITYSDK_OFFSET(0xFC9790)
#define MX_GAMELOGIC_SERVICE_STAGESERVICE_GETLOCKTYPEANDOPENCONDITION_OFFSET UNITYSDK_OFFSET(0xFC97B0)
#define MX_GAMELOGIC_SERVICE_STAGESERVICE_GETSAVEDBTYPE_OFFSET UNITYSDK_OFFSET(0xFC9A20)
#define MX_GAMELOGIC_SERVICE_STAGESERVICE_CREATEGROUNDONLYSTAGECONTENTSAVEDB_OFFSET UNITYSDK_OFFSET(0xFC9CB0)
#define MX_GAMELOGIC_SERVICE_STAGESERVICE_ISSTAGEDEPRECATED_OFFSET UNITYSDK_OFFSET(0xFCA450)
#define MX_GAMELOGIC_SERVICE_STAGESERVICE_ISSTAGEDEPRECATED_OFFSET UNITYSDK_OFFSET(0xFCA550)

namespace MX::GameLogic::Service
{
	inline static constexpr unsigned int StageService_TypeDefinitionIndex = 12414;

	class StageService : public Il2CppObject
	{
	public:
		::System::Boolean HasStar(::MX::GameLogic::Service::StageUnionType* arg)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::Service::StageUnionType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_STAGESERVICE_HASSTAR_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsReplayable(::MX::GameLogic::Service::StageUnionType* arg)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::Service::StageUnionType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_STAGESERVICE_ISREPLAYABLE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsSweepableStage(::MX::GameLogic::Service::StageUnionType* arg)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::Service::StageUnionType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_STAGESERVICE_ISSWEEPABLESTAGE_OFFSET))(arg, nullptr);
		}

		::System::Boolean MayContainEchelonFromUserCharacter(::MX::GameLogic::Service::StageUnionType* arg)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::Service::StageUnionType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_STAGESERVICE_MAYCONTAINECHELONFROMUSERCHARACTER_OFFSET))(arg, nullptr);
		}

		::System::Boolean CanReceiveBonusRewards(::MX::GameLogic::Service::StageUnionType* arg)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::Service::StageUnionType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_STAGESERVICE_CANRECEIVEBONUSREWARDS_OFFSET))(arg, nullptr);
		}

		::System::Boolean NeedIncreaseTotalClearCampaignStageCountAchievement(::MX::GameLogic::Service::StageUnionType* arg)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::Service::StageUnionType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_STAGESERVICE_NEEDINCREASETOTALCLEARCAMPAIGNSTAGECOUNTACHIEVEMENT_OFFSET))(arg, nullptr);
		}

		::FlatData::EchelonType* GetEchelonType(::MX::GameLogic::Service::StageUnionType* arg)
		{
			return ((::FlatData::EchelonType*(*)(::MX::GameLogic::Service::StageUnionType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_STAGESERVICE_GETECHELONTYPE_OFFSET))(arg, nullptr);
		}

		::System::Boolean HasHexaTileMap(::MX::GameLogic::Service::StageUnionType* arg)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::Service::StageUnionType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_STAGESERVICE_HASHEXATILEMAP_OFFSET))(arg, nullptr);
		}

		::FlatData::ParcelChangeReason* GetStageEnterParcelChangeReason(::MX::GameLogic::Service::StageUnionType* arg)
		{
			return ((::FlatData::ParcelChangeReason*(*)(::MX::GameLogic::Service::StageUnionType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_STAGESERVICE_GETSTAGEENTERPARCELCHANGEREASON_OFFSET))(arg, nullptr);
		}

		::FlatData::ParcelChangeReason* GetStageResultParcelChangeReason(::MX::GameLogic::Service::StageUnionType* arg)
		{
			return ((::FlatData::ParcelChangeReason*(*)(::MX::GameLogic::Service::StageUnionType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_STAGESERVICE_GETSTAGERESULTPARCELCHANGEREASON_OFFSET))(arg, nullptr);
		}

		::FlatData::ParcelChangeReason* GetStageRetreatParcelChangeReason(::MX::GameLogic::Service::StageUnionType* arg)
		{
			return ((::FlatData::ParcelChangeReason*(*)(::MX::GameLogic::Service::StageUnionType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_STAGESERVICE_GETSTAGERETREATPARCELCHANGEREASON_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsCampaignOrEventCampaign(::MX::GameLogic::Service::StageUnionType* arg)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::Service::StageUnionType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_STAGESERVICE_ISCAMPAIGNOREVENTCAMPAIGN_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsCampaign(::MX::GameLogic::Service::StageUnionType* arg)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::Service::StageUnionType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_STAGESERVICE_ISCAMPAIGN_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsEventCampaign(::MX::GameLogic::Service::StageUnionType* arg)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::Service::StageUnionType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_STAGESERVICE_ISEVENTCAMPAIGN_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsWeekDungeon(::MX::GameLogic::Service::StageUnionType* arg)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::Service::StageUnionType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_STAGESERVICE_ISWEEKDUNGEON_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsSchoolDungeon(::MX::GameLogic::Service::StageUnionType* arg)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::Service::StageUnionType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_STAGESERVICE_ISSCHOOLDUNGEON_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsConquest(::MX::GameLogic::Service::StageUnionType* arg)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::Service::StageUnionType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_STAGESERVICE_ISCONQUEST_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsStoryStrategyStage(::MX::GameLogic::Service::StageUnionType* arg)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::Service::StageUnionType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_STAGESERVICE_ISSTORYSTRATEGYSTAGE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsFieldStage(::MX::GameLogic::Service::StageUnionType* arg)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::Service::StageUnionType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_STAGESERVICE_ISFIELDSTAGE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsFarmingDungeonOpen(::MX::GameLogic::Service::StageUnionType* arg, ::System::DateTime* arg2)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::Service::StageUnionType*, ::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_STAGESERVICE_ISFARMINGDUNGEONOPEN_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int64 GetGroundId(::MX::GameLogic::Service::StageUnionType* arg)
		{
			return ((::System::Int64(*)(::MX::GameLogic::Service::StageUnionType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_STAGESERVICE_GETGROUNDID_OFFSET))(arg, nullptr);
		}

		::FlatData::OpenConditionContent* GetLockTypeAndOpenCondition(::FlatData::WeekDungeonType* arg)
		{
			return ((::FlatData::OpenConditionContent*(*)(::FlatData::WeekDungeonType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_STAGESERVICE_GETLOCKTYPEANDOPENCONDITION_OFFSET))(arg, nullptr);
		}

		::FlatData::OpenConditionContent* GetLockTypeAndOpenCondition(::MX::GameLogic::Service::StageUnionType* arg)
		{
			return ((::FlatData::OpenConditionContent*(*)(::MX::GameLogic::Service::StageUnionType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_STAGESERVICE_GETLOCKTYPEANDOPENCONDITION_OFFSET))(arg, nullptr);
		}

		::System::Type* GetSaveDBType(::MX::GameLogic::Service::StageUnionType* arg)
		{
			return ((::System::Type*(*)(::MX::GameLogic::Service::StageUnionType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_STAGESERVICE_GETSAVEDBTYPE_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::ContentSaveDB* CreateGroundOnlyStageContentSaveDB(::MX::GameLogic::Service::StageUnionType* arg, ::System::Int64 arg2, ::System::Int64 arg3, ::System::DateTime* arg4)
		{
			return ((::MX::GameLogic::DBModel::ContentSaveDB*(*)(::MX::GameLogic::Service::StageUnionType*, ::System::Int64, ::System::Int64, ::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_STAGESERVICE_CREATEGROUNDONLYSTAGECONTENTSAVEDB_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Boolean IsStageDeprecated(::MX::GameLogic::DBModel::ContentSaveDB* arg)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::ContentSaveDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_STAGESERVICE_ISSTAGEDEPRECATED_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsStageDeprecated(::MX::GameLogic::DBModel::CampaignStageHistoryDB* arg)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::CampaignStageHistoryDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_STAGESERVICE_ISSTAGEDEPRECATED_OFFSET))(arg, nullptr);
		}

	};
}

