#pragma once
#include "../unitysdk.h"

namespace Spine { class SpacingMode; }

namespace Spine
{
	inline static constexpr unsigned int SpacingMode_TypeDefinitionIndex = 35049;

	class SpacingMode : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::Spine::SpacingMode* Length; // 0x0
		::Spine::SpacingMode* Fixed; // 0x0
		::Spine::SpacingMode* Percent; // 0x0
		::Spine::SpacingMode* Proportional; // 0x0

	};
}

