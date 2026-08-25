#pragma once
#include "../../../../unitysdk.h"

namespace MX::Campaign { class HexLocation; }
namespace MX::Campaign::HexaTileMapEvent::HexaTileMapCommand { class HexaCommandType; }
namespace MX::Campaign::HexaTileMapEvent::HexaTileMapCommand { class HexaCommand; }
namespace MX::Campaign { class HexaTileMap; }
namespace MX::GameLogic::DBModel { class CampaignMainStageSaveDB; }

#define MX_CAMPAIGN_HEXATILEMAPEVENT_HEXATILEMAPCOMMAND_HEXACOMMANDUNITMOVE_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1442950)
#define MX_CAMPAIGN_HEXATILEMAPEVENT_HEXATILEMAPCOMMAND_HEXACOMMANDUNITMOVE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1442960)
#define MX_CAMPAIGN_HEXATILEMAPEVENT_HEXATILEMAPCOMMAND_HEXACOMMANDUNITMOVE_CLONE_OFFSET UNITYSDK_OFFSET(0x1442970)
#define MX_CAMPAIGN_HEXATILEMAPEVENT_HEXATILEMAPCOMMAND_HEXACOMMANDUNITMOVE_RUN_OFFSET UNITYSDK_OFFSET(0x14429F0)

namespace MX::Campaign::HexaTileMapEvent::HexaTileMapCommand
{
	inline static constexpr unsigned int HexaCommandUnitMove_TypeDefinitionIndex = 14938;

	class HexaCommandUnitMove : public Il2CppObject
	{
	public:
		::System::Int64 EntityId; // 0x20
		::MX::Campaign::HexLocation* Location; // 0x28

		::MX::Campaign::HexaTileMapEvent::HexaTileMapCommand::HexaCommandType* get_Type()
		{
			return ((::MX::Campaign::HexaTileMapEvent::HexaTileMapCommand::HexaCommandType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILEMAPEVENT_HEXATILEMAPCOMMAND_HEXACOMMANDUNITMOVE_GET_TYPE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILEMAPEVENT_HEXATILEMAPCOMMAND_HEXACOMMANDUNITMOVE_.CTOR_OFFSET))(nullptr);
		}

		::MX::Campaign::HexaTileMapEvent::HexaTileMapCommand::HexaCommand* Clone()
		{
			return ((::MX::Campaign::HexaTileMapEvent::HexaTileMapCommand::HexaCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILEMAPEVENT_HEXATILEMAPCOMMAND_HEXACOMMANDUNITMOVE_CLONE_OFFSET))(nullptr);
		}

		::System::Void Run(::MX::Campaign::HexaTileMap* arg, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB* arg2, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB* arg3)
		{
			((::System::Void(*)(::MX::Campaign::HexaTileMap*, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB*, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILEMAPEVENT_HEXATILEMAPCOMMAND_HEXACOMMANDUNITMOVE_RUN_OFFSET))(arg, arg2, arg3, nullptr);
		}

	};
}

