#pragma once
#include "../../../unitysdk.h"

namespace MX::Conquest { class ConquestTileMap; }
namespace FlatData { class StageDifficulty; }
namespace MX::Conquest { class ConquestTile; }
namespace MX::GameLogic::Parcel { class ParcelInfo; }
namespace MX::GameLogic::DBModel { class ConquestTileDB; }
namespace FlatData { class ConquestEnemyType; }
namespace MX::Data { class ConquestItemAcquireCondition; }
namespace MX::GameLogic::Service { class StepState; }
namespace MX::Data { class EventContentSeasonInfo; }
namespace MX::Conquest::ConquestTileMapEvent { class ConquestEventTrigger; }
namespace FlatData { class RewardTag; }
namespace MX::GameLogic::DBModel { class ConquestStepSummary; }

#define MX_GAMELOGIC_SERVICE_CONQUESTSERVICE_REPLACECONQUESTSEASONINFOIFMAINSTORYISOPENED_OFFSET UNITYSDK_OFFSET(0xF90600)
#define MX_GAMELOGIC_SERVICE_CONQUESTSERVICE_CHECKPREVGROUPIDALLCLEARED_OFFSET UNITYSDK_OFFSET(0xF908A0)
#define MX_GAMELOGIC_SERVICE_CONQUESTSERVICE_ISBOSSCLEARED_OFFSET UNITYSDK_OFFSET(0xF90C70)
#define MX_GAMELOGIC_SERVICE_CONQUESTSERVICE_APPLYCALCULATEBONUSREWARD_OFFSET UNITYSDK_OFFSET(0xF90DF0)
#define MX_GAMELOGIC_SERVICE_CONQUESTSERVICE_HASOPENSTEPITEM_OFFSET UNITYSDK_OFFSET(0xF90E30)
#define MX_GAMELOGIC_SERVICE_CONQUESTSERVICE_ISDEFAULTENEMYTYPE_OFFSET UNITYSDK_OFFSET(0xF91440)
#define MX_GAMELOGIC_SERVICE_CONQUESTSERVICE_ISADDITIONALENEMYTYPE_OFFSET UNITYSDK_OFFSET(0xF914C0)
#define MX_GAMELOGIC_SERVICE_CONQUESTSERVICE_ISEROSIONENEMYTYPE_OFFSET UNITYSDK_OFFSET(0xF91540)
#define MX_GAMELOGIC_SERVICE_CONQUESTSERVICE_HASOPENSTEPITEM_OFFSET UNITYSDK_OFFSET(0xF915C0)
#define MX_GAMELOGIC_SERVICE_CONQUESTSERVICE_GETSTEPSTATE_OFFSET UNITYSDK_OFFSET(0xF917C0)
#define MX_GAMELOGIC_SERVICE_CONQUESTSERVICE_GETCONQUESTEDTILELIST_OFFSET UNITYSDK_OFFSET(0xF92170)
#define MX_GAMELOGIC_SERVICE_CONQUESTSERVICE_ISEROSIONONTHISSTEP_OFFSET UNITYSDK_OFFSET(0xF92380)
#define MX_GAMELOGIC_SERVICE_CONQUESTSERVICE_GETTRIGGEREDCONQUESTTILEMAPEVENTS_OFFSET UNITYSDK_OFFSET(0xF92830)
#define MX_GAMELOGIC_SERVICE_CONQUESTSERVICE_GETCONQUESTDISPLAYINFOSFROMTILEMAPEVENTS_OFFSET UNITYSDK_OFFSET(0xF92D90)
#define MX_GAMELOGIC_SERVICE_CONQUESTSERVICE_CHECKCONDITION_OFFSET UNITYSDK_OFFSET(0xF930E0)
#define MX_GAMELOGIC_SERVICE_CONQUESTSERVICE_GETCONQUESTREWARDBYTAGS_OFFSET UNITYSDK_OFFSET(0xF935A0)
#define MX_GAMELOGIC_SERVICE_CONQUESTSERVICE_GETMANAGEREWARDTAGS_OFFSET UNITYSDK_OFFSET(0xF93730)
#define MX_GAMELOGIC_SERVICE_CONQUESTSERVICE_GETBATTLEREWARDTAGS_OFFSET UNITYSDK_OFFSET(0xF93790)
#define MX_GAMELOGIC_SERVICE_CONQUESTSERVICE_GETUPGRADEBASEREWARDTAG_OFFSET UNITYSDK_OFFSET(0xF939E0)
#define MX_GAMELOGIC_SERVICE_CONQUESTSERVICE_GETCALCULATEREWARDTAG_OFFSET UNITYSDK_OFFSET(0xF93A90)
#define MX_GAMELOGIC_SERVICE_CONQUESTSERVICE_GETCALCULATEREWARDS_OFFSET UNITYSDK_OFFSET(0xF93B50)
#define MX_GAMELOGIC_SERVICE_CONQUESTSERVICE_CREATECONQUESTSTEPSUMMARY_OFFSET UNITYSDK_OFFSET(0xF94F50)

