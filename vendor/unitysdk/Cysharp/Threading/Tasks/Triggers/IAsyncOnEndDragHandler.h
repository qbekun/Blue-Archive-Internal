#pragma once
#include "../../../../unitysdk.h"

#define CYSHARP_THREADING_TASKS_TRIGGERS_IASYNCONENDDRAGHANDLER_ONENDDRAGASYNC_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int IAsyncOnEndDragHandler_TypeDefinitionIndex = 36101;

	class IAsyncOnEndDragHandler : public Il2CppObject
	{
	public:
		Il2CppObject* OnEndDragAsync()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_IASYNCONENDDRAGHANDLER_ONENDDRAGASYNC_OFFSET))(nullptr);
		}

	};
}

