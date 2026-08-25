#pragma once
#include "../unitysdk.h"

namespace FlatData { class PurchasePeriodType; }

namespace FlatData
{
	inline static constexpr unsigned int PurchasePeriodType_TypeDefinitionIndex = 9628;

	class PurchasePeriodType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::FlatData::PurchasePeriodType* None; // 0x0
		::FlatData::PurchasePeriodType* Day; // 0x0
		::FlatData::PurchasePeriodType* Week; // 0x0
		::FlatData::PurchasePeriodType* Month; // 0x0

	};
}

