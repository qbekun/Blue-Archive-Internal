#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_THREADING_TASKS_TASKFACTORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x93FBC30)
#define SYSTEM_THREADING_TASKS_TASKFACTORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x93FE4B0)
#define SYSTEM_THREADING_TASKS_TASKFACTORY_CHECKCREATIONOPTIONS_OFFSET UNITYSDK_OFFSET(0x93FE660)
#define SYSTEM_THREADING_TASKS_TASKFACTORY_STARTNEW_OFFSET UNITYSDK_OFFSET(0x93FE6D0)
#define SYSTEM_THREADING_TASKS_TASKFACTORY_STARTNEW_OFFSET UNITYSDK_OFFSET(0x93FE830)
#define SYSTEM_THREADING_TASKS_TASKFACTORY_STARTNEW_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_THREADING_TASKS_TASKFACTORY_STARTNEW_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_THREADING_TASKS_TASKFACTORY_FROMASYNC_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_THREADING_TASKS_TASKFACTORY_FROMASYNC_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_THREADING_TASKS_TASKFACTORY_FROMASYNC_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_THREADING_TASKS_TASKFACTORY_FROMASYNC_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_THREADING_TASKS_TASKFACTORY_CHECKFROMASYNCOPTIONS_OFFSET UNITYSDK_OFFSET(0x93FE9B0)
#define SYSTEM_THREADING_TASKS_TASKFACTORY_COMMONCWANYLOGIC_OFFSET UNITYSDK_OFFSET(0x93FAD70)
#define SYSTEM_THREADING_TASKS_TASKFACTORY_CHECKMULTITASKCONTINUATIONOPTIONS_OFFSET UNITYSDK_OFFSET(0x93FE570)

namespace System::Threading::Tasks
{
	inline static constexpr unsigned int TaskFactory_TypeDefinitionIndex = 24202;

	class TaskFactory : public Il2CppObject
	{
	public:
		::System::Threading::CancellationToken* m_defaultCancellationToken; // 0x10
		::System::Threading::Tasks::TaskScheduler* m_defaultScheduler; // 0x18
		::System::Threading::Tasks::TaskCreationOptions* m_defaultCreationOptions; // 0x20
		::System::Threading::Tasks::TaskContinuationOptions* m_defaultContinuationOptions; // 0x24

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKFACTORY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Threading::CancellationToken* arg, ::System::Threading::Tasks::TaskCreationOptions* arg, ::System::Threading::Tasks::TaskContinuationOptions* arg, ::System::Threading::Tasks::TaskScheduler* arg)
		{
			((::System::Void(*)(::System::Threading::CancellationToken*, ::System::Threading::Tasks::TaskCreationOptions*, ::System::Threading::Tasks::TaskContinuationOptions*, ::System::Threading::Tasks::TaskScheduler*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKFACTORY_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void CheckCreationOptions(::System::Threading::Tasks::TaskCreationOptions* arg)
		{
			((::System::Void(*)(::System::Threading::Tasks::TaskCreationOptions*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKFACTORY_CHECKCREATIONOPTIONS_OFFSET))(arg, nullptr);
		}

		::System::Threading::Tasks::Task* StartNew(::System::Action* arg, ::System::Threading::CancellationToken* arg, ::System::Threading::Tasks::TaskCreationOptions* arg, ::System::Threading::Tasks::TaskScheduler* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::Action*, ::System::Threading::CancellationToken*, ::System::Threading::Tasks::TaskCreationOptions*, ::System::Threading::Tasks::TaskScheduler*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKFACTORY_STARTNEW_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* StartNew(Il2CppObject* arg, ::System::Object* arg, ::System::Threading::CancellationToken* arg, ::System::Threading::Tasks::TaskCreationOptions* arg, ::System::Threading::Tasks::TaskScheduler* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(Il2CppObject*, ::System::Object*, ::System::Threading::CancellationToken*, ::System::Threading::Tasks::TaskCreationOptions*, ::System::Threading::Tasks::TaskScheduler*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKFACTORY_STARTNEW_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		Il2CppObject* StartNew(Il2CppObject* arg, ::System::Threading::CancellationToken* arg, ::System::Threading::Tasks::TaskCreationOptions* arg, ::System::Threading::Tasks::TaskScheduler* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Threading::CancellationToken*, ::System::Threading::Tasks::TaskCreationOptions*, ::System::Threading::Tasks::TaskScheduler*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKFACTORY_STARTNEW_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		Il2CppObject* StartNew(Il2CppObject* arg, ::System::Object* arg, ::System::Threading::CancellationToken* arg, ::System::Threading::Tasks::TaskCreationOptions* arg, ::System::Threading::Tasks::TaskScheduler* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Object*, ::System::Threading::CancellationToken*, ::System::Threading::Tasks::TaskCreationOptions*, ::System::Threading::Tasks::TaskScheduler*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKFACTORY_STARTNEW_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* FromAsync(Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg, ::System::Object* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(Il2CppObject*, Il2CppObject*, Il2CppObject*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKFACTORY_FROMASYNC_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* FromAsync(Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg, ::System::Object* arg, ::System::Threading::Tasks::TaskCreationOptions* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(Il2CppObject*, Il2CppObject*, Il2CppObject*, ::System::Object*, ::System::Threading::Tasks::TaskCreationOptions*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKFACTORY_FROMASYNC_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* FromAsync(Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg, ::System::Object* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKFACTORY_FROMASYNC_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* FromAsync(Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg, ::System::Object* arg, ::System::Threading::Tasks::TaskCreationOptions* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, ::System::Object*, ::System::Threading::Tasks::TaskCreationOptions*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKFACTORY_FROMASYNC_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void CheckFromAsyncOptions(::System::Threading::Tasks::TaskCreationOptions* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Threading::Tasks::TaskCreationOptions*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKFACTORY_CHECKFROMASYNCOPTIONS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* CommonCWAnyLogic(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKFACTORY_COMMONCWANYLOGIC_OFFSET))(arg, nullptr);
		}

		::System::Void CheckMultiTaskContinuationOptions(::System::Threading::Tasks::TaskContinuationOptions* arg)
		{
			((::System::Void(*)(::System::Threading::Tasks::TaskContinuationOptions*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKFACTORY_CHECKMULTITASKCONTINUATIONOPTIONS_OFFSET))(arg, nullptr);
		}

	};
}

