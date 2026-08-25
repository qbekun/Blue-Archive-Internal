#pragma once
#include "../../../../unitysdk.h"

namespace UnityEngine::UIElements::StyleSheets::Syntax { class StyleSyntaxToken; }

#define UNITYENGINE_UIELEMENTS_STYLESHEETS_SYNTAX_STYLESYNTAXTOKENIZER_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xA375EB0)
#define UNITYENGINE_UIELEMENTS_STYLESHEETS_SYNTAX_STYLESYNTAXTOKENIZER_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xA376D40)
#define UNITYENGINE_UIELEMENTS_STYLESHEETS_SYNTAX_STYLESYNTAXTOKENIZER_PEEKNEXT_OFFSET UNITYSDK_OFFSET(0xA376F90)
#define UNITYENGINE_UIELEMENTS_STYLESHEETS_SYNTAX_STYLESYNTAXTOKENIZER_TOKENIZE_OFFSET UNITYSDK_OFFSET(0xA375140)
#define UNITYENGINE_UIELEMENTS_STYLESHEETS_SYNTAX_STYLESYNTAXTOKENIZER_ISNEXTCHARACTER_OFFSET UNITYSDK_OFFSET(0xA3779E0)
#define UNITYENGINE_UIELEMENTS_STYLESHEETS_SYNTAX_STYLESYNTAXTOKENIZER_ISNEXTLETTERORDASH_OFFSET UNITYSDK_OFFSET(0xA377AA0)
#define UNITYENGINE_UIELEMENTS_STYLESHEETS_SYNTAX_STYLESYNTAXTOKENIZER_ISNEXTNUMBER_OFFSET UNITYSDK_OFFSET(0xA377A20)
#define UNITYENGINE_UIELEMENTS_STYLESHEETS_SYNTAX_STYLESYNTAXTOKENIZER_GLOBCHARACTER_OFFSET UNITYSDK_OFFSET(0xA377990)
#define UNITYENGINE_UIELEMENTS_STYLESHEETS_SYNTAX_STYLESYNTAXTOKENIZER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA3750B0)

namespace UnityEngine::UIElements::StyleSheets::Syntax
{
	inline static constexpr unsigned int StyleSyntaxTokenizer_TypeDefinitionIndex = 30830;

	class StyleSyntaxTokenizer : public Il2CppObject
	{
	public:
		Il2CppObject* m_Tokens; // 0x10
		::System::Int32 m_CurrentTokenIndex; // 0x18

		::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxToken* get_current()
		{
			return (return (::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxToken*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_SYNTAX_STYLESYNTAXTOKENIZER_GET_CURRENT_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxToken* MoveNext()
		{
			return (return (::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxToken*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_SYNTAX_STYLESYNTAXTOKENIZER_MOVENEXT_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxToken* PeekNext()
		{
			return (return (::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxToken*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_SYNTAX_STYLESYNTAXTOKENIZER_PEEKNEXT_OFFSET))(nullptr);
		}

		::System::Void Tokenize(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_SYNTAX_STYLESYNTAXTOKENIZER_TOKENIZE_OFFSET))(str, nullptr);
		}

		::System::Boolean IsNextCharacter(::System::String* str, ::System::Int32 arg, ::System::Char arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::Int32, ::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_SYNTAX_STYLESYNTAXTOKENIZER_ISNEXTCHARACTER_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Boolean IsNextLetterOrDash(::System::String* str, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_SYNTAX_STYLESYNTAXTOKENIZER_ISNEXTLETTERORDASH_OFFSET))(str, arg, nullptr);
		}

		::System::Boolean IsNextNumber(::System::String* str, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_SYNTAX_STYLESYNTAXTOKENIZER_ISNEXTNUMBER_OFFSET))(str, arg, nullptr);
		}

		::System::Int32 GlobCharacter(::System::String* str, ::System::Int32 arg, ::System::Char arg)
		{
			return (return (::System::Int32(*)(::System::String*, ::System::Int32, ::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_SYNTAX_STYLESYNTAXTOKENIZER_GLOBCHARACTER_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_SYNTAX_STYLESYNTAXTOKENIZER_.CTOR_OFFSET))(nullptr);
		}

	};
}

