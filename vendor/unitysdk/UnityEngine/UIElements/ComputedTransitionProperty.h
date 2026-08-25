#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements::StyleSheets { class StylePropertyId; }

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int ComputedTransitionProperty_TypeDefinitionIndex = 30594;

	class ComputedTransitionProperty : public Il2CppObject
	{
	public:
		::UnityEngine::UIElements::StyleSheets::StylePropertyId* id; // 0x10
		::System::Int32 durationMs; // 0x14
		::System::Int32 delayMs; // 0x18
		Il2CppObject* easingCurve; // 0x20

	};
}

