#pragma once
#include "../../../unitysdk.h"

namespace Cysharp::Threading::Tasks { class UniTaskStatus; }

#define CYSHARP_THREADING_TASKS_MOVENEXTSOURCE_GETRESULT_OFFSET UNITYSDK_OFFSET(0x9DD1F20)
#define CYSHARP_THREADING_TASKS_MOVENEXTSOURCE_GETSTATUS_OFFSET UNITYSDK_OFFSET(0x9DD1F70)
#define CYSHARP_THREADING_TASKS_MOVENEXTSOURCE_ONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x9DD1FC0)
#define CYSHARP_THREADING_TASKS_MOVENEXTSOURCE_UNSAFEGETSTATUS_OFFSET UNITYSDK_OFFSET(0x9DD2020)
#define CYSHARP_THREADING_TASKS_MOVENEXTSOURCE_CYSHARP.THREADING.TASKS.IUNITASKSOURCE.GETRESULT_OFFSET UNITYSDK_OFFSET(0x9DD20F0)
#define CYSHARP_THREADING_TASKS_MOVENEXTSOURCE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DD2140)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int MoveNextSource_TypeDefinitionIndex = 35854;

	class MoveNextSource : public Il2CppObject
	{
	public:
		Il2CppObject* completionSource; // 0x10

		::System::Boolean GetResult(::System::Int16 arg)
		{
			return (return (::System::Boolean(*)(::System::Int16, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_MOVENEXTSOURCE_GETRESULT_OFFSET))(arg, nullptr);
		}

		::Cysharp::Threading::Tasks::UniTaskStatus* GetStatus(::System::Int16 arg)
		{
			return (return (::Cysharp::Threading::Tasks::UniTaskStatus*(*)(::System::Int16, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_MOVENEXTSOURCE_GETSTATUS_OFFSET))(arg, nullptr);
		}

		::System::Void OnCompleted(Il2CppObject* arg, ::System::Object* arg, ::System::Int16 arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Object*, ::System::Int16, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_MOVENEXTSOURCE_ONCOMPLETED_OFFSET))(arg, arg, arg, nullptr);
		}

		::Cysharp::Threading::Tasks::UniTaskStatus* UnsafeGetStatus()
		{
			return (return (::Cysharp::Threading::Tasks::UniTaskStatus*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_MOVENEXTSOURCE_UNSAFEGETSTATUS_OFFSET))(nullptr);
		}

		::System::Void Cysharp.Threading.Tasks.IUniTaskSource.GetResult(::System::Int16 arg)
		{
			((::System::Void(*)(::System::Int16, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_MOVENEXTSOURCE_CYSHARP.THREADING.TASKS.IUNITASKSOURCE.GETRESULT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_MOVENEXTSOURCE_.CTOR_OFFSET))(nullptr);
		}

	};
}

