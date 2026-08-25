#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_THREADING_TASKS_FORCEASYNCAWAITER_.CTOR_OFFSET UNITYSDK_OFFSET(0x93EF680)
#define SYSTEM_THREADING_TASKS_FORCEASYNCAWAITER_GETAWAITER_OFFSET UNITYSDK_OFFSET(0x93EF690)
#define SYSTEM_THREADING_TASKS_FORCEASYNCAWAITER_GET_ISCOMPLETED_OFFSET UNITYSDK_OFFSET(0x93EF6A0)
#define SYSTEM_THREADING_TASKS_FORCEASYNCAWAITER_GETRESULT_OFFSET UNITYSDK_OFFSET(0x93EF6B0)
#define SYSTEM_THREADING_TASKS_FORCEASYNCAWAITER_UNSAFEONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x93EF6F0)

namespace System::Threading::Tasks
{
	inline static constexpr unsigned int ForceAsyncAwaiter_TypeDefinitionIndex = 24145;

	class ForceAsyncAwaiter : public Il2CppObject
	{
	public:
		::System::Threading::Tasks::Task* _task; // 0x10

		::System::Void .ctor(::System::Threading::Tasks::Task* arg)
		{
			((::System::Void(*)(::System::Threading::Tasks::Task*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_FORCEASYNCAWAITER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Threading::Tasks::ForceAsyncAwaiter* GetAwaiter()
		{
			return (return (::System::Threading::Tasks::ForceAsyncAwaiter*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_FORCEASYNCAWAITER_GETAWAITER_OFFSET))(nullptr);
		}

		::System::Boolean get_IsCompleted()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_FORCEASYNCAWAITER_GET_ISCOMPLETED_OFFSET))(nullptr);
		}

		::System::Void GetResult()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_FORCEASYNCAWAITER_GETRESULT_OFFSET))(nullptr);
		}

		::System::Void UnsafeOnCompleted(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_FORCEASYNCAWAITER_UNSAFEONCOMPLETED_OFFSET))(arg, nullptr);
		}

	};
}

