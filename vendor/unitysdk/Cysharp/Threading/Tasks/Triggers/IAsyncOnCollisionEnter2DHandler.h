#pragma once
#include "../../../../unitysdk.h"

#define CYSHARP_THREADING_TASKS_TRIGGERS_IASYNCONCOLLISIONENTER2DHANDLER_ONCOLLISIONENTER2DASYNC_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int IAsyncOnCollisionEnter2DHandler_TypeDefinitionIndex = 36003;

	class IAsyncOnCollisionEnter2DHandler : public Il2CppObject
	{
	public:
		Il2CppObject* OnCollisionEnter2DAsync()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_IASYNCONCOLLISIONENTER2DHANDLER_ONCOLLISIONENTER2DASYNC_OFFSET))(nullptr);
		}

	};
}

