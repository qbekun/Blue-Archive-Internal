#pragma once
#include "unitysdk.h"

namespace MX::Conquest::ConquestTileMapEvent { class ConquestCommandHideConquestUI; }
namespace MX::Conquest::ConquestTileMapEvent { class ConquestCommand; }

#define CONQUESTCOMMANDHIDECONQUESTUIVISUAL_GETCOMMAND_OFFSET UNITYSDK_OFFSET(0x1ADC2F0)
#define CONQUESTCOMMANDHIDECONQUESTUIVISUAL_SETCOMMAND_OFFSET UNITYSDK_OFFSET(0x1ADC300)
#define CONQUESTCOMMANDHIDECONQUESTUIVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x1ADC3C0)

	inline static constexpr unsigned int ConquestCommandHideConquestUIVisual_TypeDefinitionIndex = 1453;

	class ConquestCommandHideConquestUIVisual : public Il2CppObject
	{
	public:
		::MX::Conquest::ConquestTileMapEvent::ConquestCommandHideConquestUI* HideConquestUI; // 0x18
		::System::Boolean BlockNextCommand; // 0x20

		::MX::Conquest::ConquestTileMapEvent::ConquestCommand* GetCommand()
		{
			return ((::MX::Conquest::ConquestTileMapEvent::ConquestCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCOMMANDHIDECONQUESTUIVISUAL_GETCOMMAND_OFFSET))(nullptr);
		}

		::System::Void SetCommand(::MX::Conquest::ConquestTileMapEvent::ConquestCommand* arg)
		{
			((::System::Void(*)(::MX::Conquest::ConquestTileMapEvent::ConquestCommand*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCOMMANDHIDECONQUESTUIVISUAL_SETCOMMAND_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCOMMANDHIDECONQUESTUIVISUAL_.CTOR_OFFSET))(nullptr);
		}

	};

