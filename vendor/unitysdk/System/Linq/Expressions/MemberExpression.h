#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_MEMBEREXPRESSION_GET_MEMBER_OFFSET UNITYSDK_OFFSET(0x965DF60)
#define SYSTEM_LINQ_EXPRESSIONS_MEMBEREXPRESSION_GET_EXPRESSION_OFFSET UNITYSDK_OFFSET(0x9662F70)
#define SYSTEM_LINQ_EXPRESSIONS_MEMBEREXPRESSION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9662F80)
#define SYSTEM_LINQ_EXPRESSIONS_MEMBEREXPRESSION_MAKE_OFFSET UNITYSDK_OFFSET(0x9662FE0)
#define SYSTEM_LINQ_EXPRESSIONS_MEMBEREXPRESSION_MAKE_OFFSET UNITYSDK_OFFSET(0x9663110)
#define SYSTEM_LINQ_EXPRESSIONS_MEMBEREXPRESSION_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x9663240)
#define SYSTEM_LINQ_EXPRESSIONS_MEMBEREXPRESSION_GETMEMBER_OFFSET UNITYSDK_OFFSET(0x9663250)
#define SYSTEM_LINQ_EXPRESSIONS_MEMBEREXPRESSION_ACCEPT_OFFSET UNITYSDK_OFFSET(0x9663280)
#define SYSTEM_LINQ_EXPRESSIONS_MEMBEREXPRESSION_UPDATE_OFFSET UNITYSDK_OFFSET(0x96608C0)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int MemberExpression_TypeDefinitionIndex = 33080;

	class MemberExpression : public Il2CppObject
	{
	public:
		::System::Linq::Expressions::Expression* _Expression_k__BackingField; // 0x10

		::System::Reflection::MemberInfo* get_Member()
		{
			return (return (::System::Reflection::MemberInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_MEMBEREXPRESSION_GET_MEMBER_OFFSET))(nullptr);
		}

		::System::Linq::Expressions::Expression* get_Expression()
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_MEMBEREXPRESSION_GET_EXPRESSION_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Linq::Expressions::Expression* arg)
		{
			((::System::Void(*)(::System::Linq::Expressions::Expression*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_MEMBEREXPRESSION_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Linq::Expressions::PropertyExpression* Make(::System::Linq::Expressions::Expression* arg, ::System::Reflection::PropertyInfo* arg)
		{
			return (return (::System::Linq::Expressions::PropertyExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Reflection::PropertyInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_MEMBEREXPRESSION_MAKE_OFFSET))(arg, arg, nullptr);
		}

		::System::Linq::Expressions::FieldExpression* Make(::System::Linq::Expressions::Expression* arg, ::System::Reflection::FieldInfo* arg)
		{
			return (return (::System::Linq::Expressions::FieldExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Reflection::FieldInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_MEMBEREXPRESSION_MAKE_OFFSET))(arg, arg, nullptr);
		}

		::System::Linq::Expressions::ExpressionType* get_NodeType()
		{
			return (return (::System::Linq::Expressions::ExpressionType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_MEMBEREXPRESSION_GET_NODETYPE_OFFSET))(nullptr);
		}

		::System::Reflection::MemberInfo* GetMember()
		{
			return (return (::System::Reflection::MemberInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_MEMBEREXPRESSION_GETMEMBER_OFFSET))(nullptr);
		}

		::System::Linq::Expressions::Expression* Accept(::System::Linq::Expressions::ExpressionVisitor* arg)
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::System::Linq::Expressions::ExpressionVisitor*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_MEMBEREXPRESSION_ACCEPT_OFFSET))(arg, nullptr);
		}

		::System::Linq::Expressions::MemberExpression* Update(::System::Linq::Expressions::Expression* arg)
		{
			return (return (::System::Linq::Expressions::MemberExpression*(*)(::System::Linq::Expressions::Expression*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_MEMBEREXPRESSION_UPDATE_OFFSET))(arg, nullptr);
		}

	};
}

