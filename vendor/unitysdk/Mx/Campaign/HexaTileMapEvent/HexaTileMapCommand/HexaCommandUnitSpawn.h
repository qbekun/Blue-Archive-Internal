#pragma once
#include "../../../../unitysdk.h"

namespace MX::Campaign::HexaTileMapEvent::HexaTileMapCommand { class HexaCommand; }
namespace MX::Campaign { class HexaTileMap; }
namespace MX::GameLogic::DBModel { class CampaignMainStageSaveDB; }
namespace MX::Campaign::HexaTileMapEvent::HexaTileMapCommand { class HexaCommandType; }
namespace MX::Campaign { class HexaUnit; }

#define MX_CAMPAIGN_HEXATILEMAPEVENT_HEXATILEMAPCOMMAND_HEXACOMMANDUNITSPAWN_CLONE_OFFSET UNITYSDK_OFFSET(0x1442D00)
#define MX_CAMPAIGN_HEXATILEMAPEVENT_HEXATILEMAPCOMMAND_HEXACOMMANDUNITSPAWN_RUN_OFFSET UNITYSDK_OFFSET(0x1442E50)
#define MX_CAMPAIGN_HEXATILEMAPEVENT_HEXATILEMAPCOMMAND_HEXACOMMANDUNITSPAWN_.CTOR_OFFSET UNITYSDK_OFFSET(0x1442DA0)
#define MX_CAMPAIGN_HEXATILEMAPEVENT_HEXATILEMAPCOMMAND_HEXACOMMANDUNITSPAWN_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1443620)
#define MX_CAMPAIGN_HEXATILEMAPEVENT_HEXATILEMAPCOMMAND_HEXACOMMANDUNITSPAWN_GET_UNITENTITYIDS_OFFSET UNITYSDK_OFFSET(0x1443630)
#define MX_CAMPAIGN_HEXATILEMAPEVENT_HEXATILEMAPCOMMAND_HEXACOMMANDUNITSPAWN_MAKESURETILEOCCUPATION_OFFSET UNITYSDK_OFFSET(0x14434D0)

namespace MX::Campaign::HexaTileMapEvent::HexaTileMapCommand
{
	inline static constexpr unsigned int HexaCommandUnitSpawn_TypeDefinitionIndex = 14940;

	class HexaCommandUnitSpawn : public Il2CppObject
	{
	public:
		Il2CppObject* unitIds; // 0x20

		::MX::Campaign::HexaTileMapEvent::HexaTileMapCommand::HexaCommand* Clone()
		{
			return ((::MX::Campaign::HexaTileMapEvent::HexaTileMapCommand::HexaCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILEMAPEVENT_HEXATILEMAPCOMMAND_HEXACOMMANDUNITSPAWN_CLONE_OFFSET))(nullptr);
		}

		::System::Void Run(::MX::Campaign::HexaTileMap* arg, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB* arg2, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB* arg3)
		{
			((::System::Void(*)(::MX::Campaign::HexaTileMap*, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB*, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILEMAPEVENT_HEXATILEMAPCOMMAND_HEXACOMMANDUNITSPAWN_RUN_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILEMAPEVENT_HEXATILEMAPCOMMAND_HEXACOMMANDUNITSPAWN_.CTOR_OFFSET))(nullptr);
		}

		::MX::Campaign::HexaTileMapEvent::HexaTileMapCommand::HexaCommandType* get_Type()
		{
			return ((::MX::Campaign::HexaTileMapEvent::HexaTileMapCommand::HexaCommandType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILEMAPEVENT_HEXATILEMAPCOMMAND_HEXACOMMANDUNITSPAWN_GET_TYPE_OFFSET))(nullptr);
		}

		Il2CppObject* get_UnitEntityIds()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILEMAPEVENT_HEXATILEMAPCOMMAND_HEXACOMMANDUNITSPAWN_GET_UNITENTITYIDS_OFFSET))(nullptr);
		}

		::System::Boolean MakeSureTileOccupation(::MX::GameLogic::DBModel::CampaignMainStageSaveDB* arg, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB* arg2, ::MX::Campaign::HexaTileMap* arg3, ::MX::Campaign::HexaUnit* arg4)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::CampaignMainStageSaveDB*, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB*, ::MX::Campaign::HexaTileMap*, ::MX::Campaign::HexaUnit*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILEMAPEVENT_HEXATILEMAPCOMMAND_HEXACOMMANDUNITSPAWN_MAKESURETILEOCCUPATION_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

	};
}

