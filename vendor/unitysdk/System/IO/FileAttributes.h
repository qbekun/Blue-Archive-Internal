#pragma once
#include "../../unitysdk.h"

namespace System::IO
{
	inline static constexpr unsigned int FileAttributes_TypeDefinitionIndex = 25278;

	class FileAttributes : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::System::IO::FileAttributes* ReadOnly; // 0x0
		::System::IO::FileAttributes* Hidden; // 0x0
		::System::IO::FileAttributes* System; // 0x0
		::System::IO::FileAttributes* Directory; // 0x0
		::System::IO::FileAttributes* Archive; // 0x0
		::System::IO::FileAttributes* Device; // 0x0
		::System::IO::FileAttributes* Normal; // 0x0
		::System::IO::FileAttributes* Temporary; // 0x0
		::System::IO::FileAttributes* SparseFile; // 0x0
		::System::IO::FileAttributes* ReparsePoint; // 0x0
		::System::IO::FileAttributes* Compressed; // 0x0
		::System::IO::FileAttributes* Offline; // 0x0
		::System::IO::FileAttributes* NotContentIndexed; // 0x0
		::System::IO::FileAttributes* Encrypted; // 0x0
		::System::IO::FileAttributes* IntegrityStream; // 0x0
		::System::IO::FileAttributes* NoScrubData; // 0x0

	};
}

