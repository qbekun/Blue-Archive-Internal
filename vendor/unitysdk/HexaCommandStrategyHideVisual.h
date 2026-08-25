#pragma once
#include "unitysdk.h"

namespace MX::Campaign::HexaTileMapEvent::HexaTileMapCommand { class HexaCommandStrategyHide; }
namespace MX::Campaign::HexaTileMapEvent::HexaTileMapCommand { class HexaCommand; }

#define HEXACOMMANDSTRATEGYHIDEVISUAL_SETCOMMAND_OFFSET UNITYSDK_OFFSET(0xF6CD70)
#define HEXACOMMANDSTRATEGYHIDEVISUAL_GETCOMMAND_OFFSET UNITYSDK_OFFSET(0xF6CE30)
#define HEXACOMMANDSTRATEGYHIDEVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0xF6CE40)

	inline static constexpr unsigned int HexaCommandStrategyHideVisual_TypeDefinitionIndex = 778;

	class HexaCommandStrategyHideVisual : public Il2CppObject
	{
	public:
		::MX::Campaign::HexaTileMapEvent::HexaTileMapCommand::HexaCommandStrategyHide* StrategyHide; // 0x18
		Il2CppObject* Strategies; // 0x20

		::System::Void SetCommand(::MX::Campaign::HexaTileMapEvent::HexaTileMapCommand::HexaCommand* arg)
		{
			((::System::Void(*)(::MX::Campaign::HexaTileMapEvent::HexaTileMapCommand::HexaCommand*, ::PVOID))((::PBYTE)hIl2Cpp + HEXACOMMANDSTRATEGYHIDEVISUAL_SETCOMMAND_OFFSET))(arg, nullptr);
		}

		::MX::Campaign::HexaTileMapEvent::HexaTileMapCommand::HexaCommand* GetCommand()
		{
			return ((::MX::Campaign::HexaTileMapEvent::HexaTileMapCommand::HexaCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXACOMMANDSTRATEGYHIDEVISUAL_GETCOMMAND_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXACOMMANDSTRATEGYHIDEVISUAL_.CTOR_OFFSET))(nullptr);
		}

	};

