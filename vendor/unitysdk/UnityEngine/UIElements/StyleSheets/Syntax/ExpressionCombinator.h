#pragma once
#include "../../../../unitysdk.h"

namespace UnityEngine::UIElements::StyleSheets::Syntax { class ExpressionCombinator; }

namespace UnityEngine::UIElements::StyleSheets::Syntax
{
	inline static constexpr unsigned int ExpressionCombinator_TypeDefinitionIndex = 30824;

	class ExpressionCombinator : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionCombinator* None; // 0x0
		::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionCombinator* Or; // 0x0
		::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionCombinator* OrOr; // 0x0
		::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionCombinator* AndAnd; // 0x0
		::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionCombinator* Juxtaposition; // 0x0
		::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionCombinator* Group; // 0x0

	};
}

