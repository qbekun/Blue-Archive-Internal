#pragma once
#include "../../unitysdk.h"

#define ANIMANCER_FSM_STATE_GET_CANENTERSTATE_OFFSET UNITYSDK_OFFSET(0x4A9770)
#define ANIMANCER_FSM_STATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x4A9780)
#define ANIMANCER_FSM_STATE_ONEXITSTATE_OFFSET UNITYSDK_OFFSET(0x4A9790)
#define ANIMANCER_FSM_STATE_ONENTERSTATE_OFFSET UNITYSDK_OFFSET(0x4A97A0)
#define ANIMANCER_FSM_STATE_GET_CANEXITSTATE_OFFSET UNITYSDK_OFFSET(0x4A97B0)

namespace Animancer::FSM
{
	inline static constexpr unsigned int State_TypeDefinitionIndex = 37773;

	class State : public Il2CppObject
	{
	public:
		::System::Boolean get_CanEnterState()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FSM_STATE_GET_CANENTERSTATE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FSM_STATE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnExitState()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FSM_STATE_ONEXITSTATE_OFFSET))(nullptr);
		}

		::System::Void OnEnterState()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FSM_STATE_ONENTERSTATE_OFFSET))(nullptr);
		}

		::System::Boolean get_CanExitState()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FSM_STATE_GET_CANEXITSTATE_OFFSET))(nullptr);
		}

	};
}

