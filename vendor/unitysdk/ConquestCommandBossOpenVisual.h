#pragma once
#include "unitysdk.h"

namespace MX::Conquest::ConquestTileMapEvent { class ConquestCommandBossOpen; }
class ConquestUnitVisual;
namespace MX::Conquest::ConquestTileMapEvent { class ConquestCommand; }

#define CONQUESTCOMMANDBOSSOPENVISUAL_GETCOMMAND_OFFSET UNITYSDK_OFFSET(0x1ADC070)
#define CONQUESTCOMMANDBOSSOPENVISUAL_SETCOMMAND_OFFSET UNITYSDK_OFFSET(0x1ADC080)
#define CONQUESTCOMMANDBOSSOPENVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x1ADC140)

	inline static constexpr unsigned int ConquestCommandBossOpenVisual_TypeDefinitionIndex = 1451;

	class ConquestCommandBossOpenVisual : public Il2CppObject
	{
	public:
		::MX::Conquest::ConquestTileMapEvent::ConquestCommandBossOpen* BossOpen; // 0x18
		ConquestUnitVisual* Unit; // 0x20

		::MX::Conquest::ConquestTileMapEvent::ConquestCommand* GetCommand()
		{
			return ((::MX::Conquest::ConquestTileMapEvent::ConquestCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCOMMANDBOSSOPENVISUAL_GETCOMMAND_OFFSET))(nullptr);
		}

		::System::Void SetCommand(::MX::Conquest::ConquestTileMapEvent::ConquestCommand* arg)
		{
			((::System::Void(*)(::MX::Conquest::ConquestTileMapEvent::ConquestCommand*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCOMMANDBOSSOPENVISUAL_SETCOMMAND_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCOMMANDBOSSOPENVISUAL_.CTOR_OFFSET))(nullptr);
		}

	};

