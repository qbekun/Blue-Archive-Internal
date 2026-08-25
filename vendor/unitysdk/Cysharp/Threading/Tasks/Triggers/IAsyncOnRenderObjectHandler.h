#pragma once
#include "../../../../unitysdk.h"

namespace Cysharp::Threading::Tasks { class UniTask; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_IASYNCONRENDEROBJECTHANDLER_ONRENDEROBJECTASYNC_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int IAsyncOnRenderObjectHandler_TypeDefinitionIndex = 36063;

	class IAsyncOnRenderObjectHandler : public Il2CppObject
	{
	public:
		::Cysharp::Threading::Tasks::UniTask* OnRenderObjectAsync()
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_IASYNCONRENDEROBJECTHANDLER_ONRENDEROBJECTASYNC_OFFSET))(nullptr);
		}

	};
}

