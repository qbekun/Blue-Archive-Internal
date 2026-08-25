#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_THREADING_TASKS_ITASKCOMPLETIONACTION_INVOKE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_THREADING_TASKS_ITASKCOMPLETIONACTION_GET_INVOKEMAYRUNARBITRARYCODE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Threading::Tasks
{
	inline static constexpr unsigned int ITaskCompletionAction_TypeDefinitionIndex = 24187;

	class ITaskCompletionAction : public Il2CppObject
	{
	public:
		::System::Void Invoke(::System::Threading::Tasks::Task* arg)
		{
			((::System::Void(*)(::System::Threading::Tasks::Task*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_ITASKCOMPLETIONACTION_INVOKE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_InvokeMayRunArbitraryCode()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_ITASKCOMPLETIONACTION_GET_INVOKEMAYRUNARBITRARYCODE_OFFSET))(nullptr);
		}

	};
}

