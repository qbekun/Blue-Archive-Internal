#pragma once
#include "../../../../unitysdk.h"

namespace Cysharp::Threading::Tasks { class UniTask; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_IASYNCONPRERENDERHANDLER_ONPRERENDERASYNC_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int IAsyncOnPreRenderHandler_TypeDefinitionIndex = 36055;

	class IAsyncOnPreRenderHandler : public Il2CppObject
	{
	public:
		::Cysharp::Threading::Tasks::UniTask* OnPreRenderAsync()
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_IASYNCONPRERENDERHANDLER_ONPRERENDERASYNC_OFFSET))(nullptr);
		}

	};
}

