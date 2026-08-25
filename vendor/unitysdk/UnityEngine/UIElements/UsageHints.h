#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class UsageHints; }

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int UsageHints_TypeDefinitionIndex = 30128;

	class UsageHints : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::UIElements::UsageHints* None; // 0x0
		::UnityEngine::UIElements::UsageHints* DynamicTransform; // 0x0
		::UnityEngine::UIElements::UsageHints* GroupTransform; // 0x0
		::UnityEngine::UIElements::UsageHints* MaskContainer; // 0x0
		::UnityEngine::UIElements::UsageHints* DynamicColor; // 0x0

	};
}

