#pragma once
#include "../unitysdk.h"

namespace FlatData { class ProductSaleType; }

namespace FlatData
{
	inline static constexpr unsigned int ProductSaleType_TypeDefinitionIndex = 9641;

	class ProductSaleType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::FlatData::ProductSaleType* Limited; // 0x0
		::FlatData::ProductSaleType* SaleDay; // 0x0

	};
}

