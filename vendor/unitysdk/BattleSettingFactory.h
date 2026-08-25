#pragma once
#include "unitysdk.h"

namespace MX::Logic::Data { class BattleSetting; }
namespace MX::Data { class CampaignStageInfo; }
namespace MX::Campaign { class HexaUnit; }
namespace FlatData { class EchelonType; }
namespace MX::Logic::Data { class BattleTypes; }
namespace FlatData { class EchelonExtensionType; }
namespace MX::GameLogic::DBModel { class WorldRaidLocalBossDB; }
namespace MX::GameLogic::DBModel { class RaidBattleDB; }
namespace MX::GameLogic::DBModel { class RaidDB; }
namespace MX::GameLogic::DBModel { class AssistCharacterDB; }
namespace MX::Data::Excel { class MultiFloorRaidStageExcel; }
namespace MX::GameLogic::DBModel { class TimeAttackDungeonRoomDB; }
namespace MX::GameLogic::DBModel { class ClanAssistUseInfo; }
namespace MX::GameLogic::DBModel { class ArenaBattleDB; }
namespace MX::GameLogic::DBModel { class ArenaUserDB; }
namespace MX::Data { class MiniGameDefenseStageInfo; }
namespace MX::Data::Excel { class CostumeExcel; }

#define BATTLESETTINGFACTORY_CREATEADVENTURE_OFFSET UNITYSDK_OFFSET(0xE3FD10)
#define BATTLESETTINGFACTORY_CREATESTORYSTRATEGY_OFFSET UNITYSDK_OFFSET(0xE3FD90)
#define BATTLESETTINGFACTORY_CREATESUBADVENTURE_OFFSET UNITYSDK_OFFSET(0xE3FE10)
#define BATTLESETTINGFACTORY_CREATESUBADVENTURE_OFFSET UNITYSDK_OFFSET(0xE3FF10)
#define BATTLESETTINGFACTORY_CREATEADVENTURE_OFFSET UNITYSDK_OFFSET(0xE3FFA0)
#define BATTLESETTINGFACTORY_CREATESINGLERAID_OFFSET UNITYSDK_OFFSET(0xE40020)
#define BATTLESETTINGFACTORY_CREATEWORLDRAIDSETTING_OFFSET UNITYSDK_OFFSET(0xE400A0)
#define BATTLESETTINGFACTORY_CREATESINGLERAID_OFFSET UNITYSDK_OFFSET(0xE40150)
#define BATTLESETTINGFACTORY_CREATEELIMINATERAID_OFFSET UNITYSDK_OFFSET(0xE401E0)
#define BATTLESETTINGFACTORY_CREATEPERMANENTRAID_OFFSET UNITYSDK_OFFSET(0xE40270)
#define BATTLESETTINGFACTORY_CREATEMULTIFLOORRAID_OFFSET UNITYSDK_OFFSET(0xE40300)
#define BATTLESETTINGFACTORY_CREATETIMEATTACKSETTING_OFFSET UNITYSDK_OFFSET(0xE40390)
#define BATTLESETTINGFACTORY_CREATEARENA_OFFSET UNITYSDK_OFFSET(0xE40430)
#define BATTLESETTINGFACTORY_CREATEARENA_OFFSET UNITYSDK_OFFSET(0xE404B0)
#define BATTLESETTINGFACTORY_CREATECONQUESTBATTLE_OFFSET UNITYSDK_OFFSET(0xE40530)
#define BATTLESETTINGFACTORY_CREATEMINIGAMEDEFENSEBATTLE_OFFSET UNITYSDK_OFFSET(0xE405F0)
#define BATTLESETTINGFACTORY_CREATEOTHERBATTLE_OFFSET UNITYSDK_OFFSET(0xE40680)
#define BATTLESETTINGFACTORY_CREATETUTORIALADVENTURE_OFFSET UNITYSDK_OFFSET(0xE40740)
#define BATTLESETTINGFACTORY_CREATEPROFILINGROOM_OFFSET UNITYSDK_OFFSET(0xE407A0)
#define BATTLESETTINGFACTORY_CREATEPROFILINGROOM_OFFSET UNITYSDK_OFFSET(0xE40D00)
#define BATTLESETTINGFACTORY_ADDDUMMYYUUKA_OFFSET UNITYSDK_OFFSET(0xE40AE0)

	inline static constexpr unsigned int BattleSettingFactory_TypeDefinitionIndex = 726;

	class BattleSettingFactory : public Il2CppObject
	{
	public:
		::MX::Logic::Data::BattleSetting* CreateAdventure(::MX::Data::CampaignStageInfo* arg, ::MX::Campaign::HexaUnit* arg2, ::MX::Campaign::HexaUnit* arg3)
		{
			return ((::MX::Logic::Data::BattleSetting*(*)(::MX::Data::CampaignStageInfo*, ::MX::Campaign::HexaUnit*, ::MX::Campaign::HexaUnit*, ::PVOID))((::PBYTE)hIl2Cpp + BATTLESETTINGFACTORY_CREATEADVENTURE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::MX::Logic::Data::BattleSetting* CreateStoryStrategy(::MX::Data::CampaignStageInfo* arg, ::MX::Campaign::HexaUnit* arg2, ::MX::Campaign::HexaUnit* arg3)
		{
			return ((::MX::Logic::Data::BattleSetting*(*)(::MX::Data::CampaignStageInfo*, ::MX::Campaign::HexaUnit*, ::MX::Campaign::HexaUnit*, ::PVOID))((::PBYTE)hIl2Cpp + BATTLESETTINGFACTORY_CREATESTORYSTRATEGY_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::MX::Logic::Data::BattleSetting* CreateSubAdventure(::MX::Data::CampaignStageInfo* arg, ::System::Int64 arg2, ::System::Boolean arg3)
		{
			return ((::MX::Logic::Data::BattleSetting*(*)(::MX::Data::CampaignStageInfo*, ::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BATTLESETTINGFACTORY_CREATESUBADVENTURE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::MX::Logic::Data::BattleSetting* CreateSubAdventure(::MX::Data::CampaignStageInfo* arg, ::System::Int64 arg2, ::FlatData::EchelonType* arg3, ::MX::Logic::Data::BattleTypes* arg4, ::System::Boolean arg5)
		{
			return ((::MX::Logic::Data::BattleSetting*(*)(::MX::Data::CampaignStageInfo*, ::System::Int64, ::FlatData::EchelonType*, ::MX::Logic::Data::BattleTypes*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BATTLESETTINGFACTORY_CREATESUBADVENTURE_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::MX::Logic::Data::BattleSetting* CreateAdventure(::System::Int64 arg, ::System::Int32 arg2, ::FlatData::EchelonExtensionType* arg3)
		{
			return ((::MX::Logic::Data::BattleSetting*(*)(::System::Int64, ::System::Int32, ::FlatData::EchelonExtensionType*, ::PVOID))((::PBYTE)hIl2Cpp + BATTLESETTINGFACTORY_CREATEADVENTURE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::MX::Logic::Data::BattleSetting* CreateSingleRaid(::System::Int64 arg, ::System::Int32 arg2, ::FlatData::EchelonExtensionType* arg3)
		{
			return ((::MX::Logic::Data::BattleSetting*(*)(::System::Int64, ::System::Int32, ::FlatData::EchelonExtensionType*, ::PVOID))((::PBYTE)hIl2Cpp + BATTLESETTINGFACTORY_CREATESINGLERAID_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::MX::Logic::Data::BattleSetting* CreateWorldRaidSetting(::MX::GameLogic::DBModel::WorldRaidLocalBossDB* arg, ::System::Boolean arg2, ::System::Boolean arg3, ::MX::GameLogic::DBModel::RaidBattleDB* arg4, ::System::Int32 arg5, Il2CppObject* arg6, ::System::Int64 arg7)
		{
			return ((::MX::Logic::Data::BattleSetting*(*)(::MX::GameLogic::DBModel::WorldRaidLocalBossDB*, ::System::Boolean, ::System::Boolean, ::MX::GameLogic::DBModel::RaidBattleDB*, ::System::Int32, Il2CppObject*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + BATTLESETTINGFACTORY_CREATEWORLDRAIDSETTING_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, nullptr);
		}

		::MX::Logic::Data::BattleSetting* CreateSingleRaid(::MX::GameLogic::DBModel::RaidDB* arg, ::MX::GameLogic::DBModel::RaidBattleDB* arg2, ::System::Int32 arg3, ::MX::GameLogic::DBModel::AssistCharacterDB* arg4)
		{
			return ((::MX::Logic::Data::BattleSetting*(*)(::MX::GameLogic::DBModel::RaidDB*, ::MX::GameLogic::DBModel::RaidBattleDB*, ::System::Int32, ::MX::GameLogic::DBModel::AssistCharacterDB*, ::PVOID))((::PBYTE)hIl2Cpp + BATTLESETTINGFACTORY_CREATESINGLERAID_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::MX::Logic::Data::BattleSetting* CreateEliminateRaid(::MX::GameLogic::DBModel::RaidDB* arg, ::MX::GameLogic::DBModel::RaidBattleDB* arg2, ::System::Int32 arg3, ::MX::GameLogic::DBModel::AssistCharacterDB* arg4)
		{
			return ((::MX::Logic::Data::BattleSetting*(*)(::MX::GameLogic::DBModel::RaidDB*, ::MX::GameLogic::DBModel::RaidBattleDB*, ::System::Int32, ::MX::GameLogic::DBModel::AssistCharacterDB*, ::PVOID))((::PBYTE)hIl2Cpp + BATTLESETTINGFACTORY_CREATEELIMINATERAID_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::MX::Logic::Data::BattleSetting* CreatePermanentRaid(::MX::GameLogic::DBModel::RaidDB* arg, ::MX::GameLogic::DBModel::RaidBattleDB* arg2, ::System::Int32 arg3, ::MX::GameLogic::DBModel::AssistCharacterDB* arg4)
		{
			return ((::MX::Logic::Data::BattleSetting*(*)(::MX::GameLogic::DBModel::RaidDB*, ::MX::GameLogic::DBModel::RaidBattleDB*, ::System::Int32, ::MX::GameLogic::DBModel::AssistCharacterDB*, ::PVOID))((::PBYTE)hIl2Cpp + BATTLESETTINGFACTORY_CREATEPERMANENTRAID_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::MX::Logic::Data::BattleSetting* CreateMultiFloorRaid(::MX::Data::Excel::MultiFloorRaidStageExcel* arg, ::System::Int32 arg2, Il2CppObject* arg3)
		{
			return ((::MX::Logic::Data::BattleSetting*(*)(::MX::Data::Excel::MultiFloorRaidStageExcel*, ::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BATTLESETTINGFACTORY_CREATEMULTIFLOORRAID_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::MX::Logic::Data::BattleSetting* CreateTimeAttackSetting(::MX::GameLogic::DBModel::TimeAttackDungeonRoomDB* arg, ::System::Int64 arg2, ::System::Int64 arg3, ::System::Int32 arg4, ::MX::GameLogic::DBModel::AssistCharacterDB* arg5, ::MX::GameLogic::DBModel::ClanAssistUseInfo* arg6)
		{
			return ((::MX::Logic::Data::BattleSetting*(*)(::MX::GameLogic::DBModel::TimeAttackDungeonRoomDB*, ::System::Int64, ::System::Int64, ::System::Int32, ::MX::GameLogic::DBModel::AssistCharacterDB*, ::MX::GameLogic::DBModel::ClanAssistUseInfo*, ::PVOID))((::PBYTE)hIl2Cpp + BATTLESETTINGFACTORY_CREATETIMEATTACKSETTING_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		::MX::Logic::Data::BattleSetting* CreateArena(::MX::GameLogic::DBModel::ArenaBattleDB* arg)
		{
			return ((::MX::Logic::Data::BattleSetting*(*)(::MX::GameLogic::DBModel::ArenaBattleDB*, ::PVOID))((::PBYTE)hIl2Cpp + BATTLESETTINGFACTORY_CREATEARENA_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Data::BattleSetting* CreateArena(::MX::GameLogic::DBModel::ArenaUserDB* arg, ::MX::GameLogic::DBModel::ArenaUserDB* arg2, ::System::Int64 arg3)
		{
			return ((::MX::Logic::Data::BattleSetting*(*)(::MX::GameLogic::DBModel::ArenaUserDB*, ::MX::GameLogic::DBModel::ArenaUserDB*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + BATTLESETTINGFACTORY_CREATEARENA_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::MX::Logic::Data::BattleSetting* CreateConquestBattle(::System::Int64 arg, ::System::Int64 arg2, ::System::Int64 arg3, ::System::Int64 arg4, ::MX::GameLogic::DBModel::AssistCharacterDB* arg5, ::System::Int64 arg6, ::System::Boolean arg7)
		{
			return ((::MX::Logic::Data::BattleSetting*(*)(::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::MX::GameLogic::DBModel::AssistCharacterDB*, ::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BATTLESETTINGFACTORY_CREATECONQUESTBATTLE_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, nullptr);
		}

		::MX::Logic::Data::BattleSetting* CreateMinigameDefenseBattle(::MX::Data::MiniGameDefenseStageInfo* arg, ::System::Int64 arg2, ::System::Int64 arg3, ::MX::GameLogic::DBModel::AssistCharacterDB* arg4)
		{
			return ((::MX::Logic::Data::BattleSetting*(*)(::MX::Data::MiniGameDefenseStageInfo*, ::System::Int64, ::System::Int64, ::MX::GameLogic::DBModel::AssistCharacterDB*, ::PVOID))((::PBYTE)hIl2Cpp + BATTLESETTINGFACTORY_CREATEMINIGAMEDEFENSEBATTLE_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::MX::Logic::Data::BattleSetting* CreateOtherBattle(::System::Int64 arg, ::System::Int64 arg2, ::MX::Logic::Data::BattleTypes* arg3, ::FlatData::EchelonType* arg4, ::FlatData::EchelonExtensionType* arg5, ::System::Int64 arg6, Il2CppObject* arg7)
		{
			return ((::MX::Logic::Data::BattleSetting*(*)(::System::Int64, ::System::Int64, ::MX::Logic::Data::BattleTypes*, ::FlatData::EchelonType*, ::FlatData::EchelonExtensionType*, ::System::Int64, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BATTLESETTINGFACTORY_CREATEOTHERBATTLE_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, nullptr);
		}

		::MX::Logic::Data::BattleSetting* CreateTutorialAdventure(::System::Int64 arg)
		{
			return ((::MX::Logic::Data::BattleSetting*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + BATTLESETTINGFACTORY_CREATETUTORIALADVENTURE_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Data::BattleSetting* CreateProfilingRoom(::System::Int64 arg, ::System::Boolean arg2)
		{
			return ((::MX::Logic::Data::BattleSetting*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BATTLESETTINGFACTORY_CREATEPROFILINGROOM_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Logic::Data::BattleSetting* CreateProfilingRoom(::System::Int64 arg, ::MX::Data::Excel::CostumeExcel* arg2)
		{
			return ((::MX::Logic::Data::BattleSetting*(*)(::System::Int64, ::MX::Data::Excel::CostumeExcel*, ::PVOID))((::PBYTE)hIl2Cpp + BATTLESETTINGFACTORY_CREATEPROFILINGROOM_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddDummyYuuka(::MX::Logic::Data::BattleSetting&* arg)
		{
			((::System::Void(*)(::MX::Logic::Data::BattleSetting&*, ::PVOID))((::PBYTE)hIl2Cpp + BATTLESETTINGFACTORY_ADDDUMMYYUUKA_OFFSET))(arg, nullptr);
		}

	};

