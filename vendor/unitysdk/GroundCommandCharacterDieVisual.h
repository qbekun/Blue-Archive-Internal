#pragma once
#include "unitysdk.h"

namespace MX::Logic::Battles { class GroundCommandCharacterDie; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::Battles { class GroundCommand; }

#define GROUNDCOMMANDCHARACTERDIEVISUAL_VISUALIZE_OFFSET UNITYSDK_OFFSET(0x15ADF70)
#define GROUNDCOMMANDCHARACTERDIEVISUAL_SETCOMMAND_OFFSET UNITYSDK_OFFSET(0x15ADF80)
#define GROUNDCOMMANDCHARACTERDIEVISUAL_GETCOMMAND_OFFSET UNITYSDK_OFFSET(0x15AE040)
#define GROUNDCOMMANDCHARACTERDIEVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x15AE050)

	inline static constexpr unsigned int GroundCommandCharacterDieVisual_TypeDefinitionIndex = 1130;

	class GroundCommandCharacterDieVisual : public Il2CppObject
	{
	public:
		::MX::Logic::Battles::GroundCommandCharacterDie* CharacterDie; // 0x18

		::System::Void Visualize(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDCHARACTERDIEVISUAL_VISUALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void SetCommand(::MX::Logic::Battles::GroundCommand* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::GroundCommand*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDCHARACTERDIEVISUAL_SETCOMMAND_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Battles::GroundCommand* GetCommand()
		{
			return ((::MX::Logic::Battles::GroundCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDCHARACTERDIEVISUAL_GETCOMMAND_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDCHARACTERDIEVISUAL_.CTOR_OFFSET))(nullptr);
		}

	};

