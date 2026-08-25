#pragma once
#include "../../../../unitysdk.h"

namespace Cysharp::Threading::Tasks { class UniTask; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_IASYNCONDISABLEHANDLER_ONDISABLEASYNC_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int IAsyncOnDisableHandler_TypeDefinitionIndex = 36015;

	class IAsyncOnDisableHandler : public Il2CppObject
	{
	public:
		::Cysharp::Threading::Tasks::UniTask* OnDisableAsync()
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_IASYNCONDISABLEHANDLER_ONDISABLEASYNC_OFFSET))(nullptr);
		}

	};
}

