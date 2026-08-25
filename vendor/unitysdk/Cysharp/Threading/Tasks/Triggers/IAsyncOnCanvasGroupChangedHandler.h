#pragma once
#include "../../../../unitysdk.h"

namespace Cysharp::Threading::Tasks { class UniTask; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_IASYNCONCANVASGROUPCHANGEDHANDLER_ONCANVASGROUPCHANGEDASYNC_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int IAsyncOnCanvasGroupChangedHandler_TypeDefinitionIndex = 35999;

	class IAsyncOnCanvasGroupChangedHandler : public Il2CppObject
	{
	public:
		::Cysharp::Threading::Tasks::UniTask* OnCanvasGroupChangedAsync()
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_IASYNCONCANVASGROUPCHANGEDHANDLER_ONCANVASGROUPCHANGEDASYNC_OFFSET))(nullptr);
		}

	};
}

