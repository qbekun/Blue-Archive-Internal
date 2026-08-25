#pragma once
#include "../../../unitysdk.h"

#define CYSHARP_THREADING_TASKS_ENUMERABLEASYNCEXTENSIONS_SELECT_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int EnumerableAsyncExtensions_TypeDefinitionIndex = 35841;

	class EnumerableAsyncExtensions : public Il2CppObject
	{
	public:
		Il2CppObject* Select(Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_ENUMERABLEASYNCEXTENSIONS_SELECT_OFFSET))(arg, arg, nullptr);
		}

	};
}

