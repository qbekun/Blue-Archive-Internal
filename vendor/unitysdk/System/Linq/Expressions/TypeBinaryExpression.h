#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_TYPEBINARYEXPRESSION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9666980)
#define SYSTEM_LINQ_EXPRESSIONS_TYPEBINARYEXPRESSION_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x9666A00)
#define SYSTEM_LINQ_EXPRESSIONS_TYPEBINARYEXPRESSION_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x9666A60)
#define SYSTEM_LINQ_EXPRESSIONS_TYPEBINARYEXPRESSION_GET_EXPRESSION_OFFSET UNITYSDK_OFFSET(0x9666A70)
#define SYSTEM_LINQ_EXPRESSIONS_TYPEBINARYEXPRESSION_GET_TYPEOPERAND_OFFSET UNITYSDK_OFFSET(0x9666A80)
#define SYSTEM_LINQ_EXPRESSIONS_TYPEBINARYEXPRESSION_ACCEPT_OFFSET UNITYSDK_OFFSET(0x9666A90)
#define SYSTEM_LINQ_EXPRESSIONS_TYPEBINARYEXPRESSION_UPDATE_OFFSET UNITYSDK_OFFSET(0x9661170)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int TypeBinaryExpression_TypeDefinitionIndex = 33117;

	class TypeBinaryExpression : public Il2CppObject
	{
	public:
		::System::Linq::Expressions::ExpressionType* _NodeType_k__BackingField; // 0x10
		::System::Linq::Expressions::Expression* _Expression_k__BackingField; // 0x18
		::System::Type* _TypeOperand_k__BackingField; // 0x20

		::System::Void .ctor(::System::Linq::Expressions::Expression* arg, ::System::Type* arg, ::System::Linq::Expressions::ExpressionType* arg)
		{
			((::System::Void(*)(::System::Linq::Expressions::Expression*, ::System::Type*, ::System::Linq::Expressions::ExpressionType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_TYPEBINARYEXPRESSION_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Type* get_Type()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_TYPEBINARYEXPRESSION_GET_TYPE_OFFSET))(nullptr);
		}

		::System::Linq::Expressions::ExpressionType* get_NodeType()
		{
			return (return (::System::Linq::Expressions::ExpressionType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_TYPEBINARYEXPRESSION_GET_NODETYPE_OFFSET))(nullptr);
		}

		::System::Linq::Expressions::Expression* get_Expression()
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_TYPEBINARYEXPRESSION_GET_EXPRESSION_OFFSET))(nullptr);
		}

		::System::Type* get_TypeOperand()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_TYPEBINARYEXPRESSION_GET_TYPEOPERAND_OFFSET))(nullptr);
		}

		::System::Linq::Expressions::Expression* Accept(::System::Linq::Expressions::ExpressionVisitor* arg)
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::System::Linq::Expressions::ExpressionVisitor*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_TYPEBINARYEXPRESSION_ACCEPT_OFFSET))(arg, nullptr);
		}

		::System::Linq::Expressions::TypeBinaryExpression* Update(::System::Linq::Expressions::Expression* arg)
		{
			return (return (::System::Linq::Expressions::TypeBinaryExpression*(*)(::System::Linq::Expressions::Expression*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_TYPEBINARYEXPRESSION_UPDATE_OFFSET))(arg, nullptr);
		}

	};
}

