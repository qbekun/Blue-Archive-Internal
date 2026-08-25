#pragma once
#include "../../unitysdk.h"

namespace MX::Core::Math { class IRandomService; }
namespace MX::MinigameCCG { class ICCGDataProvider; }
namespace MX::MinigameCCG { class CCGGameTurnInfo; }
namespace MX::MinigameCCG::AI { class CCGAIData; }
namespace MX::MinigameCCG { class CCGEvent; }
namespace MX::MinigameCCG { class CCGGameSetting; }
namespace MX::MinigameCCG { class CCGInput; }
namespace MX::GameLogic::DBModel { class MiniGameCCGSummary; }
namespace MX::MinigameCCG { class CCGPlayer; }
namespace MX::MinigameCCG { class CCGTargetCategoryRule; }
namespace MX::MinigameCCG { class CCGEntity; }
namespace MX::MinigameCCG { class CCGInput&; }

#define MX_MINIGAMECCG_CCGGAME_PROCESS_OFFSET UNITYSDK_OFFSET(0x1DB9810)
#define MX_MINIGAMECCG_CCGGAME_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DB98C0)
#define MX_MINIGAMECCG_CCGGAME_ENQUEUEINPUT_OFFSET UNITYSDK_OFFSET(0x1DBA040)
#define MX_MINIGAMECCG_CCGGAME_GET_ISGAMEOVER_OFFSET UNITYSDK_OFFSET(0x1DBA090)
#define MX_MINIGAMECCG_CCGGAME_CREATECCGSUMMARY_OFFSET UNITYSDK_OFFSET(0x1DBA0A0)
#define MX_MINIGAMECCG_CCGGAME_GET_PASSIVESKILLTRIGGERABLES_OFFSET UNITYSDK_OFFSET(0x1DBA460)
#define MX_MINIGAMECCG_CCGGAME_FINDTARGETCANDIDATES_OFFSET UNITYSDK_OFFSET(0x1DBA510)
#define MX_MINIGAMECCG_CCGGAME_GET_RANDOM_OFFSET UNITYSDK_OFFSET(0x1DBADB0)
#define MX_MINIGAMECCG_CCGGAME_FINDENTITY_OFFSET UNITYSDK_OFFSET(0x1DBADC0)
#define MX_MINIGAMECCG_CCGGAME_GIVEUP_OFFSET UNITYSDK_OFFSET(0x1DBAE30)
#define MX_MINIGAMECCG_CCGGAME_GET_QUEUEDEVENTS_OFFSET UNITYSDK_OFFSET(0x1DBAE40)
#define MX_MINIGAMECCG_CCGGAME_INITIALIZETURN_OFFSET UNITYSDK_OFFSET(0x1DBAEF0)
#define MX_MINIGAMECCG_CCGGAME_GET_RANDOMSEED_OFFSET UNITYSDK_OFFSET(0x1DBAFB0)
#define MX_MINIGAMECCG_CCGGAME_SET_DATA_OFFSET UNITYSDK_OFFSET(0x1DBAFC0)
#define MX_MINIGAMECCG_CCGGAME_GET_TURNINFO_OFFSET UNITYSDK_OFFSET(0x1DBAFD0)
#define MX_MINIGAMECCG_CCGGAME_GETPLAYER_OFFSET UNITYSDK_OFFSET(0x1DBAFE0)
#define MX_MINIGAMECCG_CCGGAME_GET_PLAYERB_OFFSET UNITYSDK_OFFSET(0x1DBB010)
#define MX_MINIGAMECCG_CCGGAME_GET_PLAYERA_OFFSET UNITYSDK_OFFSET(0x1DBA390)
#define MX_MINIGAMECCG_CCGGAME_SET_WINNERPLAYERID_OFFSET UNITYSDK_OFFSET(0x1DBB040)
#define MX_MINIGAMECCG_CCGGAME_TRYDEQUEUEINPUT_OFFSET UNITYSDK_OFFSET(0x1DBB050)
#define MX_MINIGAMECCG_CCGGAME_REGISTERENTITY_OFFSET UNITYSDK_OFFSET(0x1DBB0A0)
#define MX_MINIGAMECCG_CCGGAME_SET_TURNINFO_OFFSET UNITYSDK_OFFSET(0x1DBB100)
#define MX_MINIGAMECCG_CCGGAME_GET_DATA_OFFSET UNITYSDK_OFFSET(0x1DBB110)
#define MX_MINIGAMECCG_CCGGAME_GET_WINNERPLAYERID_OFFSET UNITYSDK_OFFSET(0x1DBB120)
#define MX_MINIGAMECCG_CCGGAME_GET_AI_OFFSET UNITYSDK_OFFSET(0x1DBB130)
#define MX_MINIGAMECCG_CCGGAME_SETDATAPROVIDER_OFFSET UNITYSDK_OFFSET(0x1DBB140)
#define MX_MINIGAMECCG_CCGGAME_PROCESSGAMESTATE_OFFSET UNITYSDK_OFFSET(0x1DBB150)
#define MX_MINIGAMECCG_CCGGAME_ENQUEUEEVENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_MINIGAMECCG_CCGGAME_GET_ISCLEARGAME_OFFSET UNITYSDK_OFFSET(0x1DBB600)
#define MX_MINIGAMECCG_CCGGAME_WRITESTATISTICDATA_OFFSET UNITYSDK_OFFSET(0x1DBB610)

