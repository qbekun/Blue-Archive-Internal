#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_THREADING_TASKS_PARALLELLOOPSTATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x93F05F0)
#define SYSTEM_THREADING_TASKS_PARALLELLOOPSTATE_STOP_OFFSET UNITYSDK_OFFSET(0x93F0620)
#define SYSTEM_THREADING_TASKS_PARALLELLOOPSTATE_INTERNALBREAK_OFFSET UNITYSDK_OFFSET(0x93F06C0)
#define SYSTEM_THREADING_TASKS_PARALLELLOOPSTATE_BREAK_OFFSET UNITYSDK_OFFSET(0x93F0720)
#define SYSTEM_THREADING_TASKS_PARALLELLOOPSTATE_BREAK_OFFSET UNITYSDK_OFFSET(0x93F0740)

namespace System::Threading::Tasks
{
	inline static constexpr unsigned int ParallelLoopState_TypeDefinitionIndex = 24153;

	class ParallelLoopState : public Il2CppObject
	{
	public:
		::System::Threading::Tasks::ParallelLoopStateFlags* _flagsBase; // 0x10

		::System::Void .ctor(::System::Threading::Tasks::ParallelLoopStateFlags* arg)
		{
			((::System::Void(*)(::System::Threading::Tasks::ParallelLoopStateFlags*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_PARALLELLOOPSTATE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Stop()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_PARALLELLOOPSTATE_STOP_OFFSET))(nullptr);
		}

		::System::Void InternalBreak()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_PARALLELLOOPSTATE_INTERNALBREAK_OFFSET))(nullptr);
		}

		::System::Void Break()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_PARALLELLOOPSTATE_BREAK_OFFSET))(nullptr);
		}

		::System::Void Break(::System::Int64 arg, ::System::Threading::Tasks::ParallelLoopStateFlags64* arg)
		{
			((::System::Void(*)(::System::Int64, ::System::Threading::Tasks::ParallelLoopStateFlags64*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_PARALLELLOOPSTATE_BREAK_OFFSET))(arg, arg, nullptr);
		}

	};
}

