#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::TextCore::Text
{
	inline static constexpr unsigned int WordInfo_TypeDefinitionIndex = 35601;

	class WordInfo : public Il2CppObject
	{
	public:
		::System::Int32 firstCharacterIndex; // 0x10
		::System::Int32 lastCharacterIndex; // 0x14
		::System::Int32 characterCount; // 0x18

	};
}

