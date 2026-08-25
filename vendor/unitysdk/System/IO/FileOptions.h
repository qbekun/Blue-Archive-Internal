#pragma once
#include "../../unitysdk.h"

namespace System::IO
{
	inline static constexpr unsigned int FileOptions_TypeDefinitionIndex = 25229;

	class FileOptions : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::System::IO::FileOptions* None; // 0x0
		::System::IO::FileOptions* WriteThrough; // 0x0
		::System::IO::FileOptions* Asynchronous; // 0x0
		::System::IO::FileOptions* RandomAccess; // 0x0
		::System::IO::FileOptions* DeleteOnClose; // 0x0
		::System::IO::FileOptions* SequentialScan; // 0x0
		::System::IO::FileOptions* Encrypted; // 0x0

	};
}

