#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class PanelScreenMatchMode; }

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int PanelScreenMatchMode_TypeDefinitionIndex = 30563;

	class PanelScreenMatchMode : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::UIElements::PanelScreenMatchMode* MatchWidthOrHeight; // 0x0
		::UnityEngine::UIElements::PanelScreenMatchMode* Shrink; // 0x0
		::UnityEngine::UIElements::PanelScreenMatchMode* Expand; // 0x0

	};
}

