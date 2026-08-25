#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_THREADING_TASKS_TASKSCHEDULEREXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x93EDD40)
#define SYSTEM_THREADING_TASKS_TASKSCHEDULEREXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x93EDDA0)
#define SYSTEM_THREADING_TASKS_TASKSCHEDULEREXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x93EDE10)

namespace System::Threading::Tasks
{
	inline static constexpr unsigned int TaskSchedulerException_TypeDefinitionIndex = 24134;

	class TaskSchedulerException : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKSCHEDULEREXCEPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Exception* arg)
		{
			((::System::Void(*)(::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKSCHEDULEREXCEPTION_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKSCHEDULEREXCEPTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

