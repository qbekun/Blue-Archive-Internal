#pragma once
#include "../../../unitysdk.h"

namespace Cysharp::Threading::Tasks { class UniTaskStatus; }

#define CYSHARP_THREADING_TASKS_IUNITASKSOURCE_ONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x000000)
#define CYSHARP_THREADING_TASKS_IUNITASKSOURCE_UNSAFEGETSTATUS_OFFSET UNITYSDK_OFFSET(0x000000)
#define CYSHARP_THREADING_TASKS_IUNITASKSOURCE_GETSTATUS_OFFSET UNITYSDK_OFFSET(0x000000)
#define CYSHARP_THREADING_TASKS_IUNITASKSOURCE_GETRESULT_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int IUniTaskSource_TypeDefinitionIndex = 35851;

	class IUniTaskSource : public Il2CppObject
	{
	public:
		::System::Void OnCompleted(Il2CppObject* arg, ::System::Object* arg, ::System::Int16 arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Object*, ::System::Int16, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_IUNITASKSOURCE_ONCOMPLETED_OFFSET))(arg, arg, arg, nullptr);
		}

		::Cysharp::Threading::Tasks::UniTaskStatus* UnsafeGetStatus()
		{
			return (return (::Cysharp::Threading::Tasks::UniTaskStatus*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_IUNITASKSOURCE_UNSAFEGETSTATUS_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::UniTaskStatus* GetStatus(::System::Int16 arg)
		{
			return (return (::Cysharp::Threading::Tasks::UniTaskStatus*(*)(::System::Int16, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_IUNITASKSOURCE_GETSTATUS_OFFSET))(arg, nullptr);
		}

		::System::Void GetResult(::System::Int16 arg)
		{
			((::System::Void(*)(::System::Int16, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_IUNITASKSOURCE_GETRESULT_OFFSET))(arg, nullptr);
		}

	};
}

