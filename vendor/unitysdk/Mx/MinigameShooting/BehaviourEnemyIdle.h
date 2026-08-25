#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameShooting { class EnemyStateMachine; }
namespace MX::MinigameShooting { class CharacterState; }

#define MX_MINIGAMESHOOTING_BEHAVIOURENEMYIDLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x145FB20)
#define MX_MINIGAMESHOOTING_BEHAVIOURENEMYIDLE_ONENTER_OFFSET UNITYSDK_OFFSET(0x145FB50)
#define MX_MINIGAMESHOOTING_BEHAVIOURENEMYIDLE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x145FBD0)

namespace MX::MinigameShooting
{
	inline static constexpr unsigned int BehaviourEnemyIdle_TypeDefinitionIndex = 15053;

	class BehaviourEnemyIdle : public Il2CppObject
	{
	public:
		::System::Void .ctor(::MX::MinigameShooting::EnemyStateMachine* arg)
		{
			((::System::Void(*)(::MX::MinigameShooting::EnemyStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_BEHAVIOURENEMYIDLE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void OnEnter(::MX::MinigameShooting::CharacterState* arg)
		{
			((::System::Void(*)(::MX::MinigameShooting::CharacterState*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_BEHAVIOURENEMYIDLE_ONENTER_OFFSET))(arg, nullptr);
		}

		::System::Void OnUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_BEHAVIOURENEMYIDLE_ONUPDATE_OFFSET))(nullptr);
		}

	};
}

