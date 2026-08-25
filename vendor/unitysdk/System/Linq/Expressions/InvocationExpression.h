#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_INVOCATIONEXPRESSION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9661820)
#define SYSTEM_LINQ_EXPRESSIONS_INVOCATIONEXPRESSION_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x96618A0)
#define SYSTEM_LINQ_EXPRESSIONS_INVOCATIONEXPRESSION_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x96618B0)
#define SYSTEM_LINQ_EXPRESSIONS_INVOCATIONEXPRESSION_GET_EXPRESSION_OFFSET UNITYSDK_OFFSET(0x96618C0)
#define SYSTEM_LINQ_EXPRESSIONS_INVOCATIONEXPRESSION_GETARGUMENT_OFFSET UNITYSDK_OFFSET(0x96618D0)
#define SYSTEM_LINQ_EXPRESSIONS_INVOCATIONEXPRESSION_GET_ARGUMENTCOUNT_OFFSET UNITYSDK_OFFSET(0x9661900)
#define SYSTEM_LINQ_EXPRESSIONS_INVOCATIONEXPRESSION_ACCEPT_OFFSET UNITYSDK_OFFSET(0x9661930)
#define SYSTEM_LINQ_EXPRESSIONS_INVOCATIONEXPRESSION_REWRITE_OFFSET UNITYSDK_OFFSET(0x9661960)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int InvocationExpression_TypeDefinitionIndex = 33056;

	class InvocationExpression : public Il2CppObject
	{
	public:
		::System::Type* _Type_k__BackingField; // 0x10
		::System::Linq::Expressions::Expression* _Expression_k__BackingField; // 0x18

		::System::Void .ctor(::System::Linq::Expressions::Expression* arg, ::System::Type* arg)
		{
			((::System::Void(*)(::System::Linq::Expressions::Expression*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INVOCATIONEXPRESSION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Type* get_Type()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INVOCATIONEXPRESSION_GET_TYPE_OFFSET))(nullptr);
		}

		::System::Linq::Expressions::ExpressionType* get_NodeType()
		{
			return (return (::System::Linq::Expressions::ExpressionType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INVOCATIONEXPRESSION_GET_NODETYPE_OFFSET))(nullptr);
		}

		::System::Linq::Expressions::Expression* get_Expression()
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INVOCATIONEXPRESSION_GET_EXPRESSION_OFFSET))(nullptr);
		}

		::System::Linq::Expressions::Expression* GetArgument(::System::Int32 arg)
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INVOCATIONEXPRESSION_GETARGUMENT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ArgumentCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INVOCATIONEXPRESSION_GET_ARGUMENTCOUNT_OFFSET))(nullptr);
		}

		::System::Linq::Expressions::Expression* Accept(::System::Linq::Expressions::ExpressionVisitor* arg)
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::System::Linq::Expressions::ExpressionVisitor*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INVOCATIONEXPRESSION_ACCEPT_OFFSET))(arg, nullptr);
		}

		::System::Linq::Expressions::InvocationExpression* Rewrite(::System::Linq::Expressions::Expression* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Linq::Expressions::InvocationExpression*(*)(::System::Linq::Expressions::Expression*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INVOCATIONEXPRESSION_REWRITE_OFFSET))(arg, arg, nullptr);
		}

	};
}

