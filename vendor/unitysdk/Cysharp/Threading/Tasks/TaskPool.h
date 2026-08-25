#pragma once
#include "../../../unitysdk.h"

#define CYSHARP_THREADING_TASKS_TASKPOOL_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9DD4940)
#define CYSHARP_THREADING_TASKS_TASKPOOL_REGISTERSIZEGETTER_OFFSET UNITYSDK_OFFSET(0x9DD0C70)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int TaskPool_TypeDefinitionIndex = 35894;

	class TaskPool : public Il2CppObject
	{
	public:
		::System::Int32 MaxPoolSize; // 0x0
		Il2CppObject* sizes; // 0x8

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TASKPOOL_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterSizeGetter(::System::Type* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Type*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TASKPOOL_REGISTERSIZEGETTER_OFFSET))(arg, arg, nullptr);
		}

	};
}

