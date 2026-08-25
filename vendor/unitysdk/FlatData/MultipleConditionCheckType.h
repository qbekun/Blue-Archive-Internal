#pragma once
#include "../unitysdk.h"

namespace FlatData { class MultipleConditionCheckType; }

namespace FlatData
{
	inline static constexpr unsigned int MultipleConditionCheckType_TypeDefinitionIndex = 9495;

	class MultipleConditionCheckType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::FlatData::MultipleConditionCheckType* And; // 0x0
		::FlatData::MultipleConditionCheckType* Or; // 0x0
		::FlatData::MultipleConditionCheckType* Count; // 0x0

	};
}

