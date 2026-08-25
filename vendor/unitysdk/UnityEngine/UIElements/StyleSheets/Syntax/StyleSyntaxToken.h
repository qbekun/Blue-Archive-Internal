#pragma once
#include "../../../../unitysdk.h"

namespace UnityEngine::UIElements::StyleSheets::Syntax { class StyleSyntaxTokenType; }

#define UNITYENGINE_UIELEMENTS_STYLESHEETS_SYNTAX_STYLESYNTAXTOKEN_.CTOR_OFFSET UNITYSDK_OFFSET(0xA377900)
#define UNITYENGINE_UIELEMENTS_STYLESHEETS_SYNTAX_STYLESYNTAXTOKEN_.CTOR_OFFSET UNITYSDK_OFFSET(0xA377930)
#define UNITYENGINE_UIELEMENTS_STYLESHEETS_SYNTAX_STYLESYNTAXTOKEN_.CTOR_OFFSET UNITYSDK_OFFSET(0xA377960)

namespace UnityEngine::UIElements::StyleSheets::Syntax
{
	inline static constexpr unsigned int StyleSyntaxToken_TypeDefinitionIndex = 30829;

	class StyleSyntaxToken : public Il2CppObject
	{
	public:
		::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType* type; // 0x10
		::System::String* text; // 0x18
		::System::Int32 number; // 0x20

		::System::Void .ctor(::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_SYNTAX_STYLESYNTAXTOKEN_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType* arg, ::System::String* str)
		{
			((::System::Void(*)(::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_SYNTAX_STYLESYNTAXTOKEN_.CTOR_OFFSET))(arg, str, nullptr);
		}

		::System::Void .ctor(::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_SYNTAX_STYLESYNTAXTOKEN_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

