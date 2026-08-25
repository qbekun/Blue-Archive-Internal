#pragma once
#include "unitysdk.h"

namespace MX::Conquest::ConquestTileMapEvent { class ConquestCommandHideHexaUI; }
namespace MX::Conquest::ConquestTileMapEvent { class ConquestCommand; }

#define CONQUESTCOMMANDHIDEHEXAUIVISUAL_GETCOMMAND_OFFSET UNITYSDK_OFFSET(0x1ADC430)
#define CONQUESTCOMMANDHIDEHEXAUIVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x1ADC440)
#define CONQUESTCOMMANDHIDEHEXAUIVISUAL_SETCOMMAND_OFFSET UNITYSDK_OFFSET(0x1ADC4B0)

	inline static constexpr unsigned int ConquestCommandHideHexaUIVisual_TypeDefinitionIndex = 1454;

	class ConquestCommandHideHexaUIVisual : public Il2CppObject
	{
	public:
		::MX::Conquest::ConquestTileMapEvent::ConquestCommandHideHexaUI* HideHexaUI; // 0x18

		::MX::Conquest::ConquestTileMapEvent::ConquestCommand* GetCommand()
		{
			return ((::MX::Conquest::ConquestTileMapEvent::ConquestCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCOMMANDHIDEHEXAUIVISUAL_GETCOMMAND_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCOMMANDHIDEHEXAUIVISUAL_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetCommand(::MX::Conquest::ConquestTileMapEvent::ConquestCommand* arg)
		{
			((::System::Void(*)(::MX::Conquest::ConquestTileMapEvent::ConquestCommand*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCOMMANDHIDEHEXAUIVISUAL_SETCOMMAND_OFFSET))(arg, nullptr);
		}

	};

