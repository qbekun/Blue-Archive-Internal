#pragma once
#include "../../../../unitysdk.h"

namespace Cysharp::Threading::Tasks { class UniTask; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_IASYNCONWILLRENDEROBJECTHANDLER_ONWILLRENDEROBJECTASYNC_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int IAsyncOnWillRenderObjectHandler_TypeDefinitionIndex = 36085;

	class IAsyncOnWillRenderObjectHandler : public Il2CppObject
	{
	public:
		::Cysharp::Threading::Tasks::UniTask* OnWillRenderObjectAsync()
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_IASYNCONWILLRENDEROBJECTHANDLER_ONWILLRENDEROBJECTASYNC_OFFSET))(nullptr);
		}

	};
}

