#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_THREADING_TASKS_TASKCONTINUATION_RUN_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_THREADING_TASKS_TASKCONTINUATION_INLINEIFPOSSIBLEORELSEQUEUE_OFFSET UNITYSDK_OFFSET(0x93FC220)
#define SYSTEM_THREADING_TASKS_TASKCONTINUATION_.CTOR_OFFSET UNITYSDK_OFFSET(0x93FC3A0)

namespace System::Threading::Tasks
{
	inline static constexpr unsigned int TaskContinuation_TypeDefinitionIndex = 24193;

	class TaskContinuation : public Il2CppObject
	{
	public:
		::System::Void Run(::System::Threading::Tasks::Task* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Threading::Tasks::Task*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKCONTINUATION_RUN_OFFSET))(arg, arg, nullptr);
		}

		::System::Void InlineIfPossibleOrElseQueue(::System::Threading::Tasks::Task* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Threading::Tasks::Task*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKCONTINUATION_INLINEIFPOSSIBLEORELSEQUEUE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKCONTINUATION_.CTOR_OFFSET))(nullptr);
		}

	};
}

