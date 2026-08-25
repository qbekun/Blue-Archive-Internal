#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameShooting { class EnemyStateMachine; }
namespace MX::MinigameShooting { class CharacterState; }

#define MX_MINIGAMESHOOTING_BEHAVIOURENEMYATTACK_.CTOR_OFFSET UNITYSDK_OFFSET(0x145EFC0)
#define MX_MINIGAMESHOOTING_BEHAVIOURENEMYATTACK_ENDATTACKANI_OFFSET UNITYSDK_OFFSET(0x145F020)
#define MX_MINIGAMESHOOTING_BEHAVIOURENEMYATTACK_ONENTER_OFFSET UNITYSDK_OFFSET(0x145F350)
#define MX_MINIGAMESHOOTING_BEHAVIOURENEMYATTACK_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x145F590)

namespace MX::MinigameShooting
{
	inline static constexpr unsigned int BehaviourEnemyAttack_TypeDefinitionIndex = 15051;

	class BehaviourEnemyAttack : public Il2CppObject
	{
	public:
		::System::Boolean useDelay; // 0x48

		::System::Void .ctor(::MX::MinigameShooting::EnemyStateMachine* arg)
		{
			((::System::Void(*)(::MX::MinigameShooting::EnemyStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_BEHAVIOURENEMYATTACK_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean EndAttackAni()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_BEHAVIOURENEMYATTACK_ENDATTACKANI_OFFSET))(nullptr);
		}

		::System::Void OnEnter(::MX::MinigameShooting::CharacterState* arg)
		{
			((::System::Void(*)(::MX::MinigameShooting::CharacterState*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_BEHAVIOURENEMYATTACK_ONENTER_OFFSET))(arg, nullptr);
		}

		::System::Void OnUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_BEHAVIOURENEMYATTACK_ONUPDATE_OFFSET))(nullptr);
		}

	};
}

