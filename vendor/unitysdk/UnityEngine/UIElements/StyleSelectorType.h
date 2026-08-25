#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class StyleSelectorType; }

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int StyleSelectorType_TypeDefinitionIndex = 30648;

	class StyleSelectorType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::UIElements::StyleSelectorType* Unknown; // 0x0
		::UnityEngine::UIElements::StyleSelectorType* Wildcard; // 0x0
		::UnityEngine::UIElements::StyleSelectorType* Type; // 0x0
		::UnityEngine::UIElements::StyleSelectorType* Class; // 0x0
		::UnityEngine::UIElements::StyleSelectorType* PseudoClass; // 0x0
		::UnityEngine::UIElements::StyleSelectorType* RecursivePseudoClass; // 0x0
		::UnityEngine::UIElements::StyleSelectorType* ID; // 0x0
		::UnityEngine::UIElements::StyleSelectorType* Predicate; // 0x0

	};
}

