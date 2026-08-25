#pragma once
#include "../../../../unitysdk.h"

#define CYSHARP_THREADING_TASKS_TRIGGERS_IASYNCONUPDATESELECTEDHANDLER_ONUPDATESELECTEDASYNC_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int IAsyncOnUpdateSelectedHandler_TypeDefinitionIndex = 36123;

	class IAsyncOnUpdateSelectedHandler : public Il2CppObject
	{
	public:
		Il2CppObject* OnUpdateSelectedAsync()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_IASYNCONUPDATESELECTEDHANDLER_ONUPDATESELECTEDASYNC_OFFSET))(nullptr);
		}

	};
}

