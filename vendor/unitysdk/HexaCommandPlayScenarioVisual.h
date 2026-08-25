#pragma once
#include "unitysdk.h"

namespace MX::Campaign::HexaTileMapEvent::HexaTileMapCommand { class HexaCommandPlayScenario; }
namespace MX::Campaign::HexaTileMapEvent::HexaTileMapCommand { class HexaCommand; }

#define HEXACOMMANDPLAYSCENARIOVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0xF6CC20)
#define HEXACOMMANDPLAYSCENARIOVISUAL_SETCOMMAND_OFFSET UNITYSDK_OFFSET(0xF6CCA0)
#define HEXACOMMANDPLAYSCENARIOVISUAL_GETCOMMAND_OFFSET UNITYSDK_OFFSET(0xF6CD60)

	inline static constexpr unsigned int HexaCommandPlayScenarioVisual_TypeDefinitionIndex = 777;

	class HexaCommandPlayScenarioVisual : public Il2CppObject
	{
	public:
		::MX::Campaign::HexaTileMapEvent::HexaTileMapCommand::HexaCommandPlayScenario* PlayScenario; // 0x18
		Il2CppObject* ScenarioList; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXACOMMANDPLAYSCENARIOVISUAL_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetCommand(::MX::Campaign::HexaTileMapEvent::HexaTileMapCommand::HexaCommand* arg)
		{
			((::System::Void(*)(::MX::Campaign::HexaTileMapEvent::HexaTileMapCommand::HexaCommand*, ::PVOID))((::PBYTE)hIl2Cpp + HEXACOMMANDPLAYSCENARIOVISUAL_SETCOMMAND_OFFSET))(arg, nullptr);
		}

		::MX::Campaign::HexaTileMapEvent::HexaTileMapCommand::HexaCommand* GetCommand()
		{
			return ((::MX::Campaign::HexaTileMapEvent::HexaTileMapCommand::HexaCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXACOMMANDPLAYSCENARIOVISUAL_GETCOMMAND_OFFSET))(nullptr);
		}

	};

