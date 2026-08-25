#pragma once
#include "../../../../unitysdk.h"

namespace Cysharp::Threading::Tasks { class UniTask; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_IASYNCONPRECULLHANDLER_ONPRECULLASYNC_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int IAsyncOnPreCullHandler_TypeDefinitionIndex = 36053;

	class IAsyncOnPreCullHandler : public Il2CppObject
	{
	public:
		::Cysharp::Threading::Tasks::UniTask* OnPreCullAsync()
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_IASYNCONPRECULLHANDLER_ONPRECULLASYNC_OFFSET))(nullptr);
		}

	};
}

