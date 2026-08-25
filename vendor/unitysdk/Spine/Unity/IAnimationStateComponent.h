#pragma once
#include "../../unitysdk.h"

namespace Spine { class AnimationState; }

#define SPINE_UNITY_IANIMATIONSTATECOMPONENT_SET_UNSCALEDTIME_OFFSET UNITYSDK_OFFSET(0x000000)
#define SPINE_UNITY_IANIMATIONSTATECOMPONENT_GET_UNSCALEDTIME_OFFSET UNITYSDK_OFFSET(0x000000)
#define SPINE_UNITY_IANIMATIONSTATECOMPONENT_GET_ANIMATIONSTATE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Spine::Unity
{
	inline static constexpr unsigned int IAnimationStateComponent_TypeDefinitionIndex = 35349;

	class IAnimationStateComponent : public Il2CppObject
	{
	public:
		::System::Void set_UnscaledTime(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_IANIMATIONSTATECOMPONENT_SET_UNSCALEDTIME_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_UnscaledTime()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_IANIMATIONSTATECOMPONENT_GET_UNSCALEDTIME_OFFSET))(nullptr);
		}

		::Spine::AnimationState* get_AnimationState()
		{
			return (return (::Spine::AnimationState*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_IANIMATIONSTATECOMPONENT_GET_ANIMATIONSTATE_OFFSET))(nullptr);
		}

	};
}

