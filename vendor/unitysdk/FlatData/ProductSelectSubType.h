#pragma once
#include "../unitysdk.h"

namespace FlatData { class ProductSelectSubType; }

namespace FlatData
{
	inline static constexpr unsigned int ProductSelectSubType_TypeDefinitionIndex = 9642;

	class ProductSelectSubType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::FlatData::ProductSelectSubType* Select; // 0x0
		::FlatData::ProductSelectSubType* AutoSelect; // 0x0

	};
}

