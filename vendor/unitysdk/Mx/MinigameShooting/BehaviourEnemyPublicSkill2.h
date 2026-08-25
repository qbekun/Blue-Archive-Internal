#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameShooting { class CharacterState; }
namespace MX::MinigameShooting { class EnemyStateMachine; }

#define MX_MINIGAMESHOOTING_BEHAVIOURENEMYPUBLICSKILL2_ONENTER_OFFSET UNITYSDK_OFFSET(0x1460770)
#define MX_MINIGAMESHOOTING_BEHAVIOURENEMYPUBLICSKILL2_.CTOR_OFFSET UNITYSDK_OFFSET(0x14608E0)

namespace MX::MinigameShooting
{
	inline static constexpr unsigned int BehaviourEnemyPublicSkill2_TypeDefinitionIndex = 15057;

	class BehaviourEnemyPublicSkill2 : public Il2CppObject
	{
	public:
		::System::Void OnEnter(::MX::MinigameShooting::CharacterState* arg)
		{
			((::System::Void(*)(::MX::MinigameShooting::CharacterState*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_BEHAVIOURENEMYPUBLICSKILL2_ONENTER_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::MinigameShooting::EnemyStateMachine* arg)
		{
			((::System::Void(*)(::MX::MinigameShooting::EnemyStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_BEHAVIOURENEMYPUBLICSKILL2_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

