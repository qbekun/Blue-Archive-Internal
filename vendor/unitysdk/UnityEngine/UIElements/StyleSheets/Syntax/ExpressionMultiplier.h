#pragma once
#include "../../../../unitysdk.h"

namespace UnityEngine::UIElements::StyleSheets::Syntax { class ExpressionMultiplierType; }

#define UNITYENGINE_UIELEMENTS_STYLESHEETS_SYNTAX_EXPRESSIONMULTIPLIER_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xA373050)
#define UNITYENGINE_UIELEMENTS_STYLESHEETS_SYNTAX_EXPRESSIONMULTIPLIER_SET_TYPE_OFFSET UNITYSDK_OFFSET(0xA374E20)
#define UNITYENGINE_UIELEMENTS_STYLESHEETS_SYNTAX_EXPRESSIONMULTIPLIER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA374DC0)
#define UNITYENGINE_UIELEMENTS_STYLESHEETS_SYNTAX_EXPRESSIONMULTIPLIER_SETTYPE_OFFSET UNITYSDK_OFFSET(0xA374E80)

namespace UnityEngine::UIElements::StyleSheets::Syntax
{
	inline static constexpr unsigned int ExpressionMultiplier_TypeDefinitionIndex = 30826;

	class ExpressionMultiplier : public Il2CppObject
	{
	public:
		::System::Int32 Infinity; // 0x0
		::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplierType* m_Type; // 0x10
		::System::Int32 min; // 0x14
		::System::Int32 max; // 0x18

		::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplierType* get_type()
		{
			return (return (::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplierType*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_SYNTAX_EXPRESSIONMULTIPLIER_GET_TYPE_OFFSET))(nullptr);
		}

		::System::Void set_type(::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplierType* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplierType*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_SYNTAX_EXPRESSIONMULTIPLIER_SET_TYPE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplierType* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplierType*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_SYNTAX_EXPRESSIONMULTIPLIER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void SetType(::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplierType* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplierType*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_SYNTAX_EXPRESSIONMULTIPLIER_SETTYPE_OFFSET))(arg, nullptr);
		}

	};
}

