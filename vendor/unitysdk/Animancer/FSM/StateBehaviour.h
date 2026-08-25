#pragma once
#include "../../unitysdk.h"

#define ANIMANCER_FSM_STATEBEHAVIOUR_ONEXITSTATE_OFFSET UNITYSDK_OFFSET(0x4A97C0)
#define ANIMANCER_FSM_STATEBEHAVIOUR_GET_CANENTERSTATE_OFFSET UNITYSDK_OFFSET(0x4A9830)
#define ANIMANCER_FSM_STATEBEHAVIOUR_ONENTERSTATE_OFFSET UNITYSDK_OFFSET(0x4A9840)
#define ANIMANCER_FSM_STATEBEHAVIOUR_GET_CANEXITSTATE_OFFSET UNITYSDK_OFFSET(0x4A9850)
#define ANIMANCER_FSM_STATEBEHAVIOUR_.CTOR_OFFSET UNITYSDK_OFFSET(0x4A9860)

namespace Animancer::FSM
{
	inline static constexpr unsigned int StateBehaviour_TypeDefinitionIndex = 37776;

	class StateBehaviour : public Il2CppObject
	{
	public:
		::System::Void OnExitState()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FSM_STATEBEHAVIOUR_ONEXITSTATE_OFFSET))(nullptr);
		}

		::System::Boolean get_CanEnterState()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FSM_STATEBEHAVIOUR_GET_CANENTERSTATE_OFFSET))(nullptr);
		}

		::System::Void OnEnterState()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FSM_STATEBEHAVIOUR_ONENTERSTATE_OFFSET))(nullptr);
		}

		::System::Boolean get_CanExitState()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FSM_STATEBEHAVIOUR_GET_CANEXITSTATE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FSM_STATEBEHAVIOUR_.CTOR_OFFSET))(nullptr);
		}

	};
}

