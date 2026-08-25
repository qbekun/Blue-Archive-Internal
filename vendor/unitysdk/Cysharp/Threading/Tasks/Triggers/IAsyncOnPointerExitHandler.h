#pragma once
#include "../../../../unitysdk.h"

#define CYSHARP_THREADING_TASKS_TRIGGERS_IASYNCONPOINTEREXITHANDLER_ONPOINTEREXITASYNC_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int IAsyncOnPointerExitHandler_TypeDefinitionIndex = 36113;

	class IAsyncOnPointerExitHandler : public Il2CppObject
	{
	public:
		Il2CppObject* OnPointerExitAsync()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_IASYNCONPOINTEREXITHANDLER_ONPOINTEREXITASYNC_OFFSET))(nullptr);
		}

	};
}

