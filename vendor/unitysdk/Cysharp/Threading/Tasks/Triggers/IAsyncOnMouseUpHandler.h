#pragma once
#include "../../../../unitysdk.h"

namespace Cysharp::Threading::Tasks { class UniTask; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_IASYNCONMOUSEUPHANDLER_ONMOUSEUPASYNC_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int IAsyncOnMouseUpHandler_TypeDefinitionIndex = 36039;

	class IAsyncOnMouseUpHandler : public Il2CppObject
	{
	public:
		::Cysharp::Threading::Tasks::UniTask* OnMouseUpAsync()
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_IASYNCONMOUSEUPHANDLER_ONMOUSEUPASYNC_OFFSET))(nullptr);
		}

	};
}

