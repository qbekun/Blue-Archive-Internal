#pragma once
#include "../../unitysdk.h"

namespace System::IO
{
	inline static constexpr unsigned int MonoFileType_TypeDefinitionIndex = 25298;

	class MonoFileType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::System::IO::MonoFileType* Unknown; // 0x0
		::System::IO::MonoFileType* Disk; // 0x0
		::System::IO::MonoFileType* Char; // 0x0
		::System::IO::MonoFileType* Pipe; // 0x0
		::System::IO::MonoFileType* Remote; // 0x0

	};
}

