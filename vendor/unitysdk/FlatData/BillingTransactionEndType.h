#pragma once
#include "../unitysdk.h"

namespace FlatData { class BillingTransactionEndType; }

namespace FlatData
{
	inline static constexpr unsigned int BillingTransactionEndType_TypeDefinitionIndex = 9633;

	class BillingTransactionEndType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::FlatData::BillingTransactionEndType* None; // 0x0
		::FlatData::BillingTransactionEndType* Success; // 0x0
		::FlatData::BillingTransactionEndType* Cancel; // 0x0

	};
}

