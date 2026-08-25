#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_THREADING_TASKS_TASKTOAPM_BEGIN_OFFSET UNITYSDK_OFFSET(0x93EDE80)
#define SYSTEM_THREADING_TASKS_TASKTOAPM_END_OFFSET UNITYSDK_OFFSET(0x93EE190)
#define SYSTEM_THREADING_TASKS_TASKTOAPM_END_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_THREADING_TASKS_TASKTOAPM_INVOKECALLBACKWHENTASKCOMPLETES_OFFSET UNITYSDK_OFFSET(0x93EE080)

namespace System::Threading::Tasks
{
	inline static constexpr unsigned int TaskToApm_TypeDefinitionIndex = 24137;

	class TaskToApm : public Il2CppObject
	{
	public:
		::System::IAsyncResult* Begin(::System::Threading::Tasks::Task* arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::System::Threading::Tasks::Task*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKTOAPM_BEGIN_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void End(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKTOAPM_END_OFFSET))(arg, nullptr);
		}

		Il2CppObject* End(::System::IAsyncResult* arg)
		{
			return (return (Il2CppObject*(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKTOAPM_END_OFFSET))(arg, nullptr);
		}

		::System::Void InvokeCallbackWhenTaskCompletes(::System::Threading::Tasks::Task* arg, ::System::AsyncCallback* arg, ::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::Threading::Tasks::Task*, ::System::AsyncCallback*, ::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKTOAPM_INVOKECALLBACKWHENTASKCOMPLETES_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

