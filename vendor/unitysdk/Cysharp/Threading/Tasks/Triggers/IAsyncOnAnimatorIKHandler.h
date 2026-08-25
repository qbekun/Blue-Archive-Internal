#pragma once
#include "../../../../unitysdk.h"

#define CYSHARP_THREADING_TASKS_TRIGGERS_IASYNCONANIMATORIKHANDLER_ONANIMATORIKASYNC_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int IAsyncOnAnimatorIKHandler_TypeDefinitionIndex = 35981;

	class IAsyncOnAnimatorIKHandler : public Il2CppObject
	{
	public:
		Il2CppObject* OnAnimatorIKAsync()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_IASYNCONANIMATORIKHANDLER_ONANIMATORIKASYNC_OFFSET))(nullptr);
		}

	};
}

