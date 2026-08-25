#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_THREADING_TASKS_TASK`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_THREADING_TASKS_TASK`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_THREADING_TASKS_TASK`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_THREADING_TASKS_TASK`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_THREADING_TASKS_TASK`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_THREADING_TASKS_TASK`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_THREADING_TASKS_TASK`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_THREADING_TASKS_TASK`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_THREADING_TASKS_TASK`1_STARTNEW_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_THREADING_TASKS_TASK`1_STARTNEW_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_THREADING_TASKS_TASK`1_TRYSETRESULT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_THREADING_TASKS_TASK`1_DANGEROUSSETRESULT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_THREADING_TASKS_TASK`1_GET_RESULT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_THREADING_TASKS_TASK`1_GET_RESULTONSUCCESS_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_THREADING_TASKS_TASK`1_GETRESULTCORE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_THREADING_TASKS_TASK`1_GET_FACTORY_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_THREADING_TASKS_TASK`1_INNERINVOKE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_THREADING_TASKS_TASK`1_GETAWAITER_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_THREADING_TASKS_TASK`1_CONFIGUREAWAIT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_THREADING_TASKS_TASK`1_CONTINUEWITH_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_THREADING_TASKS_TASK`1_CONTINUEWITH_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_THREADING_TASKS_TASK`1_CONTINUEWITH_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_THREADING_TASKS_TASK`1_CONTINUEWITH_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_THREADING_TASKS_TASK`1_CONTINUEWITH_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_THREADING_TASKS_TASK`1_CONTINUEWITH_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Threading::Tasks
{
	inline static constexpr unsigned int Task`1_TypeDefinitionIndex = 24167;

	class Task`1 : public Il2CppObject
	{
	public:
		Il2CppObject* m_result; // 0x0
		Il2CppObject* s_defaultFactory; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK`1_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Threading::Tasks::TaskCreationOptions* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Threading::Tasks::TaskCreationOptions*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK`1_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK`1_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Boolean arg, Il2CppObject* arg, ::System::Threading::Tasks::TaskCreationOptions* arg, ::System::Threading::CancellationToken* arg)
		{
			((::System::Void(*)(::System::Boolean, Il2CppObject*, ::System::Threading::Tasks::TaskCreationOptions*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK`1_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg, ::System::Threading::CancellationToken* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK`1_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg, ::System::Object* arg, ::System::Threading::CancellationToken* arg, ::System::Threading::Tasks::TaskCreationOptions* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Object*, ::System::Threading::CancellationToken*, ::System::Threading::Tasks::TaskCreationOptions*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK`1_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg, ::System::Threading::Tasks::Task* arg, ::System::Threading::CancellationToken* arg, ::System::Threading::Tasks::TaskCreationOptions* arg, ::System::Threading::Tasks::InternalTaskOptions* arg, ::System::Threading::Tasks::TaskScheduler* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Threading::Tasks::Task*, ::System::Threading::CancellationToken*, ::System::Threading::Tasks::TaskCreationOptions*, ::System::Threading::Tasks::InternalTaskOptions*, ::System::Threading::Tasks::TaskScheduler*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK`1_.CTOR_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Delegate* arg, ::System::Object* arg, ::System::Threading::Tasks::Task* arg, ::System::Threading::CancellationToken* arg, ::System::Threading::Tasks::TaskCreationOptions* arg, ::System::Threading::Tasks::InternalTaskOptions* arg, ::System::Threading::Tasks::TaskScheduler* arg)
		{
			((::System::Void(*)(::System::Delegate*, ::System::Object*, ::System::Threading::Tasks::Task*, ::System::Threading::CancellationToken*, ::System::Threading::Tasks::TaskCreationOptions*, ::System::Threading::Tasks::InternalTaskOptions*, ::System::Threading::Tasks::TaskScheduler*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK`1_.CTOR_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		Il2CppObject* StartNew(::System::Threading::Tasks::Task* arg, Il2CppObject* arg, ::System::Threading::CancellationToken* arg, ::System::Threading::Tasks::TaskCreationOptions* arg, ::System::Threading::Tasks::InternalTaskOptions* arg, ::System::Threading::Tasks::TaskScheduler* arg)
		{
			return (return (Il2CppObject*(*)(::System::Threading::Tasks::Task*, Il2CppObject*, ::System::Threading::CancellationToken*, ::System::Threading::Tasks::TaskCreationOptions*, ::System::Threading::Tasks::InternalTaskOptions*, ::System::Threading::Tasks::TaskScheduler*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK`1_STARTNEW_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		Il2CppObject* StartNew(::System::Threading::Tasks::Task* arg, Il2CppObject* arg, ::System::Object* arg, ::System::Threading::CancellationToken* arg, ::System::Threading::Tasks::TaskCreationOptions* arg, ::System::Threading::Tasks::InternalTaskOptions* arg, ::System::Threading::Tasks::TaskScheduler* arg)
		{
			return (return (Il2CppObject*(*)(::System::Threading::Tasks::Task*, Il2CppObject*, ::System::Object*, ::System::Threading::CancellationToken*, ::System::Threading::Tasks::TaskCreationOptions*, ::System::Threading::Tasks::InternalTaskOptions*, ::System::Threading::Tasks::TaskScheduler*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK`1_STARTNEW_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean TrySetResult(Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK`1_TRYSETRESULT_OFFSET))(arg, nullptr);
		}

		::System::Void DangerousSetResult(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK`1_DANGEROUSSETRESULT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Result()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK`1_GET_RESULT_OFFSET))(nullptr);
		}

		Il2CppObject* get_ResultOnSuccess()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK`1_GET_RESULTONSUCCESS_OFFSET))(nullptr);
		}

		Il2CppObject* GetResultCore(::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK`1_GETRESULTCORE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Factory()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK`1_GET_FACTORY_OFFSET))(nullptr);
		}

		::System::Void InnerInvoke()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK`1_INNERINVOKE_OFFSET))(nullptr);
		}

		Il2CppObject* GetAwaiter()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK`1_GETAWAITER_OFFSET))(nullptr);
		}

		Il2CppObject* ConfigureAwait(::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK`1_CONFIGUREAWAIT_OFFSET))(arg, nullptr);
		}

		::System::Threading::Tasks::Task* ContinueWith(Il2CppObject* arg, ::System::Threading::Tasks::TaskScheduler* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(Il2CppObject*, ::System::Threading::Tasks::TaskScheduler*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK`1_CONTINUEWITH_OFFSET))(arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* ContinueWith(Il2CppObject* arg, ::System::Threading::Tasks::TaskScheduler* arg, ::System::Threading::CancellationToken* arg, ::System::Threading::Tasks::TaskContinuationOptions* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(Il2CppObject*, ::System::Threading::Tasks::TaskScheduler*, ::System::Threading::CancellationToken*, ::System::Threading::Tasks::TaskContinuationOptions*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK`1_CONTINUEWITH_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* ContinueWith(Il2CppObject* arg, ::System::Object* arg, ::System::Threading::Tasks::TaskScheduler* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(Il2CppObject*, ::System::Object*, ::System::Threading::Tasks::TaskScheduler*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK`1_CONTINUEWITH_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* ContinueWith(Il2CppObject* arg, ::System::Object* arg, ::System::Threading::Tasks::TaskScheduler* arg, ::System::Threading::CancellationToken* arg, ::System::Threading::Tasks::TaskContinuationOptions* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(Il2CppObject*, ::System::Object*, ::System::Threading::Tasks::TaskScheduler*, ::System::Threading::CancellationToken*, ::System::Threading::Tasks::TaskContinuationOptions*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK`1_CONTINUEWITH_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		Il2CppObject* ContinueWith(Il2CppObject* arg, ::System::Threading::Tasks::TaskContinuationOptions* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Threading::Tasks::TaskContinuationOptions*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK`1_CONTINUEWITH_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* ContinueWith(Il2CppObject* arg, ::System::Threading::Tasks::TaskScheduler* arg, ::System::Threading::CancellationToken* arg, ::System::Threading::Tasks::TaskContinuationOptions* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Threading::Tasks::TaskScheduler*, ::System::Threading::CancellationToken*, ::System::Threading::Tasks::TaskContinuationOptions*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK`1_CONTINUEWITH_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};
}

