#pragma once
#include "../../../../unitysdk.h"

namespace Cysharp::Threading::Tasks { class UniTask; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_IASYNCONDRAWGIZMOSHANDLER_ONDRAWGIZMOSASYNC_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int IAsyncOnDrawGizmosHandler_TypeDefinitionIndex = 36017;

	class IAsyncOnDrawGizmosHandler : public Il2CppObject
	{
	public:
		::Cysharp::Threading::Tasks::UniTask* OnDrawGizmosAsync()
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_IASYNCONDRAWGIZMOSHANDLER_ONDRAWGIZMOSASYNC_OFFSET))(nullptr);
		}

	};
}

