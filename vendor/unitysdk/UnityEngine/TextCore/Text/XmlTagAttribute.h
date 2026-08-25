#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::TextCore::Text { class TagValueType; }

namespace UnityEngine::TextCore::Text
{
	inline static constexpr unsigned int XmlTagAttribute_TypeDefinitionIndex = 35596;

	class XmlTagAttribute : public Il2CppObject
	{
	public:
		::System::Int32 nameHashCode; // 0x10
		::UnityEngine::TextCore::Text::TagValueType* valueType; // 0x14
		::System::Int32 valueStartIndex; // 0x18
		::System::Int32 valueLength; // 0x1C
		::System::Int32 valueHashCode; // 0x20

	};
}

