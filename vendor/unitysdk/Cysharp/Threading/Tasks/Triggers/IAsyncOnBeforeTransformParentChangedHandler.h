#pragma once
#include "../../../../unitysdk.h"

namespace Cysharp::Threading::Tasks { class UniTask; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_IASYNCONBEFORETRANSFORMPARENTCHANGEDHANDLER_ONBEFORETRANSFORMPARENTCHANGEDASYNC_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int IAsyncOnBeforeTransformParentChangedHandler_TypeDefinitionIndex = 35997;

	class IAsyncOnBeforeTransformParentChangedHandler : public Il2CppObject
	{
	public:
		::Cysharp::Threading::Tasks::UniTask* OnBeforeTransformParentChangedAsync()
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_IASYNCONBEFORETRANSFORMPARENTCHANGEDHANDLER_ONBEFORETRANSFORMPARENTCHANGEDASYNC_OFFSET))(nullptr);
		}

	};
}

