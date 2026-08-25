#pragma once
#include "../../../../unitysdk.h"

namespace Cysharp::Threading::Tasks { class UniTask; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_IASYNCFIXEDUPDATEHANDLER_FIXEDUPDATEASYNC_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int IAsyncFixedUpdateHandler_TypeDefinitionIndex = 35977;

	class IAsyncFixedUpdateHandler : public Il2CppObject
	{
	public:
		::Cysharp::Threading::Tasks::UniTask* FixedUpdateAsync()
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_IASYNCFIXEDUPDATEHANDLER_FIXEDUPDATEASYNC_OFFSET))(nullptr);
		}

	};
}

