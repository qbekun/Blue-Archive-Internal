#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameShooting { class PlayerStateMachine; }
namespace MX::MinigameShooting { class CharacterState; }

#define MX_MINIGAMESHOOTING_BEHAVIOURPLAYERATTACK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1461150)
#define MX_MINIGAMESHOOTING_BEHAVIOURPLAYERATTACK_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x14611B0)
#define MX_MINIGAMESHOOTING_BEHAVIOURPLAYERATTACK_ONENTER_OFFSET UNITYSDK_OFFSET(0x1461720)
#define MX_MINIGAMESHOOTING_BEHAVIOURPLAYERATTACK_ENDATTACKANI_OFFSET UNITYSDK_OFFSET(0x1461880)

namespace MX::MinigameShooting
{
	inline static constexpr unsigned int BehaviourPlayerAttack_TypeDefinitionIndex = 15061;

	class BehaviourPlayerAttack : public Il2CppObject
	{
	public:
		::System::Void .ctor(::MX::MinigameShooting::PlayerStateMachine* arg)
		{
			((::System::Void(*)(::MX::MinigameShooting::PlayerStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_BEHAVIOURPLAYERATTACK_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void OnUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_BEHAVIOURPLAYERATTACK_ONUPDATE_OFFSET))(nullptr);
		}

		::System::Void OnEnter(::MX::MinigameShooting::CharacterState* arg)
		{
			((::System::Void(*)(::MX::MinigameShooting::CharacterState*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_BEHAVIOURPLAYERATTACK_ONENTER_OFFSET))(arg, nullptr);
		}

		::System::Boolean EndAttackAni()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_BEHAVIOURPLAYERATTACK_ENDATTACKANI_OFFSET))(nullptr);
		}

	};
}

