#pragma once
#include "../../../../unitysdk.h"

namespace Cysharp::Threading::Tasks { class UniTask; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_IASYNCONVALIDATEHANDLER_ONVALIDATEASYNC_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int IAsyncOnValidateHandler_TypeDefinitionIndex = 36083;

	class IAsyncOnValidateHandler : public Il2CppObject
	{
	public:
		::Cysharp::Threading::Tasks::UniTask* OnValidateAsync()
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_IASYNCONVALIDATEHANDLER_ONVALIDATEASYNC_OFFSET))(nullptr);
		}

	};
}

