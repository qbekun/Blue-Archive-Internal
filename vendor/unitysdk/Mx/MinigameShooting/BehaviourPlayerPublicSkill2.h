#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameShooting { class PlayerStateMachine; }
namespace MX::MinigameShooting { class CharacterState; }

#define MX_MINIGAMESHOOTING_BEHAVIOURPLAYERPUBLICSKILL2_.CTOR_OFFSET UNITYSDK_OFFSET(0x1462E40)
#define MX_MINIGAMESHOOTING_BEHAVIOURPLAYERPUBLICSKILL2_ONENTER_OFFSET UNITYSDK_OFFSET(0x1462E70)

namespace MX::MinigameShooting
{
	inline static constexpr unsigned int BehaviourPlayerPublicSkill2_TypeDefinitionIndex = 15066;

	class BehaviourPlayerPublicSkill2 : public Il2CppObject
	{
	public:
		::System::Void .ctor(::MX::MinigameShooting::PlayerStateMachine* arg)
		{
			((::System::Void(*)(::MX::MinigameShooting::PlayerStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_BEHAVIOURPLAYERPUBLICSKILL2_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void OnEnter(::MX::MinigameShooting::CharacterState* arg)
		{
			((::System::Void(*)(::MX::MinigameShooting::CharacterState*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_BEHAVIOURPLAYERPUBLICSKILL2_ONENTER_OFFSET))(arg, nullptr);
		}

	};
}

