#pragma once
#include "unitysdk.h"

namespace MX::Campaign::HexaTileMapEvent::HexaTileMapCommand { class HexaCommandUnitMove; }
class HexaUnitVisual;
class HexaTileVisual;
namespace MX::Campaign::HexaTileMapEvent::HexaTileMapCommand { class HexaCommand; }

#define HEXACOMMANDUNITMOVEVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0xF6D3B0)
#define HEXACOMMANDUNITMOVEVISUAL_GETCOMMAND_OFFSET UNITYSDK_OFFSET(0xF6D420)
#define HEXACOMMANDUNITMOVEVISUAL_SETCOMMAND_OFFSET UNITYSDK_OFFSET(0xF6D430)

	inline static constexpr unsigned int HexaCommandUnitMoveVisual_TypeDefinitionIndex = 783;

	class HexaCommandUnitMoveVisual : public Il2CppObject
	{
	public:
		::MX::Campaign::HexaTileMapEvent::HexaTileMapCommand::HexaCommandUnitMove* UnitMove; // 0x18
		HexaUnitVisual* Unit; // 0x20
		HexaTileVisual* Tile; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXACOMMANDUNITMOVEVISUAL_.CTOR_OFFSET))(nullptr);
		}

		::MX::Campaign::HexaTileMapEvent::HexaTileMapCommand::HexaCommand* GetCommand()
		{
			return ((::MX::Campaign::HexaTileMapEvent::HexaTileMapCommand::HexaCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXACOMMANDUNITMOVEVISUAL_GETCOMMAND_OFFSET))(nullptr);
		}

		::System::Void SetCommand(::MX::Campaign::HexaTileMapEvent::HexaTileMapCommand::HexaCommand* arg)
		{
			((::System::Void(*)(::MX::Campaign::HexaTileMapEvent::HexaTileMapCommand::HexaCommand*, ::PVOID))((::PBYTE)hIl2Cpp + HEXACOMMANDUNITMOVEVISUAL_SETCOMMAND_OFFSET))(arg, nullptr);
		}

	};

