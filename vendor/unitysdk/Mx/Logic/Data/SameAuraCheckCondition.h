#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class SameAuraCheckCondition; }

namespace MX::Logic::Data
{
	inline static constexpr unsigned int SameAuraCheckCondition_TypeDefinitionIndex = 13533;

	class SameAuraCheckCondition : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::Logic::Data::SameAuraCheckCondition* None; // 0x0
		::MX::Logic::Data::SameAuraCheckCondition* SameInvokerEntityId; // 0x0
		::MX::Logic::Data::SameAuraCheckCondition* SameInvokerTeam; // 0x0
		::MX::Logic::Data::SameAuraCheckCondition* SameSkillId; // 0x0
		::MX::Logic::Data::SameAuraCheckCondition* SameSkillEntityName; // 0x0
		::MX::Logic::Data::SameAuraCheckCondition* All; // 0x0

	};
}

