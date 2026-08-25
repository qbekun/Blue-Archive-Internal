#pragma once
#include "../../../../unitysdk.h"

namespace Cysharp::Threading::Tasks { class UniTask; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_IASYNCONENABLEHANDLER_ONENABLEASYNC_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int IAsyncOnEnableHandler_TypeDefinitionIndex = 36021;

	class IAsyncOnEnableHandler : public Il2CppObject
	{
	public:
		::Cysharp::Threading::Tasks::UniTask* OnEnableAsync()
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_IASYNCONENABLEHANDLER_ONENABLEASYNC_OFFSET))(nullptr);
		}

	};
}

