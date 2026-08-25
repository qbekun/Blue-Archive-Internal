#pragma once
#include "unitysdk.h"

namespace MX::Logic::Battles { class GroundCommandCharacterEmoji; }
namespace MX::Logic::Battles { class GroundCommand; }
class UIHPBar;
namespace MX::Logic::Battles { class Battle; }

#define GROUNDCOMMANDCHARACTEREMOJIVISUAL_GETCOMMAND_OFFSET UNITYSDK_OFFSET(0x15AE610)
#define GROUNDCOMMANDCHARACTEREMOJIVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x15AE620)
#define GROUNDCOMMANDCHARACTEREMOJIVISUAL__VISUALIZE_B__3_0_OFFSET UNITYSDK_OFFSET(0x15AE630)
#define GROUNDCOMMANDCHARACTEREMOJIVISUAL_VISUALIZE_OFFSET UNITYSDK_OFFSET(0x15AE700)
#define GROUNDCOMMANDCHARACTEREMOJIVISUAL_SETCOMMAND_OFFSET UNITYSDK_OFFSET(0x15AEC70)

	inline static constexpr unsigned int GroundCommandCharacterEmojiVisual_TypeDefinitionIndex = 1132;

	class GroundCommandCharacterEmojiVisual : public Il2CppObject
	{
	public:
		::MX::Logic::Battles::GroundCommandCharacterEmoji* Emoji; // 0x18

		::MX::Logic::Battles::GroundCommand* GetCommand()
		{
			return ((::MX::Logic::Battles::GroundCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDCHARACTEREMOJIVISUAL_GETCOMMAND_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDCHARACTEREMOJIVISUAL_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _Visualize_b__3_0(UIHPBar* arg)
		{
			((::System::Void(*)(UIHPBar*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDCHARACTEREMOJIVISUAL__VISUALIZE_B__3_0_OFFSET))(arg, nullptr);
		}

		::System::Void Visualize(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDCHARACTEREMOJIVISUAL_VISUALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void SetCommand(::MX::Logic::Battles::GroundCommand* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::GroundCommand*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDCHARACTEREMOJIVISUAL_SETCOMMAND_OFFSET))(arg, nullptr);
		}

	};

