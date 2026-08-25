#pragma once
#include "../../../../unitysdk.h"

#define CYSHARP_THREADING_TASKS_TRIGGERS_IASYNCONCOLLISIONSTAYHANDLER_ONCOLLISIONSTAYASYNC_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int IAsyncOnCollisionStayHandler_TypeDefinitionIndex = 36009;

	class IAsyncOnCollisionStayHandler : public Il2CppObject
	{
	public:
		Il2CppObject* OnCollisionStayAsync()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_IASYNCONCOLLISIONSTAYHANDLER_ONCOLLISIONSTAYASYNC_OFFSET))(nullptr);
		}

	};
}

