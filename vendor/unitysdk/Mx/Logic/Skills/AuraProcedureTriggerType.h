#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Skills { class AuraProcedureTriggerType; }

namespace MX::Logic::Skills
{
	inline static constexpr unsigned int AuraProcedureTriggerType_TypeDefinitionIndex = 14533;

	class AuraProcedureTriggerType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::Logic::Skills::AuraProcedureTriggerType* None; // 0x0
		::MX::Logic::Skills::AuraProcedureTriggerType* TargetEnter; // 0x0
		::MX::Logic::Skills::AuraProcedureTriggerType* TargetExit; // 0x0
		::MX::Logic::Skills::AuraProcedureTriggerType* AuraDuration; // 0x0

	};
}

