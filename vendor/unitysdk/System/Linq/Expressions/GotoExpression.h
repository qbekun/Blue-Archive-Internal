#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_GOTOEXPRESSION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9661580)
#define SYSTEM_LINQ_EXPRESSIONS_GOTOEXPRESSION_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x9661620)
#define SYSTEM_LINQ_EXPRESSIONS_GOTOEXPRESSION_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x9661630)
#define SYSTEM_LINQ_EXPRESSIONS_GOTOEXPRESSION_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x9661640)
#define SYSTEM_LINQ_EXPRESSIONS_GOTOEXPRESSION_GET_TARGET_OFFSET UNITYSDK_OFFSET(0x9661650)
#define SYSTEM_LINQ_EXPRESSIONS_GOTOEXPRESSION_GET_KIND_OFFSET UNITYSDK_OFFSET(0x9661660)
#define SYSTEM_LINQ_EXPRESSIONS_GOTOEXPRESSION_ACCEPT_OFFSET UNITYSDK_OFFSET(0x9661670)
#define SYSTEM_LINQ_EXPRESSIONS_GOTOEXPRESSION_UPDATE_OFFSET UNITYSDK_OFFSET(0x9660470)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int GotoExpression_TypeDefinitionIndex = 33052;

	class GotoExpression : public Il2CppObject
	{
	public:
		::System::Type* _Type_k__BackingField; // 0x10
		::System::Linq::Expressions::Expression* _Value_k__BackingField; // 0x18
		::System::Linq::Expressions::LabelTarget* _Target_k__BackingField; // 0x20
		::System::Linq::Expressions::GotoExpressionKind* _Kind_k__BackingField; // 0x28

		::System::Void .ctor(::System::Linq::Expressions::GotoExpressionKind* arg, ::System::Linq::Expressions::LabelTarget* arg, ::System::Linq::Expressions::Expression* arg, ::System::Type* arg)
		{
			((::System::Void(*)(::System::Linq::Expressions::GotoExpressionKind*, ::System::Linq::Expressions::LabelTarget*, ::System::Linq::Expressions::Expression*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_GOTOEXPRESSION_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Type* get_Type()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_GOTOEXPRESSION_GET_TYPE_OFFSET))(nullptr);
		}

		::System::Linq::Expressions::ExpressionType* get_NodeType()
		{
			return (return (::System::Linq::Expressions::ExpressionType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_GOTOEXPRESSION_GET_NODETYPE_OFFSET))(nullptr);
		}

		::System::Linq::Expressions::Expression* get_Value()
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_GOTOEXPRESSION_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Linq::Expressions::LabelTarget* get_Target()
		{
			return (return (::System::Linq::Expressions::LabelTarget*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_GOTOEXPRESSION_GET_TARGET_OFFSET))(nullptr);
		}

		::System::Linq::Expressions::GotoExpressionKind* get_Kind()
		{
			return (return (::System::Linq::Expressions::GotoExpressionKind*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_GOTOEXPRESSION_GET_KIND_OFFSET))(nullptr);
		}

		::System::Linq::Expressions::Expression* Accept(::System::Linq::Expressions::ExpressionVisitor* arg)
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::System::Linq::Expressions::ExpressionVisitor*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_GOTOEXPRESSION_ACCEPT_OFFSET))(arg, nullptr);
		}

		::System::Linq::Expressions::GotoExpression* Update(::System::Linq::Expressions::LabelTarget* arg, ::System::Linq::Expressions::Expression* arg)
		{
			return (return (::System::Linq::Expressions::GotoExpression*(*)(::System::Linq::Expressions::LabelTarget*, ::System::Linq::Expressions::Expression*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_GOTOEXPRESSION_UPDATE_OFFSET))(arg, arg, nullptr);
		}

	};
}

