#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameShooting { class CharacterState; }
namespace MX::MinigameShooting { class EnemyStateMachine; }

#define MX_MINIGAMESHOOTING_BEHAVIOURENEMYMOVE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x145FE70)
#define MX_MINIGAMESHOOTING_BEHAVIOURENEMYMOVE_ONENTER_OFFSET UNITYSDK_OFFSET(0x1460170)
#define MX_MINIGAMESHOOTING_BEHAVIOURENEMYMOVE_.CTOR_OFFSET UNITYSDK_OFFSET(0x14601F0)

namespace MX::MinigameShooting
{
	inline static constexpr unsigned int BehaviourEnemyMove_TypeDefinitionIndex = 15054;

	class BehaviourEnemyMove : public Il2CppObject
	{
	public:
		::System::Single moveDestTickTime; // 0x48
		::System::Single tick; // 0x4C

		::System::Void OnUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_BEHAVIOURENEMYMOVE_ONUPDATE_OFFSET))(nullptr);
		}

		::System::Void OnEnter(::MX::MinigameShooting::CharacterState* arg)
		{
			((::System::Void(*)(::MX::MinigameShooting::CharacterState*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_BEHAVIOURENEMYMOVE_ONENTER_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::MinigameShooting::EnemyStateMachine* arg)
		{
			((::System::Void(*)(::MX::MinigameShooting::EnemyStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_BEHAVIOURENEMYMOVE_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

