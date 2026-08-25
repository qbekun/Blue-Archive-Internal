#pragma once
#include "../unitysdk.h"

namespace FlatData { class CurrencyOverChargeType; }

namespace FlatData
{
	inline static constexpr unsigned int CurrencyOverChargeType_TypeDefinitionIndex = 9591;

	class CurrencyOverChargeType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::FlatData::CurrencyOverChargeType* CanNotCharge; // 0x0
		::FlatData::CurrencyOverChargeType* FitToLimit; // 0x0
		::FlatData::CurrencyOverChargeType* ChargeOverLimit; // 0x0

	};
}

