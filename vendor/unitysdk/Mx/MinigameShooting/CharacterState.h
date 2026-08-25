#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameShooting { class CharacterState; }

namespace MX::MinigameShooting
{
	inline static constexpr unsigned int CharacterState_TypeDefinitionIndex = 15049;

	class CharacterState : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::MinigameShooting::CharacterState* Idle; // 0x0
		::MX::MinigameShooting::CharacterState* Move; // 0x0
		::MX::MinigameShooting::CharacterState* Attack; // 0x0
		::MX::MinigameShooting::CharacterState* Die; // 0x0
		::MX::MinigameShooting::CharacterState* PublicSkill1; // 0x0
		::MX::MinigameShooting::CharacterState* PublicSkill2; // 0x0
		::MX::MinigameShooting::CharacterState* PublicSkill3; // 0x0
		::MX::MinigameShooting::CharacterState* Delay; // 0x0

	};
}

