#pragma once
#include "../../../unitysdk.h"

#define NPA_ASYNC_THREADSWITCH_NXPWAITFORSWITCHINGTOMAINTHREADAWAITABLE_GETAWAITER_OFFSET UNITYSDK_OFFSET(0x9CD3540)

namespace NPA::Async::ThreadSwitch
{
	inline static constexpr unsigned int NXPWaitForSwitchingToMainThreadAwaitable_TypeDefinitionIndex = 27433;

	class NXPWaitForSwitchingToMainThreadAwaitable : public Il2CppObject
	{
	public:
		Awaiter* GetAwaiter()
		{
			return (return (Awaiter*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_ASYNC_THREADSWITCH_NXPWAITFORSWITCHINGTOMAINTHREADAWAITABLE_GETAWAITER_OFFSET))(nullptr);
		}

	};
}

