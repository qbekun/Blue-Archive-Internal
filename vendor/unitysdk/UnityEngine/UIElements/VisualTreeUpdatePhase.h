#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class VisualTreeUpdatePhase; }

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int VisualTreeUpdatePhase_TypeDefinitionIndex = 30272;

	class VisualTreeUpdatePhase : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::UIElements::VisualTreeUpdatePhase* ViewData; // 0x0
		::UnityEngine::UIElements::VisualTreeUpdatePhase* Bindings; // 0x0
		::UnityEngine::UIElements::VisualTreeUpdatePhase* Animation; // 0x0
		::UnityEngine::UIElements::VisualTreeUpdatePhase* Styles; // 0x0
		::UnityEngine::UIElements::VisualTreeUpdatePhase* Layout; // 0x0
		::UnityEngine::UIElements::VisualTreeUpdatePhase* TransformClip; // 0x0
		::UnityEngine::UIElements::VisualTreeUpdatePhase* Repaint; // 0x0
		::UnityEngine::UIElements::VisualTreeUpdatePhase* Count; // 0x0

	};
}