namespace MX::GameLogic::Service
{
	inline static constexpr unsigned int ConquestService_TypeDefinitionIndex = 12295;

	class ConquestService : public Il2CppObject
	{
	public:
		::System::Int32 BaseMaxLevel; // 0x0
		::System::Int32 GroupBuffMaxLevel; // 0x0
		::System::Int32 ManageRewardDisplayMax; // 0x0

		::System::Void ReplaceConquestSeasonInfoIfMainStoryIsOpened(::MX::Data::EventContentSeasonInfo&* arg)
		{
			((::System::Void(*)(::MX::Data::EventContentSeasonInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CONQUESTSERVICE_REPLACECONQUESTSEASONINFOIFMAINSTORYISOPENED_OFFSET))(arg, nullptr);
		}

		::System::Boolean CheckPrevGroupIdAllCleared(::MX::Conquest::ConquestTileMap* arg, ::FlatData::StageDifficulty* arg2, Il2CppObject* arg3, ::MX::Conquest::ConquestTile* arg4, ::MX::Conquest::ConquestTile&* arg5)
		{
			return ((::System::Boolean(*)(::MX::Conquest::ConquestTileMap*, ::FlatData::StageDifficulty*, Il2CppObject*, ::MX::Conquest::ConquestTile*, ::MX::Conquest::ConquestTile&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CONQUESTSERVICE_CHECKPREVGROUPIDALLCLEARED_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Boolean IsBossCleared(::System::Int32 arg, ::FlatData::StageDifficulty* arg2, ::MX::Conquest::ConquestTileMap* arg3, Il2CppObject* arg4)
		{
			return ((::System::Boolean(*)(::System::Int32, ::FlatData::StageDifficulty*, ::MX::Conquest::ConquestTileMap*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CONQUESTSERVICE_ISBOSSCLEARED_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::MX::GameLogic::Parcel::ParcelInfo* ApplyCalculateBonusReward(::MX::GameLogic::DBModel::ConquestTileDB* arg, ::MX::Conquest::ConquestTile* arg2, ::MX::GameLogic::Parcel::ParcelInfo* arg3)
		{
			return ((::MX::GameLogic::Parcel::ParcelInfo*(*)(::MX::GameLogic::DBModel::ConquestTileDB*, ::MX::Conquest::ConquestTile*, ::MX::GameLogic::Parcel::ParcelInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CONQUESTSERVICE_APPLYCALCULATEBONUSREWARD_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean HasOpenStepItem(::System::Int32 arg, ::System::Int64 arg2, ::FlatData::StageDifficulty* arg3, Il2CppObject* arg4)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Int64, ::FlatData::StageDifficulty*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CONQUESTSERVICE_HASOPENSTEPITEM_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Boolean IsDefaultEnemyType(::FlatData::ConquestEnemyType* arg)
		{
			return ((::System::Boolean(*)(::FlatData::ConquestEnemyType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CONQUESTSERVICE_ISDEFAULTENEMYTYPE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsAdditionalEnemyType(::FlatData::ConquestEnemyType* arg)
		{
			return ((::System::Boolean(*)(::FlatData::ConquestEnemyType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CONQUESTSERVICE_ISADDITIONALENEMYTYPE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsErosionEnemyType(::FlatData::ConquestEnemyType* arg)
		{
			return ((::System::Boolean(*)(::FlatData::ConquestEnemyType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CONQUESTSERVICE_ISEROSIONENEMYTYPE_OFFSET))(arg, nullptr);
		}

		::System::Boolean HasOpenStepItem(::System::Int32 arg, ::System::Int64 arg2, ::FlatData::StageDifficulty* arg3, ::MX::Data::ConquestItemAcquireCondition* arg4)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Int64, ::FlatData::StageDifficulty*, ::MX::Data::ConquestItemAcquireCondition*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CONQUESTSERVICE_HASOPENSTEPITEM_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::MX::GameLogic::Service::StepState* GetStepState(::MX::Data::EventContentSeasonInfo* arg, ::System::Int32 arg2)
		{
			return ((::MX::GameLogic::Service::StepState*(*)(::MX::Data::EventContentSeasonInfo*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CONQUESTSERVICE_GETSTEPSTATE_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* GetConquestedTileList(Il2CppObject* arg)
		{
			return ((Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CONQUESTSERVICE_GETCONQUESTEDTILELIST_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsErosionOnThisStep(::FlatData::StageDifficulty* arg, ::System::Int32 arg2)
		{
			return ((::System::Boolean(*)(::FlatData::StageDifficulty*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CONQUESTSERVICE_ISEROSIONONTHISSTEP_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* GetTriggeredConquestTileMapEvents(::FlatData::StageDifficulty* arg, Il2CppObject* arg2, ::MX::Conquest::ConquestTileMapEvent::ConquestEventTrigger* arg3, ::MX::Conquest::ConquestTileMap* arg4, Il2CppObject* arg5, Il2CppObject* arg6, Il2CppObject* arg7, Il2CppObject* arg8)
		{
			return ((Il2CppObject*(*)(::FlatData::StageDifficulty*, Il2CppObject*, ::MX::Conquest::ConquestTileMapEvent::ConquestEventTrigger*, ::MX::Conquest::ConquestTileMap*, Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CONQUESTSERVICE_GETTRIGGEREDCONQUESTTILEMAPEVENTS_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, nullptr);
		}

		Il2CppObject* GetConquestDisplayInfosFromTileMapEvents(::MX::Conquest::ConquestTileMapEvent::ConquestEventTrigger* arg, Il2CppObject* arg2)
		{
			return ((Il2CppObject*(*)(::MX::Conquest::ConquestTileMapEvent::ConquestEventTrigger*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CONQUESTSERVICE_GETCONQUESTDISPLAYINFOSFROMTILEMAPEVENTS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean CheckCondition(::System::Int64 arg, ::FlatData::StageDifficulty* arg2, ::System::Int32 arg3, Il2CppObject* arg4, ::System::Int64 arg5)
		{
			return ((::System::Boolean(*)(::System::Int64, ::FlatData::StageDifficulty*, ::System::Int32, Il2CppObject*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CONQUESTSERVICE_CHECKCONDITION_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		Il2CppObject* GetConquestRewardByTags(::System::Int64 arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((Il2CppObject*(*)(::System::Int64, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CONQUESTSERVICE_GETCONQUESTREWARDBYTAGS_OFFSET))(arg, arg2, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetManageRewardTags()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CONQUESTSERVICE_GETMANAGEREWARDTAGS_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetBattleRewardTags(::System::Boolean arg, ::System::Boolean arg2)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CONQUESTSERVICE_GETBATTLEREWARDTAGS_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::RewardTag* GetUpgradeBaseRewardTag(::System::Int64 arg)
		{
			return ((::FlatData::RewardTag*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CONQUESTSERVICE_GETUPGRADEBASEREWARDTAG_OFFSET))(arg, nullptr);
		}

		::FlatData::RewardTag* GetCalculateRewardTag(::System::Int64 arg, ::System::Boolean arg2)
		{
			return ((::FlatData::RewardTag*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CONQUESTSERVICE_GETCALCULATEREWARDTAG_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* GetCalculateRewards(::System::Int64 arg, Il2CppObject* arg2, Il2CppObject* arg3, Il2CppObject* arg4)
		{
			return ((Il2CppObject*(*)(::System::Int64, Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CONQUESTSERVICE_GETCALCULATEREWARDS_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::MX::GameLogic::DBModel::ConquestStepSummary* CreateConquestStepSummary(::System::Int64 arg, ::System::Int64 arg2, ::System::Int64 arg3, ::MX::Conquest::ConquestTileMap* arg4, Il2CppObject* arg5, Il2CppObject* arg6)
		{
			return ((::MX::GameLogic::DBModel::ConquestStepSummary*(*)(::System::Int64, ::System::Int64, ::System::Int64, ::MX::Conquest::ConquestTileMap*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CONQUESTSERVICE_CREATECONQUESTSTEPSUMMARY_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

	};
}

