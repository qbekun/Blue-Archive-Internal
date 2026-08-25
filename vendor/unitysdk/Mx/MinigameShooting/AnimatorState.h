#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameShooting { class AnimatorState; }

namespace MX::MinigameShooting
{
	inline static constexpr unsigned int AnimatorState_TypeDefinitionIndex = 15036;

	class AnimatorState : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::MinigameShooting::AnimatorState* Idle; // 0x0
		::MX::MinigameShooting::AnimatorState* Attack; // 0x0
		::MX::MinigameShooting::AnimatorState* Move; // 0x0
		::MX::MinigameShooting::AnimatorState* Die; // 0x0
		::MX::MinigameShooting::AnimatorState* PublicSkill1; // 0x0
		::MX::MinigameShooting::AnimatorState* PublicSkill2; // 0x0
		::MX::MinigameShooting::AnimatorState* PublicSkill3; // 0x0
		::MX::MinigameShooting::AnimatorState* Delay; // 0x0
		::MX::MinigameShooting::AnimatorState* None; // 0x0

	};
}

