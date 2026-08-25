#pragma once
#include "../../../unitysdk.h"

namespace MX::Visual::Data { class AlignDirection; }

namespace MX::Visual::Data
{
	inline static constexpr unsigned int AlignDirection_TypeDefinitionIndex = 20217;

	class AlignDirection : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::Visual::Data::AlignDirection* None; // 0x0
		::MX::Visual::Data::AlignDirection* EffectBone; // 0x0
		::MX::Visual::Data::AlignDirection* Target; // 0x0
		::MX::Visual::Data::AlignDirection* Caster; // 0x0
		::MX::Visual::Data::AlignDirection* TargetToCaster; // 0x0
		::MX::Visual::Data::AlignDirection* CasterToTarget; // 0x0
		::MX::Visual::Data::AlignDirection* EntityDirection; // 0x0
		::MX::Visual::Data::AlignDirection* Identity; // 0x0

	};
}

