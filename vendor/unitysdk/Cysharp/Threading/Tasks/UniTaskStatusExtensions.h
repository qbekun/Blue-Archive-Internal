#pragma once
#include "../../../unitysdk.h"

namespace Cysharp::Threading::Tasks { class UniTaskStatus; }

#define CYSHARP_THREADING_TASKS_UNITASKSTATUSEXTENSIONS_ISCOMPLETEDSUCCESSFULLY_OFFSET UNITYSDK_OFFSET(0x9DD1F00)
#define CYSHARP_THREADING_TASKS_UNITASKSTATUSEXTENSIONS_ISCOMPLETED_OFFSET UNITYSDK_OFFSET(0x9DD1F10)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTaskStatusExtensions_TypeDefinitionIndex = 35853;

	class UniTaskStatusExtensions : public Il2CppObject
	{
	public:
		::System::Boolean IsCompletedSuccessfully(::Cysharp::Threading::Tasks::UniTaskStatus* arg)
		{
			return (return (::System::Boolean(*)(::Cysharp::Threading::Tasks::UniTaskStatus*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKSTATUSEXTENSIONS_ISCOMPLETEDSUCCESSFULLY_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsCompleted(::Cysharp::Threading::Tasks::UniTaskStatus* arg)
		{
			return (return (::System::Boolean(*)(::Cysharp::Threading::Tasks::UniTaskStatus*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKSTATUSEXTENSIONS_ISCOMPLETED_OFFSET))(arg, nullptr);
		}

	};
}

