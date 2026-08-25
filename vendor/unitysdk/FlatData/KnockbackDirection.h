#pragma once
#include "../unitysdk.h"

namespace FlatData { class KnockbackDirection; }

namespace FlatData
{
	inline static constexpr unsigned int KnockbackDirection_TypeDefinitionIndex = 9404;

	class KnockbackDirection : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::FlatData::KnockbackDirection* TargetToCaster; // 0x0
		::FlatData::KnockbackDirection* CasterToTarget; // 0x0
		::FlatData::KnockbackDirection* TargetToHitPosition; // 0x0
		::FlatData::KnockbackDirection* HitPositionToTarget; // 0x0
		::FlatData::KnockbackDirection* CasterToHitPosition; // 0x0
		::FlatData::KnockbackDirection* HitPositionToCaster; // 0x0
		::FlatData::KnockbackDirection* Caster; // 0x0
		::FlatData::KnockbackDirection* Target; // 0x0

	};
}

