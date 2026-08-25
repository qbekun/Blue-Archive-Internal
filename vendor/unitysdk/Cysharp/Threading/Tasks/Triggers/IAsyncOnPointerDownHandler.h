#pragma once
#include "../../../../unitysdk.h"

#define CYSHARP_THREADING_TASKS_TRIGGERS_IASYNCONPOINTERDOWNHANDLER_ONPOINTERDOWNASYNC_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int IAsyncOnPointerDownHandler_TypeDefinitionIndex = 36109;

	class IAsyncOnPointerDownHandler : public Il2CppObject
	{
	public:
		Il2CppObject* OnPointerDownAsync()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_IASYNCONPOINTERDOWNHANDLER_ONPOINTERDOWNASYNC_OFFSET))(nullptr);
		}

	};
}

