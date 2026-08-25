#pragma once
#include "../../../../unitysdk.h"

namespace Cysharp::Threading::Tasks { class UniTask; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_IASYNCONMOUSEEXITHANDLER_ONMOUSEEXITASYNC_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int IAsyncOnMouseExitHandler_TypeDefinitionIndex = 36035;

	class IAsyncOnMouseExitHandler : public Il2CppObject
	{
	public:
		::Cysharp::Threading::Tasks::UniTask* OnMouseExitAsync()
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_IASYNCONMOUSEEXITHANDLER_ONMOUSEEXITASYNC_OFFSET))(nullptr);
		}

	};
}

