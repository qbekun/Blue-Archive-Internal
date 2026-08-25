#pragma once
#include "../../../../unitysdk.h"

namespace Cysharp::Threading::Tasks { class UniTask; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_IASYNCONMOUSEUPASBUTTONHANDLER_ONMOUSEUPASBUTTONASYNC_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int IAsyncOnMouseUpAsButtonHandler_TypeDefinitionIndex = 36041;

	class IAsyncOnMouseUpAsButtonHandler : public Il2CppObject
	{
	public:
		::Cysharp::Threading::Tasks::UniTask* OnMouseUpAsButtonAsync()
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_IASYNCONMOUSEUPASBUTTONHANDLER_ONMOUSEUPASBUTTONASYNC_OFFSET))(nullptr);
		}

	};
}

