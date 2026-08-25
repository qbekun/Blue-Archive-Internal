#pragma once
#include "../unitysdk.h"

namespace AnimationOrTween { class Trigger; }

namespace AnimationOrTween
{
	inline static constexpr unsigned int Trigger_TypeDefinitionIndex = 21239;

	class Trigger : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::AnimationOrTween::Trigger* OnClick; // 0x0
		::AnimationOrTween::Trigger* OnHover; // 0x0
		::AnimationOrTween::Trigger* OnPress; // 0x0
		::AnimationOrTween::Trigger* OnHoverTrue; // 0x0
		::AnimationOrTween::Trigger* OnHoverFalse; // 0x0
		::AnimationOrTween::Trigger* OnPressTrue; // 0x0
		::AnimationOrTween::Trigger* OnPressFalse; // 0x0
		::AnimationOrTween::Trigger* OnActivate; // 0x0
		::AnimationOrTween::Trigger* OnActivateTrue; // 0x0
		::AnimationOrTween::Trigger* OnActivateFalse; // 0x0
		::AnimationOrTween::Trigger* OnDoubleClick; // 0x0
		::AnimationOrTween::Trigger* OnSelect; // 0x0
		::AnimationOrTween::Trigger* OnSelectTrue; // 0x0
		::AnimationOrTween::Trigger* OnSelectFalse; // 0x0
		::AnimationOrTween::Trigger* Manual; // 0x0

	};
}

