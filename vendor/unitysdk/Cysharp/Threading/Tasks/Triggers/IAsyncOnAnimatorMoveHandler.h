#pragma once
#include "../../../../unitysdk.h"

namespace Cysharp::Threading::Tasks { class UniTask; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_IASYNCONANIMATORMOVEHANDLER_ONANIMATORMOVEASYNC_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int IAsyncOnAnimatorMoveHandler_TypeDefinitionIndex = 35983;

	class IAsyncOnAnimatorMoveHandler : public Il2CppObject
	{
	public:
		::Cysharp::Threading::Tasks::UniTask* OnAnimatorMoveAsync()
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_IASYNCONANIMATORMOVEHANDLER_ONANIMATORMOVEASYNC_OFFSET))(nullptr);
		}

	};
}

