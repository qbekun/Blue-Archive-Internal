#pragma once
#include "../unitysdk.h"

namespace FlatData { class ShopRefreshPeriodType; }

namespace FlatData
{
	inline static constexpr unsigned int ShopRefreshPeriodType_TypeDefinitionIndex = 9639;

	class ShopRefreshPeriodType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::FlatData::ShopRefreshPeriodType* None; // 0x0
		::FlatData::ShopRefreshPeriodType* Day; // 0x0
		::FlatData::ShopRefreshPeriodType* Week; // 0x0
		::FlatData::ShopRefreshPeriodType* Month; // 0x0

	};
}

