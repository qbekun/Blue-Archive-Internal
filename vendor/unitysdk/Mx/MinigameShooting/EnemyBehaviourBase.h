#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameShooting { class CharacterState; }
namespace MX::MinigameShooting { class EnemyStateMachine; }

#define MX_MINIGAMESHOOTING_ENEMYBEHAVIOURBASE_ONENTER_OFFSET UNITYSDK_OFFSET(0x145F560)
#define MX_MINIGAMESHOOTING_ENEMYBEHAVIOURBASE_GET_ENEMYSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x145F210)
#define MX_MINIGAMESHOOTING_ENEMYBEHAVIOURBASE_.CTOR_OFFSET UNITYSDK_OFFSET(0x145EFF0)

namespace MX::MinigameShooting
{
	inline static constexpr unsigned int EnemyBehaviourBase_TypeDefinitionIndex = 15059;

	class EnemyBehaviourBase : public Il2CppObject
	{
	public:
		::System::Void OnEnter(::MX::MinigameShooting::CharacterState* arg)
		{
			((::System::Void(*)(::MX::MinigameShooting::CharacterState*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_ENEMYBEHAVIOURBASE_ONENTER_OFFSET))(arg, nullptr);
		}

		::MX::MinigameShooting::EnemyStateMachine* get_EnemyStateMachine()
		{
			return ((::MX::MinigameShooting::EnemyStateMachine*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_ENEMYBEHAVIOURBASE_GET_ENEMYSTATEMACHINE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::MinigameShooting::EnemyStateMachine* arg)
		{
			((::System::Void(*)(::MX::MinigameShooting::EnemyStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_ENEMYBEHAVIOURBASE_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

