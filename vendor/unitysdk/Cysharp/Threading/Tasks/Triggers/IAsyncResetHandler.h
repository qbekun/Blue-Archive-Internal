#pragma once
#include "../../../../unitysdk.h"

namespace Cysharp::Threading::Tasks { class UniTask; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_IASYNCRESETHANDLER_RESETASYNC_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int IAsyncResetHandler_TypeDefinitionIndex = 36087;

	class IAsyncResetHandler : public Il2CppObject
	{
	public:
		::Cysharp::Threading::Tasks::UniTask* ResetAsync()
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_IASYNCRESETHANDLER_RESETASYNC_OFFSET))(nullptr);
		}

	};
}

