#pragma once
#include "../../../../unitysdk.h"

namespace Cysharp::Threading::Tasks { class UniTask; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_IASYNCONMOUSEDRAGHANDLER_ONMOUSEDRAGASYNC_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int IAsyncOnMouseDragHandler_TypeDefinitionIndex = 36031;

	class IAsyncOnMouseDragHandler : public Il2CppObject
	{
	public:
		::Cysharp::Threading::Tasks::UniTask* OnMouseDragAsync()
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_IASYNCONMOUSEDRAGHANDLER_ONMOUSEDRAGASYNC_OFFSET))(nullptr);
		}

	};
}

