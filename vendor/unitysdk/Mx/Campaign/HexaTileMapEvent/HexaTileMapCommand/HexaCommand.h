#pragma once
#include "../../../../unitysdk.h"

namespace MX::Campaign::HexaTileMapEvent::HexaTileMapCommand { class HexaCommand; }
namespace MX::Campaign::HexaTileMapEvent::HexaTileMapCommand { class HexaCommandType; }
namespace MX::Campaign { class HexaTileMap; }
namespace MX::GameLogic::DBModel { class CampaignMainStageSaveDB; }

#define MX_CAMPAIGN_HEXATILEMAPEVENT_HEXATILEMAPCOMMAND_HEXACOMMAND_CLONE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_CAMPAIGN_HEXATILEMAPEVENT_HEXATILEMAPCOMMAND_HEXACOMMAND_SET_COMMANDID_OFFSET UNITYSDK_OFFSET(0x1440490)
#define MX_CAMPAIGN_HEXATILEMAPEVENT_HEXATILEMAPCOMMAND_HEXACOMMAND_GET_COMMANDID_OFFSET UNITYSDK_OFFSET(0x14404A0)
#define MX_CAMPAIGN_HEXATILEMAPEVENT_HEXATILEMAPCOMMAND_HEXACOMMAND_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x14404B0)
#define MX_CAMPAIGN_HEXATILEMAPEVENT_HEXATILEMAPCOMMAND_HEXACOMMAND_.CTOR_OFFSET UNITYSDK_OFFSET(0x14404C0)
#define MX_CAMPAIGN_HEXATILEMAPEVENT_HEXATILEMAPCOMMAND_HEXACOMMAND_RUN_OFFSET UNITYSDK_OFFSET(0x14404D0)

namespace MX::Campaign::HexaTileMapEvent::HexaTileMapCommand
{
	inline static constexpr unsigned int HexaCommand_TypeDefinitionIndex = 14927;

	class HexaCommand : public Il2CppObject
	{
	public:
		::System::Int64 _CommandId_k__BackingField; // 0x10
		Il2CppObject* VisualizeDelegate; // 0x18

		::MX::Campaign::HexaTileMapEvent::HexaTileMapCommand::HexaCommand* Clone()
		{
			return ((::MX::Campaign::HexaTileMapEvent::HexaTileMapCommand::HexaCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILEMAPEVENT_HEXATILEMAPCOMMAND_HEXACOMMAND_CLONE_OFFSET))(nullptr);
		}

		::System::Void set_CommandId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILEMAPEVENT_HEXATILEMAPCOMMAND_HEXACOMMAND_SET_COMMANDID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_CommandId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILEMAPEVENT_HEXATILEMAPCOMMAND_HEXACOMMAND_GET_COMMANDID_OFFSET))(nullptr);
		}

		::MX::Campaign::HexaTileMapEvent::HexaTileMapCommand::HexaCommandType* get_Type()
		{
			return ((::MX::Campaign::HexaTileMapEvent::HexaTileMapCommand::HexaCommandType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILEMAPEVENT_HEXATILEMAPCOMMAND_HEXACOMMAND_GET_TYPE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILEMAPEVENT_HEXATILEMAPCOMMAND_HEXACOMMAND_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Run(::MX::Campaign::HexaTileMap* arg, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB* arg2, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB* arg3)
		{
			((::System::Void(*)(::MX::Campaign::HexaTileMap*, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB*, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILEMAPEVENT_HEXATILEMAPCOMMAND_HEXACOMMAND_RUN_OFFSET))(arg, arg2, arg3, nullptr);
		}

	};
}

