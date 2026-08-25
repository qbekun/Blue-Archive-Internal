#pragma once
#include "../../../../unitysdk.h"

#define CYSHARP_THREADING_TASKS_INTERNAL_STATEPOOL`2_.CCTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define CYSHARP_THREADING_TASKS_INTERNAL_STATEPOOL`2_CREATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define CYSHARP_THREADING_TASKS_INTERNAL_STATEPOOL`2_RETURN_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Cysharp::Threading::Tasks::Internal
{
	inline static constexpr unsigned int StatePool`2_TypeDefinitionIndex = 36139;

	class StatePool`2 : public Il2CppObject
	{
	public:
		Il2CppObject* queue; // 0x0

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_STATEPOOL`2_.CCTOR_OFFSET))(nullptr);
		}

		Il2CppObject* Create(Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_STATEPOOL`2_CREATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Return(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_STATEPOOL`2_RETURN_OFFSET))(arg, nullptr);
		}

	};
}

