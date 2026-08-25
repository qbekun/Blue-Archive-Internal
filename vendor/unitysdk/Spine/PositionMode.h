#pragma once
#include "../unitysdk.h"

namespace Spine { class PositionMode; }

namespace Spine
{
	inline static constexpr unsigned int PositionMode_TypeDefinitionIndex = 35048;

	class PositionMode : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::Spine::PositionMode* Fixed; // 0x0
		::Spine::PositionMode* Percent; // 0x0

	};
}

