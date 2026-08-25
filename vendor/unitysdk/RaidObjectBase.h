#pragma once
#include "unitysdk.h"

namespace FlatData { class ContentType; }
namespace MX::Data { class RaidSeasonInfo; }
namespace FlatData { class RaidSeasonType; }
namespace MX::GameLogic::DBModel { class RaidLobbyInfoDB; }
namespace MX::GameLogic::DBModel { class ClanAssistUseInfo; }
namespace MX::GameLogic::Parcel { class ParcelResultDB; }
class RaidRetryInfo;
class RaidEndBattleResponseInfo;
namespace MX::Logic::Data { class BattleTypes; }
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }
namespace MX::NetworkProtocol { class ServerNotificationFlag; }
namespace FlatData { class Difficulty; }
namespace MX::GameLogic::DBModel { class RaidDB; }
namespace MX::NetworkProtocol { class ResponsePacket; }
class RaidDifficultyFilter;
namespace MX::NetworkProtocol { class ErrorPacket; }
namespace FlatData { class EchelonType; }
namespace MX::Logic::Data { class BattleSetting; }

#define RAIDOBJECTBASE_SYNCRECEIVEREWARD_OFFSET UNITYSDK_OFFSET(0x1ED2420)
#define RAIDOBJECTBASE_GETCONTENTTYPEBYBATTLETYPE_OFFSET UNITYSDK_OFFSET(0x1ED2430)
#define RAIDOBJECTBASE_HANDLEENTERBATTLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x000000)
#define RAIDOBJECTBASE_SET_RECEIVERANKINGREWARDID_OFFSET UNITYSDK_OFFSET(0x1ED2460)
#define RAIDOBJECTBASE_ISSEASONOPEN_OFFSET UNITYSDK_OFFSET(0x000000)
#define RAIDOBJECTBASE_GETRECEIVEREWARDFLAG_OFFSET UNITYSDK_OFFSET(0x1ED2470)
#define RAIDOBJECTBASE_SET_RAIDCLANASSISTUSEINFO_OFFSET UNITYSDK_OFFSET(0x1ED2480)
#define RAIDOBJECTBASE_SET_FAILCOMPENSATEREWARD_OFFSET UNITYSDK_OFFSET(0x1ED2490)
#define RAIDOBJECTBASE_SHOWREDDOT_OFFSET UNITYSDK_OFFSET(0x000000)
#define RAIDOBJECTBASE_RESETPERCENTAGEFILTER_OFFSET UNITYSDK_OFFSET(0x1ED24A0)
#define RAIDOBJECTBASE_GETHIGHERDIFFICULTYRANKCOUNTSUM_OFFSET UNITYSDK_OFFSET(0x1ED24B0)
#define RAIDOBJECTBASE_GET_FAILCOMPENSATEREWARD_OFFSET UNITYSDK_OFFSET(0x1ED2650)
#define RAIDOBJECTBASE_SET_RAIDSEASONINFO_OFFSET UNITYSDK_OFFSET(0x1ED2660)
#define RAIDOBJECTBASE_SET_RANKBRACKETS_OFFSET UNITYSDK_OFFSET(0x1ED2670)
#define RAIDOBJECTBASE_GET_RECEIVERANKINGREWARDID_OFFSET UNITYSDK_OFFSET(0x1ED2680)
#define RAIDOBJECTBASE_CURRENTSEASONHAVELIMITEDREWARDS_OFFSET UNITYSDK_OFFSET(0x000000)
#define RAIDOBJECTBASE_GET_RAIDLOBBYINFO_OFFSET UNITYSDK_OFFSET(0x1ED2690)
#define RAIDOBJECTBASE_SHOWFAILCOMPENSATEREWARD_OFFSET UNITYSDK_OFFSET(0x1ED26A0)
#define RAIDOBJECTBASE_RAIDRETRY_OFFSET UNITYSDK_OFFSET(0x1ED2720)
#define RAIDOBJECTBASE_GET_RAIDCLANASSISTUSEINFO_OFFSET UNITYSDK_OFFSET(0x1ED2770)
#define RAIDOBJECTBASE_CREATEBATTLE_OFFSET UNITYSDK_OFFSET(0x000000)
#define RAIDOBJECTBASE_SYNCRECEIVELIMITEDREWARD_OFFSET UNITYSDK_OFFSET(0x1ED2780)
#define RAIDOBJECTBASE_GET_RAIDSEASONINFO_OFFSET UNITYSDK_OFFSET(0x1ED27F0)
#define RAIDOBJECTBASE_REQUESTSWEEP_OFFSET UNITYSDK_OFFSET(0x000000)
#define RAIDOBJECTBASE_SYNCTOTALRANKINGPOINT_OFFSET UNITYSDK_OFFSET(0x1ED2800)
#define RAIDOBJECTBASE_SYNCRECEIVERANKINGREWARD_OFFSET UNITYSDK_OFFSET(0x1ED2820)
#define RAIDOBJECTBASE_GET_ISRETRY_OFFSET UNITYSDK_OFFSET(0x1ED2830)
#define RAIDOBJECTBASE_GIVEUP_OFFSET UNITYSDK_OFFSET(0x000000)
#define RAIDOBJECTBASE_SYNCRANKINGINDEX_OFFSET UNITYSDK_OFFSET(0x1ED2840)
#define RAIDOBJECTBASE_SET_RAIDSEASONTYPE_OFFSET UNITYSDK_OFFSET(0x1ED2930)
#define RAIDOBJECTBASE_SYNCLOGIN_OFFSET UNITYSDK_OFFSET(0x000000)
#define RAIDOBJECTBASE_NEEDUNLOCKANI_OFFSET UNITYSDK_OFFSET(0x000000)
#define RAIDOBJECTBASE_ENTERBATTLE_OFFSET UNITYSDK_OFFSET(0x000000)
#define RAIDOBJECTBASE_TRYGETSTARTRANKBYBRACKET_OFFSET UNITYSDK_OFFSET(0x1ED2940)
#define RAIDOBJECTBASE_SET_RAIDLOBBYINFO_OFFSET UNITYSDK_OFFSET(0x1ED2D60)
#define RAIDOBJECTBASE_GET_RECEIVEREWARDID_OFFSET UNITYSDK_OFFSET(0x1ED2D70)
#define RAIDOBJECTBASE_ENTERBATTLECUSTOMERROR_OFFSET UNITYSDK_OFFSET(0x000000)
#define RAIDOBJECTBASE_GET_PERCENTAGEFILTERCACHE_OFFSET UNITYSDK_OFFSET(0x1ED2D80)
#define RAIDOBJECTBASE_GET_RAIDSEASONTYPE_OFFSET UNITYSDK_OFFSET(0x1ED2D90)
#define RAIDOBJECTBASE_SET_RAIDCONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x1ED2DA0)
#define RAIDOBJECTBASE_SET_ISRETRY_OFFSET UNITYSDK_OFFSET(0x1ED2DB0)
#define RAIDOBJECTBASE_SET_RECEIVELIMITEDREWARDID_OFFSET UNITYSDK_OFFSET(0x1ED2DC0)
#define RAIDOBJECTBASE_SYNCGIVEUP_OFFSET UNITYSDK_OFFSET(0x000000)
#define RAIDOBJECTBASE_OPENLOBBY_OFFSET UNITYSDK_OFFSET(0x000000)
#define RAIDOBJECTBASE_GETECHELONTYPE_OFFSET UNITYSDK_OFFSET(0x000000)
#define RAIDOBJECTBASE_SHOWYELLOWDOT_OFFSET UNITYSDK_OFFSET(0x000000)
#define RAIDOBJECTBASE_SET_PERCENTAGEFILTERCACHE_OFFSET UNITYSDK_OFFSET(0x1ED2DD0)
#define RAIDOBJECTBASE_HANDLECREATEBATTLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x000000)
#define RAIDOBJECTBASE_SET_RECEIVEREWARDID_OFFSET UNITYSDK_OFFSET(0x1ED2DE0)
#define RAIDOBJECTBASE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1ED2DF0)
#define RAIDOBJECTBASE_ISCOMPENSATECHANCEREMAIN_OFFSET UNITYSDK_OFFSET(0x1ED2E80)
#define RAIDOBJECTBASE_GET_RAIDCONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x1ED2F40)
#define RAIDOBJECTBASE_SYNCLOBBY_OFFSET UNITYSDK_OFFSET(0x000000)
#define RAIDOBJECTBASE_STARTRAID_OFFSET UNITYSDK_OFFSET(0x1ED2F50)
#define RAIDOBJECTBASE_GET_RANKBRACKETS_OFFSET UNITYSDK_OFFSET(0x1ED3540)
#define RAIDOBJECTBASE_GET_RECEIVELIMITEDREWARDID_OFFSET UNITYSDK_OFFSET(0x1ED3550)

	inline static constexpr unsigned int RaidObjectBase_TypeDefinitionIndex = 1802;

	class RaidObjectBase : public Il2CppObject
	{
	public:
		::FlatData::ContentType* _RaidContentType_k__BackingField; // 0x10
		::MX::Data::RaidSeasonInfo* _RaidSeasonInfo_k__BackingField; // 0x18
		Il2CppObject* _ReceiveRewardId_k__BackingField; // 0x20
		Il2CppObject* _ReceiveLimitedRewardId_k__BackingField; // 0x28
		::System::Int64 _ReceiveRankingRewardId_k__BackingField; // 0x30
		::FlatData::RaidSeasonType* _RaidSeasonType_k__BackingField; // 0x38
		::MX::GameLogic::DBModel::RaidLobbyInfoDB* _RaidLobbyInfo_k__BackingField; // 0x40
		::MX::GameLogic::DBModel::ClanAssistUseInfo* _RaidClanAssistUseInfo_k__BackingField; // 0x48
		::MX::GameLogic::Parcel::ParcelResultDB* _FailCompensateReward_k__BackingField; // 0x50
		Il2CppObject* _RankBrackets_k__BackingField; // 0x58
		::System::Boolean CanReceiveRankingReward; // 0x60
		::System::Boolean ArrivalNewBestRanking; // 0x61
		::System::Boolean NeedResultPopup; // 0x62
		::System::Int64 OldRanking; // 0x68
		::System::Int64 ResultPopupRankingPoint; // 0x70
		::System::Int64 ResultRankingBreakPoint; // 0x78
		Il2CppObject* OldTier; // 0x80
		::System::Int64 LastSettledRanking; // 0x88
		Il2CppObject* LastSettledTier; // 0x90
		::System::Boolean _IsRetry_k__BackingField; // 0x98
		RaidRetryInfo* raidRetryInfo; // 0xA0
		RaidEndBattleResponseInfo* RaidEndBattleResponse; // 0xA8
		::System::Int32 _PercentageFilterCache_k__BackingField; // 0xB0

		::System::Void SyncReceiveReward(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + RAIDOBJECTBASE_SYNCRECEIVEREWARD_OFFSET))(arg, nullptr);
		}

		::FlatData::ContentType* GetContentTypeByBattleType(::MX::Logic::Data::BattleTypes* arg)
		{
			return ((::FlatData::ContentType*(*)(::MX::Logic::Data::BattleTypes*, ::PVOID))((::PBYTE)hIl2Cpp + RAIDOBJECTBASE_GETCONTENTTYPEBYBATTLETYPE_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleEnterBattleMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + RAIDOBJECTBASE_HANDLEENTERBATTLEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void set_ReceiveRankingRewardId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + RAIDOBJECTBASE_SET_RECEIVERANKINGREWARDID_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsSeasonOpen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDOBJECTBASE_ISSEASONOPEN_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::ServerNotificationFlag* GetReceiveRewardFlag()
		{
			return ((::MX::NetworkProtocol::ServerNotificationFlag*(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDOBJECTBASE_GETRECEIVEREWARDFLAG_OFFSET))(nullptr);
		}

		::System::Void set_RaidClanAssistUseInfo(::MX::GameLogic::DBModel::ClanAssistUseInfo* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ClanAssistUseInfo*, ::PVOID))((::PBYTE)hIl2Cpp + RAIDOBJECTBASE_SET_RAIDCLANASSISTUSEINFO_OFFSET))(arg, nullptr);
		}

		::System::Void set_FailCompensateReward(::MX::GameLogic::Parcel::ParcelResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + RAIDOBJECTBASE_SET_FAILCOMPENSATEREWARD_OFFSET))(arg, nullptr);
		}

		::System::Boolean ShowRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDOBJECTBASE_SHOWREDDOT_OFFSET))(nullptr);
		}

		::System::Void ResetPercentageFilter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDOBJECTBASE_RESETPERCENTAGEFILTER_OFFSET))(nullptr);
		}

		::System::Int64 GetHigherDifficultyRankCountSum(Il2CppObject* arg, ::FlatData::Difficulty* arg2)
		{
			return ((::System::Int64(*)(Il2CppObject*, ::FlatData::Difficulty*, ::PVOID))((::PBYTE)hIl2Cpp + RAIDOBJECTBASE_GETHIGHERDIFFICULTYRANKCOUNTSUM_OFFSET))(arg, arg2, nullptr);
		}

		::MX::GameLogic::Parcel::ParcelResultDB* get_FailCompensateReward()
		{
			return ((::MX::GameLogic::Parcel::ParcelResultDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDOBJECTBASE_GET_FAILCOMPENSATEREWARD_OFFSET))(nullptr);
		}

		::System::Void set_RaidSeasonInfo(::MX::Data::RaidSeasonInfo* arg)
		{
			((::System::Void(*)(::MX::Data::RaidSeasonInfo*, ::PVOID))((::PBYTE)hIl2Cpp + RAIDOBJECTBASE_SET_RAIDSEASONINFO_OFFSET))(arg, nullptr);
		}

		::System::Void set_RankBrackets(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + RAIDOBJECTBASE_SET_RANKBRACKETS_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_ReceiveRankingRewardId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDOBJECTBASE_GET_RECEIVERANKINGREWARDID_OFFSET))(nullptr);
		}

		::System::Boolean CurrentSeasonHaveLimitedRewards()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDOBJECTBASE_CURRENTSEASONHAVELIMITEDREWARDS_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::RaidLobbyInfoDB* get_RaidLobbyInfo()
		{
			return ((::MX::GameLogic::DBModel::RaidLobbyInfoDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDOBJECTBASE_GET_RAIDLOBBYINFO_OFFSET))(nullptr);
		}

		::System::Void ShowFailCompensateReward()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDOBJECTBASE_SHOWFAILCOMPENSATEREWARD_OFFSET))(nullptr);
		}

		::System::Void RaidRetry()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDOBJECTBASE_RAIDRETRY_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::ClanAssistUseInfo* get_RaidClanAssistUseInfo()
		{
			return ((::MX::GameLogic::DBModel::ClanAssistUseInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDOBJECTBASE_GET_RAIDCLANASSISTUSEINFO_OFFSET))(nullptr);
		}

		::System::Void CreateBattle(::System::Int64 arg, ::FlatData::Difficulty* arg2, ::System::Boolean arg3, ::System::Int32 arg4, ::System::Boolean arg5, ::MX::GameLogic::DBModel::ClanAssistUseInfo* arg6)
		{
			((::System::Void(*)(::System::Int64, ::FlatData::Difficulty*, ::System::Boolean, ::System::Int32, ::System::Boolean, ::MX::GameLogic::DBModel::ClanAssistUseInfo*, ::PVOID))((::PBYTE)hIl2Cpp + RAIDOBJECTBASE_CREATEBATTLE_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		::System::Void SyncReceiveLimitedReward(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + RAIDOBJECTBASE_SYNCRECEIVELIMITEDREWARD_OFFSET))(arg, nullptr);
		}

		::MX::Data::RaidSeasonInfo* get_RaidSeasonInfo()
		{
			return ((::MX::Data::RaidSeasonInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDOBJECTBASE_GET_RAIDSEASONINFO_OFFSET))(nullptr);
		}

		::System::Void RequestSweep(::System::Int64 arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + RAIDOBJECTBASE_REQUESTSWEEP_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SyncTotalRankingPoint(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + RAIDOBJECTBASE_SYNCTOTALRANKINGPOINT_OFFSET))(arg, nullptr);
		}

		::System::Void SyncReceiveRankingReward(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + RAIDOBJECTBASE_SYNCRECEIVERANKINGREWARD_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsRetry()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDOBJECTBASE_GET_ISRETRY_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* GiveUp(::MX::GameLogic::DBModel::RaidDB* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::MX::GameLogic::DBModel::RaidDB*, ::PVOID))((::PBYTE)hIl2Cpp + RAIDOBJECTBASE_GIVEUP_OFFSET))(arg, nullptr);
		}

		::System::Void SyncRankingIndex(::MX::NetworkProtocol::ResponsePacket* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::ResponsePacket*, ::PVOID))((::PBYTE)hIl2Cpp + RAIDOBJECTBASE_SYNCRANKINGINDEX_OFFSET))(arg, nullptr);
		}

		::System::Void set_RaidSeasonType(::FlatData::RaidSeasonType* arg)
		{
			((::System::Void(*)(::FlatData::RaidSeasonType*, ::PVOID))((::PBYTE)hIl2Cpp + RAIDOBJECTBASE_SET_RAIDSEASONTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void SyncLogin(::MX::NetworkProtocol::ResponsePacket* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::ResponsePacket*, ::PVOID))((::PBYTE)hIl2Cpp + RAIDOBJECTBASE_SYNCLOGIN_OFFSET))(arg, nullptr);
		}

		::System::Boolean NeedUnlockAni(::System::Int64 arg)
		{
			return ((::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + RAIDOBJECTBASE_NEEDUNLOCKANI_OFFSET))(arg, nullptr);
		}

		::System::Void EnterBattle(::MX::GameLogic::DBModel::RaidDB* arg, ::System::Int32 arg2, ::MX::GameLogic::DBModel::ClanAssistUseInfo* arg3, ::System::Boolean arg4)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::RaidDB*, ::System::Int32, ::MX::GameLogic::DBModel::ClanAssistUseInfo*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + RAIDOBJECTBASE_ENTERBATTLE_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Boolean TryGetStartRankByBracket(RaidDifficultyFilter* arg, Il2CppObject* arg2, int64_t&* arg3, int64_t&* arg4, Il2CppObject&* arg5)
		{
			return ((::System::Boolean(*)(RaidDifficultyFilter*, Il2CppObject*, int64_t&*, int64_t&*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + RAIDOBJECTBASE_TRYGETSTARTRANKBYBRACKET_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Void set_RaidLobbyInfo(::MX::GameLogic::DBModel::RaidLobbyInfoDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::RaidLobbyInfoDB*, ::PVOID))((::PBYTE)hIl2Cpp + RAIDOBJECTBASE_SET_RAIDLOBBYINFO_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_ReceiveRewardId()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDOBJECTBASE_GET_RECEIVEREWARDID_OFFSET))(nullptr);
		}

		::System::Boolean EnterBattleCustomError(::MX::NetworkProtocol::ErrorPacket* arg)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::ErrorPacket*, ::PVOID))((::PBYTE)hIl2Cpp + RAIDOBJECTBASE_ENTERBATTLECUSTOMERROR_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_PercentageFilterCache()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDOBJECTBASE_GET_PERCENTAGEFILTERCACHE_OFFSET))(nullptr);
		}

		::FlatData::RaidSeasonType* get_RaidSeasonType()
		{
			return ((::FlatData::RaidSeasonType*(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDOBJECTBASE_GET_RAIDSEASONTYPE_OFFSET))(nullptr);
		}

		::System::Void set_RaidContentType(::FlatData::ContentType* arg)
		{
			((::System::Void(*)(::FlatData::ContentType*, ::PVOID))((::PBYTE)hIl2Cpp + RAIDOBJECTBASE_SET_RAIDCONTENTTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void set_IsRetry(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + RAIDOBJECTBASE_SET_ISRETRY_OFFSET))(arg, nullptr);
		}

		::System::Void set_ReceiveLimitedRewardId(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + RAIDOBJECTBASE_SET_RECEIVELIMITEDREWARDID_OFFSET))(arg, nullptr);
		}

		::System::Void SyncGiveUp(::MX::NetworkProtocol::ResponsePacket* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::ResponsePacket*, ::PVOID))((::PBYTE)hIl2Cpp + RAIDOBJECTBASE_SYNCGIVEUP_OFFSET))(arg, nullptr);
		}

		::System::Void OpenLobby()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDOBJECTBASE_OPENLOBBY_OFFSET))(nullptr);
		}

		::FlatData::EchelonType* GetEchelonType()
		{
			return ((::FlatData::EchelonType*(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDOBJECTBASE_GETECHELONTYPE_OFFSET))(nullptr);
		}

		::System::Boolean ShowYellowDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDOBJECTBASE_SHOWYELLOWDOT_OFFSET))(nullptr);
		}

		::System::Void set_PercentageFilterCache(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + RAIDOBJECTBASE_SET_PERCENTAGEFILTERCACHE_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleCreateBattleMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + RAIDOBJECTBASE_HANDLECREATEBATTLEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void set_ReceiveRewardId(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + RAIDOBJECTBASE_SET_RECEIVEREWARDID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDOBJECTBASE_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean IsCompensateChanceRemain(::System::Int32 arg)
		{
			return ((::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + RAIDOBJECTBASE_ISCOMPENSATECHANCEREMAIN_OFFSET))(arg, nullptr);
		}

		::FlatData::ContentType* get_RaidContentType()
		{
			return ((::FlatData::ContentType*(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDOBJECTBASE_GET_RAIDCONTENTTYPE_OFFSET))(nullptr);
		}

		::System::Void SyncLobby(::MX::NetworkProtocol::ResponsePacket* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::ResponsePacket*, ::PVOID))((::PBYTE)hIl2Cpp + RAIDOBJECTBASE_SYNCLOBBY_OFFSET))(arg, nullptr);
		}

		::System::Void StartRaid(::System::Int64 arg, ::MX::Logic::Data::BattleSetting* arg2)
		{
			((::System::Void(*)(::System::Int64, ::MX::Logic::Data::BattleSetting*, ::PVOID))((::PBYTE)hIl2Cpp + RAIDOBJECTBASE_STARTRAID_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* get_RankBrackets()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDOBJECTBASE_GET_RANKBRACKETS_OFFSET))(nullptr);
		}

		Il2CppObject* get_ReceiveLimitedRewardId()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDOBJECTBASE_GET_RECEIVELIMITEDREWARDID_OFFSET))(nullptr);
		}

	};

