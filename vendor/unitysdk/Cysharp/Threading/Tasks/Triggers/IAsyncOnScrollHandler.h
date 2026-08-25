#pragma once
#include "../../../../unitysdk.h"

#define CYSHARP_THREADING_TASKS_TRIGGERS_IASYNCONSCROLLHANDLER_ONSCROLLASYNC_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int IAsyncOnScrollHandler_TypeDefinitionIndex = 36117;

	class IAsyncOnScrollHandler : public Il2CppObject
	{
	public:
		Il2CppObject* OnScrollAsync()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_IASYNCONSCROLLHANDLER_ONSCROLLASYNC_OFFSET))(nullptr);
		}

	};
}

