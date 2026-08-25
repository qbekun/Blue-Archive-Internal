#pragma once
#include "unitysdk.h"

namespace MX::Logic::Battles { class GroundCommandSetActiveSkillCardColider; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::Battles { class GroundCommand; }

#define GROUNDCOMMANDSETACTIVESKILLCARDCOLIDERVISUAL_VISUALIZE_OFFSET UNITYSDK_OFFSET(0x15B82B0)
#define GROUNDCOMMANDSETACTIVESKILLCARDCOLIDERVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x15B8360)
#define GROUNDCOMMANDSETACTIVESKILLCARDCOLIDERVISUAL_GETCOMMAND_OFFSET UNITYSDK_OFFSET(0x15B8370)
#define GROUNDCOMMANDSETACTIVESKILLCARDCOLIDERVISUAL_SETCOMMAND_OFFSET UNITYSDK_OFFSET(0x15B8380)

	inline static constexpr unsigned int GroundCommandSetActiveSkillCardColiderVisual_TypeDefinitionIndex = 1183;

	class GroundCommandSetActiveSkillCardColiderVisual : public Il2CppObject
	{
	public:
		::MX::Logic::Battles::GroundCommandSetActiveSkillCardColider* SetActiveSkillCardColider; // 0x18

		::System::Void Visualize(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSETACTIVESKILLCARDCOLIDERVISUAL_VISUALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSETACTIVESKILLCARDCOLIDERVISUAL_.CTOR_OFFSET))(nullptr);
		}

		::MX::Logic::Battles::GroundCommand* GetCommand()
		{
			return ((::MX::Logic::Battles::GroundCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSETACTIVESKILLCARDCOLIDERVISUAL_GETCOMMAND_OFFSET))(nullptr);
		}

		::System::Void SetCommand(::MX::Logic::Battles::GroundCommand* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::GroundCommand*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSETACTIVESKILLCARDCOLIDERVISUAL_SETCOMMAND_OFFSET))(arg, nullptr);
		}

	};

