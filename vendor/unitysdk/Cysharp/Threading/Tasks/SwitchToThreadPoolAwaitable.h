#pragma once
#include "../../../unitysdk.h"

#define CYSHARP_THREADING_TASKS_SWITCHTOTHREADPOOLAWAITABLE_GETAWAITER_OFFSET UNITYSDK_OFFSET(0x9DDE580)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int SwitchToThreadPoolAwaitable_TypeDefinitionIndex = 35943;

	class SwitchToThreadPoolAwaitable : public Il2CppObject
	{
	public:
		Awaiter* GetAwaiter()
		{
			return (return (Awaiter*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_SWITCHTOTHREADPOOLAWAITABLE_GETAWAITER_OFFSET))(nullptr);
		}

	};
}

