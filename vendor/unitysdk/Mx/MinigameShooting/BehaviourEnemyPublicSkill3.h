#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameShooting { class EnemyStateMachine; }
namespace MX::MinigameShooting { class CharacterState; }

#define MX_MINIGAMESHOOTING_BEHAVIOURENEMYPUBLICSKILL3_.CTOR_OFFSET UNITYSDK_OFFSET(0x1460910)
#define MX_MINIGAMESHOOTING_BEHAVIOURENEMYPUBLICSKILL3_ONENTER_OFFSET UNITYSDK_OFFSET(0x1460940)

namespace MX::MinigameShooting
{
	inline static constexpr unsigned int BehaviourEnemyPublicSkill3_TypeDefinitionIndex = 15058;

	class BehaviourEnemyPublicSkill3 : public Il2CppObject
	{
	public:
		::System::Void .ctor(::MX::MinigameShooting::EnemyStateMachine* arg)
		{
			((::System::Void(*)(::MX::MinigameShooting::EnemyStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_BEHAVIOURENEMYPUBLICSKILL3_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void OnEnter(::MX::MinigameShooting::CharacterState* arg)
		{
			((::System::Void(*)(::MX::MinigameShooting::CharacterState*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_BEHAVIOURENEMYPUBLICSKILL3_ONENTER_OFFSET))(arg, nullptr);
		}

	};
}

