#pragma once
#include "../../unitysdk.h"

#define ANIMANCER_FSM_ISTATEMACHINE_GET_CURRENTSTATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_FSM_ISTATEMACHINE_GET_PREVIOUSSTATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_FSM_ISTATEMACHINE_GET_NEXTSTATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_FSM_ISTATEMACHINE_CANSETSTATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_FSM_ISTATEMACHINE_CANSETSTATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_FSM_ISTATEMACHINE_TRYSETSTATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_FSM_ISTATEMACHINE_TRYSETSTATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_FSM_ISTATEMACHINE_TRYRESETSTATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_FSM_ISTATEMACHINE_TRYRESETSTATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_FSM_ISTATEMACHINE_FORCESETSTATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_FSM_ISTATEMACHINE_SETALLOWNULLSTATES_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Animancer::FSM
{
	inline static constexpr unsigned int IStateMachine_TypeDefinitionIndex = 37778;

	class IStateMachine : public Il2CppObject
	{
	public:
		::System::Object* get_CurrentState()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FSM_ISTATEMACHINE_GET_CURRENTSTATE_OFFSET))(nullptr);
		}

		::System::Object* get_PreviousState()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FSM_ISTATEMACHINE_GET_PREVIOUSSTATE_OFFSET))(nullptr);
		}

		::System::Object* get_NextState()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FSM_ISTATEMACHINE_GET_NEXTSTATE_OFFSET))(nullptr);
		}

		::System::Boolean CanSetState(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FSM_ISTATEMACHINE_CANSETSTATE_OFFSET))(arg, nullptr);
		}

		::System::Object* CanSetState(::System::Collections::IList* arg)
		{
			return (return (::System::Object*(*)(::System::Collections::IList*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FSM_ISTATEMACHINE_CANSETSTATE_OFFSET))(arg, nullptr);
		}

		::System::Boolean TrySetState(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FSM_ISTATEMACHINE_TRYSETSTATE_OFFSET))(arg, nullptr);
		}

		::System::Boolean TrySetState(::System::Collections::IList* arg)
		{
			return (return (::System::Boolean(*)(::System::Collections::IList*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FSM_ISTATEMACHINE_TRYSETSTATE_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryResetState(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FSM_ISTATEMACHINE_TRYRESETSTATE_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryResetState(::System::Collections::IList* arg)
		{
			return (return (::System::Boolean(*)(::System::Collections::IList*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FSM_ISTATEMACHINE_TRYRESETSTATE_OFFSET))(arg, nullptr);
		}

		::System::Void ForceSetState(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FSM_ISTATEMACHINE_FORCESETSTATE_OFFSET))(arg, nullptr);
		}

		::System::Void SetAllowNullStates(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FSM_ISTATEMACHINE_SETALLOWNULLSTATES_OFFSET))(arg, nullptr);
		}

	};
}

