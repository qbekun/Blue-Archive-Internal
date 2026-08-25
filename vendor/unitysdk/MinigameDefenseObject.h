#pragma once
#include "unitysdk.h"

namespace FlatData { class StageDifficulty; }
namespace MX::Logic::BattleEntities { class O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4; }
namespace MX::Data { class MiniGameDefenseStageInfo; }
namespace MX::GameLogic::DBModel { class MiniGameDefenseStageHistoryDB; }

#define MINIGAMEDEFENSEOBJECT_GET_FIXEDECHELONSTRIKERIDSCACHE_OFFSET UNITYSDK_OFFSET(0xA58620)
#define MINIGAMEDEFENSEOBJECT_SET_STAGEHISTORYDBS_OFFSET UNITYSDK_OFFSET(0xA586A0)
#define MINIGAMEDEFENSEOBJECT_SYNCALL_OFFSET UNITYSDK_OFFSET(0xA586B0)
#define MINIGAMEDEFENSEOBJECT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA586C0)
#define MINIGAMEDEFENSEOBJECT_GET_STAGEHISTORYDBS_OFFSET UNITYSDK_OFFSET(0xA586E0)
#define MINIGAMEDEFENSEOBJECT_CLEAROBJECTCHARACTER_OFFSET UNITYSDK_OFFSET(0xA58760)
#define MINIGAMEDEFENSEOBJECT_ENTERMINIGAMEDEFENSEBATTLE_OFFSET UNITYSDK_OFFSET(0xA58780)
#define MINIGAMEDEFENSEOBJECT_GETOBJECTCHARACTERDAMAGEDAMOUNT_OFFSET UNITYSDK_OFFSET(0xA59050)
#define MINIGAMEDEFENSEOBJECT_SETOBJECTCHARACTER_OFFSET UNITYSDK_OFFSET(0xA590A0)
#define MINIGAMEDEFENSEOBJECT_DEFENSEBATTLERETRY_OFFSET UNITYSDK_OFFSET(0xA590B0)
#define MINIGAMEDEFENSEOBJECT_SYNC_OFFSET UNITYSDK_OFFSET(0xA591D0)
#define MINIGAMEDEFENSEOBJECT_COSTARTBATTLE_OFFSET UNITYSDK_OFFSET(0xA595D0)

	inline static constexpr unsigned int MinigameDefenseObject_TypeDefinitionIndex = 503;

	class MinigameDefenseObject : public Il2CppObject
	{
	public:
		Il2CppObject* _stageHistoryDBs; // 0x10
		::System::Int64 EventContentId; // 0x18
		::FlatData::StageDifficulty* LastStageDifficulty; // 0x20
		::System::Int32 Multiplier; // 0x24
		::System::Int64 LatestClearStageId; // 0x28
		::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* objectCharacter; // 0x30
		::MX::Data::MiniGameDefenseStageInfo* stageInfoCache; // 0x38
		Il2CppObject* fixedEchelonStrikerIdsCache; // 0x40

		Il2CppObject* get_FixedEchelonStrikerIdsCache()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMEDEFENSEOBJECT_GET_FIXEDECHELONSTRIKERIDSCACHE_OFFSET))(nullptr);
		}

		::System::Void set_StageHistoryDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MINIGAMEDEFENSEOBJECT_SET_STAGEHISTORYDBS_OFFSET))(arg, nullptr);
		}

		::System::Void SyncAll(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MINIGAMEDEFENSEOBJECT_SYNCALL_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMEDEFENSEOBJECT_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* get_StageHistoryDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMEDEFENSEOBJECT_GET_STAGEHISTORYDBS_OFFSET))(nullptr);
		}

		::System::Void ClearObjectCharacter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMEDEFENSEOBJECT_CLEAROBJECTCHARACTER_OFFSET))(nullptr);
		}

		::System::Void EnterMinigameDefenseBattle(::MX::Data::MiniGameDefenseStageInfo* arg)
		{
			((::System::Void(*)(::MX::Data::MiniGameDefenseStageInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MINIGAMEDEFENSEOBJECT_ENTERMINIGAMEDEFENSEBATTLE_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetObjectCharacterDamagedAmount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMEDEFENSEOBJECT_GETOBJECTCHARACTERDAMAGEDAMOUNT_OFFSET))(nullptr);
		}

		::System::Void SetObjectCharacter(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*, ::PVOID))((::PBYTE)hIl2Cpp + MINIGAMEDEFENSEOBJECT_SETOBJECTCHARACTER_OFFSET))(arg, nullptr);
		}

		::System::Void DefenseBattleRetry()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMEDEFENSEOBJECT_DEFENSEBATTLERETRY_OFFSET))(nullptr);
		}

		::System::Void Sync(::MX::GameLogic::DBModel::MiniGameDefenseStageHistoryDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::MiniGameDefenseStageHistoryDB*, ::PVOID))((::PBYTE)hIl2Cpp + MINIGAMEDEFENSEOBJECT_SYNC_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* CoStartBattle(::MX::Data::MiniGameDefenseStageInfo* arg, ::System::Int64 arg2, ::System::Int64 arg3)
		{
			return ((::System::Collections::IEnumerator*(*)(::MX::Data::MiniGameDefenseStageInfo*, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MINIGAMEDEFENSEOBJECT_COSTARTBATTLE_OFFSET))(arg, arg2, arg3, nullptr);
		}

	};

