#pragma once
#include "unitysdk.h"

namespace MX::GameLogic::DBModel { class RaidDB; }
namespace MX::GameLogic::DBModel { class RaidBattleDB; }
namespace MX::GameLogic::DBModel { class AssistCharacterDB; }
namespace MX::NetworkProtocol { class ErrorPacket; }
namespace MX::NetworkProtocol { class ResponsePacket; }
namespace FlatData { class Difficulty; }
namespace MX::GameLogic::DBModel { class ClanAssistUseInfo; }
namespace FlatData { class EchelonType; }
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }

#define RAIDOBJECT__ENTERBATTLECUSTOMERROR_G__ERROR|16_0_OFFSET UNITYSDK_OFFSET(0x1ED0560)
#define RAIDOBJECT_NEEDUNLOCKANI_OFFSET UNITYSDK_OFFSET(0x1ED05C0)
#define RAIDOBJECT_STARTSINGLERAID_OFFSET UNITYSDK_OFFSET(0x1ED07B0)
#define RAIDOBJECT_ISSEASONOPEN_OFFSET UNITYSDK_OFFSET(0x1ED0980)
#define RAIDOBJECT__OPENLOBBY_G__POSTLOADPROCESS|11_1_OFFSET UNITYSDK_OFFSET(0x1ED09B0)
#define RAIDOBJECT_GETSEASONHIGHESTCLEARDIFFICULTY_OFFSET UNITYSDK_OFFSET(0x1ED0A80)
#define RAIDOBJECT_ENTERBATTLECUSTOMERROR_OFFSET UNITYSDK_OFFSET(0x1ED0B50)
#define RAIDOBJECT_SHOWREDDOT_OFFSET UNITYSDK_OFFSET(0x1ED0C10)
#define RAIDOBJECT_SYNCLOBBY_OFFSET UNITYSDK_OFFSET(0x1ED0C70)
#define RAIDOBJECT_CREATEBATTLE_OFFSET UNITYSDK_OFFSET(0x1ED0F70)
#define RAIDOBJECT_ENTERBATTLE_OFFSET UNITYSDK_OFFSET(0x1ED1170)
#define RAIDOBJECT_SYNCVICTORY_OFFSET UNITYSDK_OFFSET(0x1ED1410)
#define RAIDOBJECT_GETECHELONTYPE_OFFSET UNITYSDK_OFFSET(0x1ED1470)
#define RAIDOBJECT_OPENLOBBY_OFFSET UNITYSDK_OFFSET(0x1ED1480)
#define RAIDOBJECT_SYNCLOGIN_OFFSET UNITYSDK_OFFSET(0x1ED15E0)
#define RAIDOBJECT_SHOWYELLOWDOT_OFFSET UNITYSDK_OFFSET(0x1ED1670)
#define RAIDOBJECT_REQUESTSWEEP_OFFSET UNITYSDK_OFFSET(0x1ED1770)
#define RAIDOBJECT_HANDLECREATEBATTLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1ED1820)
#define RAIDOBJECT_GIVEUP_OFFSET UNITYSDK_OFFSET(0x1ED19A0)
#define RAIDOBJECT_HANDLEENTERBATTLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1ED1A10)
#define RAIDOBJECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1ED1B90)
#define RAIDOBJECT_SYNCGIVEUP_OFFSET UNITYSDK_OFFSET(0x1ED1BA0)
#define RAIDOBJECT_CURRENTSEASONHAVELIMITEDREWARDS_OFFSET UNITYSDK_OFFSET(0x1ED1CD0)

	inline static constexpr unsigned int RaidObject_TypeDefinitionIndex = 1793;

	class RaidObject : public Il2CppObject
	{
	public:
		::System::Collections::IEnumerator* _EnterBattleCustomError_g__Error|16_0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDOBJECT__ENTERBATTLECUSTOMERROR_G__ERROR|16_0_OFFSET))(nullptr);
		}

		::System::Boolean NeedUnlockAni(::System::Int64 arg)
		{
			return ((::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + RAIDOBJECT_NEEDUNLOCKANI_OFFSET))(arg, nullptr);
		}

		::System::Void StartSingleRaid(::MX::GameLogic::DBModel::RaidDB* arg, ::MX::GameLogic::DBModel::RaidBattleDB* arg2, ::System::Int32 arg3, ::MX::GameLogic::DBModel::AssistCharacterDB* arg4)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::RaidDB*, ::MX::GameLogic::DBModel::RaidBattleDB*, ::System::Int32, ::MX::GameLogic::DBModel::AssistCharacterDB*, ::PVOID))((::PBYTE)hIl2Cpp + RAIDOBJECT_STARTSINGLERAID_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Boolean IsSeasonOpen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDOBJECT_ISSEASONOPEN_OFFSET))(nullptr);
		}

		::System::Void _OpenLobby_g__PostLoadProcess|11_1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDOBJECT__OPENLOBBY_G__POSTLOADPROCESS|11_1_OFFSET))(nullptr);
		}

		Il2CppObject* GetSeasonHighestClearDifficulty()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDOBJECT_GETSEASONHIGHESTCLEARDIFFICULTY_OFFSET))(nullptr);
		}

		::System::Boolean EnterBattleCustomError(::MX::NetworkProtocol::ErrorPacket* arg)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::ErrorPacket*, ::PVOID))((::PBYTE)hIl2Cpp + RAIDOBJECT_ENTERBATTLECUSTOMERROR_OFFSET))(arg, nullptr);
		}

		::System::Boolean ShowRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDOBJECT_SHOWREDDOT_OFFSET))(nullptr);
		}

		::System::Void SyncLobby(::MX::NetworkProtocol::ResponsePacket* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::ResponsePacket*, ::PVOID))((::PBYTE)hIl2Cpp + RAIDOBJECT_SYNCLOBBY_OFFSET))(arg, nullptr);
		}

		::System::Void CreateBattle(::System::Int64 arg, ::FlatData::Difficulty* arg2, ::System::Boolean arg3, ::System::Int32 arg4, ::System::Boolean arg5, ::MX::GameLogic::DBModel::ClanAssistUseInfo* arg6)
		{
			((::System::Void(*)(::System::Int64, ::FlatData::Difficulty*, ::System::Boolean, ::System::Int32, ::System::Boolean, ::MX::GameLogic::DBModel::ClanAssistUseInfo*, ::PVOID))((::PBYTE)hIl2Cpp + RAIDOBJECT_CREATEBATTLE_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		::System::Void EnterBattle(::MX::GameLogic::DBModel::RaidDB* arg, ::System::Int32 arg2, ::MX::GameLogic::DBModel::ClanAssistUseInfo* arg3, ::System::Boolean arg4)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::RaidDB*, ::System::Int32, ::MX::GameLogic::DBModel::ClanAssistUseInfo*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + RAIDOBJECT_ENTERBATTLE_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void SyncVictory(::System::Int64 arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + RAIDOBJECT_SYNCVICTORY_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::EchelonType* GetEchelonType()
		{
			return ((::FlatData::EchelonType*(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDOBJECT_GETECHELONTYPE_OFFSET))(nullptr);
		}

		::System::Void OpenLobby()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDOBJECT_OPENLOBBY_OFFSET))(nullptr);
		}

		::System::Void SyncLogin(::MX::NetworkProtocol::ResponsePacket* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::ResponsePacket*, ::PVOID))((::PBYTE)hIl2Cpp + RAIDOBJECT_SYNCLOGIN_OFFSET))(arg, nullptr);
		}

		::System::Boolean ShowYellowDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDOBJECT_SHOWYELLOWDOT_OFFSET))(nullptr);
		}

		::System::Void RequestSweep(::System::Int64 arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + RAIDOBJECT_REQUESTSWEEP_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean HandleCreateBattleMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + RAIDOBJECT_HANDLECREATEBATTLEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* GiveUp(::MX::GameLogic::DBModel::RaidDB* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::MX::GameLogic::DBModel::RaidDB*, ::PVOID))((::PBYTE)hIl2Cpp + RAIDOBJECT_GIVEUP_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleEnterBattleMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + RAIDOBJECT_HANDLEENTERBATTLEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDOBJECT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SyncGiveUp(::MX::NetworkProtocol::ResponsePacket* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::ResponsePacket*, ::PVOID))((::PBYTE)hIl2Cpp + RAIDOBJECT_SYNCGIVEUP_OFFSET))(arg, nullptr);
		}

		::System::Boolean CurrentSeasonHaveLimitedRewards()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDOBJECT_CURRENTSEASONHAVELIMITEDREWARDS_OFFSET))(nullptr);
		}

	};

