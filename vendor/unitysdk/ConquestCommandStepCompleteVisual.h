#pragma once
#include "unitysdk.h"

namespace MX::Conquest::ConquestTileMapEvent { class ConquestCommandStepComplete; }
namespace MX::Conquest::ConquestTileMapEvent { class ConquestCommand; }

#define CONQUESTCOMMANDSTEPCOMPLETEVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x1ADCCF0)
#define CONQUESTCOMMANDSTEPCOMPLETEVISUAL_GETCOMMAND_OFFSET UNITYSDK_OFFSET(0x1ADCD60)
#define CONQUESTCOMMANDSTEPCOMPLETEVISUAL_SETCOMMAND_OFFSET UNITYSDK_OFFSET(0x1ADCD70)

	inline static constexpr unsigned int ConquestCommandStepCompleteVisual_TypeDefinitionIndex = 1461;

	class ConquestCommandStepCompleteVisual : public Il2CppObject
	{
	public:
		::MX::Conquest::ConquestTileMapEvent::ConquestCommandStepComplete* StepComplete; // 0x18
		::System::Int32 Step; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCOMMANDSTEPCOMPLETEVISUAL_.CTOR_OFFSET))(nullptr);
		}

		::MX::Conquest::ConquestTileMapEvent::ConquestCommand* GetCommand()
		{
			return ((::MX::Conquest::ConquestTileMapEvent::ConquestCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCOMMANDSTEPCOMPLETEVISUAL_GETCOMMAND_OFFSET))(nullptr);
		}

		::System::Void SetCommand(::MX::Conquest::ConquestTileMapEvent::ConquestCommand* arg)
		{
			((::System::Void(*)(::MX::Conquest::ConquestTileMapEvent::ConquestCommand*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCOMMANDSTEPCOMPLETEVISUAL_SETCOMMAND_OFFSET))(arg, nullptr);
		}

	};

