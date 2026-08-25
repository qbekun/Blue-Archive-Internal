#pragma once
#include "../../../unitysdk.h"

#define NPA_ASYNC_THREADSWITCH_NXPWAITFORSWITCHINGTOTASKAWAITABLE_GETAWAITER_OFFSET UNITYSDK_OFFSET(0x9CD3850)

namespace NPA::Async::ThreadSwitch
{
	inline static constexpr unsigned int NXPWaitForSwitchingToTaskAwaitable_TypeDefinitionIndex = 27437;

	class NXPWaitForSwitchingToTaskAwaitable : public Il2CppObject
	{
	public:
		Awaiter* GetAwaiter()
		{
			return (return (Awaiter*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_ASYNC_THREADSWITCH_NXPWAITFORSWITCHINGTOTASKAWAITABLE_GETAWAITER_OFFSET))(nullptr);
		}

	};
}

