#pragma once
#include "../../../../unitysdk.h"

#define CYSHARP_THREADING_TASKS_TRIGGERS_IASYNCONCANCELHANDLER_ONCANCELASYNC_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int IAsyncOnCancelHandler_TypeDefinitionIndex = 36093;

	class IAsyncOnCancelHandler : public Il2CppObject
	{
	public:
		Il2CppObject* OnCancelAsync()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_IASYNCONCANCELHANDLER_ONCANCELASYNC_OFFSET))(nullptr);
		}

	};
}

