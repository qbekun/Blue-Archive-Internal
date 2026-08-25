#pragma once
#include "../../../../unitysdk.h"

#define CYSHARP_THREADING_TASKS_TRIGGERS_IASYNCONSELECTHANDLER_ONSELECTASYNC_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int IAsyncOnSelectHandler_TypeDefinitionIndex = 36119;

	class IAsyncOnSelectHandler : public Il2CppObject
	{
	public:
		Il2CppObject* OnSelectAsync()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_IASYNCONSELECTHANDLER_ONSELECTASYNC_OFFSET))(nullptr);
		}

	};
}

