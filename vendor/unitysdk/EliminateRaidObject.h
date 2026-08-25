#pragma once
#include "unitysdk.h"

namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }
namespace MX::GameLogic::DBModel { class RaidDB; }
namespace MX::GameLogic::DBModel { class RaidBattleDB; }
namespace MX::GameLogic::DBModel { class AssistCharacterDB; }
namespace MX::GameLogic::DBModel { class ClanAssistUseInfo; }
namespace FlatData { class ArmorType; }
namespace FlatData { class Difficulty; }
namespace MX::Data { class EliminateRaidSeasonInfo; }
namespace MX::NetworkProtocol { class ResponsePacket; }
namespace MX::NetworkProtocol { class ServerNotificationFlag; }
namespace MX::Data { class RaidStageInfo; }
namespace FlatData { class EchelonType; }
namespace MX::NetworkProtocol { class ErrorPacket; }

#define ELIMINATERAIDOBJECT_HANDLECREATEBATTLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1ECA030)
#define ELIMINATERAIDOBJECT_STARTELIMINATERAID_OFFSET UNITYSDK_OFFSET(0x1ECA1B0)
#define ELIMINATERAIDOBJECT_HANDLEENTERBATTLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1ECA440)
#define ELIMINATERAIDOBJECT_ENTERBATTLE_OFFSET UNITYSDK_OFFSET(0x1ECA5C0)
#define ELIMINATERAIDOBJECT_ISSEASONOPEN_OFFSET UNITYSDK_OFFSET(0x1ECA860)
#define ELIMINATERAIDOBJECT__OPENLOBBY_G__POSTLOADPROCESS|31_1_OFFSET UNITYSDK_OFFSET(0x1ECA890)
#define ELIMINATERAIDOBJECT_GETTOTALPOINT_OFFSET UNITYSDK_OFFSET(0x1ECA970)
#define ELIMINATERAIDOBJECT_GETSEASONBOSSNAME_OFFSET UNITYSDK_OFFSET(0x1ECA990)
#define ELIMINATERAIDOBJECT_GETARMORTYPEBYBOSSINDEX_OFFSET UNITYSDK_OFFSET(0x1ECAA00)
#define ELIMINATERAIDOBJECT_CREATEBATTLE_OFFSET UNITYSDK_OFFSET(0x1ECAC30)
#define ELIMINATERAIDOBJECT_GET_SELECTTARGETINDEX_OFFSET UNITYSDK_OFFSET(0x1ECAE10)
#define ELIMINATERAIDOBJECT_GET_ELIMINATERAIDSEASONINFO_OFFSET UNITYSDK_OFFSET(0x1ECABC0)
#define ELIMINATERAIDOBJECT__SHOWYELLOWDOT_G__GETCURRENTSEASONBOSSNAME|11_2_OFFSET UNITYSDK_OFFSET(0x1ECAE20)
#define ELIMINATERAIDOBJECT_NEEDUNLOCKANI_OFFSET UNITYSDK_OFFSET(0x1ECAF40)
#define ELIMINATERAIDOBJECT_SET_SELECTTARGETINDEX_OFFSET UNITYSDK_OFFSET(0x1ECB1B0)
#define ELIMINATERAIDOBJECT_TRYGETTYPERECORD_OFFSET UNITYSDK_OFFSET(0x1ECB1C0)
#define ELIMINATERAIDOBJECT_SYNCGIVEUP_OFFSET UNITYSDK_OFFSET(0x1ECB220)
#define ELIMINATERAIDOBJECT_OPENLOBBY_OFFSET UNITYSDK_OFFSET(0x1ECB360)
#define ELIMINATERAIDOBJECT_GETRECEIVEREWARDFLAG_OFFSET UNITYSDK_OFFSET(0x1ECB4C0)
#define ELIMINATERAIDOBJECT_SYNCLOGIN_OFFSET UNITYSDK_OFFSET(0x1ECB4D0)
#define ELIMINATERAIDOBJECT_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1ECB5E0)
#define ELIMINATERAIDOBJECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1ECB5F0)
#define ELIMINATERAIDOBJECT_SYNCVICTORY_OFFSET UNITYSDK_OFFSET(0x1ECB600)
#define ELIMINATERAIDOBJECT_ISROOMEXIST_OFFSET UNITYSDK_OFFSET(0x1ECB750)
#define ELIMINATERAIDOBJECT_CURRENTSEASONHAVELIMITEDREWARDS_OFFSET UNITYSDK_OFFSET(0x1ECB770)
#define ELIMINATERAIDOBJECT_GETSEASONHIGHESTCLEARDIFFICULTY_OFFSET UNITYSDK_OFFSET(0x1ECB8C0)
#define ELIMINATERAIDOBJECT__SHOWYELLOWDOT_G__GETSEASONBOSSSTAGEID|11_1_OFFSET UNITYSDK_OFFSET(0x1ECBD50)
#define ELIMINATERAIDOBJECT_GIVEUP_OFFSET UNITYSDK_OFFSET(0x1ECBE30)
#define ELIMINATERAIDOBJECT__SHOWYELLOWDOT_G__HASREMAININGTICKETS|11_0_OFFSET UNITYSDK_OFFSET(0x1ECBEE0)
#define ELIMINATERAIDOBJECT_GETSEASONBOSSFIRSTDIFFICULTYSTAGE_OFFSET UNITYSDK_OFFSET(0x1ECC0B0)
#define ELIMINATERAIDOBJECT_SHOWREDDOT_OFFSET UNITYSDK_OFFSET(0x1ECC200)
#define ELIMINATERAIDOBJECT_GETECHELONTYPE_OFFSET UNITYSDK_OFFSET(0x1ECC850)
#define ELIMINATERAIDOBJECT_GETSEASONBOSSINDEX_OFFSET UNITYSDK_OFFSET(0x1ECC900)
#define ELIMINATERAIDOBJECT_SHOWYELLOWDOT_OFFSET UNITYSDK_OFFSET(0x1ECC970)
#define ELIMINATERAIDOBJECT_REQUESTSWEEP_OFFSET UNITYSDK_OFFSET(0x1ECCA60)
#define ELIMINATERAIDOBJECT__ENTERBATTLECUSTOMERROR_G__ERROR|37_0_OFFSET UNITYSDK_OFFSET(0x1ECCB10)
#define ELIMINATERAIDOBJECT_SYNCLOBBY_OFFSET UNITYSDK_OFFSET(0x1ECCBA0)
#define ELIMINATERAIDOBJECT_CANRECEIVELIMITEDREWARD_OFFSET UNITYSDK_OFFSET(0x1ECC280)
#define ELIMINATERAIDOBJECT_ENTERBATTLECUSTOMERROR_OFFSET UNITYSDK_OFFSET(0x1ECCF60)

	inline static constexpr unsigned int EliminateRaidObject_TypeDefinitionIndex = 1779;

	class EliminateRaidObject : public Il2CppObject
	{
	public:
		::System::Int32 BossCount; // 0x0
		::System::Int32 _SelectTargetIndex_k__BackingField; // 0xB8
		Il2CppObject* BestRankingPointPerBossGroup; // 0xC0
		::System::String* ResultBossGroupName; // 0xC8

		::System::Boolean HandleCreateBattleMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDOBJECT_HANDLECREATEBATTLEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void StartEliminateRaid(::MX::GameLogic::DBModel::RaidDB* arg, ::MX::GameLogic::DBModel::RaidBattleDB* arg2, ::System::Int32 arg3, ::MX::GameLogic::DBModel::AssistCharacterDB* arg4)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::RaidDB*, ::MX::GameLogic::DBModel::RaidBattleDB*, ::System::Int32, ::MX::GameLogic::DBModel::AssistCharacterDB*, ::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDOBJECT_STARTELIMINATERAID_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Boolean HandleEnterBattleMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDOBJECT_HANDLEENTERBATTLEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void EnterBattle(::MX::GameLogic::DBModel::RaidDB* arg, ::System::Int32 arg2, ::MX::GameLogic::DBModel::ClanAssistUseInfo* arg3, ::System::Boolean arg4)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::RaidDB*, ::System::Int32, ::MX::GameLogic::DBModel::ClanAssistUseInfo*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDOBJECT_ENTERBATTLE_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Boolean IsSeasonOpen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDOBJECT_ISSEASONOPEN_OFFSET))(nullptr);
		}

		::System::Void _OpenLobby_g__PostLoadProcess|31_1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDOBJECT__OPENLOBBY_G__POSTLOADPROCESS|31_1_OFFSET))(nullptr);
		}

		::System::Int64 GetTotalPoint()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDOBJECT_GETTOTALPOINT_OFFSET))(nullptr);
		}

		::System::String* GetSeasonBossName(::System::Int32 arg)
		{
			return ((::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDOBJECT_GETSEASONBOSSNAME_OFFSET))(arg, nullptr);
		}

		::FlatData::ArmorType* GetArmorTypeByBossIndex(::System::Int32 arg)
		{
			return ((::FlatData::ArmorType*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDOBJECT_GETARMORTYPEBYBOSSINDEX_OFFSET))(arg, nullptr);
		}

		::System::Void CreateBattle(::System::Int64 arg, ::FlatData::Difficulty* arg2, ::System::Boolean arg3, ::System::Int32 arg4, ::System::Boolean arg5, ::MX::GameLogic::DBModel::ClanAssistUseInfo* arg6)
		{
			((::System::Void(*)(::System::Int64, ::FlatData::Difficulty*, ::System::Boolean, ::System::Int32, ::System::Boolean, ::MX::GameLogic::DBModel::ClanAssistUseInfo*, ::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDOBJECT_CREATEBATTLE_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		::System::Int32 get_SelectTargetIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDOBJECT_GET_SELECTTARGETINDEX_OFFSET))(nullptr);
		}

		::MX::Data::EliminateRaidSeasonInfo* get_EliminateRaidSeasonInfo()
		{
			return ((::MX::Data::EliminateRaidSeasonInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDOBJECT_GET_ELIMINATERAIDSEASONINFO_OFFSET))(nullptr);
		}

		::System::String* _ShowYellowDot_g__GetCurrentSeasonBossName|11_2(::System::Int32 arg)
		{
			return ((::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDOBJECT__SHOWYELLOWDOT_G__GETCURRENTSEASONBOSSNAME|11_2_OFFSET))(arg, nullptr);
		}

		::System::Boolean NeedUnlockAni(::System::Int64 arg)
		{
			return ((::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDOBJECT_NEEDUNLOCKANI_OFFSET))(arg, nullptr);
		}

		::System::Void set_SelectTargetIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDOBJECT_SET_SELECTTARGETINDEX_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetTypeRecord(::System::String* str, int64_t&* arg)
		{
			return ((::System::Boolean(*)(::System::String*, int64_t&*, ::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDOBJECT_TRYGETTYPERECORD_OFFSET))(str, arg, nullptr);
		}

		::System::Void SyncGiveUp(::MX::NetworkProtocol::ResponsePacket* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::ResponsePacket*, ::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDOBJECT_SYNCGIVEUP_OFFSET))(arg, nullptr);
		}

		::System::Void OpenLobby()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDOBJECT_OPENLOBBY_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::ServerNotificationFlag* GetReceiveRewardFlag()
		{
			return ((::MX::NetworkProtocol::ServerNotificationFlag*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDOBJECT_GETRECEIVEREWARDFLAG_OFFSET))(nullptr);
		}

		::System::Void SyncLogin(::MX::NetworkProtocol::ResponsePacket* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::ResponsePacket*, ::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDOBJECT_SYNCLOGIN_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDOBJECT_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDOBJECT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SyncVictory(::System::Int64 arg, ::System::Int64 arg2, ::System::String* str)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDOBJECT_SYNCVICTORY_OFFSET))(arg, arg2, str, nullptr);
		}

		::System::Boolean IsRoomExist()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDOBJECT_ISROOMEXIST_OFFSET))(nullptr);
		}

		::System::Boolean CurrentSeasonHaveLimitedRewards()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDOBJECT_CURRENTSEASONHAVELIMITEDREWARDS_OFFSET))(nullptr);
		}

		Il2CppObject* GetSeasonHighestClearDifficulty()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDOBJECT_GETSEASONHIGHESTCLEARDIFFICULTY_OFFSET))(nullptr);
		}

		::System::Int64 _ShowYellowDot_g__GetSeasonBossStageId|11_1(::System::Int32 arg)
		{
			return ((::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDOBJECT__SHOWYELLOWDOT_G__GETSEASONBOSSSTAGEID|11_1_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* GiveUp(::MX::GameLogic::DBModel::RaidDB* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::MX::GameLogic::DBModel::RaidDB*, ::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDOBJECT_GIVEUP_OFFSET))(arg, nullptr);
		}

		::System::Boolean _ShowYellowDot_g__HasRemainingTickets|11_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDOBJECT__SHOWYELLOWDOT_G__HASREMAININGTICKETS|11_0_OFFSET))(nullptr);
		}

		::MX::Data::RaidStageInfo* GetSeasonBossFirstDifficultyStage(::System::Int32 arg)
		{
			return ((::MX::Data::RaidStageInfo*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDOBJECT_GETSEASONBOSSFIRSTDIFFICULTYSTAGE_OFFSET))(arg, nullptr);
		}

		::System::Boolean ShowRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDOBJECT_SHOWREDDOT_OFFSET))(nullptr);
		}

		::FlatData::EchelonType* GetEchelonType()
		{
			return ((::FlatData::EchelonType*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDOBJECT_GETECHELONTYPE_OFFSET))(nullptr);
		}

		::System::Int32 GetSeasonBossIndex(::System::String* str)
		{
			return ((::System::Int32(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDOBJECT_GETSEASONBOSSINDEX_OFFSET))(str, nullptr);
		}

		::System::Boolean ShowYellowDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDOBJECT_SHOWYELLOWDOT_OFFSET))(nullptr);
		}

		::System::Void RequestSweep(::System::Int64 arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDOBJECT_REQUESTSWEEP_OFFSET))(arg, arg2, nullptr);
		}

		::System::Collections::IEnumerator* _EnterBattleCustomError_g__Error|37_0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDOBJECT__ENTERBATTLECUSTOMERROR_G__ERROR|37_0_OFFSET))(nullptr);
		}

		::System::Void SyncLobby(::MX::NetworkProtocol::ResponsePacket* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::ResponsePacket*, ::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDOBJECT_SYNCLOBBY_OFFSET))(arg, nullptr);
		}

		::System::Boolean CanReceiveLimitedReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDOBJECT_CANRECEIVELIMITEDREWARD_OFFSET))(nullptr);
		}

		::System::Boolean EnterBattleCustomError(::MX::NetworkProtocol::ErrorPacket* arg)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::ErrorPacket*, ::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDOBJECT_ENTERBATTLECUSTOMERROR_OFFSET))(arg, nullptr);
		}

	};

