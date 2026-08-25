#pragma once
#include "../../../../unitysdk.h"

namespace Unity::IO::LowLevel::Unsafe { class FileState; }

namespace Unity::IO::LowLevel::Unsafe
{
	inline static constexpr unsigned int FileState_TypeDefinitionIndex = 30885;

	class FileState : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::Unity::IO::LowLevel::Unsafe::FileState* Absent; // 0x0
		::Unity::IO::LowLevel::Unsafe::FileState* Exists; // 0x0

	};
}

