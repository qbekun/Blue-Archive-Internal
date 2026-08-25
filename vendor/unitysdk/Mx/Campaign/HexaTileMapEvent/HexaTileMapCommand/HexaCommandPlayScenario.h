#pragma once
#include "../../../../unitysdk.h"

namespace MX::Campaign::HexaTileMapEvent::HexaTileMapCommand { class HexaCommand; }
namespace MX::Campaign { class HexaTileMap; }
namespace MX::GameLogic::DBModel { class CampaignMainStageSaveDB; }
namespace MX::Campaign::HexaTileMapEvent::HexaTileMapCommand { class HexaCommandType; }

#define MX_CAMPAIGN_HEXATILEMAPEVENT_HEXATILEMAPCOMMAND_HEXACOMMANDPLAYSCENARIO_CLONE_OFFSET UNITYSDK_OFFSET(0x1440820)
#define MX_CAMPAIGN_HEXATILEMAPEVENT_HEXATILEMAPCOMMAND_HEXACOMMANDPLAYSCENARIO_RUN_OFFSET UNITYSDK_OFFSET(0x14409A0)
#define MX_CAMPAIGN_HEXATILEMAPEVENT_HEXATILEMAPCOMMAND_HEXACOMMANDPLAYSCENARIO_.CTOR_OFFSET UNITYSDK_OFFSET(0x14408F0)
#define MX_CAMPAIGN_HEXATILEMAPEVENT_HEXATILEMAPCOMMAND_HEXACOMMANDPLAYSCENARIO_GET_SCENARIOLIST_OFFSET UNITYSDK_OFFSET(0x1440C10)
#define MX_CAMPAIGN_HEXATILEMAPEVENT_HEXATILEMAPCOMMAND_HEXACOMMANDPLAYSCENARIO_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1440C20)

namespace MX::Campaign::HexaTileMapEvent::HexaTileMapCommand
{
	inline static constexpr unsigned int HexaCommandPlayScenario_TypeDefinitionIndex = 14930;

	class HexaCommandPlayScenario : public Il2CppObject
	{
	public:
		Il2CppObject* scenarioList; // 0x20

		::MX::Campaign::HexaTileMapEvent::HexaTileMapCommand::HexaCommand* Clone()
		{
			return ((::MX::Campaign::HexaTileMapEvent::HexaTileMapCommand::HexaCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILEMAPEVENT_HEXATILEMAPCOMMAND_HEXACOMMANDPLAYSCENARIO_CLONE_OFFSET))(nullptr);
		}

		::System::Void Run(::MX::Campaign::HexaTileMap* arg, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB* arg2, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB* arg3)
		{
			((::System::Void(*)(::MX::Campaign::HexaTileMap*, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB*, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILEMAPEVENT_HEXATILEMAPCOMMAND_HEXACOMMANDPLAYSCENARIO_RUN_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILEMAPEVENT_HEXATILEMAPCOMMAND_HEXACOMMANDPLAYSCENARIO_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* get_ScenarioList()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILEMAPEVENT_HEXATILEMAPCOMMAND_HEXACOMMANDPLAYSCENARIO_GET_SCENARIOLIST_OFFSET))(nullptr);
		}

		::MX::Campaign::HexaTileMapEvent::HexaTileMapCommand::HexaCommandType* get_Type()
		{
			return ((::MX::Campaign::HexaTileMapEvent::HexaTileMapCommand::HexaCommandType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILEMAPEVENT_HEXATILEMAPCOMMAND_HEXACOMMANDPLAYSCENARIO_GET_TYPE_OFFSET))(nullptr);
		}

	};
}

