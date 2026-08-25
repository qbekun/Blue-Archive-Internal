#pragma once
#include "../../../../unitysdk.h"

#define CYSHARP_THREADING_TASKS_INTERNAL_ARRAYPOOLUTIL_ENSURECAPACITYCORE_OFFSET UNITYSDK_OFFSET(0x000000)
#define CYSHARP_THREADING_TASKS_INTERNAL_ARRAYPOOLUTIL_MATERIALIZE_OFFSET UNITYSDK_OFFSET(0x000000)
#define CYSHARP_THREADING_TASKS_INTERNAL_ARRAYPOOLUTIL_ENSURECAPACITY_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Cysharp::Threading::Tasks::Internal
{
	inline static constexpr unsigned int ArrayPoolUtil_TypeDefinitionIndex = 36127;

	class ArrayPoolUtil : public Il2CppObject
	{
	public:
		::System::Void EnsureCapacityCore(::System::Object[]&* arg, ::System::Int32 arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Object[]&*, ::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_ARRAYPOOLUTIL_ENSURECAPACITYCORE_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* Materialize(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_ARRAYPOOLUTIL_MATERIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void EnsureCapacity(::System::Object[]&* arg, ::System::Int32 arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Object[]&*, ::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_ARRAYPOOLUTIL_ENSURECAPACITY_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

