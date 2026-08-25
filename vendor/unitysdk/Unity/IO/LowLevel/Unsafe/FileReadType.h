#pragma once
#include "../../../../unitysdk.h"

namespace Unity::IO::LowLevel::Unsafe { class FileReadType; }

namespace Unity::IO::LowLevel::Unsafe
{
	inline static constexpr unsigned int FileReadType_TypeDefinitionIndex = 30889;

	class FileReadType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::Unity::IO::LowLevel::Unsafe::FileReadType* Sync; // 0x0
		::Unity::IO::LowLevel::Unsafe::FileReadType* Async; // 0x0

	};
}

