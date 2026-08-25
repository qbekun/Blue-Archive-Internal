#pragma once
#include "../unitysdk.h"

namespace FlatData { class PurchaseSourceType; }

namespace FlatData
{
	inline static constexpr unsigned int PurchaseSourceType_TypeDefinitionIndex = 9629;

	class PurchaseSourceType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::FlatData::PurchaseSourceType* None; // 0x0
		::FlatData::PurchaseSourceType* Product; // 0x0
		::FlatData::PurchaseSourceType* ProductMonthly; // 0x0
		::FlatData::PurchaseSourceType* ProductBattlePass; // 0x0
		::FlatData::PurchaseSourceType* ProductSelect; // 0x0
		::FlatData::PurchaseSourceType* ProductGooglePoint; // 0x0
		::FlatData::PurchaseSourceType* ProductDailyRecord; // 0x0

	};
}

