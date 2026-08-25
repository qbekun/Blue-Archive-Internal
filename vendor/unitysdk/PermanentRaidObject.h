#pragma once
#include "unitysdk.h"

namespace MX::GameLogic::DBModel { class PermanentRaidBattleHistoryDB; }
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }
namespace MX::NetworkProtocol { class ResponsePacket; }
class UIPermanentRaidLobby;
namespace MX::GameLogic::DBModel { class RaidDB; }
namespace MX::GameLogic::DBModel { class ClanAssistUseInfo; }
namespace MX::GameLogic::DBModel { class AssistCharacterDB; }
namespace MX::NetworkProtocol { class PermanentRaidEndBattleResponse; }
namespace FlatData { class Difficulty; }
namespace FlatData { class EchelonType; }
namespace MX::NetworkProtocol { class ErrorPacket; }
namespace FlatData { class RaidBossGroupType; }

#define PERMANENTRAIDOBJECT_TRYGETSTAGERECORD_OFFSET UNITYSDK_OFFSET(0x1ECD590)
#define PERMANENTRAIDOBJECT_GET_SHOULDSHOWNEWRECORDPOPUP_OFFSET UNITYSDK_OFFSET(0x1ECD6A0)
#define PERMANENTRAIDOBJECT_FINDHIGHESTSCORE_OFFSET UNITYSDK_OFFSET(0x1ECD6B0)
#define PERMANENTRAIDOBJECT_GET_BATTLEHISTORYDB_OFFSET UNITYSDK_OFFSET(0x1ECDB60)
#define PERMANENTRAIDOBJECT_SET_BATTLEHISTORYDB_OFFSET UNITYSDK_OFFSET(0x1ECDB70)
#define PERMANENTRAIDOBJECT_SHOWYELLOWDOT_OFFSET UNITYSDK_OFFSET(0x1ECDCD0)
#define PERMANENTRAIDOBJECT_HANDLEENTERBATTLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1ECDCE0)
#define PERMANENTRAIDOBJECT_SHOWREDDOT_OFFSET UNITYSDK_OFFSET(0x1ECDCF0)
#define PERMANENTRAIDOBJECT_HANDLECREATEBATTLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1ECDD00)
#define PERMANENTRAIDOBJECT_GET_BOSSMANAGEDBS_OFFSET UNITYSDK_OFFSET(0x1ECDD10)
#define PERMANENTRAIDOBJECT_NEEDUNLOCKANI_OFFSET UNITYSDK_OFFSET(0x1ECDD20)
#define PERMANENTRAIDOBJECT_SYNCLOGIN_OFFSET UNITYSDK_OFFSET(0x1ECDD30)
#define PERMANENTRAIDOBJECT_GET_AVAILABLEBOSSGROUPTYPES_OFFSET UNITYSDK_OFFSET(0x1ECDD40)
#define PERMANENTRAIDOBJECT_SET_BESTRANKINGPOINT_OFFSET UNITYSDK_OFFSET(0x1ECDD50)
#define PERMANENTRAIDOBJECT_SET_BESTSCOREHISTORYDBS_OFFSET UNITYSDK_OFFSET(0x1ECDD60)
#define PERMANENTRAIDOBJECT_CURRENTSEASONHAVELIMITEDREWARDS_OFFSET UNITYSDK_OFFSET(0x1ECDD80)
#define PERMANENTRAIDOBJECT_CLEARBATTLEHISTORYDB_OFFSET UNITYSDK_OFFSET(0x1ECDD90)
#define PERMANENTRAIDOBJECT_GET_BESTSCOREHISTORYDBS_OFFSET UNITYSDK_OFFSET(0x1ECDDA0)
#define PERMANENTRAIDOBJECT_SET_AVAILABLEBOSSGROUPTYPES_OFFSET UNITYSDK_OFFSET(0x1ECDDB0)
#define PERMANENTRAIDOBJECT__ONERROR_B__44_0_OFFSET UNITYSDK_OFFSET(0x1ECDDD0)
#define PERMANENTRAIDOBJECT_GETPLAYINGRAIDBOSSGROUPTYPEANDINDEX_OFFSET UNITYSDK_OFFSET(0x1ECDED0)
#define PERMANENTRAIDOBJECT_ENTERBATTLE_OFFSET UNITYSDK_OFFSET(0x1ECE100)
#define PERMANENTRAIDOBJECT_SET_BOSSMANAGEDBS_OFFSET UNITYSDK_OFFSET(0x1ECE2B0)
#define PERMANENTRAIDOBJECT_STARTPERMANENTRAID_OFFSET UNITYSDK_OFFSET(0x1ECE2D0)
#define PERMANENTRAIDOBJECT_SYNCENDBATTLE_OFFSET UNITYSDK_OFFSET(0x1ECE550)
#define PERMANENTRAIDOBJECT_ISBOSSLOCKED_OFFSET UNITYSDK_OFFSET(0x1ECE5F0)
#define PERMANENTRAIDOBJECT_CLEARPOPUPFLAGS_OFFSET UNITYSDK_OFFSET(0x1ECE6C0)
#define PERMANENTRAIDOBJECT_GETECHELONTYPE_OFFSET UNITYSDK_OFFSET(0x1ECE6D0)
#define PERMANENTRAIDOBJECT_OPENLOBBY_OFFSET UNITYSDK_OFFSET(0x1ECE6E0)
#define PERMANENTRAIDOBJECT_ONERROR_OFFSET UNITYSDK_OFFSET(0x1ECE840)
#define PERMANENTRAIDOBJECT_ISSEASONOPEN_OFFSET UNITYSDK_OFFSET(0x1ECE8D0)
#define PERMANENTRAIDOBJECT_ENTERBATTLECUSTOMERROR_OFFSET UNITYSDK_OFFSET(0x1ECE8E0)
#define PERMANENTRAIDOBJECT_SYNCSCORE_OFFSET UNITYSDK_OFFSET(0x1ECE8F0)
#define PERMANENTRAIDOBJECT_GET_BESTRANKINGPOINT_OFFSET UNITYSDK_OFFSET(0x1ECEA80)
#define PERMANENTRAIDOBJECT_SELECTRAIDBOSSGROUP_OFFSET UNITYSDK_OFFSET(0x1ECEA90)
#define PERMANENTRAIDOBJECT_SYNCLOBBY_OFFSET UNITYSDK_OFFSET(0x1ECEC70)
#define PERMANENTRAIDOBJECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1ECF780)
#define PERMANENTRAIDOBJECT_SYNCGIVEUP_OFFSET UNITYSDK_OFFSET(0x1ECF8A0)
#define PERMANENTRAIDOBJECT_CREATEBATTLE_OFFSET UNITYSDK_OFFSET(0x1ECF920)
#define PERMANENTRAIDOBJECT_REQUESTSWEEP_OFFSET UNITYSDK_OFFSET(0x1ECFAB0)
#define PERMANENTRAIDOBJECT_GIVEUP_OFFSET UNITYSDK_OFFSET(0x1ECFAC0)
#define PERMANENTRAIDOBJECT_SETRAIDSEASONINFO_OFFSET UNITYSDK_OFFSET(0x1ECEB90)

	inline static constexpr unsigned int PermanentRaidObject_TypeDefinitionIndex = 1789;

	class PermanentRaidObject : public Il2CppObject
	{
	public:
		Il2CppObject* _BestScoreHistoryDBs_k__BackingField; // 0xB8
		Il2CppObject* _BossManageDBs_k__BackingField; // 0xC0
		Il2CppObject* _AvailableBossGroupTypes_k__BackingField; // 0xC8
		::System::Int64 _BestRankingPoint_k__BackingField; // 0xD0
		::MX::GameLogic::DBModel::PermanentRaidBattleHistoryDB* _battleHistoryDB; // 0xD8
		Il2CppObject* _bossDifficultyLockDic; // 0xE0

		::System::Boolean TryGetStageRecord(::System::Int64 arg, int64_t&* arg2)
		{
			return ((::System::Boolean(*)(::System::Int64, int64_t&*, ::PVOID))((::PBYTE)hIl2Cpp + PERMANENTRAIDOBJECT_TRYGETSTAGERECORD_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean get_ShouldShowNewRecordPopup()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PERMANENTRAIDOBJECT_GET_SHOULDSHOWNEWRECORDPOPUP_OFFSET))(nullptr);
		}

		Il2CppObject* FindHighestScore(::System::String* str)
		{
			return ((Il2CppObject*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + PERMANENTRAIDOBJECT_FINDHIGHESTSCORE_OFFSET))(str, nullptr);
		}

		::MX::GameLogic::DBModel::PermanentRaidBattleHistoryDB* get_BattleHistoryDB()
		{
			return ((::MX::GameLogic::DBModel::PermanentRaidBattleHistoryDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + PERMANENTRAIDOBJECT_GET_BATTLEHISTORYDB_OFFSET))(nullptr);
		}

		::System::Void set_BattleHistoryDB(::MX::GameLogic::DBModel::PermanentRaidBattleHistoryDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::PermanentRaidBattleHistoryDB*, ::PVOID))((::PBYTE)hIl2Cpp + PERMANENTRAIDOBJECT_SET_BATTLEHISTORYDB_OFFSET))(arg, nullptr);
		}

		::System::Boolean ShowYellowDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PERMANENTRAIDOBJECT_SHOWYELLOWDOT_OFFSET))(nullptr);
		}

		::System::Boolean HandleEnterBattleMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + PERMANENTRAIDOBJECT_HANDLEENTERBATTLEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Boolean ShowRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PERMANENTRAIDOBJECT_SHOWREDDOT_OFFSET))(nullptr);
		}

		::System::Boolean HandleCreateBattleMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + PERMANENTRAIDOBJECT_HANDLECREATEBATTLEMESSAGE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_BossManageDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + PERMANENTRAIDOBJECT_GET_BOSSMANAGEDBS_OFFSET))(nullptr);
		}

		::System::Boolean NeedUnlockAni(::System::Int64 arg)
		{
			return ((::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + PERMANENTRAIDOBJECT_NEEDUNLOCKANI_OFFSET))(arg, nullptr);
		}

		::System::Void SyncLogin(::MX::NetworkProtocol::ResponsePacket* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::ResponsePacket*, ::PVOID))((::PBYTE)hIl2Cpp + PERMANENTRAIDOBJECT_SYNCLOGIN_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_AvailableBossGroupTypes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + PERMANENTRAIDOBJECT_GET_AVAILABLEBOSSGROUPTYPES_OFFSET))(nullptr);
		}

		::System::Void set_BestRankingPoint(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + PERMANENTRAIDOBJECT_SET_BESTRANKINGPOINT_OFFSET))(arg, nullptr);
		}

		::System::Void set_BestScoreHistoryDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + PERMANENTRAIDOBJECT_SET_BESTSCOREHISTORYDBS_OFFSET))(arg, nullptr);
		}

		::System::Boolean CurrentSeasonHaveLimitedRewards()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PERMANENTRAIDOBJECT_CURRENTSEASONHAVELIMITEDREWARDS_OFFSET))(nullptr);
		}

		::System::Void ClearBattleHistoryDB()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PERMANENTRAIDOBJECT_CLEARBATTLEHISTORYDB_OFFSET))(nullptr);
		}

		Il2CppObject* get_BestScoreHistoryDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + PERMANENTRAIDOBJECT_GET_BESTSCOREHISTORYDBS_OFFSET))(nullptr);
		}

		::System::Void set_AvailableBossGroupTypes(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + PERMANENTRAIDOBJECT_SET_AVAILABLEBOSSGROUPTYPES_OFFSET))(arg, nullptr);
		}

		::System::Void _OnError_b__44_0(UIPermanentRaidLobby* arg)
		{
			((::System::Void(*)(UIPermanentRaidLobby*, ::PVOID))((::PBYTE)hIl2Cpp + PERMANENTRAIDOBJECT__ONERROR_B__44_0_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetPlayingRaidBossGroupTypeAndIndex()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + PERMANENTRAIDOBJECT_GETPLAYINGRAIDBOSSGROUPTYPEANDINDEX_OFFSET))(nullptr);
		}

		::System::Void EnterBattle(::MX::GameLogic::DBModel::RaidDB* arg, ::System::Int32 arg2, ::MX::GameLogic::DBModel::ClanAssistUseInfo* arg3, ::System::Boolean arg4)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::RaidDB*, ::System::Int32, ::MX::GameLogic::DBModel::ClanAssistUseInfo*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + PERMANENTRAIDOBJECT_ENTERBATTLE_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void set_BossManageDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + PERMANENTRAIDOBJECT_SET_BOSSMANAGEDBS_OFFSET))(arg, nullptr);
		}

		::System::Void StartPermanentRaid(::System::Int32 arg, ::MX::GameLogic::DBModel::AssistCharacterDB* arg2)
		{
			((::System::Void(*)(::System::Int32, ::MX::GameLogic::DBModel::AssistCharacterDB*, ::PVOID))((::PBYTE)hIl2Cpp + PERMANENTRAIDOBJECT_STARTPERMANENTRAID_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SyncEndBattle(::MX::NetworkProtocol::PermanentRaidEndBattleResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::PermanentRaidEndBattleResponse*, ::PVOID))((::PBYTE)hIl2Cpp + PERMANENTRAIDOBJECT_SYNCENDBATTLE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsBossLocked(::System::String* str, ::FlatData::Difficulty* arg)
		{
			return ((::System::Boolean(*)(::System::String*, ::FlatData::Difficulty*, ::PVOID))((::PBYTE)hIl2Cpp + PERMANENTRAIDOBJECT_ISBOSSLOCKED_OFFSET))(str, arg, nullptr);
		}

		::System::Void ClearPopupFlags()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PERMANENTRAIDOBJECT_CLEARPOPUPFLAGS_OFFSET))(nullptr);
		}

		::FlatData::EchelonType* GetEchelonType()
		{
			return ((::FlatData::EchelonType*(*)(::PVOID))((::PBYTE)hIl2Cpp + PERMANENTRAIDOBJECT_GETECHELONTYPE_OFFSET))(nullptr);
		}

		::System::Void OpenLobby()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PERMANENTRAIDOBJECT_OPENLOBBY_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* OnError()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + PERMANENTRAIDOBJECT_ONERROR_OFFSET))(nullptr);
		}

		::System::Boolean IsSeasonOpen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PERMANENTRAIDOBJECT_ISSEASONOPEN_OFFSET))(nullptr);
		}

		::System::Boolean EnterBattleCustomError(::MX::NetworkProtocol::ErrorPacket* arg)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::ErrorPacket*, ::PVOID))((::PBYTE)hIl2Cpp + PERMANENTRAIDOBJECT_ENTERBATTLECUSTOMERROR_OFFSET))(arg, nullptr);
		}

		::System::Void SyncScore(::System::Int64 arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + PERMANENTRAIDOBJECT_SYNCSCORE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int64 get_BestRankingPoint()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + PERMANENTRAIDOBJECT_GET_BESTRANKINGPOINT_OFFSET))(nullptr);
		}

		::System::Void SelectRaidBossGroup(::FlatData::RaidBossGroupType* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatData::RaidBossGroupType*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + PERMANENTRAIDOBJECT_SELECTRAIDBOSSGROUP_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SyncLobby(::MX::NetworkProtocol::ResponsePacket* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::ResponsePacket*, ::PVOID))((::PBYTE)hIl2Cpp + PERMANENTRAIDOBJECT_SYNCLOBBY_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PERMANENTRAIDOBJECT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SyncGiveUp(::MX::NetworkProtocol::ResponsePacket* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::ResponsePacket*, ::PVOID))((::PBYTE)hIl2Cpp + PERMANENTRAIDOBJECT_SYNCGIVEUP_OFFSET))(arg, nullptr);
		}

		::System::Void CreateBattle(::System::Int64 arg, ::FlatData::Difficulty* arg2, ::System::Boolean arg3, ::System::Int32 arg4, ::System::Boolean arg5, ::MX::GameLogic::DBModel::ClanAssistUseInfo* arg6)
		{
			((::System::Void(*)(::System::Int64, ::FlatData::Difficulty*, ::System::Boolean, ::System::Int32, ::System::Boolean, ::MX::GameLogic::DBModel::ClanAssistUseInfo*, ::PVOID))((::PBYTE)hIl2Cpp + PERMANENTRAIDOBJECT_CREATEBATTLE_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		::System::Void RequestSweep(::System::Int64 arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + PERMANENTRAIDOBJECT_REQUESTSWEEP_OFFSET))(arg, arg2, nullptr);
		}

		::System::Collections::IEnumerator* GiveUp(::MX::GameLogic::DBModel::RaidDB* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::MX::GameLogic::DBModel::RaidDB*, ::PVOID))((::PBYTE)hIl2Cpp + PERMANENTRAIDOBJECT_GIVEUP_OFFSET))(arg, nullptr);
		}

		::System::Void SetRaidSeasonInfo(::FlatData::RaidBossGroupType* arg)
		{
			((::System::Void(*)(::FlatData::RaidBossGroupType*, ::PVOID))((::PBYTE)hIl2Cpp + PERMANENTRAIDOBJECT_SETRAIDSEASONINFO_OFFSET))(arg, nullptr);
		}

	};

