#pragma once
#include "../../../../unitysdk.h"

namespace Cysharp::Threading::Tasks { class UniTask; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_IASYNCONRECTTRANSFORMDIMENSIONSCHANGEHANDLER_ONRECTTRANSFORMDIMENSIONSCHANGEASYNC_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int IAsyncOnRectTransformDimensionsChangeHandler_TypeDefinitionIndex = 36057;

	class IAsyncOnRectTransformDimensionsChangeHandler : public Il2CppObject
	{
	public:
		::Cysharp::Threading::Tasks::UniTask* OnRectTransformDimensionsChangeAsync()
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_IASYNCONRECTTRANSFORMDIMENSIONSCHANGEHANDLER_ONRECTTRANSFORMDIMENSIONSCHANGEASYNC_OFFSET))(nullptr);
		}

	};
}

