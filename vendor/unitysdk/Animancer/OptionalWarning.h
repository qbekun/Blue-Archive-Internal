#pragma once
#include "../unitysdk.h"

namespace Animancer { class OptionalWarning; }

namespace Animancer
{
	inline static constexpr unsigned int OptionalWarning_TypeDefinitionIndex = 35134;

	class OptionalWarning : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::Animancer::OptionalWarning* ProOnly; // 0x0
		::Animancer::OptionalWarning* CreateGraphWhileDisabled; // 0x0
		::Animancer::OptionalWarning* CreateGraphDuringGuiEvent; // 0x0
		::Animancer::OptionalWarning* AnimatorDisabled; // 0x0
		::Animancer::OptionalWarning* NativeControllerHumanoid; // 0x0
		::Animancer::OptionalWarning* NativeControllerHybrid; // 0x0
		::Animancer::OptionalWarning* DuplicateEvent; // 0x0
		::Animancer::OptionalWarning* EndEventInterrupt; // 0x0
		::Animancer::OptionalWarning* UselessEvent; // 0x0
		::Animancer::OptionalWarning* LockedEvents; // 0x0
		::Animancer::OptionalWarning* UnsupportedEvents; // 0x0
		::Animancer::OptionalWarning* UnsupportedSpeed; // 0x0
		::Animancer::OptionalWarning* UnsupportedIK; // 0x0
		::Animancer::OptionalWarning* MixerMinChildren; // 0x0
		::Animancer::OptionalWarning* MixerSynchronizeZeroLength; // 0x0
		::Animancer::OptionalWarning* CustomFadeBounds; // 0x0
		::Animancer::OptionalWarning* CustomFadeNotNull; // 0x0
		::Animancer::OptionalWarning* AnimatorSpeed; // 0x0
		::Animancer::OptionalWarning* UnusedNode; // 0x0
		::Animancer::OptionalWarning* PlayableAssetAnimatorBinding; // 0x0
		::Animancer::OptionalWarning* CloneComplexState; // 0x0
		::Animancer::OptionalWarning* All; // 0x0

	};
}

