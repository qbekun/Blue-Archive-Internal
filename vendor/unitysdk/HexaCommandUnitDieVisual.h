#pragma once
#include "unitysdk.h"

namespace MX::Campaign::HexaTileMapEvent::HexaTileMapCommand { class HexaCommandUnitDie; }
namespace MX::Campaign::HexaTileMapEvent::HexaTileMapCommand { class HexaCommand; }

#define HEXACOMMANDUNITDIEVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0xF6D270)
#define HEXACOMMANDUNITDIEVISUAL_SETCOMMAND_OFFSET UNITYSDK_OFFSET(0xF6D2E0)
#define HEXACOMMANDUNITDIEVISUAL_GETCOMMAND_OFFSET UNITYSDK_OFFSET(0xF6D3A0)

	inline static constexpr unsigned int HexaCommandUnitDieVisual_TypeDefinitionIndex = 782;

	class HexaCommandUnitDieVisual : public Il2CppObject
	{
	public:
		::MX::Campaign::HexaTileMapEvent::HexaTileMapCommand::HexaCommandUnitDie* UnitDie; // 0x18
		Il2CppObject* Units; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXACOMMANDUNITDIEVISUAL_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetCommand(::MX::Campaign::HexaTileMapEvent::HexaTileMapCommand::HexaCommand* arg)
		{
			((::System::Void(*)(::MX::Campaign::HexaTileMapEvent::HexaTileMapCommand::HexaCommand*, ::PVOID))((::PBYTE)hIl2Cpp + HEXACOMMANDUNITDIEVISUAL_SETCOMMAND_OFFSET))(arg, nullptr);
		}

		::MX::Campaign::HexaTileMapEvent::HexaTileMapCommand::HexaCommand* GetCommand()
		{
			return ((::MX::Campaign::HexaTileMapEvent::HexaTileMapCommand::HexaCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXACOMMANDUNITDIEVISUAL_GETCOMMAND_OFFSET))(nullptr);
		}

	};

