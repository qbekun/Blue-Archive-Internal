#pragma once
#include "../../unitysdk.h"

namespace System::IO
{
	inline static constexpr unsigned int FileShare_TypeDefinitionIndex = 25230;

	class FileShare : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::System::IO::FileShare* None; // 0x0
		::System::IO::FileShare* Read; // 0x0
		::System::IO::FileShare* Write; // 0x0
		::System::IO::FileShare* ReadWrite; // 0x0
		::System::IO::FileShare* Delete; // 0x0
		::System::IO::FileShare* Inheritable; // 0x0

	};
}

