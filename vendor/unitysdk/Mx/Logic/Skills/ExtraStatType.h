#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Skills { class ExtraStatType; }

namespace MX::Logic::Skills
{
	inline static constexpr unsigned int ExtraStatType_TypeDefinitionIndex = 14578;

	class ExtraStatType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::Logic::Skills::ExtraStatType* None; // 0x0
		::MX::Logic::Skills::ExtraStatType* InvokerCurrentHP; // 0x0
		::MX::Logic::Skills::ExtraStatType* TargetCurrentHP; // 0x0
		::MX::Logic::Skills::ExtraStatType* InvokerMaxHP; // 0x0
		::MX::Logic::Skills::ExtraStatType* TargetMaxHP; // 0x0
		::MX::Logic::Skills::ExtraStatType* InvokerLostHP; // 0x0
		::MX::Logic::Skills::ExtraStatType* TargetLostHP; // 0x0
		::MX::Logic::Skills::ExtraStatType* InvokerMaxHPCapGaugeValue; // 0x0
		::MX::Logic::Skills::ExtraStatType* TargetMaxHPCapGaugeValue; // 0x0
		::MX::Logic::Skills::ExtraStatType* InvokerDefaultDefense; // 0x0
		::MX::Logic::Skills::ExtraStatType* TargetDefaultDefense; // 0x0
		::MX::Logic::Skills::ExtraStatType* InvokerCurrentDefense; // 0x0
		::MX::Logic::Skills::ExtraStatType* TargetCurrentDefense; // 0x0

	};
}

