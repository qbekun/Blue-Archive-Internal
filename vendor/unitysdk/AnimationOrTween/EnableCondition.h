#pragma once
#include "../unitysdk.h"

namespace AnimationOrTween { class EnableCondition; }

namespace AnimationOrTween
{
	inline static constexpr unsigned int EnableCondition_TypeDefinitionIndex = 21241;

	class EnableCondition : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::AnimationOrTween::EnableCondition* DoNothing; // 0x0
		::AnimationOrTween::EnableCondition* EnableThenPlay; // 0x0
		::AnimationOrTween::EnableCondition* IgnoreDisabledState; // 0x0

	};
}

