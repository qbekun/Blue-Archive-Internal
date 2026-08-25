#pragma once
#include "unitysdk.h"

namespace MX::Conquest::ConquestTileMapEvent { class ConquestCommandShowConquestUI; }
namespace MX::Conquest::ConquestTileMapEvent { class ConquestCommand; }

#define CONQUESTCOMMANDSHOWCONQUESTUIVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x1ADCA70)
#define CONQUESTCOMMANDSHOWCONQUESTUIVISUAL_SETCOMMAND_OFFSET UNITYSDK_OFFSET(0x1ADCAE0)
#define CONQUESTCOMMANDSHOWCONQUESTUIVISUAL_GETCOMMAND_OFFSET UNITYSDK_OFFSET(0x1ADCBA0)

	inline static constexpr unsigned int ConquestCommandShowConquestUIVisual_TypeDefinitionIndex = 1459;

	class ConquestCommandShowConquestUIVisual : public Il2CppObject
	{
	public:
		::MX::Conquest::ConquestTileMapEvent::ConquestCommandShowConquestUI* ShowConquestUI; // 0x18
		::System::Boolean BlockNextCommand; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCOMMANDSHOWCONQUESTUIVISUAL_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetCommand(::MX::Conquest::ConquestTileMapEvent::ConquestCommand* arg)
		{
			((::System::Void(*)(::MX::Conquest::ConquestTileMapEvent::ConquestCommand*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCOMMANDSHOWCONQUESTUIVISUAL_SETCOMMAND_OFFSET))(arg, nullptr);
		}

		::MX::Conquest::ConquestTileMapEvent::ConquestCommand* GetCommand()
		{
			return ((::MX::Conquest::ConquestTileMapEvent::ConquestCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCOMMANDSHOWCONQUESTUIVISUAL_GETCOMMAND_OFFSET))(nullptr);
		}

	};

