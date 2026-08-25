#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Skills { class DamageRatioApplyType; }

namespace MX::Logic::Skills
{
	inline static constexpr unsigned int DamageRatioApplyType_TypeDefinitionIndex = 14585;

	class DamageRatioApplyType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::Logic::Skills::DamageRatioApplyType* None; // 0x0
		::MX::Logic::Skills::DamageRatioApplyType* Both; // 0x0
		::MX::Logic::Skills::DamageRatioApplyType* Caster; // 0x0
		::MX::Logic::Skills::DamageRatioApplyType* Target; // 0x0

	};
}

