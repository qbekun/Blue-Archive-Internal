#pragma once
#include "../unitysdk.h"

namespace Spine { class BlendMode; }

namespace Spine
{
	inline static constexpr unsigned int BlendMode_TypeDefinitionIndex = 35028;

	class BlendMode : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::Spine::BlendMode* Normal; // 0x0
		::Spine::BlendMode* Additive; // 0x0
		::Spine::BlendMode* Multiply; // 0x0
		::Spine::BlendMode* Screen; // 0x0

	};
}