namespace MX::MinigameCCG
{
	inline static constexpr unsigned int CCGGame_TypeDefinitionIndex = 20452;

	class CCGGame : public Il2CppObject
	{
	public:
		::System::Int32 _RandomSeed_k__BackingField; // 0x10
		::MX::Core::Math::IRandomService* _Random_k__BackingField; // 0x18
		::MX::MinigameCCG::ICCGDataProvider* _Data_k__BackingField; // 0x20
		::Il2CppArray<::System::Object*>* _players; // 0x28
		::MX::MinigameCCG::CCGGameTurnInfo* _TurnInfo_k__BackingField; // 0x30
		::System::Int32 _WinnerPlayerId_k__BackingField; // 0x38
		::MX::MinigameCCG::AI::CCGAIData* _ai; // 0x40
		Il2CppObject* _stateStack; // 0x48
		Il2CppObject* _eventQueue; // 0x50
		::MX::MinigameCCG::CCGEvent* _lastQueuedMergeableEvent; // 0x58
		::System::Int32 _entityIdCounter; // 0x60
		Il2CppObject* _entities; // 0x68
		Il2CppObject* _inputs; // 0x70
		Il2CppObject* _inputLogs; // 0x78
		::System::Int32 _totalPlayerUsedCost; // 0x80
		::System::Int32 _totalPlayerDamageAmount; // 0x84
		::System::Int32 _totalPlayerKillCount; // 0x88
		Il2CppObject* _totalPlayerSkillCount; // 0x90

		Il2CppObject* Process()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAME_PROCESS_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::MX::MinigameCCG::ICCGDataProvider* arg, ::MX::MinigameCCG::CCGGameSetting* arg)
		{
			((::System::Void(*)(::System::Int32, ::MX::MinigameCCG::ICCGDataProvider*, ::MX::MinigameCCG::CCGGameSetting*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAME_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void EnqueueInput(::MX::MinigameCCG::CCGInput* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGInput*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAME_ENQUEUEINPUT_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsGameOver()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAME_GET_ISGAMEOVER_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::MiniGameCCGSummary* CreateCCGSummary()
		{
			return (return (::MX::GameLogic::DBModel::MiniGameCCGSummary*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAME_CREATECCGSUMMARY_OFFSET))(nullptr);
		}

		Il2CppObject* get_PassiveSkillTriggerables()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAME_GET_PASSIVESKILLTRIGGERABLES_OFFSET))(nullptr);
		}

		Il2CppObject* FindTargetCandidates(::MX::MinigameCCG::CCGPlayer* arg, ::MX::MinigameCCG::CCGTargetCategoryRule* arg)
		{
			return (return (Il2CppObject*(*)(::MX::MinigameCCG::CCGPlayer*, ::MX::MinigameCCG::CCGTargetCategoryRule*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAME_FINDTARGETCANDIDATES_OFFSET))(arg, arg, nullptr);
		}

		::MX::Core::Math::IRandomService* get_Random()
		{
			return (return (::MX::Core::Math::IRandomService*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAME_GET_RANDOM_OFFSET))(nullptr);
		}

		::MX::MinigameCCG::CCGEntity* FindEntity(::System::Int32 arg)
		{
			return (return (::MX::MinigameCCG::CCGEntity*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAME_FINDENTITY_OFFSET))(arg, nullptr);
		}

		::System::Void GiveUp()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAME_GIVEUP_OFFSET))(nullptr);
		}

