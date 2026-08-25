#pragma once
#include "../../../../unitysdk.h"

namespace Unity::IO::LowLevel::Unsafe { class ProcessingState; }

namespace Unity::IO::LowLevel::Unsafe
{
	inline static constexpr unsigned int ProcessingState_TypeDefinitionIndex = 30888;

	class ProcessingState : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::Unity::IO::LowLevel::Unsafe::ProcessingState* Unknown; // 0x0
		::Unity::IO::LowLevel::Unsafe::ProcessingState* InQueue; // 0x0
		::Unity::IO::LowLevel::Unsafe::ProcessingState* Reading; // 0x0
		::Unity::IO::LowLevel::Unsafe::ProcessingState* Completed; // 0x0
		::Unity::IO::LowLevel::Unsafe::ProcessingState* Failed; // 0x0
		::Unity::IO::LowLevel::Unsafe::ProcessingState* Canceled; // 0x0

	};
}

