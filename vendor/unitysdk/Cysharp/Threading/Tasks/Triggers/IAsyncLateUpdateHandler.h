#pragma once
#include "../../../../unitysdk.h"

namespace Cysharp::Threading::Tasks { class UniTask; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_IASYNCLATEUPDATEHANDLER_LATEUPDATEASYNC_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int IAsyncLateUpdateHandler_TypeDefinitionIndex = 35979;

	class IAsyncLateUpdateHandler : public Il2CppObject
	{
	public:
		::Cysharp::Threading::Tasks::UniTask* LateUpdateAsync()
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_IASYNCLATEUPDATEHANDLER_LATEUPDATEASYNC_OFFSET))(nullptr);
		}

	};
}

