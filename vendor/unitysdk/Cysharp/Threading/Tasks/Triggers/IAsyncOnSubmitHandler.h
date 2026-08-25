#pragma once
#include "../../../../unitysdk.h"

#define CYSHARP_THREADING_TASKS_TRIGGERS_IASYNCONSUBMITHANDLER_ONSUBMITASYNC_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int IAsyncOnSubmitHandler_TypeDefinitionIndex = 36121;

	class IAsyncOnSubmitHandler : public Il2CppObject
	{
	public:
		Il2CppObject* OnSubmitAsync()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_IASYNCONSUBMITHANDLER_ONSUBMITASYNC_OFFSET))(nullptr);
		}

	};
}

