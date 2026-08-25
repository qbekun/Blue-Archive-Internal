#pragma once
#include "unitysdk.h"

	inline static constexpr unsigned int IO_COUNTERS_TypeDefinitionIndex = 10172;

	class IO_COUNTERS : public Il2CppObject
	{
	public:
		::System::UInt64 ReadOperationCount; // 0x10
		::System::UInt64 WriteOperationCount; // 0x18
		::System::UInt64 OtherOperationCount; // 0x20
		::System::UInt64 ReadTransferCount; // 0x28
		::System::UInt64 WriteTransferCount; // 0x30
		::System::UInt64 OtherTransferCount; // 0x38

	};

