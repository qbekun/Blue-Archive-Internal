#pragma once
#include "../../unitysdk.h"

#define ANIMANCER_FSM_ISTATE_GET_CANEXITSTATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_FSM_ISTATE_GET_CANENTERSTATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_FSM_ISTATE_ONEXITSTATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_FSM_ISTATE_ONENTERSTATE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Animancer::FSM
{
	inline static constexpr unsigned int IState_TypeDefinitionIndex = 37771;

	class IState : public Il2CppObject
	{
	public:
		::System::Boolean get_CanExitState()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FSM_ISTATE_GET_CANEXITSTATE_OFFSET))(nullptr);
		}

		::System::Boolean get_CanEnterState()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FSM_ISTATE_GET_CANENTERSTATE_OFFSET))(nullptr);
		}

		::System::Void OnExitState()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FSM_ISTATE_ONEXITSTATE_OFFSET))(nullptr);
		}

		::System::Void OnEnterState()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FSM_ISTATE_ONENTERSTATE_OFFSET))(nullptr);
		}

	};
}

