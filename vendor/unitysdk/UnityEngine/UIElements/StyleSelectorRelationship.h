#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class StyleSelectorRelationship; }

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int StyleSelectorRelationship_TypeDefinitionIndex = 30647;

	class StyleSelectorRelationship : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::UIElements::StyleSelectorRelationship* None; // 0x0
		::UnityEngine::UIElements::StyleSelectorRelationship* Child; // 0x0
		::UnityEngine::UIElements::StyleSelectorRelationship* Descendent; // 0x0

	};
}

