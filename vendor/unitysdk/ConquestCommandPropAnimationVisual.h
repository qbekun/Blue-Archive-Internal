#pragma once
#include "unitysdk.h"

namespace MX::Conquest::ConquestTileMapEvent { class ConquestCommandPropAnimation; }
namespace MX::Conquest::ConquestTileMapEvent { class ConquestCommand; }

#define CONQUESTCOMMANDPROPANIMATIONVISUAL_GETCOMMAND_OFFSET UNITYSDK_OFFSET(0x1ADC930)
#define CONQUESTCOMMANDPROPANIMATIONVISUAL_SETCOMMAND_OFFSET UNITYSDK_OFFSET(0x1ADC940)
#define CONQUESTCOMMANDPROPANIMATIONVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x1ADCA00)

	inline static constexpr unsigned int ConquestCommandPropAnimationVisual_TypeDefinitionIndex = 1458;

	class ConquestCommandPropAnimationVisual : public Il2CppObject
	{
	public:
		::MX::Conquest::ConquestTileMapEvent::ConquestCommandPropAnimation* PropAnimation; // 0x18
		::System::Int32 PropKey; // 0x20
		::System::String* AnimationName; // 0x28
		::System::Boolean BlockNextCommand; // 0x30

		::MX::Conquest::ConquestTileMapEvent::ConquestCommand* GetCommand()
		{
			return ((::MX::Conquest::ConquestTileMapEvent::ConquestCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCOMMANDPROPANIMATIONVISUAL_GETCOMMAND_OFFSET))(nullptr);
		}

		::System::Void SetCommand(::MX::Conquest::ConquestTileMapEvent::ConquestCommand* arg)
		{
			((::System::Void(*)(::MX::Conquest::ConquestTileMapEvent::ConquestCommand*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCOMMANDPROPANIMATIONVISUAL_SETCOMMAND_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCOMMANDPROPANIMATIONVISUAL_.CTOR_OFFSET))(nullptr);
		}

	};

