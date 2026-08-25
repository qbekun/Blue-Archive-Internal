#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_THREADING_TASKS_PARALLELLOOPSTATE64_.CTOR_OFFSET UNITYSDK_OFFSET(0x93F09D0)
#define SYSTEM_THREADING_TASKS_PARALLELLOOPSTATE64_GET_CURRENTITERATION_OFFSET UNITYSDK_OFFSET(0x93F0A10)
#define SYSTEM_THREADING_TASKS_PARALLELLOOPSTATE64_SET_CURRENTITERATION_OFFSET UNITYSDK_OFFSET(0x93F0A20)
#define SYSTEM_THREADING_TASKS_PARALLELLOOPSTATE64_INTERNALBREAK_OFFSET UNITYSDK_OFFSET(0x93F0A30)

namespace System::Threading::Tasks
{
	inline static constexpr unsigned int ParallelLoopState64_TypeDefinitionIndex = 24154;

	class ParallelLoopState64 : public Il2CppObject
	{
	public:
		::System::Threading::Tasks::ParallelLoopStateFlags64* _sharedParallelStateFlags; // 0x18
		::System::Int64 _currentIteration; // 0x20

		::System::Void .ctor(::System::Threading::Tasks::ParallelLoopStateFlags64* arg)
		{
			((::System::Void(*)(::System::Threading::Tasks::ParallelLoopStateFlags64*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_PARALLELLOOPSTATE64_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_CurrentIteration()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_PARALLELLOOPSTATE64_GET_CURRENTITERATION_OFFSET))(nullptr);
		}

		::System::Void set_CurrentIteration(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_PARALLELLOOPSTATE64_SET_CURRENTITERATION_OFFSET))(arg, nullptr);
		}

		::System::Void InternalBreak()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_PARALLELLOOPSTATE64_INTERNALBREAK_OFFSET))(nullptr);
		}

	};
}

