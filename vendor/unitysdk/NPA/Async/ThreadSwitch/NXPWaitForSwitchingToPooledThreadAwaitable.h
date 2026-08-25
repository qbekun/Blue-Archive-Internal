#pragma once
#include "../../../unitysdk.h"

#define NPA_ASYNC_THREADSWITCH_NXPWAITFORSWITCHINGTOPOOLEDTHREADAWAITABLE_GETAWAITER_OFFSET UNITYSDK_OFFSET(0x9CD3660)

namespace NPA::Async::ThreadSwitch
{
	inline static constexpr unsigned int NXPWaitForSwitchingToPooledThreadAwaitable_TypeDefinitionIndex = 27435;

	class NXPWaitForSwitchingToPooledThreadAwaitable : public Il2CppObject
	{
	public:
		Awaiter* GetAwaiter()
		{
			return (return (Awaiter*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_ASYNC_THREADSWITCH_NXPWAITFORSWITCHINGTOPOOLEDTHREADAWAITABLE_GETAWAITER_OFFSET))(nullptr);
		}

	};
}

