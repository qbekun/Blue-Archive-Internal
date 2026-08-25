#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class AnimationCullingType; }

namespace UnityEngine
{
	inline static constexpr unsigned int AnimationCullingType_TypeDefinitionIndex = 36447;

	class AnimationCullingType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::AnimationCullingType* AlwaysAnimate; // 0x0
		::UnityEngine::AnimationCullingType* BasedOnRenderers; // 0x0
		::UnityEngine::AnimationCullingType* BasedOnClipBounds; // 0x0
		::UnityEngine::AnimationCullingType* BasedOnUserBounds; // 0x0

	};
}

