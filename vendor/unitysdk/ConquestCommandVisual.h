#pragma once
#include "unitysdk.h"

namespace MX::Conquest::ConquestTileMapEvent { class ConquestCommand; }

#define CONQUESTCOMMANDVISUAL_GETCOMMAND_OFFSET UNITYSDK_OFFSET(0x000000)
#define CONQUESTCOMMANDVISUAL_SAVE_OFFSET UNITYSDK_OFFSET(0x1ADD1F0)
#define CONQUESTCOMMANDVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x1ADC060)
#define CONQUESTCOMMANDVISUAL_LOAD_OFFSET UNITYSDK_OFFSET(0x1ADD200)
#define CONQUESTCOMMANDVISUAL_SETCOMMAND_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int ConquestCommandVisual_TypeDefinitionIndex = 1465;

	class ConquestCommandVisual : public Il2CppObject
	{
	public:
		::MX::Conquest::ConquestTileMapEvent::ConquestCommand* GetCommand()
		{
			return ((::MX::Conquest::ConquestTileMapEvent::ConquestCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCOMMANDVISUAL_GETCOMMAND_OFFSET))(nullptr);
		}

		::System::Void Save()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCOMMANDVISUAL_SAVE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCOMMANDVISUAL_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Load()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCOMMANDVISUAL_LOAD_OFFSET))(nullptr);
		}

		::System::Void SetCommand(::MX::Conquest::ConquestTileMapEvent::ConquestCommand* arg)
		{
			((::System::Void(*)(::MX::Conquest::ConquestTileMapEvent::ConquestCommand*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCOMMANDVISUAL_SETCOMMAND_OFFSET))(arg, nullptr);
		}

	};

