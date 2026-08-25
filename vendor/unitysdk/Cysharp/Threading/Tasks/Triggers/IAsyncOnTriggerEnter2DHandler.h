#pragma once
#include "../../../../unitysdk.h"

#define CYSHARP_THREADING_TASKS_TRIGGERS_IASYNCONTRIGGERENTER2DHANDLER_ONTRIGGERENTER2DASYNC_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int IAsyncOnTriggerEnter2DHandler_TypeDefinitionIndex = 36073;

	class IAsyncOnTriggerEnter2DHandler : public Il2CppObject
	{
	public:
		Il2CppObject* OnTriggerEnter2DAsync()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_IASYNCONTRIGGERENTER2DHANDLER_ONTRIGGERENTER2DASYNC_OFFSET))(nullptr);
		}

	};
}

