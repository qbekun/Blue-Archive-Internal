#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class AreaTransformTypes; }

namespace MX::Logic::Data
{
	inline static constexpr unsigned int AreaTransformTypes_TypeDefinitionIndex = 13736;

	class AreaTransformTypes : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::Logic::Data::AreaTransformTypes* None; // 0x0
		::MX::Logic::Data::AreaTransformTypes* RadiusIncrement; // 0x0
		::MX::Logic::Data::AreaTransformTypes* RadiusDecrement; // 0x0
		::MX::Logic::Data::AreaTransformTypes* ObbCenterIncrement; // 0x0
		::MX::Logic::Data::AreaTransformTypes* ObbCenterDecrement; // 0x0
		::MX::Logic::Data::AreaTransformTypes* FanClockWise; // 0x0
		::MX::Logic::Data::AreaTransformTypes* FanCounterClockWise; // 0x0
		::MX::Logic::Data::AreaTransformTypes* FanClockwiseRound; // 0x0
		::MX::Logic::Data::AreaTransformTypes* FanCounterClockwiseRound; // 0x0

	};
}

