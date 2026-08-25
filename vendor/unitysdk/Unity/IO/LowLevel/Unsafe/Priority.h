#pragma once
#include "../../../../unitysdk.h"

namespace Unity::IO::LowLevel::Unsafe { class Priority; }

namespace Unity::IO::LowLevel::Unsafe
{
	inline static constexpr unsigned int Priority_TypeDefinitionIndex = 30887;

	class Priority : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::Unity::IO::LowLevel::Unsafe::Priority* PriorityLow; // 0x0
		::Unity::IO::LowLevel::Unsafe::Priority* PriorityHigh; // 0x0

	};
}

