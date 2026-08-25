#pragma once
#include "../../../../unitysdk.h"

#define CYSHARP_THREADING_TASKS_TRIGGERS_IASYNCONPOINTERENTERHANDLER_ONPOINTERENTERASYNC_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int IAsyncOnPointerEnterHandler_TypeDefinitionIndex = 36111;

	class IAsyncOnPointerEnterHandler : public Il2CppObject
	{
	public:
		Il2CppObject* OnPointerEnterAsync()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_IASYNCONPOINTERENTERHANDLER_ONPOINTERENTERASYNC_OFFSET))(nullptr);
		}

	};
}

