#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::TextCore::Text { class TagValueType; }

namespace UnityEngine::TextCore::Text
{
	inline static constexpr unsigned int TagValueType_TypeDefinitionIndex = 35604;

	class TagValueType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::TextCore::Text::TagValueType* None; // 0x0
		::UnityEngine::TextCore::Text::TagValueType* NumericalValue; // 0x0
		::UnityEngine::TextCore::Text::TagValueType* StringValue; // 0x0
		::UnityEngine::TextCore::Text::TagValueType* ColorValue; // 0x0

	};
}

