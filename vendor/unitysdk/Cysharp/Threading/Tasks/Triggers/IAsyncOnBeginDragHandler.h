#pragma once
#include "../../../../unitysdk.h"

#define CYSHARP_THREADING_TASKS_TRIGGERS_IASYNCONBEGINDRAGHANDLER_ONBEGINDRAGASYNC_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int IAsyncOnBeginDragHandler_TypeDefinitionIndex = 36091;

	class IAsyncOnBeginDragHandler : public Il2CppObject
	{
	public:
		Il2CppObject* OnBeginDragAsync()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_IASYNCONBEGINDRAGHANDLER_ONBEGINDRAGASYNC_OFFSET))(nullptr);
		}

	};
}

