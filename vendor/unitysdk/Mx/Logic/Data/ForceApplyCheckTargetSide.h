#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class ForceApplyCheckTargetSide; }

namespace MX::Logic::Data
{
	inline static constexpr unsigned int ForceApplyCheckTargetSide_TypeDefinitionIndex = 13520;

	class ForceApplyCheckTargetSide : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::Logic::Data::ForceApplyCheckTargetSide* None; // 0x0
		::MX::Logic::Data::ForceApplyCheckTargetSide* Ally; // 0x0
		::MX::Logic::Data::ForceApplyCheckTargetSide* Enemy; // 0x0

	};
}

