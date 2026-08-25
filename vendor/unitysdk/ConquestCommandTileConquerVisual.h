#pragma once
#include "unitysdk.h"

namespace MX::Conquest::ConquestTileMapEvent { class ConquestCommandTileConquer; }
class ConquestTileVisual;
namespace MX::Conquest::ConquestTileMapEvent { class ConquestCommand; }

#define CONQUESTCOMMANDTILECONQUERVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x1ADCF70)
#define CONQUESTCOMMANDTILECONQUERVISUAL_GETCOMMAND_OFFSET UNITYSDK_OFFSET(0x1ADCFE0)
#define CONQUESTCOMMANDTILECONQUERVISUAL_SETCOMMAND_OFFSET UNITYSDK_OFFSET(0x1ADCFF0)

	inline static constexpr unsigned int ConquestCommandTileConquerVisual_TypeDefinitionIndex = 1463;

	class ConquestCommandTileConquerVisual : public Il2CppObject
	{
	public:
		::MX::Conquest::ConquestTileMapEvent::ConquestCommandTileConquer* TileConquer; // 0x18
		ConquestTileVisual* Tile; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCOMMANDTILECONQUERVISUAL_.CTOR_OFFSET))(nullptr);
		}

		::MX::Conquest::ConquestTileMapEvent::ConquestCommand* GetCommand()
		{
			return ((::MX::Conquest::ConquestTileMapEvent::ConquestCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCOMMANDTILECONQUERVISUAL_GETCOMMAND_OFFSET))(nullptr);
		}

		::System::Void SetCommand(::MX::Conquest::ConquestTileMapEvent::ConquestCommand* arg)
		{
			((::System::Void(*)(::MX::Conquest::ConquestTileMapEvent::ConquestCommand*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCOMMANDTILECONQUERVISUAL_SETCOMMAND_OFFSET))(arg, nullptr);
		}

	};

