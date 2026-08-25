#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameShooting { class PlayerStateMachine; }
namespace MX::MinigameShooting { class CharacterState; }

#define MX_MINIGAMESHOOTING_BEHAVIOURPLAYERMOVE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1461E80)
#define MX_MINIGAMESHOOTING_BEHAVIOURPLAYERMOVE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1461EB0)
#define MX_MINIGAMESHOOTING_BEHAVIOURPLAYERMOVE_CHECKPLAYERMOVE_OFFSET UNITYSDK_OFFSET(0x1462020)
#define MX_MINIGAMESHOOTING_BEHAVIOURPLAYERMOVE_ONENTER_OFFSET UNITYSDK_OFFSET(0x1462580)

namespace MX::MinigameShooting
{
	inline static constexpr unsigned int BehaviourPlayerMove_TypeDefinitionIndex = 15063;

	class BehaviourPlayerMove : public Il2CppObject
	{
	public:
		::System::Void .ctor(::MX::MinigameShooting::PlayerStateMachine* arg)
		{
			((::System::Void(*)(::MX::MinigameShooting::PlayerStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_BEHAVIOURPLAYERMOVE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void OnUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_BEHAVIOURPLAYERMOVE_ONUPDATE_OFFSET))(nullptr);
		}

		::System::Boolean CheckPlayerMove()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_BEHAVIOURPLAYERMOVE_CHECKPLAYERMOVE_OFFSET))(nullptr);
		}

		::System::Void OnEnter(::MX::MinigameShooting::CharacterState* arg)
		{
			((::System::Void(*)(::MX::MinigameShooting::CharacterState*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_BEHAVIOURPLAYERMOVE_ONENTER_OFFSET))(arg, nullptr);
		}

	};
}

