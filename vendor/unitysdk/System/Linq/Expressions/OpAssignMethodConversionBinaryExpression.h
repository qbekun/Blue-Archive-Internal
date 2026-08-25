#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_OPASSIGNMETHODCONVERSIONBINARYEXPRESSION_.CTOR_OFFSET UNITYSDK_OFFSET(0x96363F0)
#define SYSTEM_LINQ_EXPRESSIONS_OPASSIGNMETHODCONVERSIONBINARYEXPRESSION_GETCONVERSION_OFFSET UNITYSDK_OFFSET(0x96364F0)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int OpAssignMethodConversionBinaryExpression_TypeDefinitionIndex = 32977;

	class OpAssignMethodConversionBinaryExpression : public Il2CppObject
	{
	public:
		::System::Linq::Expressions::LambdaExpression* _conversion; // 0x38

		::System::Void .ctor(::System::Linq::Expressions::ExpressionType* arg, ::System::Linq::Expressions::Expression* arg, ::System::Linq::Expressions::Expression* arg, ::System::Type* arg, ::System::Reflection::MethodInfo* arg, ::System::Linq::Expressions::LambdaExpression* arg)
		{
			((::System::Void(*)(::System::Linq::Expressions::ExpressionType*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Type*, ::System::Reflection::MethodInfo*, ::System::Linq::Expressions::LambdaExpression*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_OPASSIGNMETHODCONVERSIONBINARYEXPRESSION_.CTOR_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Linq::Expressions::LambdaExpression* GetConversion()
		{
			return (return (::System::Linq::Expressions::LambdaExpression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_OPASSIGNMETHODCONVERSIONBINARYEXPRESSION_GETCONVERSION_OFFSET))(nullptr);
		}

	};
}

