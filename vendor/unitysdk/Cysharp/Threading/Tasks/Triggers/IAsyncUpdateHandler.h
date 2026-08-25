#pragma once
#include "../../../../unitysdk.h"

namespace Cysharp::Threading::Tasks { class UniTask; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_IASYNCUPDATEHANDLER_UPDATEASYNC_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int IAsyncUpdateHandler_TypeDefinitionIndex = 36089;

	class IAsyncUpdateHandler : public Il2CppObject
	{
	public:
		::Cysharp::Threading::Tasks::UniTask* UpdateAsync()
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_IASYNCUPDATEHANDLER_UPDATEASYNC_OFFSET))(nullptr);
		}

	};
}

