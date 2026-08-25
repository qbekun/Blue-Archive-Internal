#pragma once
#include "unitysdk.h"

namespace MX::Data { class WorldRaidSeasonInfo; }
namespace MX::GameLogic::DBModel { class WorldRaidProgressDB; }
class WorldRaidRetryInfo;
namespace MX::NetworkProtocol { class WorldRaidBattleResultResponse; }
namespace MX::GameLogic::Parcel { class ParcelInfo; }
class FromUIScene;
namespace MX::GameLogic::DBModel { class WorldRaidWorldBossDB; }
namespace MX::GameLogic::DBModel { class WorldRaidLocalBossDB; }
namespace MX::GameLogic::DBModel { class WorldRaidClearHistoryDB; }
namespace MX::Data { class WorldRaidStageInfo; }
class BossAppearState;
namespace MX::Data { class WorldRaidBossGroupInfo; }
namespace FlatData { class OpenCondition; }
namespace MX::Data { class WorldRaidConditionInfo; }
namespace FlatData { class ContentType; }
namespace MX::NetworkProtocol { class WorldRaidBossListResponse; }
namespace MX::NetworkProtocol { class WorldRaidLobbyResponse; }
namespace FlatData { class OperatorCondition; }
namespace MX::NetworkProtocol { class ErrorPacket; }
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }
namespace MX::GameLogic::DBModel { class RaidBattleDB; }
namespace MX::Logic::Data { class CarrierSkillSetting; }

