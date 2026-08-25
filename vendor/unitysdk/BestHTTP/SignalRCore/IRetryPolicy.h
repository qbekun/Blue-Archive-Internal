#pragma once
#include "../../unitysdk.h"

namespace BestHTTP::SignalRCore { class RetryContext; }

#define BESTHTTP_SIGNALRCORE_IRETRYPOLICY_GETNEXTRETRYDELAY_OFFSET UNITYSDK_OFFSET(0x000000)

namespace BestHTTP::SignalRCore
{
	inline static constexpr unsigned int IRetryPolicy_TypeDefinitionIndex = 21431;

	class IRetryPolicy : public Il2CppObject
	{
	public:
		Il2CppObject* GetNextRetryDelay(::BestHTTP::SignalRCore::RetryContext* arg)
		{
			return (return (Il2CppObject*(*)(::BestHTTP::SignalRCore::RetryContext*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_IRETRYPOLICY_GETNEXTRETRYDELAY_OFFSET))(arg, nullptr);
		}

	};
}

