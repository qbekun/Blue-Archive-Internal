#pragma once
#include "../../../../unitysdk.h"

namespace Cysharp::Threading::Tasks { class UniTask; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_IASYNCONMOUSEENTERHANDLER_ONMOUSEENTERASYNC_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int IAsyncOnMouseEnterHandler_TypeDefinitionIndex = 36033;

	class IAsyncOnMouseEnterHandler : public Il2CppObject
	{
	public:
		::Cysharp::Threading::Tasks::UniTask* OnMouseEnterAsync()
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_IASYNCONMOUSEENTERHANDLER_ONMOUSEENTERASYNC_OFFSET))(nullptr);
		}

	};
}

