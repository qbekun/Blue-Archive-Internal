#pragma once
#include "../unitysdk.h"

namespace FlatData { class ConsumeCondition; }

namespace FlatData
{
	inline static constexpr unsigned int ConsumeCondition_TypeDefinitionIndex = 9596;

	class ConsumeCondition : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::FlatData::ConsumeCondition* And; // 0x0
		::FlatData::ConsumeCondition* Or; // 0x0

	};
}

