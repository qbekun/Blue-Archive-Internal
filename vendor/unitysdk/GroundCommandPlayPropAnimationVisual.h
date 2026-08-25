#pragma once
#include "unitysdk.h"

namespace MX::Logic::Battles { class GroundCommandPlayPropAnimation; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::Battles { class GroundCommand; }
namespace MX::Logic::Battles { class GameStateEventArgs; }

#define GROUNDCOMMANDPLAYPROPANIMATIONVISUAL_GETCOMMAND_OFFSET UNITYSDK_OFFSET(0x15B3A10)
#define GROUNDCOMMANDPLAYPROPANIMATIONVISUAL_VISUALIZE_OFFSET UNITYSDK_OFFSET(0x15B3A20)
#define GROUNDCOMMANDPLAYPROPANIMATIONVISUAL_SETCOMMAND_OFFSET UNITYSDK_OFFSET(0x15B3BA0)
#define GROUNDCOMMANDPLAYPROPANIMATIONVISUAL_BATTLE_GAMESTATECHANGED_OFFSET UNITYSDK_OFFSET(0x15B3C60)
#define GROUNDCOMMANDPLAYPROPANIMATIONVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x15B3DD0)
#define GROUNDCOMMANDPLAYPROPANIMATIONVISUAL_PLAYANIMATION_OFFSET UNITYSDK_OFFSET(0x15B3B30)

	inline static constexpr unsigned int GroundCommandPlayPropAnimationVisual_TypeDefinitionIndex = 1165;

	class GroundCommandPlayPropAnimationVisual : public Il2CppObject
	{
	public:
		::MX::Logic::Battles::GroundCommandPlayPropAnimation* PlayPropAnimation; // 0x18
		::MX::Logic::Battles::Battle* battle; // 0x20

		::MX::Logic::Battles::GroundCommand* GetCommand()
		{
			return ((::MX::Logic::Battles::GroundCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDPLAYPROPANIMATIONVISUAL_GETCOMMAND_OFFSET))(nullptr);
		}

		::System::Void Visualize(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDPLAYPROPANIMATIONVISUAL_VISUALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void SetCommand(::MX::Logic::Battles::GroundCommand* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::GroundCommand*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDPLAYPROPANIMATIONVISUAL_SETCOMMAND_OFFSET))(arg, nullptr);
		}

		::System::Void Battle_GameStateChanged(::System::Object* arg, ::MX::Logic::Battles::GameStateEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::GameStateEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDPLAYPROPANIMATIONVISUAL_BATTLE_GAMESTATECHANGED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDPLAYPROPANIMATIONVISUAL_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* PlayAnimation()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDPLAYPROPANIMATIONVISUAL_PLAYANIMATION_OFFSET))(nullptr);
		}

	};

