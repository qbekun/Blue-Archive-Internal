#pragma once
#include "unitysdk.h"

namespace MX::Conquest::ConquestTileMapEvent { class ConquestCommandStepOpen; }
namespace MX::Conquest::ConquestTileMapEvent { class ConquestCommand; }

#define CONQUESTCOMMANDSTEPOPENVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x1ADCE30)
#define CONQUESTCOMMANDSTEPOPENVISUAL_GETCOMMAND_OFFSET UNITYSDK_OFFSET(0x1ADCEA0)
#define CONQUESTCOMMANDSTEPOPENVISUAL_SETCOMMAND_OFFSET UNITYSDK_OFFSET(0x1ADCEB0)

	inline static constexpr unsigned int ConquestCommandStepOpenVisual_TypeDefinitionIndex = 1462;

	class ConquestCommandStepOpenVisual : public Il2CppObject
	{
	public:
		::MX::Conquest::ConquestTileMapEvent::ConquestCommandStepOpen* StepOpen; // 0x18
		::System::Int32 Step; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCOMMANDSTEPOPENVISUAL_.CTOR_OFFSET))(nullptr);
		}

		::MX::Conquest::ConquestTileMapEvent::ConquestCommand* GetCommand()
		{
			return ((::MX::Conquest::ConquestTileMapEvent::ConquestCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCOMMANDSTEPOPENVISUAL_GETCOMMAND_OFFSET))(nullptr);
		}

		::System::Void SetCommand(::MX::Conquest::ConquestTileMapEvent::ConquestCommand* arg)
		{
			((::System::Void(*)(::MX::Conquest::ConquestTileMapEvent::ConquestCommand*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCOMMANDSTEPOPENVISUAL_SETCOMMAND_OFFSET))(arg, nullptr);
		}

	};

