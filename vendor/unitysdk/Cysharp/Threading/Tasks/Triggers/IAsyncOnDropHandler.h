#pragma once
#include "../../../../unitysdk.h"

#define CYSHARP_THREADING_TASKS_TRIGGERS_IASYNCONDROPHANDLER_ONDROPASYNC_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int IAsyncOnDropHandler_TypeDefinitionIndex = 36099;

	class IAsyncOnDropHandler : public Il2CppObject
	{
	public:
		Il2CppObject* OnDropAsync()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_IASYNCONDROPHANDLER_ONDROPASYNC_OFFSET))(nullptr);
		}

	};
}

