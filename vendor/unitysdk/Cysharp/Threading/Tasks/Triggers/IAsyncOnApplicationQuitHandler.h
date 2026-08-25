#pragma once
#include "../../../../unitysdk.h"

namespace Cysharp::Threading::Tasks { class UniTask; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_IASYNCONAPPLICATIONQUITHANDLER_ONAPPLICATIONQUITASYNC_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int IAsyncOnApplicationQuitHandler_TypeDefinitionIndex = 35989;

	class IAsyncOnApplicationQuitHandler : public Il2CppObject
	{
	public:
		::Cysharp::Threading::Tasks::UniTask* OnApplicationQuitAsync()
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_IASYNCONAPPLICATIONQUITHANDLER_ONAPPLICATIONQUITASYNC_OFFSET))(nullptr);
		}

	};
}

