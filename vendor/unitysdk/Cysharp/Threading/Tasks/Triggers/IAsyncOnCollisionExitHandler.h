#pragma once
#include "../../../../unitysdk.h"

#define CYSHARP_THREADING_TASKS_TRIGGERS_IASYNCONCOLLISIONEXITHANDLER_ONCOLLISIONEXITASYNC_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int IAsyncOnCollisionExitHandler_TypeDefinitionIndex = 36005;

	class IAsyncOnCollisionExitHandler : public Il2CppObject
	{
	public:
		Il2CppObject* OnCollisionExitAsync()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_IASYNCONCOLLISIONEXITHANDLER_ONCOLLISIONEXITASYNC_OFFSET))(nullptr);
		}

	};
}

