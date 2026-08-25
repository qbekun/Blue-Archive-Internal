#pragma once
#include "unitysdk.h"

namespace MX::Campaign::HexaTileMapEvent::HexaTileMapCommand { class HexaCommandTileHide; }
namespace MX::Campaign::HexaTileMapEvent::HexaTileMapCommand { class HexaCommand; }

#define HEXACOMMANDTILEHIDEVISUAL_SETCOMMAND_OFFSET UNITYSDK_OFFSET(0xF6CFF0)
#define HEXACOMMANDTILEHIDEVISUAL_GETCOMMAND_OFFSET UNITYSDK_OFFSET(0xF6D0B0)
#define HEXACOMMANDTILEHIDEVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0xF6D0C0)

	inline static constexpr unsigned int HexaCommandTileHideVisual_TypeDefinitionIndex = 780;

	class HexaCommandTileHideVisual : public Il2CppObject
	{
	public:
		::MX::Campaign::HexaTileMapEvent::HexaTileMapCommand::HexaCommandTileHide* TileHide; // 0x18
		Il2CppObject* Tiles; // 0x20

		::System::Void SetCommand(::MX::Campaign::HexaTileMapEvent::HexaTileMapCommand::HexaCommand* arg)
		{
			((::System::Void(*)(::MX::Campaign::HexaTileMapEvent::HexaTileMapCommand::HexaCommand*, ::PVOID))((::PBYTE)hIl2Cpp + HEXACOMMANDTILEHIDEVISUAL_SETCOMMAND_OFFSET))(arg, nullptr);
		}

		::MX::Campaign::HexaTileMapEvent::HexaTileMapCommand::HexaCommand* GetCommand()
		{
			return ((::MX::Campaign::HexaTileMapEvent::HexaTileMapCommand::HexaCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXACOMMANDTILEHIDEVISUAL_GETCOMMAND_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXACOMMANDTILEHIDEVISUAL_.CTOR_OFFSET))(nullptr);
		}

	};

