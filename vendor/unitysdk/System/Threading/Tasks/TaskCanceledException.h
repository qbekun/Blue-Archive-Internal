#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_THREADING_TASKS_TASKCANCELEDEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x93EDC10)
#define SYSTEM_THREADING_TASKS_TASKCANCELEDEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x93EDC50)
#define SYSTEM_THREADING_TASKS_TASKCANCELEDEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x93EDD20)

namespace System::Threading::Tasks
{
	inline static constexpr unsigned int TaskCanceledException_TypeDefinitionIndex = 24132;

	class TaskCanceledException : public Il2CppObject
	{
	public:
		::System::Threading::Tasks::Task* _canceledTask; // 0x98

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKCANCELEDEXCEPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Threading::Tasks::Task* arg)
		{
			((::System::Void(*)(::System::Threading::Tasks::Task*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKCANCELEDEXCEPTION_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKCANCELEDEXCEPTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

