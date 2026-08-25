#pragma once
#include "../../unitysdk.h"

#define ANIMANCER_FSM_STATEMACHINE`1_GET_CURRENTSTATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_FSM_STATEMACHINE`1_GET_PREVIOUSSTATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_FSM_STATEMACHINE`1_GET_NEXTSTATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_FSM_STATEMACHINE`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_FSM_STATEMACHINE`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_FSM_STATEMACHINE`1_INITIALIZEAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_FSM_STATEMACHINE`1_CANSETSTATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_FSM_STATEMACHINE`1_CANSETSTATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_FSM_STATEMACHINE`1_TRYSETSTATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_FSM_STATEMACHINE`1_TRYSETSTATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_FSM_STATEMACHINE`1_TRYRESETSTATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_FSM_STATEMACHINE`1_TRYRESETSTATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_FSM_STATEMACHINE`1_FORCESETSTATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_FSM_STATEMACHINE`1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_FSM_STATEMACHINE`1_SETALLOWNULLSTATES_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_FSM_STATEMACHINE`1_ANIMANCER.FSM.ISTATEMACHINE.GET_CURRENTSTATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_FSM_STATEMACHINE`1_ANIMANCER.FSM.ISTATEMACHINE.GET_PREVIOUSSTATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_FSM_STATEMACHINE`1_ANIMANCER.FSM.ISTATEMACHINE.GET_NEXTSTATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_FSM_STATEMACHINE`1_ANIMANCER.FSM.ISTATEMACHINE.CANSETSTATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_FSM_STATEMACHINE`1_ANIMANCER.FSM.ISTATEMACHINE.CANSETSTATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_FSM_STATEMACHINE`1_ANIMANCER.FSM.ISTATEMACHINE.FORCESETSTATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_FSM_STATEMACHINE`1_ANIMANCER.FSM.ISTATEMACHINE.TRYRESETSTATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_FSM_STATEMACHINE`1_ANIMANCER.FSM.ISTATEMACHINE.TRYRESETSTATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_FSM_STATEMACHINE`1_ANIMANCER.FSM.ISTATEMACHINE.TRYSETSTATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_FSM_STATEMACHINE`1_ANIMANCER.FSM.ISTATEMACHINE.TRYSETSTATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_FSM_STATEMACHINE`1_ANIMANCER.FSM.ISTATEMACHINE.SETALLOWNULLSTATES_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Animancer::FSM
{
	inline static constexpr unsigned int StateMachine`1_TypeDefinitionIndex = 37783;

	class StateMachine`1 : public Il2CppObject
	{
	public:
		Il2CppObject* _CurrentState; // 0x0

		Il2CppObject* get_CurrentState()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FSM_STATEMACHINE`1_GET_CURRENTSTATE_OFFSET))(nullptr);
		}

		Il2CppObject* get_PreviousState()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FSM_STATEMACHINE`1_GET_PREVIOUSSTATE_OFFSET))(nullptr);
		}

		Il2CppObject* get_NextState()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FSM_STATEMACHINE`1_GET_NEXTSTATE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FSM_STATEMACHINE`1_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FSM_STATEMACHINE`1_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void InitializeAfterDeserialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FSM_STATEMACHINE`1_INITIALIZEAFTERDESERIALIZE_OFFSET))(nullptr);
		}

		::System::Boolean CanSetState(Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FSM_STATEMACHINE`1_CANSETSTATE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* CanSetState(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FSM_STATEMACHINE`1_CANSETSTATE_OFFSET))(arg, nullptr);
		}

		::System::Boolean TrySetState(Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FSM_STATEMACHINE`1_TRYSETSTATE_OFFSET))(arg, nullptr);
		}

		::System::Boolean TrySetState(Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FSM_STATEMACHINE`1_TRYSETSTATE_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryResetState(Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FSM_STATEMACHINE`1_TRYRESETSTATE_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryResetState(Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FSM_STATEMACHINE`1_TRYRESETSTATE_OFFSET))(arg, nullptr);
		}

		::System::Void ForceSetState(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FSM_STATEMACHINE`1_FORCESETSTATE_OFFSET))(arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FSM_STATEMACHINE`1_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void SetAllowNullStates(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FSM_STATEMACHINE`1_SETALLOWNULLSTATES_OFFSET))(arg, nullptr);
		}

		::System::Object* Animancer.FSM.IStateMachine.get_CurrentState()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FSM_STATEMACHINE`1_ANIMANCER.FSM.ISTATEMACHINE.GET_CURRENTSTATE_OFFSET))(nullptr);
		}

		::System::Object* Animancer.FSM.IStateMachine.get_PreviousState()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FSM_STATEMACHINE`1_ANIMANCER.FSM.ISTATEMACHINE.GET_PREVIOUSSTATE_OFFSET))(nullptr);
		}

		::System::Object* Animancer.FSM.IStateMachine.get_NextState()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FSM_STATEMACHINE`1_ANIMANCER.FSM.ISTATEMACHINE.GET_NEXTSTATE_OFFSET))(nullptr);
		}

		::System::Object* Animancer.FSM.IStateMachine.CanSetState(::System::Collections::IList* arg)
		{
			return (return (::System::Object*(*)(::System::Collections::IList*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FSM_STATEMACHINE`1_ANIMANCER.FSM.ISTATEMACHINE.CANSETSTATE_OFFSET))(arg, nullptr);
		}

		::System::Boolean Animancer.FSM.IStateMachine.CanSetState(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FSM_STATEMACHINE`1_ANIMANCER.FSM.ISTATEMACHINE.CANSETSTATE_OFFSET))(arg, nullptr);
		}

		::System::Void Animancer.FSM.IStateMachine.ForceSetState(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FSM_STATEMACHINE`1_ANIMANCER.FSM.ISTATEMACHINE.FORCESETSTATE_OFFSET))(arg, nullptr);
		}

		::System::Boolean Animancer.FSM.IStateMachine.TryResetState(::System::Collections::IList* arg)
		{
			return (return (::System::Boolean(*)(::System::Collections::IList*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FSM_STATEMACHINE`1_ANIMANCER.FSM.ISTATEMACHINE.TRYRESETSTATE_OFFSET))(arg, nullptr);
		}

		::System::Boolean Animancer.FSM.IStateMachine.TryResetState(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FSM_STATEMACHINE`1_ANIMANCER.FSM.ISTATEMACHINE.TRYRESETSTATE_OFFSET))(arg, nullptr);
		}

		::System::Boolean Animancer.FSM.IStateMachine.TrySetState(::System::Collections::IList* arg)
		{
			return (return (::System::Boolean(*)(::System::Collections::IList*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FSM_STATEMACHINE`1_ANIMANCER.FSM.ISTATEMACHINE.TRYSETSTATE_OFFSET))(arg, nullptr);
		}

		::System::Boolean Animancer.FSM.IStateMachine.TrySetState(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FSM_STATEMACHINE`1_ANIMANCER.FSM.ISTATEMACHINE.TRYSETSTATE_OFFSET))(arg, nullptr);
		}

		::System::Void Animancer.FSM.IStateMachine.SetAllowNullStates(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FSM_STATEMACHINE`1_ANIMANCER.FSM.ISTATEMACHINE.SETALLOWNULLSTATES_OFFSET))(arg, nullptr);
		}

	};
}

