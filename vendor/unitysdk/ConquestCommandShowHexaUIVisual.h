#pragma once
#include "unitysdk.h"

namespace MX::Conquest::ConquestTileMapEvent { class ConquestCommandShowHexaUI; }
namespace MX::Conquest::ConquestTileMapEvent { class ConquestCommand; }

#define CONQUESTCOMMANDSHOWHEXAUIVISUAL_SETCOMMAND_OFFSET UNITYSDK_OFFSET(0x1ADCBB0)
#define CONQUESTCOMMANDSHOWHEXAUIVISUAL_GETCOMMAND_OFFSET UNITYSDK_OFFSET(0x1ADCC70)
#define CONQUESTCOMMANDSHOWHEXAUIVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x1ADCC80)

	inline static constexpr unsigned int ConquestCommandShowHexaUIVisual_TypeDefinitionIndex = 1460;

	class ConquestCommandShowHexaUIVisual : public Il2CppObject
	{
	public:
		::MX::Conquest::ConquestTileMapEvent::ConquestCommandShowHexaUI* ShowHexaUI; // 0x18

		::System::Void SetCommand(::MX::Conquest::ConquestTileMapEvent::ConquestCommand* arg)
		{
			((::System::Void(*)(::MX::Conquest::ConquestTileMapEvent::ConquestCommand*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCOMMANDSHOWHEXAUIVISUAL_SETCOMMAND_OFFSET))(arg, nullptr);
		}

		::MX::Conquest::ConquestTileMapEvent::ConquestCommand* GetCommand()
		{
			return ((::MX::Conquest::ConquestTileMapEvent::ConquestCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCOMMANDSHOWHEXAUIVISUAL_GETCOMMAND_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCOMMANDSHOWHEXAUIVISUAL_.CTOR_OFFSET))(nullptr);
		}

	};

