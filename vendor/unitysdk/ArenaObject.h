#pragma once
#include "unitysdk.h"

class ArenaOpponentRefresher;
namespace MX::GameLogic::DBModel { class ArenaBattleDB; }
namespace MX::GameLogic::DBModel { class ArenaPlayerInfoDB; }
namespace MX::GameLogic::Parcel { class ParcelResultDB; }
class EchelonObject;
namespace MX::NetworkProtocol { class ArenaLoginResponse; }
namespace MX::NetworkProtocol { class ArenaEnterLobbyResponse; }
namespace MX::NetworkProtocol { class ArenaOpponentListResponse; }
namespace MX::NetworkProtocol { class ArenaSyncEchelonSettingTimeResponse; }
namespace MX::NetworkProtocol { class ArenaEnterBattleResponse; }
namespace MX::NetworkProtocol { class ArenaEnterBattlePart2Response; }
namespace MX::NetworkProtocol { class ArenaCumulativeTimeRewardResponse; }
namespace MX::NetworkProtocol { class ArenaDailyRewardResponse; }
namespace FlatData { class EchelonType; }
namespace MX::GameLogic::DBModel { class EchelonDB; }

#define ARENAOBJECT_GET_OPPONENTREFRESHER_OFFSET UNITYSDK_OFFSET(0x1828960)
#define ARENAOBJECT_SET_OPPONENTREFRESHER_OFFSET UNITYSDK_OFFSET(0x1828970)
#define ARENAOBJECT_GET_BATTLEDBCACHE_OFFSET UNITYSDK_OFFSET(0x1828980)
#define ARENAOBJECT_SET_BATTLEDBCACHE_OFFSET UNITYSDK_OFFSET(0x1828990)
#define ARENAOBJECT_GET_OFFENSEECHELONENTITYID_OFFSET UNITYSDK_OFFSET(0x18289A0)
#define ARENAOBJECT_SET_OFFENSEECHELONENTITYID_OFFSET UNITYSDK_OFFSET(0x18289B0)
#define ARENAOBJECT_GET_OFFENSEECHELON_OFFSET UNITYSDK_OFFSET(0x18289C0)
#define ARENAOBJECT_GET_DEFENSEECHELONENTITYID_OFFSET UNITYSDK_OFFSET(0x1828A80)
#define ARENAOBJECT_SET_DEFENSEECHELONENTITYID_OFFSET UNITYSDK_OFFSET(0x1828A90)
#define ARENAOBJECT_GET_DEFENSEECHELON_OFFSET UNITYSDK_OFFSET(0x1828AA0)
#define ARENAOBJECT_GET_DEFENSEMAPID_OFFSET UNITYSDK_OFFSET(0x1828B60)
#define ARENAOBJECT_SET_DEFENSEMAPID_OFFSET UNITYSDK_OFFSET(0x1828B70)
#define ARENAOBJECT_GET_ARENAPLAYERINFODB_OFFSET UNITYSDK_OFFSET(0x1828B80)
#define ARENAOBJECT_SET_ARENAPLAYERINFODB_OFFSET UNITYSDK_OFFSET(0x1828B90)
#define ARENAOBJECT_GET_PARCELRESULT_OFFSET UNITYSDK_OFFSET(0x1828BA0)
#define ARENAOBJECT_SET_PARCELRESULT_OFFSET UNITYSDK_OFFSET(0x1828BB0)
#define ARENAOBJECT_GET_SEASONREWARDS_OFFSET UNITYSDK_OFFSET(0x1828BC0)
#define ARENAOBJECT_SET_SEASONREWARDS_OFFSET UNITYSDK_OFFSET(0x1828BD0)
#define ARENAOBJECT_GET_ALLTIMEREWARDS_OFFSET UNITYSDK_OFFSET(0x1828BE0)
#define ARENAOBJECT_SET_ALLTIMEREWARDS_OFFSET UNITYSDK_OFFSET(0x1828BF0)
#define ARENAOBJECT_GET_SEASONID_OFFSET UNITYSDK_OFFSET(0x1828C00)
#define ARENAOBJECT_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1828C20)
#define ARENAOBJECT_GET_RANK_OFFSET UNITYSDK_OFFSET(0x1828C40)
#define ARENAOBJECT_GET_SEASONRECORD_OFFSET UNITYSDK_OFFSET(0x1828C60)
#define ARENAOBJECT_GET_ALLTIMERECORD_OFFSET UNITYSDK_OFFSET(0x1828C80)
#define ARENAOBJECT_GET_CUMULATIVETIMEREWARD_OFFSET UNITYSDK_OFFSET(0x1828CA0)
#define ARENAOBJECT_GET_BATTLEENTERACTIVETIME_OFFSET UNITYSDK_OFFSET(0x1828CC0)
#define ARENAOBJECT_GET_DAILYREWARDACTIVETIME_OFFSET UNITYSDK_OFFSET(0x1828CE0)
#define ARENAOBJECT_GET_TICKETAMOUNT_OFFSET UNITYSDK_OFFSET(0x1828D00)
#define ARENAOBJECT_GET_LASTHISTORYREQUESTTIME_OFFSET UNITYSDK_OFFSET(0x1828D90)
#define ARENAOBJECT_SET_LASTHISTORYREQUESTTIME_OFFSET UNITYSDK_OFFSET(0x1828DA0)
#define ARENAOBJECT_SETLASTHISTORYREQUESTTIME_OFFSET UNITYSDK_OFFSET(0x1828DB0)
#define ARENAOBJECT_RESETLASTHISTORYREQUESTTIME_OFFSET UNITYSDK_OFFSET(0x1828E50)
#define ARENAOBJECT_CANREQUESTHISTORY_OFFSET UNITYSDK_OFFSET(0x1828E60)
#define ARENAOBJECT_GET_SHOWREDDOT_OFFSET UNITYSDK_OFFSET(0x1828F80)
#define ARENAOBJECT_GET_SHOWYELLOWDOT_OFFSET UNITYSDK_OFFSET(0x1829110)
#define ARENAOBJECT_GET_ISSEASONOPEN_OFFSET UNITYSDK_OFFSET(0x18291E0)
#define ARENAOBJECT_GET_PREVSEASONRECORD_OFFSET UNITYSDK_OFFSET(0x18292A0)
#define ARENAOBJECT_SET_PREVSEASONRECORD_OFFSET UNITYSDK_OFFSET(0x18292B0)
#define ARENAOBJECT_GET_PREVALLTIMERECORD_OFFSET UNITYSDK_OFFSET(0x18292C0)
#define ARENAOBJECT_SET_PREVALLTIMERECORD_OFFSET UNITYSDK_OFFSET(0x18292D0)
#define ARENAOBJECT_GET_NEEDSTOSHOWRANKCHANGEDFX_OFFSET UNITYSDK_OFFSET(0x18292E0)
#define ARENAOBJECT_SHOWSEASONGUIDE_OFFSET UNITYSDK_OFFSET(0x1829490)
#define ARENAOBJECT_SAVESEASONGUIDECHECK_OFFSET UNITYSDK_OFFSET(0x1829620)
#define ARENAOBJECT_GET_HASTOSHOWSEASONCLOSINGCOMMENT_OFFSET UNITYSDK_OFFSET(0x1829710)
#define ARENAOBJECT_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1820430)
#define ARENAOBJECT_SYNC_OFFSET UNITYSDK_OFFSET(0x1829960)
#define ARENAOBJECT_SYNC_OFFSET UNITYSDK_OFFSET(0x1829980)
#define ARENAOBJECT_SYNC_OFFSET UNITYSDK_OFFSET(0x1829B10)
#define ARENAOBJECT_SYNC_OFFSET UNITYSDK_OFFSET(0x1829C80)
#define ARENAOBJECT_SYNC_OFFSET UNITYSDK_OFFSET(0x1829CC0)
#define ARENAOBJECT_SYNC_OFFSET UNITYSDK_OFFSET(0x1829DF0)
#define ARENAOBJECT_SYNC_OFFSET UNITYSDK_OFFSET(0x1829FA0)
#define ARENAOBJECT_SYNC_OFFSET UNITYSDK_OFFSET(0x1829FE0)
#define ARENAOBJECT_SYNC_OFFSET UNITYSDK_OFFSET(0x182A010)
#define ARENAOBJECT_CANBATTLE_OFFSET UNITYSDK_OFFSET(0x182A050)
#define ARENAOBJECT_ISOFFENSIBLE_OFFSET UNITYSDK_OFFSET(0x182A080)
#define ARENAOBJECT_ISDEFENSIBLE_OFFSET UNITYSDK_OFFSET(0x182A360)
#define ARENAOBJECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1827830)

	inline static constexpr unsigned int ArenaObject_TypeDefinitionIndex = 1307;

	class ArenaObject : public Il2CppObject
	{
	public:
		ArenaOpponentRefresher* _OpponentRefresher_k__BackingField; // 0x10
		::MX::GameLogic::DBModel::ArenaBattleDB* _BattleDBCache_k__BackingField; // 0x18
		::System::Int64 _OffenseEchelonEntityId_k__BackingField; // 0x20
		::System::Int64 _DefenseEchelonEntityId_k__BackingField; // 0x28
		::System::Int64 _DefenseMapId_k__BackingField; // 0x30
		::MX::GameLogic::DBModel::ArenaPlayerInfoDB* _ArenaPlayerInfoDB_k__BackingField; // 0x38
		::MX::GameLogic::Parcel::ParcelResultDB* _ParcelResult_k__BackingField; // 0x40
		::MX::GameLogic::Parcel::ParcelResultDB* _SeasonRewards_k__BackingField; // 0x48
		::MX::GameLogic::Parcel::ParcelResultDB* _AllTimeRewards_k__BackingField; // 0x50
		::System::DateTime* _LastHistoryRequestTime_k__BackingField; // 0x58
		::System::Int64 _PrevSeasonRecord_k__BackingField; // 0x60
		::System::Int64 _PrevAllTimeRecord_k__BackingField; // 0x68

		ArenaOpponentRefresher* get_OpponentRefresher()
		{
			return ((ArenaOpponentRefresher*(*)(::PVOID))((::PBYTE)hIl2Cpp + ARENAOBJECT_GET_OPPONENTREFRESHER_OFFSET))(nullptr);
		}

		::System::Void set_OpponentRefresher(ArenaOpponentRefresher* arg)
		{
			((::System::Void(*)(ArenaOpponentRefresher*, ::PVOID))((::PBYTE)hIl2Cpp + ARENAOBJECT_SET_OPPONENTREFRESHER_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::ArenaBattleDB* get_BattleDBCache()
		{
			return ((::MX::GameLogic::DBModel::ArenaBattleDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + ARENAOBJECT_GET_BATTLEDBCACHE_OFFSET))(nullptr);
		}

		::System::Void set_BattleDBCache(::MX::GameLogic::DBModel::ArenaBattleDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ArenaBattleDB*, ::PVOID))((::PBYTE)hIl2Cpp + ARENAOBJECT_SET_BATTLEDBCACHE_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_OffenseEchelonEntityId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + ARENAOBJECT_GET_OFFENSEECHELONENTITYID_OFFSET))(nullptr);
		}

		::System::Void set_OffenseEchelonEntityId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + ARENAOBJECT_SET_OFFENSEECHELONENTITYID_OFFSET))(arg, nullptr);
		}

		EchelonObject* get_OffenseEchelon()
		{
			return ((EchelonObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ARENAOBJECT_GET_OFFENSEECHELON_OFFSET))(nullptr);
		}

		::System::Int64 get_DefenseEchelonEntityId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + ARENAOBJECT_GET_DEFENSEECHELONENTITYID_OFFSET))(nullptr);
		}

		::System::Void set_DefenseEchelonEntityId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + ARENAOBJECT_SET_DEFENSEECHELONENTITYID_OFFSET))(arg, nullptr);
		}

		EchelonObject* get_DefenseEchelon()
		{
			return ((EchelonObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ARENAOBJECT_GET_DEFENSEECHELON_OFFSET))(nullptr);
		}

		::System::Int64 get_DefenseMapId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + ARENAOBJECT_GET_DEFENSEMAPID_OFFSET))(nullptr);
		}

		::System::Void set_DefenseMapId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + ARENAOBJECT_SET_DEFENSEMAPID_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::ArenaPlayerInfoDB* get_ArenaPlayerInfoDB()
		{
			return ((::MX::GameLogic::DBModel::ArenaPlayerInfoDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + ARENAOBJECT_GET_ARENAPLAYERINFODB_OFFSET))(nullptr);
		}

		::System::Void set_ArenaPlayerInfoDB(::MX::GameLogic::DBModel::ArenaPlayerInfoDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ArenaPlayerInfoDB*, ::PVOID))((::PBYTE)hIl2Cpp + ARENAOBJECT_SET_ARENAPLAYERINFODB_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::Parcel::ParcelResultDB* get_ParcelResult()
		{
			return ((::MX::GameLogic::Parcel::ParcelResultDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + ARENAOBJECT_GET_PARCELRESULT_OFFSET))(nullptr);
		}

		::System::Void set_ParcelResult(::MX::GameLogic::Parcel::ParcelResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + ARENAOBJECT_SET_PARCELRESULT_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::Parcel::ParcelResultDB* get_SeasonRewards()
		{
			return ((::MX::GameLogic::Parcel::ParcelResultDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + ARENAOBJECT_GET_SEASONREWARDS_OFFSET))(nullptr);
		}

		::System::Void set_SeasonRewards(::MX::GameLogic::Parcel::ParcelResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + ARENAOBJECT_SET_SEASONREWARDS_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::Parcel::ParcelResultDB* get_AllTimeRewards()
		{
			return ((::MX::GameLogic::Parcel::ParcelResultDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + ARENAOBJECT_GET_ALLTIMEREWARDS_OFFSET))(nullptr);
		}

		::System::Void set_AllTimeRewards(::MX::GameLogic::Parcel::ParcelResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + ARENAOBJECT_SET_ALLTIMEREWARDS_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_SeasonId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + ARENAOBJECT_GET_SEASONID_OFFSET))(nullptr);
		}

		::System::Int64 get_GroupId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + ARENAOBJECT_GET_GROUPID_OFFSET))(nullptr);
		}

		::System::Int64 get_Rank()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + ARENAOBJECT_GET_RANK_OFFSET))(nullptr);
		}

		::System::Int64 get_SeasonRecord()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + ARENAOBJECT_GET_SEASONRECORD_OFFSET))(nullptr);
		}

		::System::Int64 get_AllTimeRecord()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + ARENAOBJECT_GET_ALLTIMERECORD_OFFSET))(nullptr);
		}

		::System::Int64 get_CumulativeTimeReward()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + ARENAOBJECT_GET_CUMULATIVETIMEREWARD_OFFSET))(nullptr);
		}

		::System::DateTime* get_BattleEnterActiveTime()
		{
			return ((::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + ARENAOBJECT_GET_BATTLEENTERACTIVETIME_OFFSET))(nullptr);
		}

		::System::DateTime* get_DailyRewardActiveTime()
		{
			return ((::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + ARENAOBJECT_GET_DAILYREWARDACTIVETIME_OFFSET))(nullptr);
		}

		::System::Int64 get_TicketAmount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + ARENAOBJECT_GET_TICKETAMOUNT_OFFSET))(nullptr);
		}

		::System::DateTime* get_LastHistoryRequestTime()
		{
			return ((::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + ARENAOBJECT_GET_LASTHISTORYREQUESTTIME_OFFSET))(nullptr);
		}

		::System::Void set_LastHistoryRequestTime(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + ARENAOBJECT_SET_LASTHISTORYREQUESTTIME_OFFSET))(arg, nullptr);
		}

		::System::Void SetLastHistoryRequestTime()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ARENAOBJECT_SETLASTHISTORYREQUESTTIME_OFFSET))(nullptr);
		}

		::System::Void ResetLastHistoryRequestTime()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ARENAOBJECT_RESETLASTHISTORYREQUESTTIME_OFFSET))(nullptr);
		}

		::System::Boolean CanRequestHistory()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ARENAOBJECT_CANREQUESTHISTORY_OFFSET))(nullptr);
		}

		::System::Boolean get_ShowRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ARENAOBJECT_GET_SHOWREDDOT_OFFSET))(nullptr);
		}

		::System::Boolean get_ShowYellowDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ARENAOBJECT_GET_SHOWYELLOWDOT_OFFSET))(nullptr);
		}

		::System::Boolean get_IsSeasonOpen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ARENAOBJECT_GET_ISSEASONOPEN_OFFSET))(nullptr);
		}

		::System::Int64 get_PrevSeasonRecord()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + ARENAOBJECT_GET_PREVSEASONRECORD_OFFSET))(nullptr);
		}

		::System::Void set_PrevSeasonRecord(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + ARENAOBJECT_SET_PREVSEASONRECORD_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_PrevAllTimeRecord()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + ARENAOBJECT_GET_PREVALLTIMERECORD_OFFSET))(nullptr);
		}

		::System::Void set_PrevAllTimeRecord(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + ARENAOBJECT_SET_PREVALLTIMERECORD_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_NeedsToShowRankChangedFx()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ARENAOBJECT_GET_NEEDSTOSHOWRANKCHANGEDFX_OFFSET))(nullptr);
		}

		::System::Boolean ShowSeasonGuide()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ARENAOBJECT_SHOWSEASONGUIDE_OFFSET))(nullptr);
		}

		::System::Void SaveSeasonGuideCheck()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ARENAOBJECT_SAVESEASONGUIDECHECK_OFFSET))(nullptr);
		}

		::System::Boolean get_HasToShowSeasonClosingComment()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ARENAOBJECT_GET_HASTOSHOWSEASONCLOSINGCOMMENT_OFFSET))(nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ARENAOBJECT_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void Sync(::MX::NetworkProtocol::ArenaLoginResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::ArenaLoginResponse*, ::PVOID))((::PBYTE)hIl2Cpp + ARENAOBJECT_SYNC_OFFSET))(arg, nullptr);
		}

		::System::Void Sync(::MX::NetworkProtocol::ArenaEnterLobbyResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::ArenaEnterLobbyResponse*, ::PVOID))((::PBYTE)hIl2Cpp + ARENAOBJECT_SYNC_OFFSET))(arg, nullptr);
		}

		::System::Void Sync(::MX::NetworkProtocol::ArenaOpponentListResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::ArenaOpponentListResponse*, ::PVOID))((::PBYTE)hIl2Cpp + ARENAOBJECT_SYNC_OFFSET))(arg, nullptr);
		}

		::System::Void Sync(::MX::NetworkProtocol::ArenaSyncEchelonSettingTimeResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::ArenaSyncEchelonSettingTimeResponse*, ::PVOID))((::PBYTE)hIl2Cpp + ARENAOBJECT_SYNC_OFFSET))(arg, nullptr);
		}

		::System::Void Sync(::MX::NetworkProtocol::ArenaEnterBattleResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::ArenaEnterBattleResponse*, ::PVOID))((::PBYTE)hIl2Cpp + ARENAOBJECT_SYNC_OFFSET))(arg, nullptr);
		}

		::System::Void Sync(::MX::NetworkProtocol::ArenaEnterBattlePart2Response* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::ArenaEnterBattlePart2Response*, ::PVOID))((::PBYTE)hIl2Cpp + ARENAOBJECT_SYNC_OFFSET))(arg, nullptr);
		}

		::System::Void Sync(::MX::NetworkProtocol::ArenaCumulativeTimeRewardResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::ArenaCumulativeTimeRewardResponse*, ::PVOID))((::PBYTE)hIl2Cpp + ARENAOBJECT_SYNC_OFFSET))(arg, nullptr);
		}

		::System::Void Sync(::MX::NetworkProtocol::ArenaDailyRewardResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::ArenaDailyRewardResponse*, ::PVOID))((::PBYTE)hIl2Cpp + ARENAOBJECT_SYNC_OFFSET))(arg, nullptr);
		}

		::System::Void Sync(::FlatData::EchelonType* arg, ::MX::GameLogic::DBModel::EchelonDB* arg2)
		{
			((::System::Void(*)(::FlatData::EchelonType*, ::MX::GameLogic::DBModel::EchelonDB*, ::PVOID))((::PBYTE)hIl2Cpp + ARENAOBJECT_SYNC_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean CanBattle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ARENAOBJECT_CANBATTLE_OFFSET))(nullptr);
		}

		::System::Boolean IsOffensible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ARENAOBJECT_ISOFFENSIBLE_OFFSET))(nullptr);
		}

		::System::Boolean IsDefensible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ARENAOBJECT_ISDEFENSIBLE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ARENAOBJECT_.CTOR_OFFSET))(nullptr);
		}

	};

