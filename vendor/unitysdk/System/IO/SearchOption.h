#pragma once
#include "../../unitysdk.h"

namespace System::IO
{
	inline static constexpr unsigned int SearchOption_TypeDefinitionIndex = 25269;

	class SearchOption : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::System::IO::SearchOption* TopDirectoryOnly; // 0x0
		::System::IO::SearchOption* AllDirectories; // 0x0

	};
}

