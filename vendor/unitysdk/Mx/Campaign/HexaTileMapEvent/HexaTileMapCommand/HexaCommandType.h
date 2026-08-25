#pragma once
#include "../../../../unitysdk.h"

namespace MX::Campaign::HexaTileMapEvent::HexaTileMapCommand { class HexaCommandType; }

namespace MX::Campaign::HexaTileMapEvent::HexaTileMapCommand
{
	inline static constexpr unsigned int HexaCommandType_TypeDefinitionIndex = 14926;

	class HexaCommandType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::Campaign::HexaTileMapEvent::HexaTileMapCommand::HexaCommandType* None; // 0x0
		::MX::Campaign::HexaTileMapEvent::HexaTileMapCommand::HexaCommandType* UnitSpawn; // 0x0
		::MX::Campaign::HexaTileMapEvent::HexaTileMapCommand::HexaCommandType* PlayScenario; // 0x0
		::MX::Campaign::HexaTileMapEvent::HexaTileMapCommand::HexaCommandType* StrategySpawn; // 0x0
		::MX::Campaign::HexaTileMapEvent::HexaTileMapCommand::HexaCommandType* TileSpawn; // 0x0
		::MX::Campaign::HexaTileMapEvent::HexaTileMapCommand::HexaCommandType* TileHide; // 0x0
		::MX::Campaign::HexaTileMapEvent::HexaTileMapCommand::HexaCommandType* EndBattle; // 0x0
		::MX::Campaign::HexaTileMapEvent::HexaTileMapCommand::HexaCommandType* WaitTurn; // 0x0
		::MX::Campaign::HexaTileMapEvent::HexaTileMapCommand::HexaCommandType* StrategyHide; // 0x0
		::MX::Campaign::HexaTileMapEvent::HexaTileMapCommand::HexaCommandType* UnitDie; // 0x0
		::MX::Campaign::HexaTileMapEvent::HexaTileMapCommand::HexaCommandType* UnitMove; // 0x0
		::MX::Campaign::HexaTileMapEvent::HexaTileMapCommand::HexaCommandType* CharacterEmoji; // 0x0

	};
}

