#pragma once
#include "../../../../unitysdk.h"

#define CYSHARP_THREADING_TASKS_TRIGGERS_IASYNCONCOLLISIONSTAY2DHANDLER_ONCOLLISIONSTAY2DASYNC_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int IAsyncOnCollisionStay2DHandler_TypeDefinitionIndex = 36011;

	class IAsyncOnCollisionStay2DHandler : public Il2CppObject
	{
	public:
		Il2CppObject* OnCollisionStay2DAsync()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_IASYNCONCOLLISIONSTAY2DHANDLER_ONCOLLISIONSTAY2DASYNC_OFFSET))(nullptr);
		}

	};
}

