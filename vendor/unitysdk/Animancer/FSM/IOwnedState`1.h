#pragma once
#include "../../unitysdk.h"

#define ANIMANCER_FSM_IOWNEDSTATE`1_GET_OWNERSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Animancer::FSM
{
	inline static constexpr unsigned int IOwnedState`1_TypeDefinitionIndex = 37772;

	class IOwnedState`1 : public Il2CppObject
	{
	public:
		Il2CppObject* get_OwnerStateMachine()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FSM_IOWNEDSTATE`1_GET_OWNERSTATEMACHINE_OFFSET))(nullptr);
		}

	};
}

