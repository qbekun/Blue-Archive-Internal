#pragma once
#include "../../unitysdk.h"

namespace MX::SaveData { class SupplyCard; }

namespace MX::SaveData
{
	inline static constexpr unsigned int SupplyCard_TypeDefinitionIndex = 20023;

	class SupplyCard : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::SaveData::SupplyCard* Auto; // 0x0
		::MX::SaveData::SupplyCard* Manual; // 0x0

	};
}

