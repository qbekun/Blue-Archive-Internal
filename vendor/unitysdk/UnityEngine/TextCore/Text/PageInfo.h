#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::TextCore::Text
{
	inline static constexpr unsigned int PageInfo_TypeDefinitionIndex = 35600;

	class PageInfo : public Il2CppObject
	{
	public:
		::System::Int32 firstCharacterIndex; // 0x10
		::System::Int32 lastCharacterIndex; // 0x14
		::System::Single ascender; // 0x18
		::System::Single baseLine; // 0x1C
		::System::Single descender; // 0x20

	};
}

