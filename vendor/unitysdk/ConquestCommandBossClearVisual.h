#pragma once
#include "unitysdk.h"

namespace MX::Conquest::ConquestTileMapEvent { class ConquestCommandBossClear; }
namespace MX::Conquest::ConquestTileMapEvent { class ConquestCommand; }

#define CONQUESTCOMMANDBOSSCLEARVISUAL_GETCOMMAND_OFFSET UNITYSDK_OFFSET(0x1ADBF20)
#define CONQUESTCOMMANDBOSSCLEARVISUAL_SETCOMMAND_OFFSET UNITYSDK_OFFSET(0x1ADBF30)
#define CONQUESTCOMMANDBOSSCLEARVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x1ADBFF0)

	inline static constexpr unsigned int ConquestCommandBossClearVisual_TypeDefinitionIndex = 1450;

	class ConquestCommandBossClearVisual : public Il2CppObject
	{
	public:
		::MX::Conquest::ConquestTileMapEvent::ConquestCommandBossClear* BossClear; // 0x18
		::System::Int32 Step; // 0x20

		::MX::Conquest::ConquestTileMapEvent::ConquestCommand* GetCommand()
		{
			return ((::MX::Conquest::ConquestTileMapEvent::ConquestCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCOMMANDBOSSCLEARVISUAL_GETCOMMAND_OFFSET))(nullptr);
		}

		::System::Void SetCommand(::MX::Conquest::ConquestTileMapEvent::ConquestCommand* arg)
		{
			((::System::Void(*)(::MX::Conquest::ConquestTileMapEvent::ConquestCommand*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCOMMANDBOSSCLEARVISUAL_SETCOMMAND_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCOMMANDBOSSCLEARVISUAL_.CTOR_OFFSET))(nullptr);
		}

	};

