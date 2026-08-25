#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class ShieldLeftoverConversionCondition; }

namespace MX::Logic::Data
{
	inline static constexpr unsigned int ShieldLeftoverConversionCondition_TypeDefinitionIndex = 13534;

	class ShieldLeftoverConversionCondition : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::Logic::Data::ShieldLeftoverConversionCondition* None; // 0x0
		::MX::Logic::Data::ShieldLeftoverConversionCondition* Always; // 0x0
		::MX::Logic::Data::ShieldLeftoverConversionCondition* Never; // 0x0
		::MX::Logic::Data::ShieldLeftoverConversionCondition* Else; // 0x0
		::MX::Logic::Data::ShieldLeftoverConversionCondition* Override; // 0x0
		::MX::Logic::Data::ShieldLeftoverConversionCondition* Dispel; // 0x0

	};
}

