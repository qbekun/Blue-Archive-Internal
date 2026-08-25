#pragma once
#include "../../../../unitysdk.h"

namespace Cysharp::Threading::Tasks { class UniTask; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_IASYNCONSERVERINITIALIZEDHANDLER_ONSERVERINITIALIZEDASYNC_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int IAsyncOnServerInitializedHandler_TypeDefinitionIndex = 36065;

	class IAsyncOnServerInitializedHandler : public Il2CppObject
	{
	public:
		::Cysharp::Threading::Tasks::UniTask* OnServerInitializedAsync()
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_IASYNCONSERVERINITIALIZEDHANDLER_ONSERVERINITIALIZEDASYNC_OFFSET))(nullptr);
		}

	};
}

