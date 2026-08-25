#pragma once
#include "../unitysdk.h"

namespace FlatData { class CurrencyAdditionalChargeType; }

namespace FlatData
{
	inline static constexpr unsigned int CurrencyAdditionalChargeType_TypeDefinitionIndex = 9592;

	class CurrencyAdditionalChargeType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::FlatData::CurrencyAdditionalChargeType* EnableAutoChargeOverLimit; // 0x0
		::FlatData::CurrencyAdditionalChargeType* DisableAutoChargeOverLimit; // 0x0

	};
}

