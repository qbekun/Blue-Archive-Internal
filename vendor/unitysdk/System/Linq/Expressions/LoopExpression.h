#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_LOOPEXPRESSION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9662DD0)
#define SYSTEM_LINQ_EXPRESSIONS_LOOPEXPRESSION_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x9662E60)
#define SYSTEM_LINQ_EXPRESSIONS_LOOPEXPRESSION_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x9662ED0)
#define SYSTEM_LINQ_EXPRESSIONS_LOOPEXPRESSION_GET_BODY_OFFSET UNITYSDK_OFFSET(0x9662EE0)
#define SYSTEM_LINQ_EXPRESSIONS_LOOPEXPRESSION_GET_BREAKLABEL_OFFSET UNITYSDK_OFFSET(0x9662EF0)
#define SYSTEM_LINQ_EXPRESSIONS_LOOPEXPRESSION_GET_CONTINUELABEL_OFFSET UNITYSDK_OFFSET(0x9662F00)
#define SYSTEM_LINQ_EXPRESSIONS_LOOPEXPRESSION_ACCEPT_OFFSET UNITYSDK_OFFSET(0x9662F10)
#define SYSTEM_LINQ_EXPRESSIONS_LOOPEXPRESSION_UPDATE_OFFSET UNITYSDK_OFFSET(0x96607A0)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int LoopExpression_TypeDefinitionIndex = 33076;

	class LoopExpression : public Il2CppObject
	{
	public:
		::System::Linq::Expressions::Expression* _Body_k__BackingField; // 0x10
		::System::Linq::Expressions::LabelTarget* _BreakLabel_k__BackingField; // 0x18
		::System::Linq::Expressions::LabelTarget* _ContinueLabel_k__BackingField; // 0x20

		::System::Void .ctor(::System::Linq::Expressions::Expression* arg, ::System::Linq::Expressions::LabelTarget* arg, ::System::Linq::Expressions::LabelTarget* arg)
		{
			((::System::Void(*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::LabelTarget*, ::System::Linq::Expressions::LabelTarget*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_LOOPEXPRESSION_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Type* get_Type()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_LOOPEXPRESSION_GET_TYPE_OFFSET))(nullptr);
		}

		::System::Linq::Expressions::ExpressionType* get_NodeType()
		{
			return (return (::System::Linq::Expressions::ExpressionType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_LOOPEXPRESSION_GET_NODETYPE_OFFSET))(nullptr);
		}

		::System::Linq::Expressions::Expression* get_Body()
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_LOOPEXPRESSION_GET_BODY_OFFSET))(nullptr);
		}

		::System::Linq::Expressions::LabelTarget* get_BreakLabel()
		{
			return (return (::System::Linq::Expressions::LabelTarget*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_LOOPEXPRESSION_GET_BREAKLABEL_OFFSET))(nullptr);
		}

		::System::Linq::Expressions::LabelTarget* get_ContinueLabel()
		{
			return (return (::System::Linq::Expressions::LabelTarget*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_LOOPEXPRESSION_GET_CONTINUELABEL_OFFSET))(nullptr);
		}

		::System::Linq::Expressions::Expression* Accept(::System::Linq::Expressions::ExpressionVisitor* arg)
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::System::Linq::Expressions::ExpressionVisitor*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_LOOPEXPRESSION_ACCEPT_OFFSET))(arg, nullptr);
		}

		::System::Linq::Expressions::LoopExpression* Update(::System::Linq::Expressions::LabelTarget* arg, ::System::Linq::Expressions::LabelTarget* arg, ::System::Linq::Expressions::Expression* arg)
		{
			return (return (::System::Linq::Expressions::LoopExpression*(*)(::System::Linq::Expressions::LabelTarget*, ::System::Linq::Expressions::LabelTarget*, ::System::Linq::Expressions::Expression*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_LOOPEXPRESSION_UPDATE_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

