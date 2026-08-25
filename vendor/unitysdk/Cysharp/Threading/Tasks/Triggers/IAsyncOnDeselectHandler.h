#pragma once
#include "../../../../unitysdk.h"

#define CYSHARP_THREADING_TASKS_TRIGGERS_IASYNCONDESELECTHANDLER_ONDESELECTASYNC_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int IAsyncOnDeselectHandler_TypeDefinitionIndex = 36095;

	class IAsyncOnDeselectHandler : public Il2CppObject
	{
	public:
		Il2CppObject* OnDeselectAsync()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_IASYNCONDESELECTHANDLER_ONDESELECTASYNC_OFFSET))(nullptr);
		}

	};
}

