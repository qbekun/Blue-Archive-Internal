#pragma once
#include "../unitysdk.h"

namespace TMPro { class TagValueType; }

namespace TMPro
{
	inline static constexpr unsigned int TagValueType_TypeDefinitionIndex = 33711;

	class TagValueType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::TMPro::TagValueType* None; // 0x0
		::TMPro::TagValueType* NumericalValue; // 0x0
		::TMPro::TagValueType* StringValue; // 0x0
		::TMPro::TagValueType* ColorValue; // 0x0

	};
}

