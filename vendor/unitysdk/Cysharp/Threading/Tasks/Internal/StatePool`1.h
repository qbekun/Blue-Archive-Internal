#pragma once
#include "../../../../unitysdk.h"

#define CYSHARP_THREADING_TASKS_INTERNAL_STATEPOOL`1_.CCTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define CYSHARP_THREADING_TASKS_INTERNAL_STATEPOOL`1_CREATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define CYSHARP_THREADING_TASKS_INTERNAL_STATEPOOL`1_RETURN_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Cysharp::Threading::Tasks::Internal
{
	inline static constexpr unsigned int StatePool`1_TypeDefinitionIndex = 36137;

	class StatePool`1 : public Il2CppObject
	{
	public:
		Il2CppObject* queue; // 0x0

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_STATEPOOL`1_.CCTOR_OFFSET))(nullptr);
		}

		Il2CppObject* Create(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_STATEPOOL`1_CREATE_OFFSET))(arg, nullptr);
		}

		::System::Void Return(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_STATEPOOL`1_RETURN_OFFSET))(arg, nullptr);
		}

	};
}

