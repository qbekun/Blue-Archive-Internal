#pragma once
#include "../../unitysdk.h"

#define ANIMANCER_FSM_IKEYEDSTATEMACHINE`1_GET_PREVIOUSKEY_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_FSM_IKEYEDSTATEMACHINE`1_TRYSETSTATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_FSM_IKEYEDSTATEMACHINE`1_FORCESETSTATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_FSM_IKEYEDSTATEMACHINE`1_GET_NEXTKEY_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_FSM_IKEYEDSTATEMACHINE`1_GET_CURRENTKEY_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_FSM_IKEYEDSTATEMACHINE`1_TRYRESETSTATE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Animancer::FSM
{
	inline static constexpr unsigned int IKeyedStateMachine`1_TypeDefinitionIndex = 37786;

	class IKeyedStateMachine`1 : public Il2CppObject
	{
	public:
		Il2CppObject* get_PreviousKey()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FSM_IKEYEDSTATEMACHINE`1_GET_PREVIOUSKEY_OFFSET))(nullptr);
		}

		::System::Object* TrySetState(Il2CppObject* arg)
		{
			return (return (::System::Object*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FSM_IKEYEDSTATEMACHINE`1_TRYSETSTATE_OFFSET))(arg, nullptr);
		}

		::System::Object* ForceSetState(Il2CppObject* arg)
		{
			return (return (::System::Object*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FSM_IKEYEDSTATEMACHINE`1_FORCESETSTATE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_NextKey()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FSM_IKEYEDSTATEMACHINE`1_GET_NEXTKEY_OFFSET))(nullptr);
		}

		Il2CppObject* get_CurrentKey()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FSM_IKEYEDSTATEMACHINE`1_GET_CURRENTKEY_OFFSET))(nullptr);
		}

		::System::Object* TryResetState(Il2CppObject* arg)
		{
			return (return (::System::Object*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FSM_IKEYEDSTATEMACHINE`1_TRYRESETSTATE_OFFSET))(arg, nullptr);
		}

	};
}

