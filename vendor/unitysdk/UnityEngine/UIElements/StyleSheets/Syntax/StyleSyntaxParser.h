#pragma once
#include "../../../../unitysdk.h"

namespace UnityEngine::UIElements::StyleSheets::Syntax { class Expression; }
namespace UnityEngine::UIElements::StyleSheets::Syntax { class StyleSyntaxTokenizer; }
namespace UnityEngine::UIElements::StyleSheets::Syntax { class ExpressionCombinator; }
namespace UnityEngine::UIElements::StyleSheets::Syntax { class ExpressionMultiplier&; }
namespace UnityEngine::UIElements::StyleSheets::Syntax { class StyleSyntaxToken; }

#define UNITYENGINE_UIELEMENTS_STYLESHEETS_SYNTAX_STYLESYNTAXPARSER_PARSE_OFFSET UNITYSDK_OFFSET(0xA374EE0)
#define UNITYENGINE_UIELEMENTS_STYLESHEETS_SYNTAX_STYLESYNTAXPARSER_PARSEEXPRESSION_OFFSET UNITYSDK_OFFSET(0xA375BB0)
#define UNITYENGINE_UIELEMENTS_STYLESHEETS_SYNTAX_STYLESYNTAXPARSER_PROCESSCOMBINATORSTACK_OFFSET UNITYSDK_OFFSET(0xA376560)
#define UNITYENGINE_UIELEMENTS_STYLESHEETS_SYNTAX_STYLESYNTAXPARSER_PARSETERM_OFFSET UNITYSDK_OFFSET(0xA375F80)
#define UNITYENGINE_UIELEMENTS_STYLESHEETS_SYNTAX_STYLESYNTAXPARSER_PARSECOMBINATORTYPE_OFFSET UNITYSDK_OFFSET(0xA3763E0)
#define UNITYENGINE_UIELEMENTS_STYLESHEETS_SYNTAX_STYLESYNTAXPARSER_PARSEGROUP_OFFSET UNITYSDK_OFFSET(0xA376130)
#define UNITYENGINE_UIELEMENTS_STYLESHEETS_SYNTAX_STYLESYNTAXPARSER_PARSEDATATYPE_OFFSET UNITYSDK_OFFSET(0xA3768B0)
#define UNITYENGINE_UIELEMENTS_STYLESHEETS_SYNTAX_STYLESYNTAXPARSER_PARSENONTERMINALVALUE_OFFSET UNITYSDK_OFFSET(0xA3770B0)
#define UNITYENGINE_UIELEMENTS_STYLESHEETS_SYNTAX_STYLESYNTAXPARSER_PARSEPROPERTY_OFFSET UNITYSDK_OFFSET(0xA377250)
#define UNITYENGINE_UIELEMENTS_STYLESHEETS_SYNTAX_STYLESYNTAXPARSER_PARSEMULTIPLIER_OFFSET UNITYSDK_OFFSET(0xA376E20)
#define UNITYENGINE_UIELEMENTS_STYLESHEETS_SYNTAX_STYLESYNTAXPARSER_PARSERANGES_OFFSET UNITYSDK_OFFSET(0xA377660)
#define UNITYENGINE_UIELEMENTS_STYLESHEETS_SYNTAX_STYLESYNTAXPARSER_EATSPACE_OFFSET UNITYSDK_OFFSET(0xA377070)
#define UNITYENGINE_UIELEMENTS_STYLESHEETS_SYNTAX_STYLESYNTAXPARSER_ISEXPRESSIONEND_OFFSET UNITYSDK_OFFSET(0xA376890)
#define UNITYENGINE_UIELEMENTS_STYLESHEETS_SYNTAX_STYLESYNTAXPARSER_ISCOMBINATOR_OFFSET UNITYSDK_OFFSET(0xA377060)
#define UNITYENGINE_UIELEMENTS_STYLESHEETS_SYNTAX_STYLESYNTAXPARSER_ISMULTIPLIER_OFFSET UNITYSDK_OFFSET(0xA377640)
#define UNITYENGINE_UIELEMENTS_STYLESHEETS_SYNTAX_STYLESYNTAXPARSER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA377790)

