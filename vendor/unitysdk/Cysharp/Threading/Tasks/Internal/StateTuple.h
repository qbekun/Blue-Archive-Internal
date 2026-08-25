#pragma once
#include "../../../../unitysdk.h"

#define CYSHARP_THREADING_TASKS_INTERNAL_STATETUPLE_CREATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define CYSHARP_THREADING_TASKS_INTERNAL_STATETUPLE_CREATE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Cysharp::Threading::Tasks::Internal
{
	inline static constexpr unsigned int StateTuple_TypeDefinitionIndex = 36135;

	class StateTuple : public Il2CppObject
	{
	public:
		Il2CppObject* Create(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_STATETUPLE_CREATE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Create(Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_STATETUPLE_CREATE_OFFSET))(arg, arg, nullptr);
		}

	};
}

