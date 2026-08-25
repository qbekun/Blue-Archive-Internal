#pragma once
#include "../unitysdk.h"

namespace Spine { class SequenceMode; }

namespace Spine
{
	inline static constexpr unsigned int SequenceMode_TypeDefinitionIndex = 35026;

	class SequenceMode : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::Spine::SequenceMode* Hold; // 0x0
		::Spine::SequenceMode* Once; // 0x0
		::Spine::SequenceMode* Loop; // 0x0
		::Spine::SequenceMode* Pingpong; // 0x0
		::Spine::SequenceMode* OnceReverse; // 0x0
		::Spine::SequenceMode* LoopReverse; // 0x0
		::Spine::SequenceMode* PingpongReverse; // 0x0

	};
}

