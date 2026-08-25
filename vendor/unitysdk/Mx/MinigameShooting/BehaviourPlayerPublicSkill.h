#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameShooting { class PlayerStateMachine; }

#define MX_MINIGAMESHOOTING_BEHAVIOURPLAYERPUBLICSKILL_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x14625E0)
#define MX_MINIGAMESHOOTING_BEHAVIOURPLAYERPUBLICSKILL_ENDPUBLICANI_OFFSET UNITYSDK_OFFSET(0x14629E0)
#define MX_MINIGAMESHOOTING_BEHAVIOURPLAYERPUBLICSKILL_.CTOR_OFFSET UNITYSDK_OFFSET(0x1462C90)

namespace MX::MinigameShooting
{
	inline static constexpr unsigned int BehaviourPlayerPublicSkill_TypeDefinitionIndex = 15064;

	class BehaviourPlayerPublicSkill : public Il2CppObject
	{
	public:
		::System::Void OnUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_BEHAVIOURPLAYERPUBLICSKILL_ONUPDATE_OFFSET))(nullptr);
		}

		::System::Boolean EndPublicAni()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_BEHAVIOURPLAYERPUBLICSKILL_ENDPUBLICANI_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::MinigameShooting::PlayerStateMachine* arg)
		{
			((::System::Void(*)(::MX::MinigameShooting::PlayerStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_BEHAVIOURPLAYERPUBLICSKILL_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

