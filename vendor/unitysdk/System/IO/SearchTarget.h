#pragma once
#include "../../unitysdk.h"

namespace System::IO
{
	inline static constexpr unsigned int SearchTarget_TypeDefinitionIndex = 25270;

	class SearchTarget : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::System::IO::SearchTarget* Files; // 0x0
		::System::IO::SearchTarget* Directories; // 0x0
		::System::IO::SearchTarget* Both; // 0x0

	};
}

