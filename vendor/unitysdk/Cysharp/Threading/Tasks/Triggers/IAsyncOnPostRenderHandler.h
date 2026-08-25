#pragma once
#include "../../../../unitysdk.h"

namespace Cysharp::Threading::Tasks { class UniTask; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_IASYNCONPOSTRENDERHANDLER_ONPOSTRENDERASYNC_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int IAsyncOnPostRenderHandler_TypeDefinitionIndex = 36051;

	class IAsyncOnPostRenderHandler : public Il2CppObject
	{
	public:
		::Cysharp::Threading::Tasks::UniTask* OnPostRenderAsync()
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_IASYNCONPOSTRENDERHANDLER_ONPOSTRENDERASYNC_OFFSET))(nullptr);
		}

	};
}

