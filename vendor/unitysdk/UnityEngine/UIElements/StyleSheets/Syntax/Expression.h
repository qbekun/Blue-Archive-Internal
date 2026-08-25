#pragma once
#include "../../../../unitysdk.h"

namespace UnityEngine::UIElements::StyleSheets::Syntax { class ExpressionType; }
namespace UnityEngine::UIElements::StyleSheets::Syntax { class ExpressionMultiplier; }
namespace UnityEngine::UIElements::StyleSheets::Syntax { class DataType; }
namespace UnityEngine::UIElements::StyleSheets::Syntax { class ExpressionCombinator; }

#define UNITYENGINE_UIELEMENTS_STYLESHEETS_SYNTAX_EXPRESSION_.CTOR_OFFSET UNITYSDK_OFFSET(0xA374D60)

namespace UnityEngine::UIElements::StyleSheets::Syntax
{
	inline static constexpr unsigned int Expression_TypeDefinitionIndex = 30821;

	class Expression : public Il2CppObject
	{
	public:
		::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionType* type; // 0x10
		::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplier* multiplier; // 0x14
		::UnityEngine::UIElements::StyleSheets::Syntax::DataType* dataType; // 0x20
		::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionCombinator* combinator; // 0x24
		::Il2CppArray<::System::Object*>* subExpressions; // 0x28
		::System::String* keyword; // 0x30

		::System::Void .ctor(::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionType* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionType*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_SYNTAX_EXPRESSION_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

