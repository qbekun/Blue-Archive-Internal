#pragma once
#include "../../../../unitysdk.h"

namespace Cysharp::Threading::Tasks { class UniTask; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_IASYNCONBECAMEINVISIBLEHANDLER_ONBECAMEINVISIBLEASYNC_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int IAsyncOnBecameInvisibleHandler_TypeDefinitionIndex = 35993;

	class IAsyncOnBecameInvisibleHandler : public Il2CppObject
	{
	public:
		::Cysharp::Threading::Tasks::UniTask* OnBecameInvisibleAsync()
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_IASYNCONBECAMEINVISIBLEHANDLER_ONBECAMEINVISIBLEASYNC_OFFSET))(nullptr);
		}

	};
}

