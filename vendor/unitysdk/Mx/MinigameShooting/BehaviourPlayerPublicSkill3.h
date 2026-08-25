#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameShooting { class CharacterState; }
namespace MX::MinigameShooting { class PlayerStateMachine; }

#define MX_MINIGAMESHOOTING_BEHAVIOURPLAYERPUBLICSKILL3_ONENTER_OFFSET UNITYSDK_OFFSET(0x1462FC0)
#define MX_MINIGAMESHOOTING_BEHAVIOURPLAYERPUBLICSKILL3_.CTOR_OFFSET UNITYSDK_OFFSET(0x1463110)

namespace MX::MinigameShooting
{
	inline static constexpr unsigned int BehaviourPlayerPublicSkill3_TypeDefinitionIndex = 15067;

	class BehaviourPlayerPublicSkill3 : public Il2CppObject
	{
	public:
		::System::Void OnEnter(::MX::MinigameShooting::CharacterState* arg)
		{
			((::System::Void(*)(::MX::MinigameShooting::CharacterState*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_BEHAVIOURPLAYERPUBLICSKILL3_ONENTER_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::MinigameShooting::PlayerStateMachine* arg)
		{
			((::System::Void(*)(::MX::MinigameShooting::PlayerStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_BEHAVIOURPLAYERPUBLICSKILL3_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

