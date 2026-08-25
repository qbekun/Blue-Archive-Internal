#pragma once
#include "../../../../unitysdk.h"

namespace MX::Campaign { class HexaTileMap; }
namespace MX::GameLogic::DBModel { class CampaignMainStageSaveDB; }
namespace MX::Campaign::HexaTileMapEvent::HexaTileMapCommand { class HexaCommandType; }
namespace MX::Campaign::HexaTileMapEvent::HexaTileMapCommand { class HexaCommand; }

#define MX_CAMPAIGN_HEXATILEMAPEVENT_HEXATILEMAPCOMMAND_HEXACOMMANDTILEHIDE_RUN_OFFSET UNITYSDK_OFFSET(0x1441D80)
#define MX_CAMPAIGN_HEXATILEMAPEVENT_HEXATILEMAPCOMMAND_HEXACOMMANDTILEHIDE_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x14421C0)
#define MX_CAMPAIGN_HEXATILEMAPEVENT_HEXATILEMAPCOMMAND_HEXACOMMANDTILEHIDE_.CTOR_OFFSET UNITYSDK_OFFSET(0x14421D0)
#define MX_CAMPAIGN_HEXATILEMAPEVENT_HEXATILEMAPCOMMAND_HEXACOMMANDTILEHIDE_CLONE_OFFSET UNITYSDK_OFFSET(0x1442250)

namespace MX::Campaign::HexaTileMapEvent::HexaTileMapCommand
{
	inline static constexpr unsigned int HexaCommandTileHide_TypeDefinitionIndex = 14935;

	class HexaCommandTileHide : public Il2CppObject
	{
	public:
		Il2CppObject* TileLocations; // 0x20

		::System::Void Run(::MX::Campaign::HexaTileMap* arg, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB* arg2, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB* arg3)
		{
			((::System::Void(*)(::MX::Campaign::HexaTileMap*, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB*, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILEMAPEVENT_HEXATILEMAPCOMMAND_HEXACOMMANDTILEHIDE_RUN_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::MX::Campaign::HexaTileMapEvent::HexaTileMapCommand::HexaCommandType* get_Type()
		{
			return ((::MX::Campaign::HexaTileMapEvent::HexaTileMapCommand::HexaCommandType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILEMAPEVENT_HEXATILEMAPCOMMAND_HEXACOMMANDTILEHIDE_GET_TYPE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILEMAPEVENT_HEXATILEMAPCOMMAND_HEXACOMMANDTILEHIDE_.CTOR_OFFSET))(nullptr);
		}

		::MX::Campaign::HexaTileMapEvent::HexaTileMapCommand::HexaCommand* Clone()
		{
			return ((::MX::Campaign::HexaTileMapEvent::HexaTileMapCommand::HexaCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILEMAPEVENT_HEXATILEMAPCOMMAND_HEXACOMMANDTILEHIDE_CLONE_OFFSET))(nullptr);
		}

	};
}

