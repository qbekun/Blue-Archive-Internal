#pragma once
#include "unitysdk.h"

namespace MX::Logic::Battles { class GroundCommandSetSkillDeck; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::Battles { class GroundCommand; }

#define GROUNDCOMMANDSETSKILLDECKVISUAL_VISUALIZE_OFFSET UNITYSDK_OFFSET(0x15B9320)
#define GROUNDCOMMANDSETSKILLDECKVISUAL_GETCOMMAND_OFFSET UNITYSDK_OFFSET(0x15B93D0)
#define GROUNDCOMMANDSETSKILLDECKVISUAL_SETCOMMAND_OFFSET UNITYSDK_OFFSET(0x15B93E0)
#define GROUNDCOMMANDSETSKILLDECKVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x15B94A0)

	inline static constexpr unsigned int GroundCommandSetSkillDeckVisual_TypeDefinitionIndex = 1192;

	class GroundCommandSetSkillDeckVisual : public Il2CppObject
	{
	public:
		::MX::Logic::Battles::GroundCommandSetSkillDeck* SetSkillDeck; // 0x18

		::System::Void Visualize(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSETSKILLDECKVISUAL_VISUALIZE_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Battles::GroundCommand* GetCommand()
		{
			return ((::MX::Logic::Battles::GroundCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSETSKILLDECKVISUAL_GETCOMMAND_OFFSET))(nullptr);
		}

		::System::Void SetCommand(::MX::Logic::Battles::GroundCommand* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::GroundCommand*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSETSKILLDECKVISUAL_SETCOMMAND_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSETSKILLDECKVISUAL_.CTOR_OFFSET))(nullptr);
		}

	};

