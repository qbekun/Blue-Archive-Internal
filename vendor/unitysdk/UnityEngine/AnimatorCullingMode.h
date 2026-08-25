#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class AnimatorCullingMode; }

namespace UnityEngine
{
	inline static constexpr unsigned int AnimatorCullingMode_TypeDefinitionIndex = 36460;

	class AnimatorCullingMode : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::AnimatorCullingMode* AlwaysAnimate; // 0x0
		::UnityEngine::AnimatorCullingMode* CullUpdateTransforms; // 0x0
		::UnityEngine::AnimatorCullingMode* CullCompletely; // 0x0

	};
}

