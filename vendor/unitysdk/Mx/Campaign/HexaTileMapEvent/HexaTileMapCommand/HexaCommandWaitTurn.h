#pragma once
#include "../../../../unitysdk.h"

namespace MX::Campaign::HexaTileMapEvent::HexaTileMapCommand { class HexaCommandType; }
namespace MX::Campaign::HexaTileMapEvent::HexaTileMapCommand { class HexaCommand; }
namespace MX::Campaign { class HexaTileMap; }
namespace MX::GameLogic::DBModel { class CampaignMainStageSaveDB; }

#define MX_CAMPAIGN_HEXATILEMAPEVENT_HEXATILEMAPCOMMAND_HEXACOMMANDWAITTURN_.CTOR_OFFSET UNITYSDK_OFFSET(0x1443660)
#define MX_CAMPAIGN_HEXATILEMAPEVENT_HEXATILEMAPCOMMAND_HEXACOMMANDWAITTURN_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1443670)
#define MX_CAMPAIGN_HEXATILEMAPEVENT_HEXATILEMAPCOMMAND_HEXACOMMANDWAITTURN_CLONE_OFFSET UNITYSDK_OFFSET(0x1443680)
#define MX_CAMPAIGN_HEXATILEMAPEVENT_HEXATILEMAPCOMMAND_HEXACOMMANDWAITTURN_RUN_OFFSET UNITYSDK_OFFSET(0x14436F0)

namespace MX::Campaign::HexaTileMapEvent::HexaTileMapCommand
{
	inline static constexpr unsigned int HexaCommandWaitTurn_TypeDefinitionIndex = 14941;

	class HexaCommandWaitTurn : public Il2CppObject
	{
	public:
		::System::Int32 Turn; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILEMAPEVENT_HEXATILEMAPCOMMAND_HEXACOMMANDWAITTURN_.CTOR_OFFSET))(nullptr);
		}

		::MX::Campaign::HexaTileMapEvent::HexaTileMapCommand::HexaCommandType* get_Type()
		{
			return ((::MX::Campaign::HexaTileMapEvent::HexaTileMapCommand::HexaCommandType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILEMAPEVENT_HEXATILEMAPCOMMAND_HEXACOMMANDWAITTURN_GET_TYPE_OFFSET))(nullptr);
		}

		::MX::Campaign::HexaTileMapEvent::HexaTileMapCommand::HexaCommand* Clone()
		{
			return ((::MX::Campaign::HexaTileMapEvent::HexaTileMapCommand::HexaCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILEMAPEVENT_HEXATILEMAPCOMMAND_HEXACOMMANDWAITTURN_CLONE_OFFSET))(nullptr);
		}

		::System::Void Run(::MX::Campaign::HexaTileMap* arg, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB* arg2, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB* arg3)
		{
			((::System::Void(*)(::MX::Campaign::HexaTileMap*, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB*, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILEMAPEVENT_HEXATILEMAPCOMMAND_HEXACOMMANDWAITTURN_RUN_OFFSET))(arg, arg2, arg3, nullptr);
		}

	};
}

