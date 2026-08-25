#pragma once
#include "../../../../unitysdk.h"

namespace Cysharp::Threading::Tasks { class UniTask; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_IASYNCONBECAMEVISIBLEHANDLER_ONBECAMEVISIBLEASYNC_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int IAsyncOnBecameVisibleHandler_TypeDefinitionIndex = 35995;

	class IAsyncOnBecameVisibleHandler : public Il2CppObject
	{
	public:
		::Cysharp::Threading::Tasks::UniTask* OnBecameVisibleAsync()
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_IASYNCONBECAMEVISIBLEHANDLER_ONBECAMEVISIBLEASYNC_OFFSET))(nullptr);
		}

	};
}

