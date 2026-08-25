#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_CONDITIONALEXPRESSION_.CTOR_OFFSET UNITYSDK_OFFSET(0x96523F0)
#define SYSTEM_LINQ_EXPRESSIONS_CONDITIONALEXPRESSION_MAKE_OFFSET UNITYSDK_OFFSET(0x9652470)
#define SYSTEM_LINQ_EXPRESSIONS_CONDITIONALEXPRESSION_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x9652850)
#define SYSTEM_LINQ_EXPRESSIONS_CONDITIONALEXPRESSION_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x9652860)
#define SYSTEM_LINQ_EXPRESSIONS_CONDITIONALEXPRESSION_GET_TEST_OFFSET UNITYSDK_OFFSET(0x9652890)
#define SYSTEM_LINQ_EXPRESSIONS_CONDITIONALEXPRESSION_GET_IFTRUE_OFFSET UNITYSDK_OFFSET(0x96528A0)
#define SYSTEM_LINQ_EXPRESSIONS_CONDITIONALEXPRESSION_GET_IFFALSE_OFFSET UNITYSDK_OFFSET(0x96528B0)
#define SYSTEM_LINQ_EXPRESSIONS_CONDITIONALEXPRESSION_GETFALSE_OFFSET UNITYSDK_OFFSET(0x96528D0)
#define SYSTEM_LINQ_EXPRESSIONS_CONDITIONALEXPRESSION_ACCEPT_OFFSET UNITYSDK_OFFSET(0x9652920)
#define SYSTEM_LINQ_EXPRESSIONS_CONDITIONALEXPRESSION_UPDATE_OFFSET UNITYSDK_OFFSET(0x9652950)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int ConditionalExpression_TypeDefinitionIndex = 33026;

	class ConditionalExpression : public Il2CppObject
	{
	public:
		::System::Linq::Expressions::Expression* _Test_k__BackingField; // 0x10
		::System::Linq::Expressions::Expression* _IfTrue_k__BackingField; // 0x18

		::System::Void .ctor(::System::Linq::Expressions::Expression* arg, ::System::Linq::Expressions::Expression* arg)
		{
			((::System::Void(*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_CONDITIONALEXPRESSION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Linq::Expressions::ConditionalExpression* Make(::System::Linq::Expressions::Expression* arg, ::System::Linq::Expressions::Expression* arg, ::System::Linq::Expressions::Expression* arg, ::System::Type* arg)
		{
			return (return (::System::Linq::Expressions::ConditionalExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_CONDITIONALEXPRESSION_MAKE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Linq::Expressions::ExpressionType* get_NodeType()
		{
			return (return (::System::Linq::Expressions::ExpressionType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_CONDITIONALEXPRESSION_GET_NODETYPE_OFFSET))(nullptr);
		}

		::System::Type* get_Type()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_CONDITIONALEXPRESSION_GET_TYPE_OFFSET))(nullptr);
		}

		::System::Linq::Expressions::Expression* get_Test()
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_CONDITIONALEXPRESSION_GET_TEST_OFFSET))(nullptr);
		}

		::System::Linq::Expressions::Expression* get_IfTrue()
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_CONDITIONALEXPRESSION_GET_IFTRUE_OFFSET))(nullptr);
		}

		::System::Linq::Expressions::Expression* get_IfFalse()
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_CONDITIONALEXPRESSION_GET_IFFALSE_OFFSET))(nullptr);
		}

		::System::Linq::Expressions::Expression* GetFalse()
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_CONDITIONALEXPRESSION_GETFALSE_OFFSET))(nullptr);
		}

		::System::Linq::Expressions::Expression* Accept(::System::Linq::Expressions::ExpressionVisitor* arg)
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::System::Linq::Expressions::ExpressionVisitor*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_CONDITIONALEXPRESSION_ACCEPT_OFFSET))(arg, nullptr);
		}

		::System::Linq::Expressions::ConditionalExpression* Update(::System::Linq::Expressions::Expression* arg, ::System::Linq::Expressions::Expression* arg, ::System::Linq::Expressions::Expression* arg)
		{
			return (return (::System::Linq::Expressions::ConditionalExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_CONDITIONALEXPRESSION_UPDATE_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

