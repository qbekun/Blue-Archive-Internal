#pragma once
#include "../../unitysdk.h"

namespace BestHTTP::SignalRCore
{
	inline static constexpr unsigned int RetryContext_TypeDefinitionIndex = 21432;

	class RetryContext : public Il2CppObject
	{
	public:
		::System::UInt32 PreviousRetryCount; // 0x10
		::System::TimeSpan* ElapsedTime; // 0x18
		::System::String* RetryReason; // 0x20

	};
}

