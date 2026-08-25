#pragma once
#include "../../../../unitysdk.h"

namespace Cysharp::Threading::Tasks { class UniTask; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_IASYNCONDRAWGIZMOSSELECTEDHANDLER_ONDRAWGIZMOSSELECTEDASYNC_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int IAsyncOnDrawGizmosSelectedHandler_TypeDefinitionIndex = 36019;

	class IAsyncOnDrawGizmosSelectedHandler : public Il2CppObject
	{
	public:
		::Cysharp::Threading::Tasks::UniTask* OnDrawGizmosSelectedAsync()
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_IASYNCONDRAWGIZMOSSELECTEDHANDLER_ONDRAWGIZMOSSELECTEDASYNC_OFFSET))(nullptr);
		}

	};
}

