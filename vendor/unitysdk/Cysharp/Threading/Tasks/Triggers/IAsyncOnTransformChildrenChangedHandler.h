#pragma once
#include "../../../../unitysdk.h"

namespace Cysharp::Threading::Tasks { class UniTask; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_IASYNCONTRANSFORMCHILDRENCHANGEDHANDLER_ONTRANSFORMCHILDRENCHANGEDASYNC_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int IAsyncOnTransformChildrenChangedHandler_TypeDefinitionIndex = 36067;

	class IAsyncOnTransformChildrenChangedHandler : public Il2CppObject
	{
	public:
		::Cysharp::Threading::Tasks::UniTask* OnTransformChildrenChangedAsync()
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_IASYNCONTRANSFORMCHILDRENCHANGEDHANDLER_ONTRANSFORMCHILDRENCHANGEDASYNC_OFFSET))(nullptr);
		}

	};
}

