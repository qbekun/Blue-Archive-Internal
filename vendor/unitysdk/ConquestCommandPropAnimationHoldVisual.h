#pragma once
#include "unitysdk.h"

namespace MX::Conquest::ConquestTileMapEvent { class ConquestCommandPropAnimationHold; }
namespace MX::Conquest::ConquestTileMapEvent { class ConquestCommand; }

#define CONQUESTCOMMANDPROPANIMATIONHOLDVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x1ADC7F0)
#define CONQUESTCOMMANDPROPANIMATIONHOLDVISUAL_GETCOMMAND_OFFSET UNITYSDK_OFFSET(0x1ADC860)
#define CONQUESTCOMMANDPROPANIMATIONHOLDVISUAL_SETCOMMAND_OFFSET UNITYSDK_OFFSET(0x1ADC870)

	inline static constexpr unsigned int ConquestCommandPropAnimationHoldVisual_TypeDefinitionIndex = 1457;

	class ConquestCommandPropAnimationHoldVisual : public Il2CppObject
	{
	public:
		::MX::Conquest::ConquestTileMapEvent::ConquestCommandPropAnimationHold* PropAnimation; // 0x18
		::System::Int32 PropKey; // 0x20
		::System::String* AnimationName; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCOMMANDPROPANIMATIONHOLDVISUAL_.CTOR_OFFSET))(nullptr);
		}

		::MX::Conquest::ConquestTileMapEvent::ConquestCommand* GetCommand()
		{
			return ((::MX::Conquest::ConquestTileMapEvent::ConquestCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCOMMANDPROPANIMATIONHOLDVISUAL_GETCOMMAND_OFFSET))(nullptr);
		}

		::System::Void SetCommand(::MX::Conquest::ConquestTileMapEvent::ConquestCommand* arg)
		{
			((::System::Void(*)(::MX::Conquest::ConquestTileMapEvent::ConquestCommand*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCOMMANDPROPANIMATIONHOLDVISUAL_SETCOMMAND_OFFSET))(arg, nullptr);
		}

	};

