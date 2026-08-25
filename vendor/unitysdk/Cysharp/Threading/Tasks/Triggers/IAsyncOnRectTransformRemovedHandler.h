#pragma once
#include "../../../../unitysdk.h"

namespace Cysharp::Threading::Tasks { class UniTask; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_IASYNCONRECTTRANSFORMREMOVEDHANDLER_ONRECTTRANSFORMREMOVEDASYNC_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int IAsyncOnRectTransformRemovedHandler_TypeDefinitionIndex = 36059;

	class IAsyncOnRectTransformRemovedHandler : public Il2CppObject
	{
	public:
		::Cysharp::Threading::Tasks::UniTask* OnRectTransformRemovedAsync()
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_IASYNCONRECTTRANSFORMREMOVEDHANDLER_ONRECTTRANSFORMREMOVEDASYNC_OFFSET))(nullptr);
		}

	};
}

