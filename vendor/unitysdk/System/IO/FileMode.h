#pragma once
#include "../../unitysdk.h"

namespace System::IO
{
	inline static constexpr unsigned int FileMode_TypeDefinitionIndex = 25227;

	class FileMode : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::System::IO::FileMode* CreateNew; // 0x0
		::System::IO::FileMode* Create; // 0x0
		::System::IO::FileMode* Open; // 0x0
		::System::IO::FileMode* OpenOrCreate; // 0x0
		::System::IO::FileMode* Truncate; // 0x0
		::System::IO::FileMode* Append; // 0x0

	};
}

