#pragma once
#include "../unitysdk.h"

namespace AnimationOrTween { class Direction; }

namespace AnimationOrTween
{
	inline static constexpr unsigned int Direction_TypeDefinitionIndex = 21240;

	class Direction : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::AnimationOrTween::Direction* Reverse; // 0x0
		::AnimationOrTween::Direction* Toggle; // 0x0
		::AnimationOrTween::Direction* Forward; // 0x0

	};
}

