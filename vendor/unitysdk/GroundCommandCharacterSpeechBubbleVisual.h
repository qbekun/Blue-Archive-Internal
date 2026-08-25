#pragma once
#include "unitysdk.h"

namespace MX::Logic::Battles { class GroundCommandCharacterSpeechBubble; }
namespace MX::Logic::Battles { class GroundCommand; }
namespace MX::Logic::Battles { class Battle; }

#define GROUNDCOMMANDCHARACTERSPEECHBUBBLEVISUAL_SETCOMMAND_OFFSET UNITYSDK_OFFSET(0x15AED30)
#define GROUNDCOMMANDCHARACTERSPEECHBUBBLEVISUAL_VISUALIZE_OFFSET UNITYSDK_OFFSET(0x15AEDF0)
#define GROUNDCOMMANDCHARACTERSPEECHBUBBLEVISUAL_GETCOMMAND_OFFSET UNITYSDK_OFFSET(0x15AF330)
#define GROUNDCOMMANDCHARACTERSPEECHBUBBLEVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x15AF340)

	inline static constexpr unsigned int GroundCommandCharacterSpeechBubbleVisual_TypeDefinitionIndex = 1133;

	class GroundCommandCharacterSpeechBubbleVisual : public Il2CppObject
	{
	public:
		::MX::Logic::Battles::GroundCommandCharacterSpeechBubble* DialogBubble; // 0x18

		::System::Void SetCommand(::MX::Logic::Battles::GroundCommand* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::GroundCommand*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDCHARACTERSPEECHBUBBLEVISUAL_SETCOMMAND_OFFSET))(arg, nullptr);
		}

		::System::Void Visualize(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDCHARACTERSPEECHBUBBLEVISUAL_VISUALIZE_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Battles::GroundCommand* GetCommand()
		{
			return ((::MX::Logic::Battles::GroundCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDCHARACTERSPEECHBUBBLEVISUAL_GETCOMMAND_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDCHARACTERSPEECHBUBBLEVISUAL_.CTOR_OFFSET))(nullptr);
		}

	};

