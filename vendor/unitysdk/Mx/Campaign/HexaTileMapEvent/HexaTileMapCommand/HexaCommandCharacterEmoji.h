#pragma once
#include "../../../../unitysdk.h"

namespace FlatData { class EmojiEvent; }
namespace MX::Campaign::HexaTileMapEvent::HexaTileMapCommand { class HexaCommand; }
namespace MX::Campaign::HexaTileMapEvent::HexaTileMapCommand { class HexaCommandType; }
namespace MX::Campaign { class HexaTileMap; }
namespace MX::GameLogic::DBModel { class CampaignMainStageSaveDB; }

#define MX_CAMPAIGN_HEXATILEMAPEVENT_HEXATILEMAPCOMMAND_HEXACOMMANDCHARACTEREMOJI_CLONE_OFFSET UNITYSDK_OFFSET(0x14404E0)
#define MX_CAMPAIGN_HEXATILEMAPEVENT_HEXATILEMAPCOMMAND_HEXACOMMANDCHARACTEREMOJI_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1440600)
#define MX_CAMPAIGN_HEXATILEMAPEVENT_HEXATILEMAPCOMMAND_HEXACOMMANDCHARACTEREMOJI_.CTOR_OFFSET UNITYSDK_OFFSET(0x1440580)
#define MX_CAMPAIGN_HEXATILEMAPEVENT_HEXATILEMAPCOMMAND_HEXACOMMANDCHARACTEREMOJI_GET_UNITENTITYIDS_OFFSET UNITYSDK_OFFSET(0x1440610)
#define MX_CAMPAIGN_HEXATILEMAPEVENT_HEXATILEMAPCOMMAND_HEXACOMMANDCHARACTEREMOJI_RUN_OFFSET UNITYSDK_OFFSET(0x1440620)

namespace MX::Campaign::HexaTileMapEvent::HexaTileMapCommand
{
	inline static constexpr unsigned int HexaCommandCharacterEmoji_TypeDefinitionIndex = 14928;

	class HexaCommandCharacterEmoji : public Il2CppObject
	{
	public:
		Il2CppObject* unitIds; // 0x20
		::FlatData::EmojiEvent* Emoticon; // 0x28

		::MX::Campaign::HexaTileMapEvent::HexaTileMapCommand::HexaCommand* Clone()
		{
			return ((::MX::Campaign::HexaTileMapEvent::HexaTileMapCommand::HexaCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILEMAPEVENT_HEXATILEMAPCOMMAND_HEXACOMMANDCHARACTEREMOJI_CLONE_OFFSET))(nullptr);
		}

		::MX::Campaign::HexaTileMapEvent::HexaTileMapCommand::HexaCommandType* get_Type()
		{
			return ((::MX::Campaign::HexaTileMapEvent::HexaTileMapCommand::HexaCommandType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILEMAPEVENT_HEXATILEMAPCOMMAND_HEXACOMMANDCHARACTEREMOJI_GET_TYPE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILEMAPEVENT_HEXATILEMAPCOMMAND_HEXACOMMANDCHARACTEREMOJI_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* get_UnitEntityIds()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILEMAPEVENT_HEXATILEMAPCOMMAND_HEXACOMMANDCHARACTEREMOJI_GET_UNITENTITYIDS_OFFSET))(nullptr);
		}

		::System::Void Run(::MX::Campaign::HexaTileMap* arg, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB* arg2, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB* arg3)
		{
			((::System::Void(*)(::MX::Campaign::HexaTileMap*, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB*, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILEMAPEVENT_HEXATILEMAPCOMMAND_HEXACOMMANDCHARACTEREMOJI_RUN_OFFSET))(arg, arg2, arg3, nullptr);
		}

	};
}

