#pragma once
#include "../unitysdk.h"

namespace TMPro
{
	inline static constexpr unsigned int TMP_PageInfo_TypeDefinitionIndex = 33620;

	class TMP_PageInfo : public Il2CppObject
	{
	public:
		::System::Int32 firstCharacterIndex; // 0x10
		::System::Int32 lastCharacterIndex; // 0x14
		::System::Single ascender; // 0x18
		::System::Single baseLine; // 0x1C
		::System::Single descender; // 0x20

	};
}

