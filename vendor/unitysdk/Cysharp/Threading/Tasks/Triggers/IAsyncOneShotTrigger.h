#pragma once
#include "../../../../unitysdk.h"

namespace Cysharp::Threading::Tasks { class UniTask; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_IASYNCONESHOTTRIGGER_ONESHOTASYNC_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int IAsyncOneShotTrigger_TypeDefinitionIndex = 35975;

	class IAsyncOneShotTrigger : public Il2CppObject
	{
	public:
		::Cysharp::Threading::Tasks::UniTask* OneShotAsync()
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_IASYNCONESHOTTRIGGER_ONESHOTASYNC_OFFSET))(nullptr);
		}

	};
}

