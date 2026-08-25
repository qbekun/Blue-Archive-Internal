#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Skills { class CoverState; }

namespace MX::Logic::Skills
{
	inline static constexpr unsigned int CoverState_TypeDefinitionIndex = 14599;

	class CoverState : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::Logic::Skills::CoverState* None; // 0x0
		::MX::Logic::Skills::CoverState* NotCovered; // 0x0
		::MX::Logic::Skills::CoverState* Covered; // 0x0

	};
}

