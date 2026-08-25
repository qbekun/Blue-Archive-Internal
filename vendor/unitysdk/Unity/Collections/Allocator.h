#pragma once
#include "../../unitysdk.h"

namespace Unity::Collections { class Allocator; }

namespace Unity::Collections
{
	inline static constexpr unsigned int Allocator_TypeDefinitionIndex = 30898;

	class Allocator : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::Unity::Collections::Allocator* Invalid; // 0x0
		::Unity::Collections::Allocator* None; // 0x0
		::Unity::Collections::Allocator* Temp; // 0x0
		::Unity::Collections::Allocator* TempJob; // 0x0
		::Unity::Collections::Allocator* Persistent; // 0x0
		::Unity::Collections::Allocator* AudioKernel; // 0x0

	};
}