		Il2CppObject* get_QueuedEvents()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAME_GET_QUEUEDEVENTS_OFFSET))(nullptr);
		}

		::System::Void InitializeTurn(::System::Int32 arg, ::MX::MinigameCCG::CCGPlayer* arg)
		{
			((::System::Void(*)(::System::Int32, ::MX::MinigameCCG::CCGPlayer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAME_INITIALIZETURN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 get_RandomSeed()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAME_GET_RANDOMSEED_OFFSET))(nullptr);
		}

		::System::Void set_Data(::MX::MinigameCCG::ICCGDataProvider* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::ICCGDataProvider*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAME_SET_DATA_OFFSET))(arg, nullptr);
		}

		::MX::MinigameCCG::CCGGameTurnInfo* get_TurnInfo()
		{
			return (return (::MX::MinigameCCG::CCGGameTurnInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAME_GET_TURNINFO_OFFSET))(nullptr);
		}

		::MX::MinigameCCG::CCGPlayer* GetPlayer(::System::Int32 arg)
		{
			return (return (::MX::MinigameCCG::CCGPlayer*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAME_GETPLAYER_OFFSET))(arg, nullptr);
		}

		::MX::MinigameCCG::CCGPlayer* get_PlayerB()
		{
			return (return (::MX::MinigameCCG::CCGPlayer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAME_GET_PLAYERB_OFFSET))(nullptr);
		}

		::MX::MinigameCCG::CCGPlayer* get_PlayerA()
		{
			return (return (::MX::MinigameCCG::CCGPlayer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAME_GET_PLAYERA_OFFSET))(nullptr);
		}

		::System::Void set_WinnerPlayerId(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAME_SET_WINNERPLAYERID_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryDequeueInput(::MX::MinigameCCG::CCGInput&* arg)
		{
			return (return (::System::Boolean(*)(::MX::MinigameCCG::CCGInput&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAME_TRYDEQUEUEINPUT_OFFSET))(arg, nullptr);
		}

		::System::Void RegisterEntity(::MX::MinigameCCG::CCGEntity* arg, int32_t&* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGEntity*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAME_REGISTERENTITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void set_TurnInfo(::MX::MinigameCCG::CCGGameTurnInfo* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGGameTurnInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAME_SET_TURNINFO_OFFSET))(arg, nullptr);
		}

		::MX::MinigameCCG::ICCGDataProvider* get_Data()
		{
			return (return (::MX::MinigameCCG::ICCGDataProvider*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAME_GET_DATA_OFFSET))(nullptr);
		}

		::System::Int32 get_WinnerPlayerId()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAME_GET_WINNERPLAYERID_OFFSET))(nullptr);
		}

		::MX::MinigameCCG::AI::CCGAIData* get_AI()
		{
			return (return (::MX::MinigameCCG::AI::CCGAIData*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAME_GET_AI_OFFSET))(nullptr);
		}

		::System::Void SetDataProvider(::MX::MinigameCCG::ICCGDataProvider* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::ICCGDataProvider*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAME_SETDATAPROVIDER_OFFSET))(arg, nullptr);
		}

		::System::Void ProcessGameState()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAME_PROCESSGAMESTATE_OFFSET))(nullptr);
		}

		::System::Void EnqueueEvent(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAME_ENQUEUEEVENT_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsClearGame()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAME_GET_ISCLEARGAME_OFFSET))(nullptr);
		}

		::System::Void WriteStatisticData(::MX::MinigameCCG::CCGEvent* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGEvent*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAME_WRITESTATISTICDATA_OFFSET))(arg, nullptr);
		}

	};
}

