#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class RenderHints; }

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int RenderHints_TypeDefinitionIndex = 30129;

	class RenderHints : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::UIElements::RenderHints* None; // 0x0
		::UnityEngine::UIElements::RenderHints* GroupTransform; // 0x0
		::UnityEngine::UIElements::RenderHints* BoneTransform; // 0x0
		::UnityEngine::UIElements::RenderHints* ClipWithScissors; // 0x0
		::UnityEngine::UIElements::RenderHints* MaskContainer; // 0x0
		::UnityEngine::UIElements::RenderHints* DynamicColor; // 0x0
		::UnityEngine::UIElements::RenderHints* DirtyOffset; // 0x0
		::UnityEngine::UIElements::RenderHints* DirtyGroupTransform; // 0x0
		::UnityEngine::UIElements::RenderHints* DirtyBoneTransform; // 0x0
		::UnityEngine::UIElements::RenderHints* DirtyClipWithScissors; // 0x0
		::UnityEngine::UIElements::RenderHints* DirtyMaskContainer; // 0x0
		::UnityEngine::UIElements::RenderHints* DirtyDynamicColor; // 0x0
		::UnityEngine::UIElements::RenderHints* DirtyAll; // 0x0

	};
}

