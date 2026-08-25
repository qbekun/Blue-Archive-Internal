#pragma once
#include "../../../../unitysdk.h"

namespace MX::Campaign { class HexaTile; }
namespace MX::Campaign { class HexaTileMap; }
namespace MX::Campaign { class Strategy; }
namespace MX::GameLogic::DBModel { class CampaignMainStageSaveDB; }
namespace MX::Campaign::HexaTileMapEvent::HexaTileMapCommand { class HexaCommandType; }
namespace MX::Campaign::HexaTileMapEvent::HexaTileMapCommand { class HexaCommand; }

#define MX_CAMPAIGN_HEXATILEMAPEVENT_HEXATILEMAPCOMMAND_HEXACOMMANDSTRATEGYSPAWN_ADJUSTLOCATIONBYTILEOCCUPATION_OFFSET UNITYSDK_OFFSET(0x14414A0)
#define MX_CAMPAIGN_HEXATILEMAPEVENT_HEXATILEMAPCOMMAND_HEXACOMMANDSTRATEGYSPAWN_RUN_OFFSET UNITYSDK_OFFSET(0x14416E0)
#define MX_CAMPAIGN_HEXATILEMAPEVENT_HEXATILEMAPCOMMAND_HEXACOMMANDSTRATEGYSPAWN_.CTOR_OFFSET UNITYSDK_OFFSET(0x1441C00)
#define MX_CAMPAIGN_HEXATILEMAPEVENT_HEXATILEMAPCOMMAND_HEXACOMMANDSTRATEGYSPAWN_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1441C80)
#define MX_CAMPAIGN_HEXATILEMAPEVENT_HEXATILEMAPCOMMAND_HEXACOMMANDSTRATEGYSPAWN_CLONE_OFFSET UNITYSDK_OFFSET(0x1441C90)

namespace MX::Campaign::HexaTileMapEvent::HexaTileMapCommand
{
	inline static constexpr unsigned int HexaCommandStrategySpawn_TypeDefinitionIndex = 14934;

	class HexaCommandStrategySpawn : public Il2CppObject
	{
	public:
		Il2CppObject* StrategyEntityIds; // 0x20

		::MX::Campaign::HexaTile* AdjustLocationByTileOccupation(::MX::Campaign::HexaTileMap* arg, ::MX::Campaign::Strategy* arg2)
		{
			return ((::MX::Campaign::HexaTile*(*)(::MX::Campaign::HexaTileMap*, ::MX::Campaign::Strategy*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILEMAPEVENT_HEXATILEMAPCOMMAND_HEXACOMMANDSTRATEGYSPAWN_ADJUSTLOCATIONBYTILEOCCUPATION_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Run(::MX::Campaign::HexaTileMap* arg, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB* arg2, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB* arg3)
		{
			((::System::Void(*)(::MX::Campaign::HexaTileMap*, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB*, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILEMAPEVENT_HEXATILEMAPCOMMAND_HEXACOMMANDSTRATEGYSPAWN_RUN_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILEMAPEVENT_HEXATILEMAPCOMMAND_HEXACOMMANDSTRATEGYSPAWN_.CTOR_OFFSET))(nullptr);
		}

		::MX::Campaign::HexaTileMapEvent::HexaTileMapCommand::HexaCommandType* get_Type()
		{
			return ((::MX::Campaign::HexaTileMapEvent::HexaTileMapCommand::HexaCommandType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILEMAPEVENT_HEXATILEMAPCOMMAND_HEXACOMMANDSTRATEGYSPAWN_GET_TYPE_OFFSET))(nullptr);
		}

		::MX::Campaign::HexaTileMapEvent::HexaTileMapCommand::HexaCommand* Clone()
		{
			return ((::MX::Campaign::HexaTileMapEvent::HexaTileMapCommand::HexaCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILEMAPEVENT_HEXATILEMAPCOMMAND_HEXACOMMANDSTRATEGYSPAWN_CLONE_OFFSET))(nullptr);
		}

	};
}

