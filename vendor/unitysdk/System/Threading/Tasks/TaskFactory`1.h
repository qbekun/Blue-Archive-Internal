#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_THREADING_TASKS_TASKFACTORY`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_THREADING_TASKS_TASKFACTORY`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_THREADING_TASKS_TASKFACTORY`1_STARTNEW_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_THREADING_TASKS_TASKFACTORY`1_FROMASYNCCORELOGIC_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_THREADING_TASKS_TASKFACTORY`1_FROMASYNC_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_THREADING_TASKS_TASKFACTORY`1_FROMASYNCIMPL_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_THREADING_TASKS_TASKFACTORY`1_FROMASYNC_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_THREADING_TASKS_TASKFACTORY`1_FROMASYNCIMPL_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_THREADING_TASKS_TASKFACTORY`1_FROMASYNCIMPL_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_THREADING_TASKS_TASKFACTORY`1_FROMASYNCTRIM_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Threading::Tasks
{
	inline static constexpr unsigned int TaskFactory`1_TypeDefinitionIndex = 24173;

	class TaskFactory`1 : public Il2CppObject
	{
	public:
		::System::Threading::CancellationToken* m_defaultCancellationToken; // 0x0
		::System::Threading::Tasks::TaskScheduler* m_defaultScheduler; // 0x0
		::System::Threading::Tasks::TaskCreationOptions* m_defaultCreationOptions; // 0x0
		::System::Threading::Tasks::TaskContinuationOptions* m_defaultContinuationOptions; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKFACTORY`1_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Threading::CancellationToken* arg, ::System::Threading::Tasks::TaskCreationOptions* arg, ::System::Threading::Tasks::TaskContinuationOptions* arg, ::System::Threading::Tasks::TaskScheduler* arg)
		{
			((::System::Void(*)(::System::Threading::CancellationToken*, ::System::Threading::Tasks::TaskCreationOptions*, ::System::Threading::Tasks::TaskContinuationOptions*, ::System::Threading::Tasks::TaskScheduler*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKFACTORY`1_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		Il2CppObject* StartNew(Il2CppObject* arg, ::System::Object* arg, ::System::Threading::CancellationToken* arg, ::System::Threading::Tasks::TaskCreationOptions* arg, ::System::Threading::Tasks::TaskScheduler* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Object*, ::System::Threading::CancellationToken*, ::System::Threading::Tasks::TaskCreationOptions*, ::System::Threading::Tasks::TaskScheduler*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKFACTORY`1_STARTNEW_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void FromAsyncCoreLogic(::System::IAsyncResult* arg, Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, Il2CppObject*, Il2CppObject*, Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKFACTORY`1_FROMASYNCCORELOGIC_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		Il2CppObject* FromAsync(Il2CppObject* arg, Il2CppObject* arg, ::System::Object* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, Il2CppObject*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKFACTORY`1_FROMASYNC_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* FromAsyncImpl(Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg, ::System::Object* arg, ::System::Threading::Tasks::TaskCreationOptions* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, Il2CppObject*, Il2CppObject*, ::System::Object*, ::System::Threading::Tasks::TaskCreationOptions*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKFACTORY`1_FROMASYNCIMPL_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		Il2CppObject* FromAsync(Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg, ::System::Object* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, Il2CppObject*, Il2CppObject*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKFACTORY`1_FROMASYNC_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		Il2CppObject* FromAsyncImpl(Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg, ::System::Object* arg, ::System::Threading::Tasks::TaskCreationOptions* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, ::System::Object*, ::System::Threading::Tasks::TaskCreationOptions*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKFACTORY`1_FROMASYNCIMPL_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		Il2CppObject* FromAsyncImpl(Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg, ::System::Object* arg, ::System::Threading::Tasks::TaskCreationOptions* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, ::System::Object*, ::System::Threading::Tasks::TaskCreationOptions*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKFACTORY`1_FROMASYNCIMPL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		Il2CppObject* FromAsyncTrim(Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKFACTORY`1_FROMASYNCTRIM_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};
}

