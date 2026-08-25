#pragma once
#include "../../../../unitysdk.h"

namespace Cysharp::Threading::Tasks { class UniTask; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_IASYNCONTRANSFORMPARENTCHANGEDHANDLER_ONTRANSFORMPARENTCHANGEDASYNC_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int IAsyncOnTransformParentChangedHandler_TypeDefinitionIndex = 36069;

	class IAsyncOnTransformParentChangedHandler : public Il2CppObject
	{
	public:
		::Cysharp::Threading::Tasks::UniTask* OnTransformParentChangedAsync()
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_IASYNCONTRANSFORMPARENTCHANGEDHANDLER_ONTRANSFORMPARENTCHANGEDASYNC_OFFSET))(nullptr);
		}

	};
}

