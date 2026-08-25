#pragma once
#include "../../../../unitysdk.h"

#define CYSHARP_THREADING_TASKS_TRIGGERS_IASYNCONCOLLISIONENTERHANDLER_ONCOLLISIONENTERASYNC_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int IAsyncOnCollisionEnterHandler_TypeDefinitionIndex = 36001;

	class IAsyncOnCollisionEnterHandler : public Il2CppObject
	{
	public:
		Il2CppObject* OnCollisionEnterAsync()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_IASYNCONCOLLISIONENTERHANDLER_ONCOLLISIONENTERASYNC_OFFSET))(nullptr);
		}

	};
}

