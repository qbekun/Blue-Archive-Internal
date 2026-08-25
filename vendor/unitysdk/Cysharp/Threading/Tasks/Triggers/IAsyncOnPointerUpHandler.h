#pragma once
#include "../../../../unitysdk.h"

#define CYSHARP_THREADING_TASKS_TRIGGERS_IASYNCONPOINTERUPHANDLER_ONPOINTERUPASYNC_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int IAsyncOnPointerUpHandler_TypeDefinitionIndex = 36115;

	class IAsyncOnPointerUpHandler : public Il2CppObject
	{
	public:
		Il2CppObject* OnPointerUpAsync()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_IASYNCONPOINTERUPHANDLER_ONPOINTERUPASYNC_OFFSET))(nullptr);
		}

	};
}

