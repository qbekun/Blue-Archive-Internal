#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_COALESCECONVERSIONBINARYEXPRESSION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9636310)
#define SYSTEM_LINQ_EXPRESSIONS_COALESCECONVERSIONBINARYEXPRESSION_GETCONVERSION_OFFSET UNITYSDK_OFFSET(0x96363A0)
#define SYSTEM_LINQ_EXPRESSIONS_COALESCECONVERSIONBINARYEXPRESSION_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x96363B0)
#define SYSTEM_LINQ_EXPRESSIONS_COALESCECONVERSIONBINARYEXPRESSION_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x96363C0)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int CoalesceConversionBinaryExpression_TypeDefinitionIndex = 32976;

	class CoalesceConversionBinaryExpression : public Il2CppObject
	{
	public:
		::System::Linq::Expressions::LambdaExpression* _conversion; // 0x20

		::System::Void .ctor(::System::Linq::Expressions::Expression* arg, ::System::Linq::Expressions::Expression* arg, ::System::Linq::Expressions::LambdaExpression* arg)
		{
			((::System::Void(*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::LambdaExpression*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_COALESCECONVERSIONBINARYEXPRESSION_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Linq::Expressions::LambdaExpression* GetConversion()
		{
			return (return (::System::Linq::Expressions::LambdaExpression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_COALESCECONVERSIONBINARYEXPRESSION_GETCONVERSION_OFFSET))(nullptr);
		}

		::System::Linq::Expressions::ExpressionType* get_NodeType()
		{
			return (return (::System::Linq::Expressions::ExpressionType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_COALESCECONVERSIONBINARYEXPRESSION_GET_NODETYPE_OFFSET))(nullptr);
		}

		::System::Type* get_Type()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_COALESCECONVERSIONBINARYEXPRESSION_GET_TYPE_OFFSET))(nullptr);
		}

	};
}

