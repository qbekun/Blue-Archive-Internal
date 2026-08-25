#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameCCG { class CCGCharacter; }

#define MX_MINIGAMECCG_CCGPLAYERINPUT_PLAYERUSECHARACTERSKILL_GET_CHARACTER_OFFSET UNITYSDK_OFFSET(0x1DCF530)
#define MX_MINIGAMECCG_CCGPLAYERINPUT_PLAYERUSECHARACTERSKILL_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DCF540)

namespace MX::MinigameCCG
{
	inline static constexpr unsigned int CCGPlayerInput_PlayerUseCharacterSkill_TypeDefinitionIndex = 20589;

	class CCGPlayerInput_PlayerUseCharacterSkill : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::CCGCharacter* _Character_k__BackingField; // 0x18

		::MX::MinigameCCG::CCGCharacter* get_Character()
		{
			return (return (::MX::MinigameCCG::CCGCharacter*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGPLAYERINPUT_PLAYERUSECHARACTERSKILL_GET_CHARACTER_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::MinigameCCG::CCGCharacter* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGCharacter*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGPLAYERINPUT_PLAYERUSECHARACTERSKILL_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

