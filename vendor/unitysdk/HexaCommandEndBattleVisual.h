#pragma once
#include "unitysdk.h"

namespace MX::Campaign::HexaTileMapEvent::HexaTileMapCommand { class HexaCommandEndBattle; }
namespace MX::NetworkProtocol { class CampaignEndBattle; }
namespace MX::Campaign::HexaTileMapEvent::HexaTileMapCommand { class HexaCommand; }

#define HEXACOMMANDENDBATTLEVISUAL_GETCOMMAND_OFFSET UNITYSDK_OFFSET(0xE55A30)
#define HEXACOMMANDENDBATTLEVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0xE55A40)
#define HEXACOMMANDENDBATTLEVISUAL_SETCOMMAND_OFFSET UNITYSDK_OFFSET(0xE55AB0)

	inline static constexpr unsigned int HexaCommandEndBattleVisual_TypeDefinitionIndex = 776;

	class HexaCommandEndBattleVisual : public Il2CppObject
	{
	public:
		::MX::Campaign::HexaTileMapEvent::HexaTileMapCommand::HexaCommandEndBattle* EndBattle; // 0x18
		::MX::NetworkProtocol::CampaignEndBattle* EndBattleType; // 0x20

		::MX::Campaign::HexaTileMapEvent::HexaTileMapCommand::HexaCommand* GetCommand()
		{
			return ((::MX::Campaign::HexaTileMapEvent::HexaTileMapCommand::HexaCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXACOMMANDENDBATTLEVISUAL_GETCOMMAND_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXACOMMANDENDBATTLEVISUAL_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetCommand(::MX::Campaign::HexaTileMapEvent::HexaTileMapCommand::HexaCommand* arg)
		{
			((::System::Void(*)(::MX::Campaign::HexaTileMapEvent::HexaTileMapCommand::HexaCommand*, ::PVOID))((::PBYTE)hIl2Cpp + HEXACOMMANDENDBATTLEVISUAL_SETCOMMAND_OFFSET))(arg, nullptr);
		}

	};

