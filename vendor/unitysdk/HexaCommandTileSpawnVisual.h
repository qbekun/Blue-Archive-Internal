#pragma once
#include "unitysdk.h"

namespace MX::Campaign::HexaTileMapEvent::HexaTileMapCommand { class HexaCommandTileSpawn; }
namespace MX::Campaign::HexaTileMapEvent::HexaTileMapCommand { class HexaCommand; }

#define HEXACOMMANDTILESPAWNVISUAL_GETCOMMAND_OFFSET UNITYSDK_OFFSET(0xF6D130)
#define HEXACOMMANDTILESPAWNVISUAL_SETCOMMAND_OFFSET UNITYSDK_OFFSET(0xF6D140)
#define HEXACOMMANDTILESPAWNVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0xF6D200)

	inline static constexpr unsigned int HexaCommandTileSpawnVisual_TypeDefinitionIndex = 781;

	class HexaCommandTileSpawnVisual : public Il2CppObject
	{
	public:
		::MX::Campaign::HexaTileMapEvent::HexaTileMapCommand::HexaCommandTileSpawn* TileSpawn; // 0x18
		Il2CppObject* Tiles; // 0x20

		::MX::Campaign::HexaTileMapEvent::HexaTileMapCommand::HexaCommand* GetCommand()
		{
			return ((::MX::Campaign::HexaTileMapEvent::HexaTileMapCommand::HexaCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXACOMMANDTILESPAWNVISUAL_GETCOMMAND_OFFSET))(nullptr);
		}

		::System::Void SetCommand(::MX::Campaign::HexaTileMapEvent::HexaTileMapCommand::HexaCommand* arg)
		{
			((::System::Void(*)(::MX::Campaign::HexaTileMapEvent::HexaTileMapCommand::HexaCommand*, ::PVOID))((::PBYTE)hIl2Cpp + HEXACOMMANDTILESPAWNVISUAL_SETCOMMAND_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXACOMMANDTILESPAWNVISUAL_.CTOR_OFFSET))(nullptr);
		}

	};

