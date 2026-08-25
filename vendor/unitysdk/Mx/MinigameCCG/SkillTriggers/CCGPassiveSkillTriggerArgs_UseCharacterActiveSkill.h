#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG { class CCGCharacter; }

#define MX_MINIGAMECCG_SKILLTRIGGERS_CCGPASSIVESKILLTRIGGERARGS_USECHARACTERACTIVESKILL_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E288D0)
#define MX_MINIGAMECCG_SKILLTRIGGERS_CCGPASSIVESKILLTRIGGERARGS_USECHARACTERACTIVESKILL_GET_CHARACTER_OFFSET UNITYSDK_OFFSET(0x1E28900)

namespace MX::MinigameCCG::SkillTriggers
{
	inline static constexpr unsigned int CCGPassiveSkillTriggerArgs_UseCharacterActiveSkill_TypeDefinitionIndex = 20899;

	class CCGPassiveSkillTriggerArgs_UseCharacterActiveSkill : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::CCGCharacter* _Character_k__BackingField; // 0x10

		::System::Void .ctor(::MX::MinigameCCG::CCGCharacter* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGCharacter*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_SKILLTRIGGERS_CCGPASSIVESKILLTRIGGERARGS_USECHARACTERACTIVESKILL_.CTOR_OFFSET))(arg, nullptr);
		}

		::MX::MinigameCCG::CCGCharacter* get_Character()
		{
			return (return (::MX::MinigameCCG::CCGCharacter*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_SKILLTRIGGERS_CCGPASSIVESKILLTRIGGERARGS_USECHARACTERACTIVESKILL_GET_CHARACTER_OFFSET))(nullptr);
		}

	};
}

