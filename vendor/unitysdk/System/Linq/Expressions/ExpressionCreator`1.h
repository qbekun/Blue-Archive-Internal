#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONCREATOR`1_CREATEEXPRESSIONFUNC_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int ExpressionCreator`1_TypeDefinitionIndex = 33068;

	class ExpressionCreator`1 : public Il2CppObject
	{
	public:
		::System::Linq::Expressions::LambdaExpression* CreateExpressionFunc(::System::Linq::Expressions::Expression* arg, ::System::String* str, ::System::Boolean arg, Il2CppObject* arg)
		{
			return (return (::System::Linq::Expressions::LambdaExpression*(*)(::System::Linq::Expressions::Expression*, ::System::String*, ::System::Boolean, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONCREATOR`1_CREATEEXPRESSIONFUNC_OFFSET))(arg, str, arg, arg, nullptr);
		}

	};
}