#define WORLDRAIDOBJECT_GET_CURRENTSEASONINFO_OFFSET UNITYSDK_OFFSET(0x1EF4410)
#define WORLDRAIDOBJECT_SET_CURRENTSEASONINFO_OFFSET UNITYSDK_OFFSET(0x1EF4420)
#define WORLDRAIDOBJECT_GET_BOSSLISTINFODB_OFFSET UNITYSDK_OFFSET(0x1EF4430)
#define WORLDRAIDOBJECT_SET_BOSSLISTINFODB_OFFSET UNITYSDK_OFFSET(0x1EF4440)
#define WORLDRAIDOBJECT_GET_CLEARHISTORYDBS_OFFSET UNITYSDK_OFFSET(0x1EF4450)
#define WORLDRAIDOBJECT_SET_CLEARHISTORYDBS_OFFSET UNITYSDK_OFFSET(0x1EF4460)
#define WORLDRAIDOBJECT_GET_PLAYINGLOCALBOSSDBS_OFFSET UNITYSDK_OFFSET(0x1EF4470)
#define WORLDRAIDOBJECT_SET_PLAYINGLOCALBOSSDBS_OFFSET UNITYSDK_OFFSET(0x1EF4480)
#define WORLDRAIDOBJECT_GET_PROGRESSDB_OFFSET UNITYSDK_OFFSET(0x1EF4490)
#define WORLDRAIDOBJECT_SET_PROGRESSDB_OFFSET UNITYSDK_OFFSET(0x1EF44A0)
#define WORLDRAIDOBJECT_GET_WORLDRAIDENTERPARCELINFO_OFFSET UNITYSDK_OFFSET(0x1EF44B0)
#define WORLDRAIDOBJECT_SET_WORLDRAIDENTERPARCELINFO_OFFSET UNITYSDK_OFFSET(0x1EF44C0)
#define WORLDRAIDOBJECT_GET_ISWAITSPAWN_OFFSET UNITYSDK_OFFSET(0x1EF44D0)
#define WORLDRAIDOBJECT_SET_ISWAITSPAWN_OFFSET UNITYSDK_OFFSET(0x1EF44E0)
#define WORLDRAIDOBJECT_GET_FROMUI_OFFSET UNITYSDK_OFFSET(0x1EF44F0)
#define WORLDRAIDOBJECT_SET_FROMUI_OFFSET UNITYSDK_OFFSET(0x1EF4500)
#define WORLDRAIDOBJECT_GET_ISRETRY_OFFSET UNITYSDK_OFFSET(0x1EF4510)
#define WORLDRAIDOBJECT_SET_ISRETRY_OFFSET UNITYSDK_OFFSET(0x1EF4520)
#define WORLDRAIDOBJECT_SETENTERPARCELINFO_OFFSET UNITYSDK_OFFSET(0x1EF4530)
#define WORLDRAIDOBJECT_GETWORLDBOSSDB_OFFSET UNITYSDK_OFFSET(0x1EF45B0)
#define WORLDRAIDOBJECT_GETLOCALBOSSDB_OFFSET UNITYSDK_OFFSET(0x1EF46A0)
#define WORLDRAIDOBJECT_GETCLEARHISTORYDB_OFFSET UNITYSDK_OFFSET(0x1EF4800)
#define WORLDRAIDOBJECT_GETPLAYINGLOCALBOSSDB_OFFSET UNITYSDK_OFFSET(0x1EF48F0)
#define WORLDRAIDOBJECT_GETLOCALBOSSHP_OFFSET UNITYSDK_OFFSET(0x1EF49E0)
#define WORLDRAIDOBJECT_GETCURRENTBOSSAPPEARSTATE_OFFSET UNITYSDK_OFFSET(0x1EF4C70)
#define WORLDRAIDOBJECT_GETCURRENTBOSSAPPEARSTATEONCURRENTSEASON_OFFSET UNITYSDK_OFFSET(0x1EF56A0)
#define WORLDRAIDOBJECT_ISANOTHERBOSSCLEARED_OFFSET UNITYSDK_OFFSET(0x1EF4ED0)
#define WORLDRAIDOBJECT_ISSCENARIOBOSSALIVE_OFFSET UNITYSDK_OFFSET(0x1EF5530)
#define WORLDRAIDOBJECT_ISDIFFICULTYOPENED_OFFSET UNITYSDK_OFFSET(0x1EF5770)
#define WORLDRAIDOBJECT_CHECKCLEARREWARDREDDOT_OFFSET UNITYSDK_OFFSET(0x1EF58A0)
#define WORLDRAIDOBJECT_CANRECEIVEDCLEARREWARD_OFFSET UNITYSDK_OFFSET(0x1EF5B70)
#define WORLDRAIDOBJECT_ISPARTICIPATEDEVERANYWORLDBOSS_OFFSET UNITYSDK_OFFSET(0x1EF5CE0)
#define WORLDRAIDOBJECT_ISALREADYRECEIVEDCLEARREWARD_OFFSET UNITYSDK_OFFSET(0x1EF5BD0)
#define WORLDRAIDOBJECT_ISUIOPEN_OFFSET UNITYSDK_OFFSET(0x1EF5EB0)
#define WORLDRAIDOBJECT_CHECKWORLDRAIDOPENCONDITION_OFFSET UNITYSDK_OFFSET(0x1EF6230)
#define WORLDRAIDOBJECT_GETLOCKMESSAGE_OFFSET UNITYSDK_OFFSET(0x1EF7130)
#define WORLDRAIDOBJECT_CHECKOPENCONDITION_OFFSET UNITYSDK_OFFSET(0x1EF7300)
#define WORLDRAIDOBJECT_NEEDUNLOCKANIMATION_OFFSET UNITYSDK_OFFSET(0x1EF74F0)
#define WORLDRAIDOBJECT_SYNC_OFFSET UNITYSDK_OFFSET(0x1EF7610)
#define WORLDRAIDOBJECT_SYNC_OFFSET UNITYSDK_OFFSET(0x1EF7E30)
#define WORLDRAIDOBJECT_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1EF8290)
#define WORLDRAIDOBJECT_STARTCOLLECTOPERATORORDER_OFFSET UNITYSDK_OFFSET(0x1EF82E0)
#define WORLDRAIDOBJECT_ENDCOLLECTOPERATORORDER_OFFSET UNITYSDK_OFFSET(0x1EF83A0)
#define WORLDRAIDOBJECT_REQUESTSHOWOPERATOR_OFFSET UNITYSDK_OFFSET(0x1EF8730)
#define WORLDRAIDOBJECT_REQUESTPLAYSPECIFICOPENEVENT_OFFSET UNITYSDK_OFFSET(0x1EF8910)
#define WORLDRAIDOBJECT_REQUESTSHOWOPERATOR_OFFSET UNITYSDK_OFFSET(0x1EF8A20)
#define WORLDRAIDOBJECT_SKIPCOMMONTOAST_OFFSET UNITYSDK_OFFSET(0x1EF8D40)
#define WORLDRAIDOBJECT_SHOWTOASTONSYNC_OFFSET UNITYSDK_OFFSET(0x1EF8ED0)
#define WORLDRAIDOBJECT_SHOWTOASTONSYNC_OFFSET UNITYSDK_OFFSET(0x1EF7D20)
#define WORLDRAIDOBJECT_SHOWTOASTONCLICK_OFFSET UNITYSDK_OFFSET(0x1EF8FE0)
#define WORLDRAIDOBJECT_OPENBOSSENTERPOPUP_OFFSET UNITYSDK_OFFSET(0x1EF90A0)
#define WORLDRAIDOBJECT_OPENWORLDRAIDLOBBY_OFFSET UNITYSDK_OFFSET(0x1EF9620)
#define WORLDRAIDOBJECT_OPENWORLDRAIDLOBBY_OFFSET UNITYSDK_OFFSET(0x1EF9770)
#define WORLDRAIDOBJECT_GETENTERTICKETAMOUNT_OFFSET UNITYSDK_OFFSET(0x1EF9AA0)
#define WORLDRAIDOBJECT_ISSTAGEFIRSTENTER_OFFSET UNITYSDK_OFFSET(0x1EF9BC0)
#define WORLDRAIDOBJECT_TRYPLAYSTAGEENTERSCENARIO_OFFSET UNITYSDK_OFFSET(0x1EF9C00)
#define WORLDRAIDOBJECT_TRYPLAYSTAGECLEARSCENARIO_OFFSET UNITYSDK_OFFSET(0x1EFA190)
#define WORLDRAIDOBJECT_NEEDPLAYWORLDRAIDSCENARIO_OFFSET UNITYSDK_OFFSET(0x1EF9FD0)
#define WORLDRAIDOBJECT_ENTERBATTLE_OFFSET UNITYSDK_OFFSET(0x1EFA4F0)
#define WORLDRAIDOBJECT_ENTERBATTLECUSTOMERROR_OFFSET UNITYSDK_OFFSET(0x1EFA850)
#define WORLDRAIDOBJECT_HANDLEENTERBATTLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1EFA990)
#define WORLDRAIDOBJECT_STARTWORLDRAID_OFFSET UNITYSDK_OFFSET(0x1EFABA0)
#define WORLDRAIDOBJECT_WORLDRAIDRETRY_OFFSET UNITYSDK_OFFSET(0x1EFB1A0)
#define WORLDRAIDOBJECT_ISINTERACTIVEWORLDRAIDCONDITIONMET_OFFSET UNITYSDK_OFFSET(0x1EFB1F0)
#define WORLDRAIDOBJECT_GETWORLDRAIDCARRIERSKILL_OFFSET UNITYSDK_OFFSET(0x1EFB610)
#define WORLDRAIDOBJECT_GETCURRENTWORLDRAIDCARRIERSKILL_OFFSET UNITYSDK_OFFSET(0x1EFBBE0)
#define WORLDRAIDOBJECT_ISTHISBOSSMOSTPARTICIPATED_OFFSET UNITYSDK_OFFSET(0x1EFC210)
#define WORLDRAIDOBJECT_GETBOSSCURRENTHP_OFFSET UNITYSDK_OFFSET(0x1EFC4A0)
#define WORLDRAIDOBJECT_LINKEDBOSSDEFEATEDCOUNT_OFFSET UNITYSDK_OFFSET(0x1EFC6C0)
#define WORLDRAIDOBJECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1EFC920)
#define WORLDRAIDOBJECT__ENTERBATTLECUSTOMERROR_G__ERROR|86_0_OFFSET UNITYSDK_OFFSET(0x1EFA920)

	inline static constexpr unsigned int WorldRaidObject_TypeDefinitionIndex = 1935;

	class WorldRaidObject : public Il2CppObject
	{
	public:
		::MX::Data::WorldRaidSeasonInfo* _CurrentSeasonInfo_k__BackingField; // 0x10
		Il2CppObject* _BossListInfoDB_k__BackingField; // 0x18
		Il2CppObject* _ClearHistoryDBs_k__BackingField; // 0x20
		Il2CppObject* _PlayingLocalBossDBs_k__BackingField; // 0x28
		::MX::GameLogic::DBModel::WorldRaidProgressDB* _ProgressDB_k__BackingField; // 0x30
		WorldRaidRetryInfo* worldRaidRetryInfo; // 0x38
		Il2CppObject* collectedOperatorList; // 0x40
		::MX::NetworkProtocol::WorldRaidBattleResultResponse* WorldRaidBattleResultResponse; // 0x48
		::MX::GameLogic::Parcel::ParcelInfo* _WorldRaidEnterParcelInfo_k__BackingField; // 0x50
		::System::Boolean _IsWaitSpawn_k__BackingField; // 0x58
		FromUIScene* _FromUI_k__BackingField; // 0x5C
		::System::Boolean _IsRetry_k__BackingField; // 0x60
		::System::Int32 LastEnteredBossIndex; // 0x64
		::System::Boolean IsLastEnteredBossScenarioBoss; // 0x68

		::MX::Data::WorldRaidSeasonInfo* get_CurrentSeasonInfo()
		{
			return ((::MX::Data::WorldRaidSeasonInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDOBJECT_GET_CURRENTSEASONINFO_OFFSET))(nullptr);
		}

		::System::Void set_CurrentSeasonInfo(::MX::Data::WorldRaidSeasonInfo* arg)
		{
			((::System::Void(*)(::MX::Data::WorldRaidSeasonInfo*, ::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDOBJECT_SET_CURRENTSEASONINFO_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_BossListInfoDB()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDOBJECT_GET_BOSSLISTINFODB_OFFSET))(nullptr);
		}

		::System::Void set_BossListInfoDB(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDOBJECT_SET_BOSSLISTINFODB_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_ClearHistoryDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDOBJECT_GET_CLEARHISTORYDBS_OFFSET))(nullptr);
		}

		::System::Void set_ClearHistoryDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDOBJECT_SET_CLEARHISTORYDBS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_PlayingLocalBossDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDOBJECT_GET_PLAYINGLOCALBOSSDBS_OFFSET))(nullptr);
		}

		::System::Void set_PlayingLocalBossDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDOBJECT_SET_PLAYINGLOCALBOSSDBS_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::WorldRaidProgressDB* get_ProgressDB()
		{
			return ((::MX::GameLogic::DBModel::WorldRaidProgressDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDOBJECT_GET_PROGRESSDB_OFFSET))(nullptr);
		}

		::System::Void set_ProgressDB(::MX::GameLogic::DBModel::WorldRaidProgressDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::WorldRaidProgressDB*, ::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDOBJECT_SET_PROGRESSDB_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::Parcel::ParcelInfo* get_WorldRaidEnterParcelInfo()
		{
			return ((::MX::GameLogic::Parcel::ParcelInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDOBJECT_GET_WORLDRAIDENTERPARCELINFO_OFFSET))(nullptr);
		}

		::System::Void set_WorldRaidEnterParcelInfo(::MX::GameLogic::Parcel::ParcelInfo* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelInfo*, ::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDOBJECT_SET_WORLDRAIDENTERPARCELINFO_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsWaitSpawn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDOBJECT_GET_ISWAITSPAWN_OFFSET))(nullptr);
		}

		::System::Void set_IsWaitSpawn(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDOBJECT_SET_ISWAITSPAWN_OFFSET))(arg, nullptr);
		}

		FromUIScene* get_FromUI()
		{
			return ((FromUIScene*(*)(::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDOBJECT_GET_FROMUI_OFFSET))(nullptr);
		}

		::System::Void set_FromUI(FromUIScene* arg)
		{
			((::System::Void(*)(FromUIScene*, ::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDOBJECT_SET_FROMUI_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsRetry()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDOBJECT_GET_ISRETRY_OFFSET))(nullptr);
		}

		::System::Void set_IsRetry(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDOBJECT_SET_ISRETRY_OFFSET))(arg, nullptr);
		}

		::System::Void SetEnterParcelInfo(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDOBJECT_SETENTERPARCELINFO_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::WorldRaidWorldBossDB* GetWorldBossDB(::System::Int64 arg)
		{
			return ((::MX::GameLogic::DBModel::WorldRaidWorldBossDB*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDOBJECT_GETWORLDBOSSDB_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::WorldRaidLocalBossDB* GetLocalBossDB(::System::Int64 arg, ::System::Int64 arg2)
		{
			return ((::MX::GameLogic::DBModel::WorldRaidLocalBossDB*(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDOBJECT_GETLOCALBOSSDB_OFFSET))(arg, arg2, nullptr);
		}

		::MX::GameLogic::DBModel::WorldRaidClearHistoryDB* GetClearHistoryDB(::System::Int64 arg, ::System::Int64 arg2)
		{
			return ((::MX::GameLogic::DBModel::WorldRaidClearHistoryDB*(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDOBJECT_GETCLEARHISTORYDB_OFFSET))(arg, arg2, nullptr);
		}

		::MX::GameLogic::DBModel::WorldRaidLocalBossDB* GetPlayingLocalBossDB(::System::Int64 arg, ::System::Int64 arg2)
		{
			return ((::MX::GameLogic::DBModel::WorldRaidLocalBossDB*(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDOBJECT_GETPLAYINGLOCALBOSSDB_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void GetLocalBossHp(::MX::GameLogic::DBModel::WorldRaidLocalBossDB* arg, ::MX::Data::WorldRaidStageInfo* arg2, int64_t&* arg3, int64_t&* arg4)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::WorldRaidLocalBossDB*, ::MX::Data::WorldRaidStageInfo*, int64_t&*, int64_t&*, ::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDOBJECT_GETLOCALBOSSHP_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		BossAppearState* GetCurrentBossAppearState(::MX::Data::WorldRaidSeasonInfo* arg, ::MX::Data::WorldRaidBossGroupInfo* arg2)
		{
			return ((BossAppearState*(*)(::MX::Data::WorldRaidSeasonInfo*, ::MX::Data::WorldRaidBossGroupInfo*, ::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDOBJECT_GETCURRENTBOSSAPPEARSTATE_OFFSET))(arg, arg2, nullptr);
		}

		BossAppearState* GetCurrentBossAppearStateOnCurrentSeason(::System::Int64 arg)
		{
			return ((BossAppearState*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDOBJECT_GETCURRENTBOSSAPPEARSTATEONCURRENTSEASON_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsAnotherBossCleared(::MX::Data::WorldRaidSeasonInfo* arg, Il2CppObject* arg2)
		{
			return ((::System::Boolean(*)(::MX::Data::WorldRaidSeasonInfo*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDOBJECT_ISANOTHERBOSSCLEARED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean IsScenarioBossAlive(::MX::Data::WorldRaidBossGroupInfo* arg)
		{
			return ((::System::Boolean(*)(::MX::Data::WorldRaidBossGroupInfo*, ::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDOBJECT_ISSCENARIOBOSSALIVE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsDifficultyOpened(::MX::GameLogic::DBModel::WorldRaidLocalBossDB* arg)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::WorldRaidLocalBossDB*, ::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDOBJECT_ISDIFFICULTYOPENED_OFFSET))(arg, nullptr);
		}

		::System::Boolean CheckClearRewardReddot(::MX::Data::WorldRaidSeasonInfo* arg)
		{
			return ((::System::Boolean(*)(::MX::Data::WorldRaidSeasonInfo*, ::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDOBJECT_CHECKCLEARREWARDREDDOT_OFFSET))(arg, nullptr);
		}

		::System::Boolean CanReceivedClearReward(::MX::Data::WorldRaidSeasonInfo* arg, ::MX::Data::WorldRaidBossGroupInfo* arg2)
		{
			return ((::System::Boolean(*)(::MX::Data::WorldRaidSeasonInfo*, ::MX::Data::WorldRaidBossGroupInfo*, ::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDOBJECT_CANRECEIVEDCLEARREWARD_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean IsParticipatedEverAnyWorldBoss()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDOBJECT_ISPARTICIPATEDEVERANYWORLDBOSS_OFFSET))(nullptr);
		}

		::System::Boolean IsAlreadyReceivedClearReward(::System::Int64 arg, ::System::Int64 arg2)
		{
			return ((::System::Boolean(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDOBJECT_ISALREADYRECEIVEDCLEARREWARD_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean IsUIOpen(::System::String* str, ::System::String&* arg)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String&*, ::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDOBJECT_ISUIOPEN_OFFSET))(str, arg, nullptr);
		}

		::FlatData::OpenCondition* CheckWorldRaidOpenCondition(::MX::Data::WorldRaidSeasonInfo* arg, ::MX::Data::WorldRaidConditionInfo* arg2, Il2CppObject&* arg3)
		{
			return ((::FlatData::OpenCondition*(*)(::MX::Data::WorldRaidSeasonInfo*, ::MX::Data::WorldRaidConditionInfo*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDOBJECT_CHECKWORLDRAIDOPENCONDITION_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::String* GetLockMessage(Il2CppObject* arg)
		{
			return ((::System::String*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDOBJECT_GETLOCKMESSAGE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* CheckOpenCondition(::FlatData::ContentType* arg, ::System::Int64 arg2, ::System::Int64 arg3, ::System::Int64 arg4, ::System::String&* arg5)
		{
			return ((Il2CppObject*(*)(::FlatData::ContentType*, ::System::Int64, ::System::Int64, ::System::Int64, ::System::String&*, ::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDOBJECT_CHECKOPENCONDITION_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Boolean NeedUnlockAnimation(::MX::Data::WorldRaidStageInfo* arg)
		{
			return ((::System::Boolean(*)(::MX::Data::WorldRaidStageInfo*, ::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDOBJECT_NEEDUNLOCKANIMATION_OFFSET))(arg, nullptr);
		}

		::System::Void Sync(::MX::NetworkProtocol::WorldRaidBossListResponse* arg, ::System::Boolean arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WorldRaidBossListResponse*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDOBJECT_SYNC_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void Sync(::MX::NetworkProtocol::WorldRaidLobbyResponse* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WorldRaidLobbyResponse*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDOBJECT_SYNC_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDOBJECT_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void StartCollectOperatorOrder()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDOBJECT_STARTCOLLECTOPERATORORDER_OFFSET))(nullptr);
		}

		::System::Void EndCollectOperatorOrder()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDOBJECT_ENDCOLLECTOPERATORORDER_OFFSET))(nullptr);
		}

		::System::Void RequestShowOperator(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDOBJECT_REQUESTSHOWOPERATOR_OFFSET))(str, nullptr);
		}

		::System::Void RequestPlaySpecificOpenEvent(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDOBJECT_REQUESTPLAYSPECIFICOPENEVENT_OFFSET))(arg, nullptr);
		}

		::System::Void RequestShowOperator(::FlatData::ContentType* arg, ::System::Int64 arg2, ::FlatData::OperatorCondition* arg3)
		{
			((::System::Void(*)(::FlatData::ContentType*, ::System::Int64, ::FlatData::OperatorCondition*, ::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDOBJECT_REQUESTSHOWOPERATOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean SkipCommonToast(::System::String* str)
		{
			return ((::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDOBJECT_SKIPCOMMONTOAST_OFFSET))(str, nullptr);
		}

		::System::Void ShowToastOnSync(::System::String* str, ::System::String* str2)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDOBJECT_SHOWTOASTONSYNC_OFFSET))(str, str2, nullptr);
		}

		::System::Void ShowToastOnSync(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDOBJECT_SHOWTOASTONSYNC_OFFSET))(str, nullptr);
		}

		::System::Void ShowToastOnClick(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDOBJECT_SHOWTOASTONCLICK_OFFSET))(str, nullptr);
		}

		::System::Void OpenBossEnterPopup(::MX::Data::WorldRaidSeasonInfo* arg, ::MX::Data::WorldRaidBossGroupInfo* arg2, BossAppearState* arg3)
		{
			((::System::Void(*)(::MX::Data::WorldRaidSeasonInfo*, ::MX::Data::WorldRaidBossGroupInfo*, BossAppearState*, ::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDOBJECT_OPENBOSSENTERPOPUP_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void OpenWorldRaidLobby(::System::Int64 arg, ::System::Int64 arg2, Il2CppObject* arg3)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDOBJECT_OPENWORLDRAIDLOBBY_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void OpenWorldRaidLobby(::MX::Data::WorldRaidSeasonInfo* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::MX::Data::WorldRaidSeasonInfo*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDOBJECT_OPENWORLDRAIDLOBBY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int64 GetEnterTicketAmount(::System::Int64 arg)
		{
			return ((::System::Int64(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDOBJECT_GETENTERTICKETAMOUNT_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsStageFirstEnter(::MX::Data::WorldRaidStageInfo* arg)
		{
			return ((::System::Boolean(*)(::MX::Data::WorldRaidStageInfo*, ::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDOBJECT_ISSTAGEFIRSTENTER_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryPlayStageEnterScenario(::FlatData::ContentType* arg, ::System::Int64 arg2, ::System::Int64 arg3, ::System::Action* arg4)
		{
			return ((::System::Boolean(*)(::FlatData::ContentType*, ::System::Int64, ::System::Int64, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDOBJECT_TRYPLAYSTAGEENTERSCENARIO_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Boolean TryPlayStageClearScenario(::System::Int64 arg, ::System::Int64 arg2, ::System::Action* arg3)
		{
			return ((::System::Boolean(*)(::System::Int64, ::System::Int64, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDOBJECT_TRYPLAYSTAGECLEARSCENARIO_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean NeedPlayWorldRaidScenario(::System::Int64 arg, ::System::Int64 arg2, Il2CppObject&* arg3)
		{
			return ((::System::Boolean(*)(::System::Int64, ::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDOBJECT_NEEDPLAYWORLDRAIDSCENARIO_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void EnterBattle(::MX::GameLogic::DBModel::WorldRaidLocalBossDB* arg, ::System::Int64 arg2, ::System::Int32 arg3, ::System::Boolean arg4, ::System::Boolean arg5, Il2CppObject* arg6, ::System::Boolean arg7)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::WorldRaidLocalBossDB*, ::System::Int64, ::System::Int32, ::System::Boolean, ::System::Boolean, Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDOBJECT_ENTERBATTLE_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, nullptr);
		}

		::System::Boolean EnterBattleCustomError(::MX::NetworkProtocol::ErrorPacket* arg)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::ErrorPacket*, ::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDOBJECT_ENTERBATTLECUSTOMERROR_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleEnterBattleMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDOBJECT_HANDLEENTERBATTLEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void StartWorldRaid(::MX::GameLogic::DBModel::WorldRaidLocalBossDB* arg, ::System::Int64 arg2, ::System::Boolean arg3, ::System::Boolean arg4, ::MX::GameLogic::DBModel::RaidBattleDB* arg5, ::System::Int32 arg6, Il2CppObject* arg7, Il2CppObject* arg8, ::System::Boolean arg9)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::WorldRaidLocalBossDB*, ::System::Int64, ::System::Boolean, ::System::Boolean, ::MX::GameLogic::DBModel::RaidBattleDB*, ::System::Int32, Il2CppObject*, Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDOBJECT_STARTWORLDRAID_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, nullptr);
		}

		::System::Void WorldRaidRetry()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDOBJECT_WORLDRAIDRETRY_OFFSET))(nullptr);
		}

		::System::Boolean IsInteractiveWorldRaidConditionMet(::System::Int64 arg)
		{
			return ((::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDOBJECT_ISINTERACTIVEWORLDRAIDCONDITIONMET_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Data::CarrierSkillSetting* GetWorldRaidCarrierSkill(::System::Int64 arg)
		{
			return ((::MX::Logic::Data::CarrierSkillSetting*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDOBJECT_GETWORLDRAIDCARRIERSKILL_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Data::CarrierSkillSetting* GetCurrentWorldRaidCarrierSkill(::System::Int64 arg)
		{
			return ((::MX::Logic::Data::CarrierSkillSetting*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDOBJECT_GETCURRENTWORLDRAIDCARRIERSKILL_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsThisBossMostParticipated(::System::Int64 arg)
		{
			return ((::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDOBJECT_ISTHISBOSSMOSTPARTICIPATED_OFFSET))(arg, nullptr);
		}

		::System::Int64 GetBossCurrentHp(::System::Int64 arg)
		{
			return ((::System::Int64(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDOBJECT_GETBOSSCURRENTHP_OFFSET))(arg, nullptr);
		}

		::System::Int32 LinkedBossDefeatedCount(::System::Int64 arg)
		{
			return ((::System::Int32(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDOBJECT_LINKEDBOSSDEFEATEDCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDOBJECT_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* _EnterBattleCustomError_g__Error|86_0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDOBJECT__ENTERBATTLECUSTOMERROR_G__ERROR|86_0_OFFSET))(nullptr);
		}

	};

