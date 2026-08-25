#pragma once
#include "../../../unitysdk.h"

#define CYSHARP_THREADING_TASKS_UNITASKSYNCHRONIZATIONCONTEXT_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9DE1A00)
#define CYSHARP_THREADING_TASKS_UNITASKSYNCHRONIZATIONCONTEXT_RUN_OFFSET UNITYSDK_OFFSET(0x9DE1B10)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTaskSynchronizationContext_TypeDefinitionIndex = 35964;

	class UniTaskSynchronizationContext : public Il2CppObject
	{
	public:
		::System::Threading::SpinLock* gate; // 0x0
		::System::Boolean dequing; // 0x4
		::System::Int32 actionListCount; // 0x8
		::Il2CppArray<::System::Object*>* actionList; // 0x10
		::System::Int32 waitingListCount; // 0x18
		::Il2CppArray<::System::Object*>* waitingList; // 0x20

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKSYNCHRONIZATIONCONTEXT_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Run()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKSYNCHRONIZATIONCONTEXT_RUN_OFFSET))(nullptr);
		}

	};
}

