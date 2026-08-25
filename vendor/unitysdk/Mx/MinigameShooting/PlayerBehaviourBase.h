#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameShooting { class PlayerStateMachine; }

#define MX_MINIGAMESHOOTING_PLAYERBEHAVIOURBASE_GET_PLAYERSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x14615B0)
#define MX_MINIGAMESHOOTING_PLAYERBEHAVIOURBASE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1461180)

namespace MX::MinigameShooting
{
	inline static constexpr unsigned int PlayerBehaviourBase_TypeDefinitionIndex = 15068;

	class PlayerBehaviourBase : public Il2CppObject
	{
	public:
		::MX::MinigameShooting::PlayerStateMachine* get_PlayerStateMachine()
		{
			return ((::MX::MinigameShooting::PlayerStateMachine*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_PLAYERBEHAVIOURBASE_GET_PLAYERSTATEMACHINE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::MinigameShooting::PlayerStateMachine* arg)
		{
			((::System::Void(*)(::MX::MinigameShooting::PlayerStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_PLAYERBEHAVIOURBASE_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

