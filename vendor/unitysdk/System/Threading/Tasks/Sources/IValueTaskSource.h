#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_THREADING_TASKS_SOURCES_IVALUETASKSOURCE_GETSTATUS_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_THREADING_TASKS_SOURCES_IVALUETASKSOURCE_ONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_THREADING_TASKS_SOURCES_IVALUETASKSOURCE_GETRESULT_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Threading::Tasks::Sources
{
	inline static constexpr unsigned int IValueTaskSource_TypeDefinitionIndex = 24217;

	class IValueTaskSource : public Il2CppObject
	{
	public:
		::System::Threading::Tasks::Sources::ValueTaskSourceStatus* GetStatus(::System::Int16 arg)
		{
			return (return (::System::Threading::Tasks::Sources::ValueTaskSourceStatus*(*)(::System::Int16, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_SOURCES_IVALUETASKSOURCE_GETSTATUS_OFFSET))(arg, nullptr);
		}

		::System::Void OnCompleted(Il2CppObject* arg, ::System::Object* arg, ::System::Int16 arg, ::System::Threading::Tasks::Sources::ValueTaskSourceOnCompletedFlags* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Object*, ::System::Int16, ::System::Threading::Tasks::Sources::ValueTaskSourceOnCompletedFlags*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_SOURCES_IVALUETASKSOURCE_ONCOMPLETED_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void GetResult(::System::Int16 arg)
		{
			((::System::Void(*)(::System::Int16, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_SOURCES_IVALUETASKSOURCE_GETRESULT_OFFSET))(arg, nullptr);
		}

	};
}

