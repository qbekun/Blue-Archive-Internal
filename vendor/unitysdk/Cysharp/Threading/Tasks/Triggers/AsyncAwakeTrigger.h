#pragma once
#include "../../../../unitysdk.h"

namespace Cysharp::Threading::Tasks { class UniTask; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAWAKETRIGGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DE20B0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAWAKETRIGGER_AWAKEASYNC_OFFSET UNITYSDK_OFFSET(0x9DE20F0)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncAwakeTrigger_TypeDefinitionIndex = 35967;

	class AsyncAwakeTrigger : public ::FlatData::ResetContentType
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAWAKETRIGGER_.CTOR_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* AwakeAsync()
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAWAKETRIGGER_AWAKEASYNC_OFFSET))(nullptr);
		}

	};
}

