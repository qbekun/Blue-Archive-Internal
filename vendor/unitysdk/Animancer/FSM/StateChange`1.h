#pragma once
#include "../../unitysdk.h"

#define ANIMANCER_FSM_STATECHANGE`1_CURRENTTOSTRING_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_FSM_STATECHANGE`1_GET_NEXTSTATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_FSM_STATECHANGE`1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_FSM_STATECHANGE`1_DISPOSE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_FSM_STATECHANGE`1_GET_STATEMACHINE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_FSM_STATECHANGE`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_FSM_STATECHANGE`1_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_FSM_STATECHANGE`1_GET_PREVIOUSSTATE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Animancer::FSM
{
	inline static constexpr unsigned int StateChange`1_TypeDefinitionIndex = 37777;

	class StateChange`1 : public Il2CppObject
	{
	public:
		Il2CppObject* _Current;
		Il2CppObject* _StateMachine; // 0x0
		Il2CppObject* _PreviousState; // 0x0
		Il2CppObject* _NextState; // 0x0

		::System::String* CurrentToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FSM_STATECHANGE`1_CURRENTTOSTRING_OFFSET))(nullptr);
		}

		Il2CppObject* get_NextState()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FSM_STATECHANGE`1_GET_NEXTSTATE_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FSM_STATECHANGE`1_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FSM_STATECHANGE`1_DISPOSE_OFFSET))(nullptr);
		}

		Il2CppObject* get_StateMachine()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FSM_STATECHANGE`1_GET_STATEMACHINE_OFFSET))(nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FSM_STATECHANGE`1_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean get_IsActive()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FSM_STATECHANGE`1_GET_ISACTIVE_OFFSET))(nullptr);
		}

		Il2CppObject* get_PreviousState()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FSM_STATECHANGE`1_GET_PREVIOUSSTATE_OFFSET))(nullptr);
		}

	};
}

