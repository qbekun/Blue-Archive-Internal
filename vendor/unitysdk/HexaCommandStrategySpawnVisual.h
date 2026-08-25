#pragma once
#include "unitysdk.h"

namespace MX::Campaign::HexaTileMapEvent::HexaTileMapCommand { class HexaCommandStrategySpawn; }
namespace MX::Campaign::HexaTileMapEvent::HexaTileMapCommand { class HexaCommand; }

#define HEXACOMMANDSTRATEGYSPAWNVISUAL_GETCOMMAND_OFFSET UNITYSDK_OFFSET(0xF6CEB0)
#define HEXACOMMANDSTRATEGYSPAWNVISUAL_SETCOMMAND_OFFSET UNITYSDK_OFFSET(0xF6CEC0)
#define HEXACOMMANDSTRATEGYSPAWNVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0xF6CF80)

	inline static constexpr unsigned int HexaCommandStrategySpawnVisual_TypeDefinitionIndex = 779;

	class HexaCommandStrategySpawnVisual : public Il2CppObject
	{
	public:
		::MX::Campaign::HexaTileMapEvent::HexaTileMapCommand::HexaCommandStrategySpawn* StrategySpawn; // 0x18
		Il2CppObject* Strategies; // 0x20

		::MX::Campaign::HexaTileMapEvent::HexaTileMapCommand::HexaCommand* GetCommand()
		{
			return ((::MX::Campaign::HexaTileMapEvent::HexaTileMapCommand::HexaCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXACOMMANDSTRATEGYSPAWNVISUAL_GETCOMMAND_OFFSET))(nullptr);
		}

		::System::Void SetCommand(::MX::Campaign::HexaTileMapEvent::HexaTileMapCommand::HexaCommand* arg)
		{
			((::System::Void(*)(::MX::Campaign::HexaTileMapEvent::HexaTileMapCommand::HexaCommand*, ::PVOID))((::PBYTE)hIl2Cpp + HEXACOMMANDSTRATEGYSPAWNVISUAL_SETCOMMAND_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXACOMMANDSTRATEGYSPAWNVISUAL_.CTOR_OFFSET))(nullptr);
		}

	};

