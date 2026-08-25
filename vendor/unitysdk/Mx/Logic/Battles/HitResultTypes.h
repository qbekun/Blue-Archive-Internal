#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Battles { class HitResultTypes; }

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int HitResultTypes_TypeDefinitionIndex = 14079;

	class HitResultTypes : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::Logic::Battles::HitResultTypes* None; // 0x0
		::MX::Logic::Battles::HitResultTypes* NormalHit; // 0x0
		::MX::Logic::Battles::HitResultTypes* CriticalHit; // 0x0
		::MX::Logic::Battles::HitResultTypes* Block; // 0x0
		::MX::Logic::Battles::HitResultTypes* Dodge; // 0x0
		::MX::Logic::Battles::HitResultTypes* Immune; // 0x0
		::MX::Logic::Battles::HitResultTypes* All; // 0x0

	};
}

