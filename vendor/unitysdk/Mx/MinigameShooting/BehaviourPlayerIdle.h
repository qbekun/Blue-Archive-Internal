#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameShooting { class CharacterState; }
namespace MX::MinigameShooting { class PlayerStateMachine; }

#define MX_MINIGAMESHOOTING_BEHAVIOURPLAYERIDLE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1461B30)
#define MX_MINIGAMESHOOTING_BEHAVIOURPLAYERIDLE_ONENTER_OFFSET UNITYSDK_OFFSET(0x1461DF0)
#define MX_MINIGAMESHOOTING_BEHAVIOURPLAYERIDLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1461E50)

namespace MX::MinigameShooting
{
	inline static constexpr unsigned int BehaviourPlayerIdle_TypeDefinitionIndex = 15062;

	class BehaviourPlayerIdle : public Il2CppObject
	{
	public:
		::System::Void OnUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_BEHAVIOURPLAYERIDLE_ONUPDATE_OFFSET))(nullptr);
		}

		::System::Void OnEnter(::MX::MinigameShooting::CharacterState* arg)
		{
			((::System::Void(*)(::MX::MinigameShooting::CharacterState*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_BEHAVIOURPLAYERIDLE_ONENTER_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::MinigameShooting::PlayerStateMachine* arg)
		{
			((::System::Void(*)(::MX::MinigameShooting::PlayerStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_BEHAVIOURPLAYERIDLE_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

