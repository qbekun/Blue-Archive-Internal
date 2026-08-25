#pragma once
#include "../../../unitysdk.h"

#define NEWTONSOFT_JSON_UTILITIES_NOTHROWEXPRESSIONVISITOR_VISITCONDITIONAL_OFFSET UNITYSDK_OFFSET(0x94A8920)
#define NEWTONSOFT_JSON_UTILITIES_NOTHROWEXPRESSIONVISITOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x94A8760)
#define NEWTONSOFT_JSON_UTILITIES_NOTHROWEXPRESSIONVISITOR_.CCTOR_OFFSET UNITYSDK_OFFSET(0x94A8A10)

namespace Newtonsoft::Json::Utilities
{
	inline static constexpr unsigned int NoThrowExpressionVisitor_TypeDefinitionIndex = 31850;

	class NoThrowExpressionVisitor : public Il2CppObject
	{
	public:
		::System::Object* ErrorResult; // 0x0

		::System::Linq::Expressions::Expression* VisitConditional(::System::Linq::Expressions::ConditionalExpression* arg)
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::System::Linq::Expressions::ConditionalExpression*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_NOTHROWEXPRESSIONVISITOR_VISITCONDITIONAL_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_NOTHROWEXPRESSIONVISITOR_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_NOTHROWEXPRESSIONVISITOR_.CCTOR_OFFSET))(nullptr);
		}

	};
}

