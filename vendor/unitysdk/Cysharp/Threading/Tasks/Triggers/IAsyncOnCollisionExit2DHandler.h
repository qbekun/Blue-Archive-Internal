#pragma once
#include "../../../../unitysdk.h"

#define CYSHARP_THREADING_TASKS_TRIGGERS_IASYNCONCOLLISIONEXIT2DHANDLER_ONCOLLISIONEXIT2DASYNC_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int IAsyncOnCollisionExit2DHandler_TypeDefinitionIndex = 36007;

	class IAsyncOnCollisionExit2DHandler : public Il2CppObject
	{
	public:
		Il2CppObject* OnCollisionExit2DAsync()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_IASYNCONCOLLISIONEXIT2DHANDLER_ONCOLLISIONEXIT2DASYNC_OFFSET))(nullptr);
		}

	};
}

