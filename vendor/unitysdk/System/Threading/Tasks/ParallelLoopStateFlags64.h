#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_THREADING_TASKS_PARALLELLOOPSTATEFLAGS64_GET_LOWESTBREAKITERATION_OFFSET UNITYSDK_OFFSET(0x93F09A0)
#define SYSTEM_THREADING_TASKS_PARALLELLOOPSTATEFLAGS64_SHOULDEXITLOOP_OFFSET UNITYSDK_OFFSET(0x93F0AF0)
#define SYSTEM_THREADING_TASKS_PARALLELLOOPSTATEFLAGS64_SHOULDEXITLOOP_OFFSET UNITYSDK_OFFSET(0x93F0B50)
#define SYSTEM_THREADING_TASKS_PARALLELLOOPSTATEFLAGS64_.CTOR_OFFSET UNITYSDK_OFFSET(0x93F0B70)

namespace System::Threading::Tasks
{
	inline static constexpr unsigned int ParallelLoopStateFlags64_TypeDefinitionIndex = 24156;

	class ParallelLoopStateFlags64 : public Il2CppObject
	{
	public:
		::System::Int64 _lowestBreakIteration; // 0x18

		::System::Int64 get_LowestBreakIteration()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_PARALLELLOOPSTATEFLAGS64_GET_LOWESTBREAKITERATION_OFFSET))(nullptr);
		}

		::System::Boolean ShouldExitLoop(::System::Int64 arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_PARALLELLOOPSTATEFLAGS64_SHOULDEXITLOOP_OFFSET))(arg, nullptr);
		}

		::System::Boolean ShouldExitLoop()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_PARALLELLOOPSTATEFLAGS64_SHOULDEXITLOOP_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_PARALLELLOOPSTATEFLAGS64_.CTOR_OFFSET))(nullptr);
		}

	};
}

