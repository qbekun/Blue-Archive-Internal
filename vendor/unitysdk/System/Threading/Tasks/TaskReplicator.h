#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_THREADING_TASKS_TASKREPLICATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x93F1110)
#define SYSTEM_THREADING_TASKS_TASKREPLICATOR_RUN_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_THREADING_TASKS_TASKREPLICATOR_GENERATECOOPERATIVEMULTITASKINGTASKTIMEOUT_OFFSET UNITYSDK_OFFSET(0x93F11F0)

namespace System::Threading::Tasks
{
	inline static constexpr unsigned int TaskReplicator_TypeDefinitionIndex = 24165;

	class TaskReplicator : public Il2CppObject
	{
	public:
		::System::Threading::Tasks::TaskScheduler* _scheduler; // 0x10
		::System::Boolean _stopOnFirstFailure; // 0x18
		Il2CppObject* _pendingReplicas; // 0x20
		Il2CppObject* _exceptions; // 0x28
		::System::Boolean _stopReplicating; // 0x30

		::System::Void .ctor(::System::Threading::Tasks::ParallelOptions* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Threading::Tasks::ParallelOptions*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKREPLICATOR_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Run(Il2CppObject* arg, ::System::Threading::Tasks::ParallelOptions* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Threading::Tasks::ParallelOptions*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKREPLICATOR_RUN_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 GenerateCooperativeMultitaskingTaskTimeout()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKREPLICATOR_GENERATECOOPERATIVEMULTITASKINGTASKTIMEOUT_OFFSET))(nullptr);
		}

	};
}

