#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameShooting { class CharacterState; }
namespace MX::MinigameShooting { class EnemyStateMachine; }

#define MX_MINIGAMESHOOTING_BEHAVIOURENEMYDELAY_ENDDELAYANI_OFFSET UNITYSDK_OFFSET(0x145F6E0)
#define MX_MINIGAMESHOOTING_BEHAVIOURENEMYDELAY_ONENTER_OFFSET UNITYSDK_OFFSET(0x145F8B0)
#define MX_MINIGAMESHOOTING_BEHAVIOURENEMYDELAY_.CTOR_OFFSET UNITYSDK_OFFSET(0x145F9C0)
#define MX_MINIGAMESHOOTING_BEHAVIOURENEMYDELAY_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x145F9F0)

namespace MX::MinigameShooting
{
	inline static constexpr unsigned int BehaviourEnemyDelay_TypeDefinitionIndex = 15052;

	class BehaviourEnemyDelay : public Il2CppObject
	{
	public:
		::System::Boolean EndDelayAni()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_BEHAVIOURENEMYDELAY_ENDDELAYANI_OFFSET))(nullptr);
		}

		::System::Void OnEnter(::MX::MinigameShooting::CharacterState* arg)
		{
			((::System::Void(*)(::MX::MinigameShooting::CharacterState*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_BEHAVIOURENEMYDELAY_ONENTER_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::MinigameShooting::EnemyStateMachine* arg)
		{
			((::System::Void(*)(::MX::MinigameShooting::EnemyStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_BEHAVIOURENEMYDELAY_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void OnUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_BEHAVIOURENEMYDELAY_ONUPDATE_OFFSET))(nullptr);
		}

	};
}

