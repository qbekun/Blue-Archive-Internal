#pragma once
#include "../../../../unitysdk.h"

#define CYSHARP_THREADING_TASKS_TRIGGERS_IASYNCONINITIALIZEPOTENTIALDRAGHANDLER_ONINITIALIZEPOTENTIALDRAGASYNC_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int IAsyncOnInitializePotentialDragHandler_TypeDefinitionIndex = 36103;

	class IAsyncOnInitializePotentialDragHandler : public Il2CppObject
	{
	public:
		Il2CppObject* OnInitializePotentialDragAsync()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_IASYNCONINITIALIZEPOTENTIALDRAGHANDLER_ONINITIALIZEPOTENTIALDRAGASYNC_OFFSET))(nullptr);
		}

	};
}

