#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameShooting { class Character; }

#define MX_MINIGAMESHOOTING_ENEMYSTATEMACHINE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1460AB0)
#define MX_MINIGAMESHOOTING_ENEMYSTATEMACHINE_GETTARGET_OFFSET UNITYSDK_OFFSET(0x1460E30)
#define MX_MINIGAMESHOOTING_ENEMYSTATEMACHINE_CANCHANGEATTACKSTATE_OFFSET UNITYSDK_OFFSET(0x145FD90)
#define MX_MINIGAMESHOOTING_ENEMYSTATEMACHINE_ISINATTACKRANGE_OFFSET UNITYSDK_OFFSET(0x1460EC0)
#define MX_MINIGAMESHOOTING_ENEMYSTATEMACHINE_CANATTACK_OFFSET UNITYSDK_OFFSET(0x145F280)

namespace MX::MinigameShooting
{
	inline static constexpr unsigned int EnemyStateMachine_TypeDefinitionIndex = 15060;

	class EnemyStateMachine : public Il2CppObject
	{
	public:
		::System::Void .ctor(::MX::MinigameShooting::Character* arg)
		{
			((::System::Void(*)(::MX::MinigameShooting::Character*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_ENEMYSTATEMACHINE_.CTOR_OFFSET))(arg, nullptr);
		}

		::MX::MinigameShooting::Character* GetTarget()
		{
			return ((::MX::MinigameShooting::Character*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_ENEMYSTATEMACHINE_GETTARGET_OFFSET))(nullptr);
		}

		::System::Boolean CanChangeAttackState()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_ENEMYSTATEMACHINE_CANCHANGEATTACKSTATE_OFFSET))(nullptr);
		}

		::System::Boolean IsInAttackRange()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_ENEMYSTATEMACHINE_ISINATTACKRANGE_OFFSET))(nullptr);
		}

		::System::Boolean CanAttack()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_ENEMYSTATEMACHINE_CANATTACK_OFFSET))(nullptr);
		}

	};
}

