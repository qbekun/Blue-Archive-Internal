#pragma once
#include "../../unitysdk.h"

#define ANIMANCER_FSM_DELEGATESTATE_ONEXITSTATE_OFFSET UNITYSDK_OFFSET(0x4A96E0)
#define ANIMANCER_FSM_DELEGATESTATE_GET_CANEXITSTATE_OFFSET UNITYSDK_OFFSET(0x4A9700)
#define ANIMANCER_FSM_DELEGATESTATE_ONENTERSTATE_OFFSET UNITYSDK_OFFSET(0x4A9720)
#define ANIMANCER_FSM_DELEGATESTATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x4A9740)
#define ANIMANCER_FSM_DELEGATESTATE_GET_CANENTERSTATE_OFFSET UNITYSDK_OFFSET(0x4A9750)

namespace Animancer::FSM
{
	inline static constexpr unsigned int DelegateState_TypeDefinitionIndex = 37770;

	class DelegateState : public Il2CppObject
	{
	public:
		Il2CppObject* canEnter; // 0x10
		Il2CppObject* canExit; // 0x18
		::System::Action* onEnter; // 0x20
		::System::Action* onExit; // 0x28

		::System::Void OnExitState()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FSM_DELEGATESTATE_ONEXITSTATE_OFFSET))(nullptr);
		}

		::System::Boolean get_CanExitState()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FSM_DELEGATESTATE_GET_CANEXITSTATE_OFFSET))(nullptr);
		}

		::System::Void OnEnterState()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FSM_DELEGATESTATE_ONENTERSTATE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FSM_DELEGATESTATE_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean get_CanEnterState()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FSM_DELEGATESTATE_GET_CANENTERSTATE_OFFSET))(nullptr);
		}

	};
}

