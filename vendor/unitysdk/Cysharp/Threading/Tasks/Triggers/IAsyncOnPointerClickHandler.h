#pragma once
#include "../../../../unitysdk.h"

#define CYSHARP_THREADING_TASKS_TRIGGERS_IASYNCONPOINTERCLICKHANDLER_ONPOINTERCLICKASYNC_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int IAsyncOnPointerClickHandler_TypeDefinitionIndex = 36107;

	class IAsyncOnPointerClickHandler : public Il2CppObject
	{
	public:
		Il2CppObject* OnPointerClickAsync()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_IASYNCONPOINTERCLICKHANDLER_ONPOINTERCLICKASYNC_OFFSET))(nullptr);
		}

	};
}

