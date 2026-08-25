#pragma once
#include "unitysdk.h"

namespace MX::Conquest::ConquestTileMapEvent { class ConquestCommandTileUpgrade; }
class ConquestTileVisual;
namespace MX::Conquest::ConquestTileMapEvent { class ConquestCommand; }

#define CONQUESTCOMMANDTILEUPGRADEVISUAL_GETCOMMAND_OFFSET UNITYSDK_OFFSET(0x1ADD0B0)
#define CONQUESTCOMMANDTILEUPGRADEVISUAL_SETCOMMAND_OFFSET UNITYSDK_OFFSET(0x1ADD0C0)
#define CONQUESTCOMMANDTILEUPGRADEVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x1ADD180)

	inline static constexpr unsigned int ConquestCommandTileUpgradeVisual_TypeDefinitionIndex = 1464;

	class ConquestCommandTileUpgradeVisual : public Il2CppObject
	{
	public:
		::MX::Conquest::ConquestTileMapEvent::ConquestCommandTileUpgrade* TileUpgrade; // 0x18
		ConquestTileVisual* Tile; // 0x20

		::MX::Conquest::ConquestTileMapEvent::ConquestCommand* GetCommand()
		{
			return ((::MX::Conquest::ConquestTileMapEvent::ConquestCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCOMMANDTILEUPGRADEVISUAL_GETCOMMAND_OFFSET))(nullptr);
		}

		::System::Void SetCommand(::MX::Conquest::ConquestTileMapEvent::ConquestCommand* arg)
		{
			((::System::Void(*)(::MX::Conquest::ConquestTileMapEvent::ConquestCommand*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCOMMANDTILEUPGRADEVISUAL_SETCOMMAND_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCOMMANDTILEUPGRADEVISUAL_.CTOR_OFFSET))(nullptr);
		}

	};

