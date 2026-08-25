#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSION_GET_EXPRESSIONS_OFFSET UNITYSDK_OFFSET(0x964FE50)
#define SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSION_GET_VARIABLES_OFFSET UNITYSDK_OFFSET(0x964FE70)
#define SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSION_.CTOR_OFFSET UNITYSDK_OFFSET(0x964FE90)
#define SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSION_ACCEPT_OFFSET UNITYSDK_OFFSET(0x964FEE0)
#define SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSION_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x964FF10)
#define SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSION_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x964FF20)
#define SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSION_GETEXPRESSION_OFFSET UNITYSDK_OFFSET(0x964FF80)
#define SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSION_GET_EXPRESSIONCOUNT_OFFSET UNITYSDK_OFFSET(0x964FFB0)
#define SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSION_GETORMAKEEXPRESSIONS_OFFSET UNITYSDK_OFFSET(0x964FFE0)
#define SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSION_GETORMAKEVARIABLES_OFFSET UNITYSDK_OFFSET(0x9650010)
#define SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSION_REWRITE_OFFSET UNITYSDK_OFFSET(0x9650060)
#define SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSION_RETURNREADONLYEXPRESSIONS_OFFSET UNITYSDK_OFFSET(0x9650090)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int BlockExpression_TypeDefinitionIndex = 33010;

	class BlockExpression : public Il2CppObject
	{
	public:
		Il2CppObject* get_Expressions()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSION_GET_EXPRESSIONS_OFFSET))(nullptr);
		}

		Il2CppObject* get_Variables()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSION_GET_VARIABLES_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSION_.CTOR_OFFSET))(nullptr);
		}

		::System::Linq::Expressions::Expression* Accept(::System::Linq::Expressions::ExpressionVisitor* arg)
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::System::Linq::Expressions::ExpressionVisitor*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSION_ACCEPT_OFFSET))(arg, nullptr);
		}

		::System::Linq::Expressions::ExpressionType* get_NodeType()
		{
			return (return (::System::Linq::Expressions::ExpressionType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSION_GET_NODETYPE_OFFSET))(nullptr);
		}

		::System::Type* get_Type()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSION_GET_TYPE_OFFSET))(nullptr);
		}

		::System::Linq::Expressions::Expression* GetExpression(::System::Int32 arg)
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSION_GETEXPRESSION_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ExpressionCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSION_GET_EXPRESSIONCOUNT_OFFSET))(nullptr);
		}

		Il2CppObject* GetOrMakeExpressions()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSION_GETORMAKEEXPRESSIONS_OFFSET))(nullptr);
		}

		Il2CppObject* GetOrMakeVariables()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSION_GETORMAKEVARIABLES_OFFSET))(nullptr);
		}

		::System::Linq::Expressions::BlockExpression* Rewrite(Il2CppObject* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Linq::Expressions::BlockExpression*(*)(Il2CppObject*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSION_REWRITE_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* ReturnReadOnlyExpressions(::System::Linq::Expressions::BlockExpression* arg, ::System::Object&* arg)
		{
			return (return (Il2CppObject*(*)(::System::Linq::Expressions::BlockExpression*, ::System::Object&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BLOCKEXPRESSION_RETURNREADONLYEXPRESSIONS_OFFSET))(arg, arg, nullptr);
		}

	};
}

