#pragma once
#include "../unitysdk.h"

namespace AnimationOrTween { class DisableCondition; }

namespace AnimationOrTween
{
	inline static constexpr unsigned int DisableCondition_TypeDefinitionIndex = 21242;

	class DisableCondition : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::AnimationOrTween::DisableCondition* DisableAfterReverse; // 0x0
		::AnimationOrTween::DisableCondition* DoNotDisable; // 0x0
		::AnimationOrTween::DisableCondition* DisableAfterForward; // 0x0

	};
}

