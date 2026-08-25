#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class ScrollViewMode; }

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int ScrollViewMode_TypeDefinitionIndex = 30371;

	class ScrollViewMode : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::UIElements::ScrollViewMode* Vertical; // 0x0
		::UnityEngine::UIElements::ScrollViewMode* Horizontal; // 0x0
		::UnityEngine::UIElements::ScrollViewMode* VerticalAndHorizontal; // 0x0

	};
}

