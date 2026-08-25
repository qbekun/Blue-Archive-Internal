#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameShooting { class CharacterState; }
namespace MX::MinigameShooting { class EnemyStateMachine; }

#define MX_MINIGAMESHOOTING_BEHAVIOURENEMYPUBLICSKILL_ONENTER_OFFSET UNITYSDK_OFFSET(0x1460230)
#define MX_MINIGAMESHOOTING_BEHAVIOURENEMYPUBLICSKILL_.CTOR_OFFSET UNITYSDK_OFFSET(0x1460280)
#define MX_MINIGAMESHOOTING_BEHAVIOURENEMYPUBLICSKILL_ENDPUBLICANI_OFFSET UNITYSDK_OFFSET(0x14602B0)
#define MX_MINIGAMESHOOTING_BEHAVIOURENEMYPUBLICSKILL_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1460480)

namespace MX::MinigameShooting
{
	inline static constexpr unsigned int BehaviourEnemyPublicSkill_TypeDefinitionIndex = 15055;

	class BehaviourEnemyPublicSkill : public Il2CppObject
	{
	public:
		::System::Void OnEnter(::MX::MinigameShooting::CharacterState* arg)
		{
			((::System::Void(*)(::MX::MinigameShooting::CharacterState*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_BEHAVIOURENEMYPUBLICSKILL_ONENTER_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::MinigameShooting::EnemyStateMachine* arg)
		{
			((::System::Void(*)(::MX::MinigameShooting::EnemyStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_BEHAVIOURENEMYPUBLICSKILL_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean EndPublicAni()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_BEHAVIOURENEMYPUBLICSKILL_ENDPUBLICANI_OFFSET))(nullptr);
		}

		::System::Void OnUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_BEHAVIOURENEMYPUBLICSKILL_ONUPDATE_OFFSET))(nullptr);
		}

	};
}

