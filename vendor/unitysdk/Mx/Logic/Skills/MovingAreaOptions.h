#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Skills { class MovingAreaOptions; }

namespace MX::Logic::Skills
{
	inline static constexpr unsigned int MovingAreaOptions_TypeDefinitionIndex = 14580;

	class MovingAreaOptions : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::Logic::Skills::MovingAreaOptions* None; // 0x0
		::MX::Logic::Skills::MovingAreaOptions* FixedAim; // 0x0
		::MX::Logic::Skills::MovingAreaOptions* CheckSpawnPositionOutOfMovingArea; // 0x0

	};
}

