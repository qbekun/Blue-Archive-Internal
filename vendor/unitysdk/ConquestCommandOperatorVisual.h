#pragma once
#include "unitysdk.h"

namespace MX::Conquest::ConquestTileMapEvent { class ConquestCommandOperator; }
namespace MX::Conquest::ConquestTileMapEvent { class ConquestCommand; }

#define CONQUESTCOMMANDOPERATORVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x1ADC570)
#define CONQUESTCOMMANDOPERATORVISUAL_GETCOMMAND_OFFSET UNITYSDK_OFFSET(0x1ADC5E0)
#define CONQUESTCOMMANDOPERATORVISUAL_SETCOMMAND_OFFSET UNITYSDK_OFFSET(0x1ADC5F0)

	inline static constexpr unsigned int ConquestCommandOperatorVisual_TypeDefinitionIndex = 1455;

	class ConquestCommandOperatorVisual : public Il2CppObject
	{
	public:
		::MX::Conquest::ConquestTileMapEvent::ConquestCommandOperator* Operator; // 0x18
		::System::String* GroupId; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCOMMANDOPERATORVISUAL_.CTOR_OFFSET))(nullptr);
		}

		::MX::Conquest::ConquestTileMapEvent::ConquestCommand* GetCommand()
		{
			return ((::MX::Conquest::ConquestTileMapEvent::ConquestCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCOMMANDOPERATORVISUAL_GETCOMMAND_OFFSET))(nullptr);
		}

		::System::Void SetCommand(::MX::Conquest::ConquestTileMapEvent::ConquestCommand* arg)
		{
			((::System::Void(*)(::MX::Conquest::ConquestTileMapEvent::ConquestCommand*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCOMMANDOPERATORVISUAL_SETCOMMAND_OFFSET))(arg, nullptr);
		}

	};

