#pragma once
#include "unitysdk.h"

class TimeAttackDungeonRetryInfo;
namespace MX::GameLogic::DBModel { class TimeAttackDungeonRoomDB; }
namespace MX::NetworkProtocol { class WebAPIErrorCode; }
namespace MX::NetworkProtocol { class TimeAttackDungeonEndBattleResponse; }
namespace MX::NetworkProtocol { class TimeAttackDungeonLobbyResponse; }
namespace MX::NetworkProtocol { class TimeAttackDungeonGiveUpResponse; }
namespace MX::GameLogic::DBModel { class ClanAssistUseInfo; }
namespace MX::NetworkProtocol { class TimeAttackDungeonEnterBattleResponse; }
namespace MX::GameLogic::DBModel { class AssistCharacterDB; }

#define TIMEATTACKDUNGEONOBJECT_GET_RETRYINFO_OFFSET UNITYSDK_OFFSET(0x1EED270)
#define TIMEATTACKDUNGEONOBJECT_SET_RETRYINFO_OFFSET UNITYSDK_OFFSET(0x1EED280)
#define TIMEATTACKDUNGEONOBJECT_GET_PREVIOUSROOMDB_OFFSET UNITYSDK_OFFSET(0x1EED290)
#define TIMEATTACKDUNGEONOBJECT_SET_PREVIOUSROOMDB_OFFSET UNITYSDK_OFFSET(0x1EED2A0)
#define TIMEATTACKDUNGEONOBJECT_GET_PREVIOUSROOMREWARDS_OFFSET UNITYSDK_OFFSET(0x1EED2B0)
#define TIMEATTACKDUNGEONOBJECT_SET_PREVIOUSROOMREWARDS_OFFSET UNITYSDK_OFFSET(0x1EED2C0)
#define TIMEATTACKDUNGEONOBJECT_GET_SEASONBESTRECORD_OFFSET UNITYSDK_OFFSET(0x1EED2D0)
#define TIMEATTACKDUNGEONOBJECT_SET_SEASONBESTRECORD_OFFSET UNITYSDK_OFFSET(0x1EED2E0)
#define TIMEATTACKDUNGEONOBJECT_GET_ACHIEVESEASONBESTRECORD_OFFSET UNITYSDK_OFFSET(0x1EED2F0)
#define TIMEATTACKDUNGEONOBJECT_SET_ACHIEVESEASONBESTRECORD_OFFSET UNITYSDK_OFFSET(0x1EED300)
#define TIMEATTACKDUNGEONOBJECT_GET_HASPREVIOUS_OFFSET UNITYSDK_OFFSET(0x1EED310)
#define TIMEATTACKDUNGEONOBJECT_CLEARPREVIOUS_OFFSET UNITYSDK_OFFSET(0x1EED320)
#define TIMEATTACKDUNGEONOBJECT_GET_SYNCTIME_OFFSET UNITYSDK_OFFSET(0x1EED360)
#define TIMEATTACKDUNGEONOBJECT_SET_SYNCTIME_OFFSET UNITYSDK_OFFSET(0x1EED370)
#define TIMEATTACKDUNGEONOBJECT_GET_NEEDSYNC_OFFSET UNITYSDK_OFFSET(0x1EED380)
#define TIMEATTACKDUNGEONOBJECT_RESETSYNCTIME_OFFSET UNITYSDK_OFFSET(0x1EED540)
#define TIMEATTACKDUNGEONOBJECT_GET_ANYROOMOPENED_OFFSET UNITYSDK_OFFSET(0x1EED550)
#define TIMEATTACKDUNGEONOBJECT_GET_ISTICKETAVAILABLE_OFFSET UNITYSDK_OFFSET(0x1EED6C0)
#define TIMEATTACKDUNGEONOBJECT_GET_LASTENDBATTLEERRORCODE_OFFSET UNITYSDK_OFFSET(0x1EED760)
#define TIMEATTACKDUNGEONOBJECT_SET_LASTENDBATTLEERRORCODE_OFFSET UNITYSDK_OFFSET(0x1EED770)
#define TIMEATTACKDUNGEONOBJECT_GET_LASTENDBATTLERESPONSE_OFFSET UNITYSDK_OFFSET(0x1EED780)
#define TIMEATTACKDUNGEONOBJECT_SET_LASTENDBATTLERESPONSE_OFFSET UNITYSDK_OFFSET(0x1EED790)
#define TIMEATTACKDUNGEONOBJECT_GETOPENEDROOM_OFFSET UNITYSDK_OFFSET(0x1EED7A0)
#define TIMEATTACKDUNGEONOBJECT_GETPLAYABLEROOM_OFFSET UNITYSDK_OFFSET(0x1EED910)
#define TIMEATTACKDUNGEONOBJECT_GET_ANYPLAYABLEROOM_OFFSET UNITYSDK_OFFSET(0x1EEDA80)
#define TIMEATTACKDUNGEONOBJECT_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1EEDAA0)
#define TIMEATTACKDUNGEONOBJECT_SYNC_OFFSET UNITYSDK_OFFSET(0x1EEDB20)
#define TIMEATTACKDUNGEONOBJECT_SYNC_OFFSET UNITYSDK_OFFSET(0x1EEDC10)
#define TIMEATTACKDUNGEONOBJECT_SYNC_OFFSET UNITYSDK_OFFSET(0x1EEDC90)
#define TIMEATTACKDUNGEONOBJECT_CO_ENTERTIMEATTACKDUNGEONLOBBY_OFFSET UNITYSDK_OFFSET(0x1EEDDD0)
#define TIMEATTACKDUNGEONOBJECT_REQUESTSTARTBATTLE_OFFSET UNITYSDK_OFFSET(0x1EEDE60)
#define TIMEATTACKDUNGEONOBJECT_ONENTERBATTLERESPONSE_OFFSET UNITYSDK_OFFSET(0x1EEDF50)
#define TIMEATTACKDUNGEONOBJECT_ONENTERBATTLERESPONSE_OFFSET UNITYSDK_OFFSET(0x1EEE2D0)
#define TIMEATTACKDUNGEONOBJECT_FINDTODAYBESTSCOREFORUI_OFFSET UNITYSDK_OFFSET(0x1EEE560)
#define TIMEATTACKDUNGEONOBJECT_FINDTODAYBESTSCOREROOMDBFORUI_OFFSET UNITYSDK_OFFSET(0x1EEE590)
#define TIMEATTACKDUNGEONOBJECT_FINDTODAYBESTSCOREFORSWEEP_OFFSET UNITYSDK_OFFSET(0x1EEE660)
#define TIMEATTACKDUNGEONOBJECT_FINDTODAYBESTSCOREROOMDBFORSWEEP_OFFSET UNITYSDK_OFFSET(0x1EEE690)
#define TIMEATTACKDUNGEONOBJECT_CANSWEEP_OFFSET UNITYSDK_OFFSET(0x1EEE760)
#define TIMEATTACKDUNGEONOBJECT_ISSWEEPOPENBYHISTORY_OFFSET UNITYSDK_OFFSET(0x1EEE900)
#define TIMEATTACKDUNGEONOBJECT_CANSHOWHISTORY_OFFSET UNITYSDK_OFFSET(0x1EEE920)
#define TIMEATTACKDUNGEONOBJECT_STARTBATTLE_OFFSET UNITYSDK_OFFSET(0x1EEE010)
#define TIMEATTACKDUNGEONOBJECT_SENDTOLOBBYFORSYNC_OFFSET UNITYSDK_OFFSET(0x1EEEAB0)
#define TIMEATTACKDUNGEONOBJECT_ONENDBATTLERESPONSE_OFFSET UNITYSDK_OFFSET(0x1EEEC10)
#define TIMEATTACKDUNGEONOBJECT_CLEARENDBATTLERESPONSE_OFFSET UNITYSDK_OFFSET(0x1EEEC30)
#define TIMEATTACKDUNGEONOBJECT_GET_ANYLASTENDBATTLEREWARDS_OFFSET UNITYSDK_OFFSET(0x1EEEC50)
#define TIMEATTACKDUNGEONOBJECT_GET_LASTENDBATTLEREWARDS_OFFSET UNITYSDK_OFFSET(0x1EEEC70)
#define TIMEATTACKDUNGEONOBJECT_FINDBESTBEFORE_OFFSET UNITYSDK_OFFSET(0x1EEECE0)
#define TIMEATTACKDUNGEONOBJECT_GETREWARDHISTORY_OFFSET UNITYSDK_OFFSET(0x1EEF040)
#define TIMEATTACKDUNGEONOBJECT_ISSEASONOPEN_OFFSET UNITYSDK_OFFSET(0x1EEE7B0)
#define TIMEATTACKDUNGEONOBJECT_TIMEATTACKRETRY_OFFSET UNITYSDK_OFFSET(0x1EEF0E0)
#define TIMEATTACKDUNGEONOBJECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1EEF160)

	inline static constexpr unsigned int TimeAttackDungeonObject_TypeDefinitionIndex = 1894;

	class TimeAttackDungeonObject : public Il2CppObject
	{
	public:
		TimeAttackDungeonRetryInfo* _RetryInfo_k__BackingField; // 0x10
		Il2CppObject* RoomDBs; // 0x18
		::MX::GameLogic::DBModel::TimeAttackDungeonRoomDB* _PreviousRoomDB_k__BackingField; // 0x20
		Il2CppObject* _PreviousRoomRewards_k__BackingField; // 0x28
		::System::Int64 _SeasonBestRecord_k__BackingField; // 0x30
		::System::Boolean _AchieveSeasonBestRecord_k__BackingField; // 0x38
		::System::DateTime* _SyncTime_k__BackingField; // 0x40
		::MX::NetworkProtocol::WebAPIErrorCode* _LastEndBattleErrorCode_k__BackingField; // 0x48
		::MX::NetworkProtocol::TimeAttackDungeonEndBattleResponse* _LastEndBattleResponse_k__BackingField; // 0x50

		TimeAttackDungeonRetryInfo* get_RetryInfo()
		{
			return ((TimeAttackDungeonRetryInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMEATTACKDUNGEONOBJECT_GET_RETRYINFO_OFFSET))(nullptr);
		}

		::System::Void set_RetryInfo(TimeAttackDungeonRetryInfo* arg)
		{
			((::System::Void(*)(TimeAttackDungeonRetryInfo*, ::PVOID))((::PBYTE)hIl2Cpp + TIMEATTACKDUNGEONOBJECT_SET_RETRYINFO_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::TimeAttackDungeonRoomDB* get_PreviousRoomDB()
		{
			return ((::MX::GameLogic::DBModel::TimeAttackDungeonRoomDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMEATTACKDUNGEONOBJECT_GET_PREVIOUSROOMDB_OFFSET))(nullptr);
		}

		::System::Void set_PreviousRoomDB(::MX::GameLogic::DBModel::TimeAttackDungeonRoomDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::TimeAttackDungeonRoomDB*, ::PVOID))((::PBYTE)hIl2Cpp + TIMEATTACKDUNGEONOBJECT_SET_PREVIOUSROOMDB_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_PreviousRoomRewards()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMEATTACKDUNGEONOBJECT_GET_PREVIOUSROOMREWARDS_OFFSET))(nullptr);
		}

		::System::Void set_PreviousRoomRewards(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + TIMEATTACKDUNGEONOBJECT_SET_PREVIOUSROOMREWARDS_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_SeasonBestRecord()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMEATTACKDUNGEONOBJECT_GET_SEASONBESTRECORD_OFFSET))(nullptr);
		}

		::System::Void set_SeasonBestRecord(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + TIMEATTACKDUNGEONOBJECT_SET_SEASONBESTRECORD_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_AchieveSeasonBestRecord()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMEATTACKDUNGEONOBJECT_GET_ACHIEVESEASONBESTRECORD_OFFSET))(nullptr);
		}

		::System::Void set_AchieveSeasonBestRecord(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + TIMEATTACKDUNGEONOBJECT_SET_ACHIEVESEASONBESTRECORD_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_HasPrevious()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMEATTACKDUNGEONOBJECT_GET_HASPREVIOUS_OFFSET))(nullptr);
		}

		::System::Void ClearPrevious()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMEATTACKDUNGEONOBJECT_CLEARPREVIOUS_OFFSET))(nullptr);
		}

		::System::DateTime* get_SyncTime()
		{
			return ((::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMEATTACKDUNGEONOBJECT_GET_SYNCTIME_OFFSET))(nullptr);
		}

		::System::Void set_SyncTime(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + TIMEATTACKDUNGEONOBJECT_SET_SYNCTIME_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_NeedSync()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMEATTACKDUNGEONOBJECT_GET_NEEDSYNC_OFFSET))(nullptr);
		}

		::System::Void ResetSyncTime()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMEATTACKDUNGEONOBJECT_RESETSYNCTIME_OFFSET))(nullptr);
		}

		::System::Boolean get_AnyRoomOpened()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMEATTACKDUNGEONOBJECT_GET_ANYROOMOPENED_OFFSET))(nullptr);
		}

		::System::Boolean get_IsTicketAvailable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMEATTACKDUNGEONOBJECT_GET_ISTICKETAVAILABLE_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::WebAPIErrorCode* get_LastEndBattleErrorCode()
		{
			return ((::MX::NetworkProtocol::WebAPIErrorCode*(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMEATTACKDUNGEONOBJECT_GET_LASTENDBATTLEERRORCODE_OFFSET))(nullptr);
		}

		::System::Void set_LastEndBattleErrorCode(::MX::NetworkProtocol::WebAPIErrorCode* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::PVOID))((::PBYTE)hIl2Cpp + TIMEATTACKDUNGEONOBJECT_SET_LASTENDBATTLEERRORCODE_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::TimeAttackDungeonEndBattleResponse* get_LastEndBattleResponse()
		{
			return ((::MX::NetworkProtocol::TimeAttackDungeonEndBattleResponse*(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMEATTACKDUNGEONOBJECT_GET_LASTENDBATTLERESPONSE_OFFSET))(nullptr);
		}

		::System::Void set_LastEndBattleResponse(::MX::NetworkProtocol::TimeAttackDungeonEndBattleResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::TimeAttackDungeonEndBattleResponse*, ::PVOID))((::PBYTE)hIl2Cpp + TIMEATTACKDUNGEONOBJECT_SET_LASTENDBATTLERESPONSE_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::TimeAttackDungeonRoomDB* GetOpenedRoom()
		{
			return ((::MX::GameLogic::DBModel::TimeAttackDungeonRoomDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMEATTACKDUNGEONOBJECT_GETOPENEDROOM_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::TimeAttackDungeonRoomDB* GetPlayableRoom()
		{
			return ((::MX::GameLogic::DBModel::TimeAttackDungeonRoomDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMEATTACKDUNGEONOBJECT_GETPLAYABLEROOM_OFFSET))(nullptr);
		}

		::System::Boolean get_AnyPlayableRoom()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMEATTACKDUNGEONOBJECT_GET_ANYPLAYABLEROOM_OFFSET))(nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMEATTACKDUNGEONOBJECT_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void Sync(::MX::NetworkProtocol::TimeAttackDungeonLobbyResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::TimeAttackDungeonLobbyResponse*, ::PVOID))((::PBYTE)hIl2Cpp + TIMEATTACKDUNGEONOBJECT_SYNC_OFFSET))(arg, nullptr);
		}

		::System::Void Sync(::MX::NetworkProtocol::TimeAttackDungeonGiveUpResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::TimeAttackDungeonGiveUpResponse*, ::PVOID))((::PBYTE)hIl2Cpp + TIMEATTACKDUNGEONOBJECT_SYNC_OFFSET))(arg, nullptr);
		}

		::System::Void Sync(::MX::GameLogic::DBModel::TimeAttackDungeonRoomDB* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::TimeAttackDungeonRoomDB*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + TIMEATTACKDUNGEONOBJECT_SYNC_OFFSET))(arg, arg2, nullptr);
		}

		::System::Collections::IEnumerator* Co_EnterTimeAttackDungeonLobby()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMEATTACKDUNGEONOBJECT_CO_ENTERTIMEATTACKDUNGEONLOBBY_OFFSET))(nullptr);
		}

		::System::Void RequestStartBattle(::MX::GameLogic::DBModel::TimeAttackDungeonRoomDB* arg, ::System::Int32 arg2, ::MX::GameLogic::DBModel::ClanAssistUseInfo* arg3, ::System::Int64 arg4, ::System::Int64 arg5)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::TimeAttackDungeonRoomDB*, ::System::Int32, ::MX::GameLogic::DBModel::ClanAssistUseInfo*, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + TIMEATTACKDUNGEONOBJECT_REQUESTSTARTBATTLE_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Void OnEnterBattleResponse(::MX::NetworkProtocol::TimeAttackDungeonEnterBattleResponse* arg, ::System::Int64 arg2, ::System::Int64 arg3, ::System::Int64 arg4, ::System::Int32 arg5, ::MX::GameLogic::DBModel::ClanAssistUseInfo* arg6)
		{
			((::System::Void(*)(::MX::NetworkProtocol::TimeAttackDungeonEnterBattleResponse*, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int32, ::MX::GameLogic::DBModel::ClanAssistUseInfo*, ::PVOID))((::PBYTE)hIl2Cpp + TIMEATTACKDUNGEONOBJECT_ONENTERBATTLERESPONSE_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		::System::Void OnEnterBattleResponse(::MX::NetworkProtocol::WebAPIErrorCode* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::PVOID))((::PBYTE)hIl2Cpp + TIMEATTACKDUNGEONOBJECT_ONENTERBATTLERESPONSE_OFFSET))(arg, nullptr);
		}

		::System::Int64 FindTodayBestScoreForUI()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMEATTACKDUNGEONOBJECT_FINDTODAYBESTSCOREFORUI_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::TimeAttackDungeonRoomDB* FindTodayBestScoreRoomDBForUI()
		{
			return ((::MX::GameLogic::DBModel::TimeAttackDungeonRoomDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMEATTACKDUNGEONOBJECT_FINDTODAYBESTSCOREROOMDBFORUI_OFFSET))(nullptr);
		}

		::System::Int64 FindTodayBestScoreForSweep()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMEATTACKDUNGEONOBJECT_FINDTODAYBESTSCOREFORSWEEP_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::TimeAttackDungeonRoomDB* FindTodayBestScoreRoomDBForSweep()
		{
			return ((::MX::GameLogic::DBModel::TimeAttackDungeonRoomDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMEATTACKDUNGEONOBJECT_FINDTODAYBESTSCOREROOMDBFORSWEEP_OFFSET))(nullptr);
		}

		::System::Boolean CanSweep()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMEATTACKDUNGEONOBJECT_CANSWEEP_OFFSET))(nullptr);
		}

		::System::Boolean IsSweepOpenByHistory()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMEATTACKDUNGEONOBJECT_ISSWEEPOPENBYHISTORY_OFFSET))(nullptr);
		}

		::System::Boolean CanShowHistory()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMEATTACKDUNGEONOBJECT_CANSHOWHISTORY_OFFSET))(nullptr);
		}

		::System::Void StartBattle(::MX::GameLogic::DBModel::TimeAttackDungeonRoomDB* arg, ::MX::GameLogic::DBModel::AssistCharacterDB* arg2, ::System::Int64 arg3, ::System::Int64 arg4, ::System::Int32 arg5, ::MX::GameLogic::DBModel::ClanAssistUseInfo* arg6)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::TimeAttackDungeonRoomDB*, ::MX::GameLogic::DBModel::AssistCharacterDB*, ::System::Int64, ::System::Int64, ::System::Int32, ::MX::GameLogic::DBModel::ClanAssistUseInfo*, ::PVOID))((::PBYTE)hIl2Cpp + TIMEATTACKDUNGEONOBJECT_STARTBATTLE_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		::System::Void SendToLobbyForSync()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMEATTACKDUNGEONOBJECT_SENDTOLOBBYFORSYNC_OFFSET))(nullptr);
		}

		::System::Void OnEndBattleResponse(::MX::NetworkProtocol::WebAPIErrorCode* arg, ::MX::NetworkProtocol::TimeAttackDungeonEndBattleResponse* arg2)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::MX::NetworkProtocol::TimeAttackDungeonEndBattleResponse*, ::PVOID))((::PBYTE)hIl2Cpp + TIMEATTACKDUNGEONOBJECT_ONENDBATTLERESPONSE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void ClearEndBattleResponse()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMEATTACKDUNGEONOBJECT_CLEARENDBATTLERESPONSE_OFFSET))(nullptr);
		}

		::System::Boolean get_AnyLastEndBattleRewards()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMEATTACKDUNGEONOBJECT_GET_ANYLASTENDBATTLEREWARDS_OFFSET))(nullptr);
		}

		Il2CppObject* get_LastEndBattleRewards()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMEATTACKDUNGEONOBJECT_GET_LASTENDBATTLEREWARDS_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::TimeAttackDungeonRoomDB* FindBestBefore(::System::DateTime* arg)
		{
			return ((::MX::GameLogic::DBModel::TimeAttackDungeonRoomDB*(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + TIMEATTACKDUNGEONOBJECT_FINDBESTBEFORE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetRewardHistory()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMEATTACKDUNGEONOBJECT_GETREWARDHISTORY_OFFSET))(nullptr);
		}

		::System::Boolean IsSeasonOpen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMEATTACKDUNGEONOBJECT_ISSEASONOPEN_OFFSET))(nullptr);
		}

		::System::Void TimeAttackRetry()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMEATTACKDUNGEONOBJECT_TIMEATTACKRETRY_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMEATTACKDUNGEONOBJECT_.CTOR_OFFSET))(nullptr);
		}

	};

