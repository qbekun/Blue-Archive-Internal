#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_UNARYEXPRESSION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9666AC0)
#define SYSTEM_LINQ_EXPRESSIONS_UNARYEXPRESSION_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x9666B60)
#define SYSTEM_LINQ_EXPRESSIONS_UNARYEXPRESSION_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x9666B70)
#define SYSTEM_LINQ_EXPRESSIONS_UNARYEXPRESSION_GET_OPERAND_OFFSET UNITYSDK_OFFSET(0x9666B80)
#define SYSTEM_LINQ_EXPRESSIONS_UNARYEXPRESSION_GET_METHOD_OFFSET UNITYSDK_OFFSET(0x9666B90)
#define SYSTEM_LINQ_EXPRESSIONS_UNARYEXPRESSION_GET_ISLIFTED_OFFSET UNITYSDK_OFFSET(0x9666BA0)
#define SYSTEM_LINQ_EXPRESSIONS_UNARYEXPRESSION_GET_ISLIFTEDTONULL_OFFSET UNITYSDK_OFFSET(0x9666DE0)
#define SYSTEM_LINQ_EXPRESSIONS_UNARYEXPRESSION_ACCEPT_OFFSET UNITYSDK_OFFSET(0x9666E60)
#define SYSTEM_LINQ_EXPRESSIONS_UNARYEXPRESSION_GET_CANREDUCE_OFFSET UNITYSDK_OFFSET(0x9666E90)
#define SYSTEM_LINQ_EXPRESSIONS_UNARYEXPRESSION_REDUCE_OFFSET UNITYSDK_OFFSET(0x9666EC0)
#define SYSTEM_LINQ_EXPRESSIONS_UNARYEXPRESSION_GET_ISPREFIX_OFFSET UNITYSDK_OFFSET(0x9667FC0)
#define SYSTEM_LINQ_EXPRESSIONS_UNARYEXPRESSION_FUNCTIONALOP_OFFSET UNITYSDK_OFFSET(0x9668000)
#define SYSTEM_LINQ_EXPRESSIONS_UNARYEXPRESSION_REDUCEVARIABLE_OFFSET UNITYSDK_OFFSET(0x9667CC0)
#define SYSTEM_LINQ_EXPRESSIONS_UNARYEXPRESSION_REDUCEMEMBER_OFFSET UNITYSDK_OFFSET(0x9667700)
#define SYSTEM_LINQ_EXPRESSIONS_UNARYEXPRESSION_REDUCEINDEX_OFFSET UNITYSDK_OFFSET(0x9666F30)
#define SYSTEM_LINQ_EXPRESSIONS_UNARYEXPRESSION_UPDATE_OFFSET UNITYSDK_OFFSET(0x96612E0)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int UnaryExpression_TypeDefinitionIndex = 33118;

	class UnaryExpression : public Il2CppObject
	{
	public:
		::System::Type* _Type_k__BackingField; // 0x10
		::System::Linq::Expressions::ExpressionType* _NodeType_k__BackingField; // 0x18
		::System::Linq::Expressions::Expression* _Operand_k__BackingField; // 0x20
		::System::Reflection::MethodInfo* _Method_k__BackingField; // 0x28

		::System::Void .ctor(::System::Linq::Expressions::ExpressionType* arg, ::System::Linq::Expressions::Expression* arg, ::System::Type* arg, ::System::Reflection::MethodInfo* arg)
		{
			((::System::Void(*)(::System::Linq::Expressions::ExpressionType*, ::System::Linq::Expressions::Expression*, ::System::Type*, ::System::Reflection::MethodInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_UNARYEXPRESSION_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Type* get_Type()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_UNARYEXPRESSION_GET_TYPE_OFFSET))(nullptr);
		}

		::System::Linq::Expressions::ExpressionType* get_NodeType()
		{
			return (return (::System::Linq::Expressions::ExpressionType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_UNARYEXPRESSION_GET_NODETYPE_OFFSET))(nullptr);
		}

		::System::Linq::Expressions::Expression* get_Operand()
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_UNARYEXPRESSION_GET_OPERAND_OFFSET))(nullptr);
		}

		::System::Reflection::MethodInfo* get_Method()
		{
			return (return (::System::Reflection::MethodInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_UNARYEXPRESSION_GET_METHOD_OFFSET))(nullptr);
		}

		::System::Boolean get_IsLifted()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_UNARYEXPRESSION_GET_ISLIFTED_OFFSET))(nullptr);
		}

		::System::Boolean get_IsLiftedToNull()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_UNARYEXPRESSION_GET_ISLIFTEDTONULL_OFFSET))(nullptr);
		}

		::System::Linq::Expressions::Expression* Accept(::System::Linq::Expressions::ExpressionVisitor* arg)
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::System::Linq::Expressions::ExpressionVisitor*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_UNARYEXPRESSION_ACCEPT_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_CanReduce()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_UNARYEXPRESSION_GET_CANREDUCE_OFFSET))(nullptr);
		}

		::System::Linq::Expressions::Expression* Reduce()
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_UNARYEXPRESSION_REDUCE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsPrefix()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_UNARYEXPRESSION_GET_ISPREFIX_OFFSET))(nullptr);
		}

		::System::Linq::Expressions::UnaryExpression* FunctionalOp(::System::Linq::Expressions::Expression* arg)
		{
			return (return (::System::Linq::Expressions::UnaryExpression*(*)(::System::Linq::Expressions::Expression*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_UNARYEXPRESSION_FUNCTIONALOP_OFFSET))(arg, nullptr);
		}

		::System::Linq::Expressions::Expression* ReduceVariable()
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_UNARYEXPRESSION_REDUCEVARIABLE_OFFSET))(nullptr);
		}

		::System::Linq::Expressions::Expression* ReduceMember()
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_UNARYEXPRESSION_REDUCEMEMBER_OFFSET))(nullptr);
		}

		::System::Linq::Expressions::Expression* ReduceIndex()
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_UNARYEXPRESSION_REDUCEINDEX_OFFSET))(nullptr);
		}

		::System::Linq::Expressions::UnaryExpression* Update(::System::Linq::Expressions::Expression* arg)
		{
			return (return (::System::Linq::Expressions::UnaryExpression*(*)(::System::Linq::Expressions::Expression*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_UNARYEXPRESSION_UPDATE_OFFSET))(arg, nullptr);
		}

	};
}

