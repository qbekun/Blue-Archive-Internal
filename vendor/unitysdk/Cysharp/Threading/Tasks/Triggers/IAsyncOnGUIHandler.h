#pragma once
#include "../../../../unitysdk.h"

namespace Cysharp::Threading::Tasks { class UniTask; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_IASYNCONGUIHANDLER_ONGUIASYNC_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int IAsyncOnGUIHandler_TypeDefinitionIndex = 36023;

	class IAsyncOnGUIHandler : public Il2CppObject
	{
	public:
		::Cysharp::Threading::Tasks::UniTask* OnGUIAsync()
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_IASYNCONGUIHANDLER_ONGUIASYNC_OFFSET))(nullptr);
		}

	};
}

