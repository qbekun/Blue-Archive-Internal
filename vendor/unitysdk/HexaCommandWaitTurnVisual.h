#pragma once
#include "unitysdk.h"

namespace MX::Campaign::HexaTileMapEvent::HexaTileMapCommand { class HexaCommandWaitTurn; }
namespace MX::Campaign::HexaTileMapEvent::HexaTileMapCommand { class HexaCommand; }

#define HEXACOMMANDWAITTURNVISUAL_SETCOMMAND_OFFSET UNITYSDK_OFFSET(0xF6D700)
#define HEXACOMMANDWAITTURNVISUAL_GETCOMMAND_OFFSET UNITYSDK_OFFSET(0xF6D7C0)
#define HEXACOMMANDWAITTURNVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0xF6D7D0)

	inline static constexpr unsigned int HexaCommandWaitTurnVisual_TypeDefinitionIndex = 786;

	class HexaCommandWaitTurnVisual : public Il2CppObject
	{
	public:
		::MX::Campaign::HexaTileMapEvent::HexaTileMapCommand::HexaCommandWaitTurn* WaitTurn; // 0x18
		::System::Int32 Turn; // 0x20

		::System::Void SetCommand(::MX::Campaign::HexaTileMapEvent::HexaTileMapCommand::HexaCommand* arg)
		{
			((::System::Void(*)(::MX::Campaign::HexaTileMapEvent::HexaTileMapCommand::HexaCommand*, ::PVOID))((::PBYTE)hIl2Cpp + HEXACOMMANDWAITTURNVISUAL_SETCOMMAND_OFFSET))(arg, nullptr);
		}

		::MX::Campaign::HexaTileMapEvent::HexaTileMapCommand::HexaCommand* GetCommand()
		{
			return ((::MX::Campaign::HexaTileMapEvent::HexaTileMapCommand::HexaCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXACOMMANDWAITTURNVISUAL_GETCOMMAND_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXACOMMANDWAITTURNVISUAL_.CTOR_OFFSET))(nullptr);
		}

	};

