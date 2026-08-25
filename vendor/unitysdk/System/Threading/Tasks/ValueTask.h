#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_THREADING_TASKS_VALUETASK_GET_COMPLETEDTASK_OFFSET UNITYSDK_OFFSET(0x93EE420)
#define SYSTEM_THREADING_TASKS_VALUETASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x93EE4D0)
#define SYSTEM_THREADING_TASKS_VALUETASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x93EE510)
#define SYSTEM_THREADING_TASKS_VALUETASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x93EE550)
#define SYSTEM_THREADING_TASKS_VALUETASK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x93EE580)
#define SYSTEM_THREADING_TASKS_VALUETASK_EQUALS_OFFSET UNITYSDK_OFFSET(0x93EE5A0)
#define SYSTEM_THREADING_TASKS_VALUETASK_EQUALS_OFFSET UNITYSDK_OFFSET(0x93EE640)
#define SYSTEM_THREADING_TASKS_VALUETASK_ASTASK_OFFSET UNITYSDK_OFFSET(0x93EE660)
#define SYSTEM_THREADING_TASKS_VALUETASK_GETTASKFORVALUETASKSOURCE_OFFSET UNITYSDK_OFFSET(0x93EE7D0)
#define SYSTEM_THREADING_TASKS_VALUETASK_GET_ISCOMPLETED_OFFSET UNITYSDK_OFFSET(0x93EED30)
#define SYSTEM_THREADING_TASKS_VALUETASK_THROWIFCOMPLETEDUNSUCCESSFULLY_OFFSET UNITYSDK_OFFSET(0x93EEE50)
#define SYSTEM_THREADING_TASKS_VALUETASK_GETAWAITER_OFFSET UNITYSDK_OFFSET(0x93EEF40)
#define SYSTEM_THREADING_TASKS_VALUETASK_CONFIGUREAWAIT_OFFSET UNITYSDK_OFFSET(0x93EEF60)
#define SYSTEM_THREADING_TASKS_VALUETASK_.CCTOR_OFFSET UNITYSDK_OFFSET(0x93EEFE0)

namespace System::Threading::Tasks
{
	inline static constexpr unsigned int ValueTask_TypeDefinitionIndex = 24140;

	class ValueTask : public Il2CppObject
	{
	public:
		::System::Threading::Tasks::Task* s_canceledTask; // 0x0
		::System::Object* _obj; // 0x10
		::System::Int16 _token; // 0x18
		::System::Boolean _continueOnCapturedContext; // 0x1A

		::System::Threading::Tasks::Task* get_CompletedTask()
		{
			return (return (::System::Threading::Tasks::Task*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_VALUETASK_GET_COMPLETEDTASK_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Threading::Tasks::Task* arg)
		{
			((::System::Void(*)(::System::Threading::Tasks::Task*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_VALUETASK_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Threading::Tasks::Sources::IValueTaskSource* arg, ::System::Int16 arg)
		{
			((::System::Void(*)(::System::Threading::Tasks::Sources::IValueTaskSource*, ::System::Int16, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_VALUETASK_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int16 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int16, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_VALUETASK_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_VALUETASK_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_VALUETASK_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Threading::Tasks::ValueTask* arg)
		{
			return (return (::System::Boolean(*)(::System::Threading::Tasks::ValueTask*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_VALUETASK_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Threading::Tasks::Task* AsTask()
		{
			return (return (::System::Threading::Tasks::Task*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_VALUETASK_ASTASK_OFFSET))(nullptr);
		}

		::System::Threading::Tasks::Task* GetTaskForValueTaskSource(::System::Threading::Tasks::Sources::IValueTaskSource* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::Threading::Tasks::Sources::IValueTaskSource*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_VALUETASK_GETTASKFORVALUETASKSOURCE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsCompleted()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_VALUETASK_GET_ISCOMPLETED_OFFSET))(nullptr);
		}

		::System::Void ThrowIfCompletedUnsuccessfully()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_VALUETASK_THROWIFCOMPLETEDUNSUCCESSFULLY_OFFSET))(nullptr);
		}

		::System::Runtime::CompilerServices::ValueTaskAwaiter* GetAwaiter()
		{
			return (return (::System::Runtime::CompilerServices::ValueTaskAwaiter*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_VALUETASK_GETAWAITER_OFFSET))(nullptr);
		}

		::System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable* ConfigureAwait(::System::Boolean arg)
		{
			return (return (::System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_VALUETASK_CONFIGUREAWAIT_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_VALUETASK_.CCTOR_OFFSET))(nullptr);
		}

	};
}

