#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameShooting { class CharacterState; }
namespace MX::MinigameShooting { class PlayerStateMachine; }

#define MX_MINIGAMESHOOTING_BEHAVIOURPLAYERPUBLICSKILL1_ONENTER_OFFSET UNITYSDK_OFFSET(0x1462CC0)
#define MX_MINIGAMESHOOTING_BEHAVIOURPLAYERPUBLICSKILL1_.CTOR_OFFSET UNITYSDK_OFFSET(0x1462E10)

namespace MX::MinigameShooting
{
	inline static constexpr unsigned int BehaviourPlayerPublicSkill1_TypeDefinitionIndex = 15065;

	class BehaviourPlayerPublicSkill1 : public Il2CppObject
	{
	public:
		::System::Void OnEnter(::MX::MinigameShooting::CharacterState* arg)
		{
			((::System::Void(*)(::MX::MinigameShooting::CharacterState*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_BEHAVIOURPLAYERPUBLICSKILL1_ONENTER_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::MinigameShooting::PlayerStateMachine* arg)
		{
			((::System::Void(*)(::MX::MinigameShooting::PlayerStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_BEHAVIOURPLAYERPUBLICSKILL1_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

