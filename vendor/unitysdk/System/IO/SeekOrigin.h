#pragma once
#include "../../unitysdk.h"

namespace System::IO
{
	inline static constexpr unsigned int SeekOrigin_TypeDefinitionIndex = 25236;

	class SeekOrigin : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::System::IO::SeekOrigin* Begin; // 0x0
		::System::IO::SeekOrigin* Current; // 0x0
		::System::IO::SeekOrigin* End; // 0x0

	};
}

