#pragma once
#include "../../unitysdk.h"

#define ANIMANCER_FSM_STATEEXTENSIONS_FORCEENTERSTATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_FSM_STATEEXTENSIONS_TRYENTERSTATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_FSM_STATEEXTENSIONS_TRYREENTERSTATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_FSM_STATEEXTENSIONS_GETNEXTSTATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_FSM_STATEEXTENSIONS_ISCURRENTSTATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_FSM_STATEEXTENSIONS_GETPREVIOUSSTATE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Animancer::FSM
{
	inline static constexpr unsigned int StateExtensions_TypeDefinitionIndex = 37774;

	class StateExtensions : public Il2CppObject
	{
	public:
		::System::String* APIDocumentationURL; // 0x0

		::System::Void ForceEnterState(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FSM_STATEEXTENSIONS_FORCEENTERSTATE_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryEnterState(Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FSM_STATEEXTENSIONS_TRYENTERSTATE_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryReEnterState(Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FSM_STATEEXTENSIONS_TRYREENTERSTATE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetNextState(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FSM_STATEEXTENSIONS_GETNEXTSTATE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsCurrentState(Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FSM_STATEEXTENSIONS_ISCURRENTSTATE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetPreviousState(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FSM_STATEEXTENSIONS_GETPREVIOUSSTATE_OFFSET))(arg, nullptr);
		}

	};
}

