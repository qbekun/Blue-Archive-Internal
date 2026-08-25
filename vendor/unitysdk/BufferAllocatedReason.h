#pragma once
#include "unitysdk.h"

	inline static constexpr unsigned int BufferAllocatedReason_TypeDefinitionIndex = 25190;

	class BufferAllocatedReason : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		BufferAllocatedReason* Pooled; // 0x0
		BufferAllocatedReason* OverMaximumSize; // 0x0
		BufferAllocatedReason* PoolExhausted; // 0x0

	};

