#pragma once
#include "unitysdk.h"

namespace MX::Logic::Battles { class GroundCommandSetSkillDeckDecagram; }
namespace MX::Logic::Battles { class GroundCommand; }
namespace MX::Logic::Battles { class Battle; }

#define GROUNDCOMMANDSETSKILLDECKDECAGRAMVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x15B9120)
#define GROUNDCOMMANDSETSKILLDECKDECAGRAMVISUAL_SETCOMMAND_OFFSET UNITYSDK_OFFSET(0x15B9130)
#define GROUNDCOMMANDSETSKILLDECKDECAGRAMVISUAL_VISUALIZE_OFFSET UNITYSDK_OFFSET(0x15B91F0)
#define GROUNDCOMMANDSETSKILLDECKDECAGRAMVISUAL_GETCOMMAND_OFFSET UNITYSDK_OFFSET(0x15B9310)

	inline static constexpr unsigned int GroundCommandSetSkillDeckDecagramVisual_TypeDefinitionIndex = 1191;

	class GroundCommandSetSkillDeckDecagramVisual : public Il2CppObject
	{
	public:
		::MX::Logic::Battles::GroundCommandSetSkillDeckDecagram* SetSkillDeckDecagram; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSETSKILLDECKDECAGRAMVISUAL_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetCommand(::MX::Logic::Battles::GroundCommand* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::GroundCommand*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSETSKILLDECKDECAGRAMVISUAL_SETCOMMAND_OFFSET))(arg, nullptr);
		}

		::System::Void Visualize(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSETSKILLDECKDECAGRAMVISUAL_VISUALIZE_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Battles::GroundCommand* GetCommand()
		{
			return ((::MX::Logic::Battles::GroundCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSETSKILLDECKDECAGRAMVISUAL_GETCOMMAND_OFFSET))(nullptr);
		}

	};

