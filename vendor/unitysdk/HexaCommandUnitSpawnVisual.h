#pragma once
#include "unitysdk.h"

namespace MX::Campaign::HexaTileMapEvent::HexaTileMapCommand { class HexaCommandUnitSpawn; }
namespace MX::Campaign::HexaTileMapEvent::HexaTileMapCommand { class HexaCommand; }

#define HEXACOMMANDUNITSPAWNVISUAL_GETCOMMAND_OFFSET UNITYSDK_OFFSET(0xF6D4F0)
#define HEXACOMMANDUNITSPAWNVISUAL_SETCOMMAND_OFFSET UNITYSDK_OFFSET(0xF6D500)
#define HEXACOMMANDUNITSPAWNVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0xF6D5C0)

	inline static constexpr unsigned int HexaCommandUnitSpawnVisual_TypeDefinitionIndex = 784;

	class HexaCommandUnitSpawnVisual : public Il2CppObject
	{
	public:
		::MX::Campaign::HexaTileMapEvent::HexaTileMapCommand::HexaCommandUnitSpawn* UnitSpawn; // 0x18
		Il2CppObject* Units; // 0x20

		::MX::Campaign::HexaTileMapEvent::HexaTileMapCommand::HexaCommand* GetCommand()
		{
			return ((::MX::Campaign::HexaTileMapEvent::HexaTileMapCommand::HexaCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXACOMMANDUNITSPAWNVISUAL_GETCOMMAND_OFFSET))(nullptr);
		}

		::System::Void SetCommand(::MX::Campaign::HexaTileMapEvent::HexaTileMapCommand::HexaCommand* arg)
		{
			((::System::Void(*)(::MX::Campaign::HexaTileMapEvent::HexaTileMapCommand::HexaCommand*, ::PVOID))((::PBYTE)hIl2Cpp + HEXACOMMANDUNITSPAWNVISUAL_SETCOMMAND_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXACOMMANDUNITSPAWNVISUAL_.CTOR_OFFSET))(nullptr);
		}

	};

