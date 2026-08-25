#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameCCG { class CCGCharacter; }
namespace MX::MinigameCCG { class CCGSkillContext; }

#define MX_MINIGAMECCG_CCGGAMESTATE_USECHARACTERACTIVESKILL_GET_SHOULDTURNEND_OFFSET UNITYSDK_OFFSET(0x1DDAD60)
#define MX_MINIGAMECCG_CCGGAMESTATE_USECHARACTERACTIVESKILL_ONSTATEEXIT_OFFSET UNITYSDK_OFFSET(0x1DDAD70)
#define MX_MINIGAMECCG_CCGGAMESTATE_USECHARACTERACTIVESKILL_ONSTATEENTER_OFFSET UNITYSDK_OFFSET(0x1DDAE20)
#define MX_MINIGAMECCG_CCGGAMESTATE_USECHARACTERACTIVESKILL_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DDAED0)

namespace MX::MinigameCCG
{
	inline static constexpr unsigned int CCGGameState_UseCharacterActiveSkill_TypeDefinitionIndex = 20639;

	class CCGGameState_UseCharacterActiveSkill : public Il2CppObject
	{
	public:
		::System::Boolean _shouldTurnEnd; // 0x18
		::MX::MinigameCCG::CCGCharacter* _character; // 0x20
		::System::Boolean _checkCost; // 0x28
		::System::Boolean _checkCooldown; // 0x29
		::System::Boolean _checkSkillLimit; // 0x2A
		::System::Boolean _canAbort; // 0x2B
		::MX::MinigameCCG::CCGSkillContext* _skillContext; // 0x30

		::System::Boolean get_ShouldTurnEnd()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAMESTATE_USECHARACTERACTIVESKILL_GET_SHOULDTURNEND_OFFSET))(nullptr);
		}

		Il2CppObject* OnStateExit()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAMESTATE_USECHARACTERACTIVESKILL_ONSTATEEXIT_OFFSET))(nullptr);
		}

		Il2CppObject* OnStateEnter()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAMESTATE_USECHARACTERACTIVESKILL_ONSTATEENTER_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::MinigameCCG::CCGCharacter* arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGCharacter*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAMESTATE_USECHARACTERACTIVESKILL_.CTOR_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

	};
}

