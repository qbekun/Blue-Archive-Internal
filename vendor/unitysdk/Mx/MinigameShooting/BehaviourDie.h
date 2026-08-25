#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameShooting { class CharacterStateMachine; }
namespace MX::MinigameShooting { class CharacterState; }

#define MX_MINIGAMESHOOTING_BEHAVIOURDIE_.CTOR_OFFSET UNITYSDK_OFFSET(0x145CDD0)
#define MX_MINIGAMESHOOTING_BEHAVIOURDIE_ONENTER_OFFSET UNITYSDK_OFFSET(0x145CE00)

namespace MX::MinigameShooting
{
	inline static constexpr unsigned int BehaviourDie_TypeDefinitionIndex = 15045;

	class BehaviourDie : public Il2CppObject
	{
	public:
		::System::Void .ctor(::MX::MinigameShooting::CharacterStateMachine* arg)
		{
			((::System::Void(*)(::MX::MinigameShooting::CharacterStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_BEHAVIOURDIE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void OnEnter(::MX::MinigameShooting::CharacterState* arg)
		{
			((::System::Void(*)(::MX::MinigameShooting::CharacterState*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_BEHAVIOURDIE_ONENTER_OFFSET))(arg, nullptr);
		}

	};
}

