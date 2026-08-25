#pragma once
#include "../../../../unitysdk.h"

namespace Cysharp::Threading::Tasks { class UniTask; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCSTARTTRIGGER_START_OFFSET UNITYSDK_OFFSET(0x9DE2670)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCSTARTTRIGGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DE26D0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCSTARTTRIGGER_STARTASYNC_OFFSET UNITYSDK_OFFSET(0x9DE2710)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncStartTrigger_TypeDefinitionIndex = 35971;

	class AsyncStartTrigger : public ::FlatData::ResetContentType
	{
	public:
		::System::Boolean called; // 0x38

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCSTARTTRIGGER_START_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCSTARTTRIGGER_.CTOR_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* StartAsync()
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCSTARTTRIGGER_STARTASYNC_OFFSET))(nullptr);
		}

	};
}

