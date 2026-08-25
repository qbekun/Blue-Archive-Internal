#pragma once
#include "unitysdk.h"

namespace MX::Logic::Battles { class GroundCommandCharacterEmojiRepeat; }
namespace MX::Logic::Battles { class GroundCommand; }
namespace MX::Logic::Battles { class Battle; }

#define GROUNDCOMMANDCHARACTEREMOJIREPEATVISUAL_GETCOMMAND_OFFSET UNITYSDK_OFFSET(0x15AE060)
#define GROUNDCOMMANDCHARACTEREMOJIREPEATVISUAL_SETCOMMAND_OFFSET UNITYSDK_OFFSET(0x15AE070)
#define GROUNDCOMMANDCHARACTEREMOJIREPEATVISUAL_VISUALIZE_OFFSET UNITYSDK_OFFSET(0x15AE130)
#define GROUNDCOMMANDCHARACTEREMOJIREPEATVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x15AE600)

	inline static constexpr unsigned int GroundCommandCharacterEmojiRepeatVisual_TypeDefinitionIndex = 1131;

	class GroundCommandCharacterEmojiRepeatVisual : public Il2CppObject
	{
	public:
		::MX::Logic::Battles::GroundCommandCharacterEmojiRepeat* Emoji; // 0x18

		::MX::Logic::Battles::GroundCommand* GetCommand()
		{
			return ((::MX::Logic::Battles::GroundCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDCHARACTEREMOJIREPEATVISUAL_GETCOMMAND_OFFSET))(nullptr);
		}

		::System::Void SetCommand(::MX::Logic::Battles::GroundCommand* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::GroundCommand*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDCHARACTEREMOJIREPEATVISUAL_SETCOMMAND_OFFSET))(arg, nullptr);
		}

		::System::Void Visualize(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDCHARACTEREMOJIREPEATVISUAL_VISUALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDCHARACTEREMOJIREPEATVISUAL_.CTOR_OFFSET))(nullptr);
		}

	};

