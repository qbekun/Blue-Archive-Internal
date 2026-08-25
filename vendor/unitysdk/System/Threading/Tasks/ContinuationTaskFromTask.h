#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_THREADING_TASKS_CONTINUATIONTASKFROMTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x93F95B0)
#define SYSTEM_THREADING_TASKS_CONTINUATIONTASKFROMTASK_INNERINVOKE_OFFSET UNITYSDK_OFFSET(0x93FC120)

namespace System::Threading::Tasks
{
	inline static constexpr unsigned int ContinuationTaskFromTask_TypeDefinitionIndex = 24190;

	class ContinuationTaskFromTask : public Il2CppObject
	{
	public:
		::System::Threading::Tasks::Task* m_antecedent; // 0x50

		::System::Void .ctor(::System::Threading::Tasks::Task* arg, ::System::Delegate* arg, ::System::Object* arg, ::System::Threading::Tasks::TaskCreationOptions* arg, ::System::Threading::Tasks::InternalTaskOptions* arg)
		{
			((::System::Void(*)(::System::Threading::Tasks::Task*, ::System::Delegate*, ::System::Object*, ::System::Threading::Tasks::TaskCreationOptions*, ::System::Threading::Tasks::InternalTaskOptions*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_CONTINUATIONTASKFROMTASK_.CTOR_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void InnerInvoke()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_CONTINUATIONTASKFROMTASK_INNERINVOKE_OFFSET))(nullptr);
		}

	};
}