namespace UnityEngine::UIElements::StyleSheets::Syntax
{
	inline static constexpr unsigned int StyleSyntaxParser_TypeDefinitionIndex = 30827;

	class StyleSyntaxParser : public Il2CppObject
	{
	public:
		Il2CppObject* m_ProcessExpressionList; // 0x10
		Il2CppObject* m_ExpressionStack; // 0x18
		Il2CppObject* m_CombinatorStack; // 0x20
		Il2CppObject* m_ParsedExpressionCache; // 0x28

		::UnityEngine::UIElements::StyleSheets::Syntax::Expression* Parse(::System::String* str)
		{
			return (return (::UnityEngine::UIElements::StyleSheets::Syntax::Expression*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_SYNTAX_STYLESYNTAXPARSER_PARSE_OFFSET))(str, nullptr);
		}

		::UnityEngine::UIElements::StyleSheets::Syntax::Expression* ParseExpression(::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer* arg)
		{
			return (return (::UnityEngine::UIElements::StyleSheets::Syntax::Expression*(*)(::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_SYNTAX_STYLESYNTAXPARSER_PARSEEXPRESSION_OFFSET))(arg, nullptr);
		}

		::System::Void ProcessCombinatorStack()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_SYNTAX_STYLESYNTAXPARSER_PROCESSCOMBINATORSTACK_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::StyleSheets::Syntax::Expression* ParseTerm(::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer* arg)
		{
			return (return (::UnityEngine::UIElements::StyleSheets::Syntax::Expression*(*)(::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_SYNTAX_STYLESYNTAXPARSER_PARSETERM_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionCombinator* ParseCombinatorType(::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer* arg)
		{
			return (return (::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionCombinator*(*)(::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_SYNTAX_STYLESYNTAXPARSER_PARSECOMBINATORTYPE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::StyleSheets::Syntax::Expression* ParseGroup(::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer* arg)
		{
			return (return (::UnityEngine::UIElements::StyleSheets::Syntax::Expression*(*)(::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_SYNTAX_STYLESYNTAXPARSER_PARSEGROUP_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::StyleSheets::Syntax::Expression* ParseDataType(::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer* arg)
		{
			return (return (::UnityEngine::UIElements::StyleSheets::Syntax::Expression*(*)(::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_SYNTAX_STYLESYNTAXPARSER_PARSEDATATYPE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::StyleSheets::Syntax::Expression* ParseNonTerminalValue(::System::String* str)
		{
			return (return (::UnityEngine::UIElements::StyleSheets::Syntax::Expression*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_SYNTAX_STYLESYNTAXPARSER_PARSENONTERMINALVALUE_OFFSET))(str, nullptr);
		}

		::UnityEngine::UIElements::StyleSheets::Syntax::Expression* ParseProperty(::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer* arg)
		{
			return (return (::UnityEngine::UIElements::StyleSheets::Syntax::Expression*(*)(::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_SYNTAX_STYLESYNTAXPARSER_PARSEPROPERTY_OFFSET))(arg, nullptr);
		}

		::System::Void ParseMultiplier(::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer* arg, ::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplier&* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer*, ::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplier&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_SYNTAX_STYLESYNTAXPARSER_PARSEMULTIPLIER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ParseRanges(::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer* arg, int32_t&* arg, int32_t&* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer*, int32_t&*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_SYNTAX_STYLESYNTAXPARSER_PARSERANGES_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void EatSpace(::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_SYNTAX_STYLESYNTAXPARSER_EATSPACE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsExpressionEnd(::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxToken* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxToken*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_SYNTAX_STYLESYNTAXPARSER_ISEXPRESSIONEND_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsCombinator(::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxToken* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxToken*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_SYNTAX_STYLESYNTAXPARSER_ISCOMBINATOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsMultiplier(::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxToken* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxToken*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_SYNTAX_STYLESYNTAXPARSER_ISMULTIPLIER_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_SYNTAX_STYLESYNTAXPARSER_.CTOR_OFFSET))(nullptr);
		}

	};
}

