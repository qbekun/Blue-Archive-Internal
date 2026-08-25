#pragma once
#include "../unitysdk.h"

namespace Spine { class RotateMode; }

namespace Spine
{
	inline static constexpr unsigned int RotateMode_TypeDefinitionIndex = 35050;

	class RotateMode : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::Spine::RotateMode* Tangent; // 0x0
		::Spine::RotateMode* Chain; // 0x0
		::Spine::RotateMode* ChainScale; // 0x0

	};
}

